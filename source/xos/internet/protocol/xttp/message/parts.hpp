///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: parts.hpp
///
/// Author: $author$
///   Date: 5/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_PARTS_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_PARTS_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"
#include "xos/internet/protocol/xttp/message/line.hpp"
#include "xos/internet/protocol/xttp/message/header/fields.hpp"
#include "xos/internet/protocol/xttp/message/body/content.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace message {

namespace extended {
/// class partst
template 
<class TLine = internet::protocol::xttp::message::line,
 class THeaders = internet::protocol::xttp::message::header::fields,
 class TContent = internet::protocol::xttp::message::body::content,
 class TExtends = internet::protocol::xttp::message::part, class TImplements = typename TExtends::implements>
class exported partst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef partst derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;
    
    typedef TLine line_t;
    typedef THeaders headers_t;
    typedef typename headers_t::field_t field_t;
    typedef TContent content_t;

    /// constructor / destructor
    partst(const line_t& line, const headers_t& headers, const content_t& content)
    : line_(line), headers_(headers), content_(&this_content_), this_content_(content) {
    }
    partst(const line_t& line, const headers_t& headers): line_(line), headers_(headers), content_(0) {
    }
    partst(const line_t& line): line_(line), content_(0) {
    }
    partst(const string_t& chars): extends(chars), content_(0) {
    }
    partst(const char_t* chars, size_t length): extends(chars, length), content_(0) {
    }
    partst(const char_t* chars): extends(chars), content_(0) {
    }
    partst(const part_t& copy): extends(copy), content_(0) {
    }
    partst(const derives& copy): extends(copy), content_(copy.content_) {
    }
    partst(): content_(0) {
    }
    virtual ~partst() {
    }

    /// read / write
    virtual bool read(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        // success = this->read_this(count, c, reader);
        return success;
    }
    virtual bool write(ssize_t& count, writer_t& writer) {
        bool success = false;
        // success = this->write_this(count, writer);
        return success;
    }

    /// combine / separate
    virtual bool combine() {
        bool success = true;
        size_t length = 0;
        const char_t* chars = 0;
        const line_t& line = this->line();

        if ((success = (chars = line.has_chars(length)))) {
            const headers_t& headers = this->headers();

            this->assign(chars, length);
            this->append(separator());
            if ((headers.is_combined())) {
                if (chars = headers.has_chars(length)) {
                    this->append(chars, length);
                }
            } else {
                const field_t* h = 0;
                typename headers_t::const_iterator_t i;

                if ((h = headers.first(i))) {
                    if ((chars = h->has_chars(length))) {
                        const string_t& headers_separator = headers.separator();
    
                        this->append(chars, length);
                        while ((h = headers_.next(i))) {
                            if ((chars = h->has_chars(length))) {
                                this->append(headers_separator);
                                this->append(chars, length);
                            }
                        }
                    }
                }
            }
            this->append(separator());
            this->append(separator());
            if ((chars = content_chars(length))) {
                this->append(chars, length);
            }
        }
        return success;
    }
    virtual bool separate() {
        bool success = true;
        return success;
    }

    /// set_default...
    virtual derives& set_default() {
        this->clear();
        set_defaults();
        combine();
        return *this;
    }
    virtual derives& set_defaults() {
        line_.set_default();
        headers_.set_default();
        this_content_.set_default();
        content_ = 0;
        return *this;
    }

    /// line / headers / content
    virtual line_t& set_line(const line_t& to) {
        line_.set(to);
        combine();
        return line_;
    }
    virtual const line_t& line() const {
        return line_;
    }
    virtual headers_t& set_headers(const headers_t& to) {
        headers_.set(to);
        combine();
        return headers_;
    }
    virtual const headers_t& headers() const {
        return headers_;
    }
    virtual const content_t* content() const {
        return content_;
    }
    virtual const content_t* set_content(const char_t* to, size_t length) {
        content_ = &this_content_;
        this_content_.assign(to, length);
        this->combine();
        return content_;
    }
    virtual const content_t* set_content(const string_t& to) {
        content_ = &this_content_;
        this_content_.assign(to);
        this->combine();
        return content_;
    }
    virtual const content_t* clear_content() {
        content_ = &this_content_;
        this_content_.clear();
        this->combine();
        return content_;
    }
    virtual part_t set_content_type(const char_t* to, size_t length) {
        part_t content_type(headers_.set_content_type(to, length));
        this->combine();
        return content_type;
    }
    virtual part_t set_content_type(const string_t& to) {
        part_t content_type(headers_.set_content_type(to));
        this->combine();
        return content_type;
    }
    virtual const char_t* content_type_chars() const {
        const char_t* chars = headers_.content_type_chars();
        return chars;
    }
    virtual const char_t* content_type_chars(size_t& length) const {
        const char_t* chars = headers_.content_type_chars(length);
        return chars;
    }
    virtual size_t set_content_length(size_t to) {
        size_t content_length = headers_.set_content_length(to);
        this->combine();
        return content_length;
    }
    virtual size_t content_length() const {
        return headers_.content_length();
    }
    virtual const char_t* content_chars() const {
        const char_t* chars = 0;
        if (content_) {
            chars = content_->has_chars();
        }
        return chars;
    }
    virtual const char_t* content_chars(size_t& length) const {
        const char_t* chars = 0;
        if (content_) {
            chars = content_->has_chars(length);
        }
        return chars;
    }

    /// separator
    virtual const string_t& separator() const {
        static string_t separator("\r\n");
        return separator;
    }

protected:
    line_t line_;
    headers_t headers_;
    const content_t* content_;
    content_t this_content_;
}; /// class partst
typedef partst<> parts;
} /// namespace extended

/// class partst
template 
<class TLine = internet::protocol::xttp::message::line,
 class TExtends = internet::protocol::xttp::message::extended::partst<TLine>, 
 class TImplements = typename TExtends::implements>
class exported partst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef partst derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::part_t part_t;

    typedef typename extends::line_t line_t;
    typedef typename extends::headers_t headers_t;
    typedef typename extends::field_t field_t;
    typedef typename extends::content_t content_t;
    typedef TExtends parts_t;

    /// constructor / destructor
    partst(const line_t& line, const headers_t& headers, const content_t& content): extends(line, headers, content) {
        this->combine();
    }
    partst(const line_t& line, const headers_t& headers): extends(line, headers) {
        this->combine();
    }
    partst(const line_t& line): extends(line) {
        this->combine();
    }
    partst(const string_t& chars): extends(chars) {
        this->separate();
    }
    partst(const char_t* chars, size_t length): extends(chars, length) {
        this->separate();
    }
    partst(const char_t* chars): extends(chars) {
        this->separate();
    }
    partst(const part_t& copy): extends(copy) {
        this->separate();
    }
    partst(const derives& copy): extends(copy) {
    }
    partst() {
        this->set_default();
    }
    virtual ~partst() {
    }

protected:
}; /// class partst
typedef partst<> parts;

} /// namespace message
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_PARTS_HPP
