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
///   File: part.hpp
///
/// Author: $author$
///   Date: 3/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_PART_HPP
#define XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_PART_HPP

#include "xos/protocol/internet/http/message/string.hpp"

namespace xos {
namespace protocol {
namespace internet {
namespace http {
namespace message {

/// class partt
template <class TExtends = message::string, class TImplements = typename TExtends::implements>
class exported partt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef partt derives; 
    
    typedef typename extends::string_t string_t;
    typedef typename string_t::sstream_t sstream_t;
    typedef typename string_t::char_t char_t;
    typedef io::sequencet<char_t> sequence_t;
    typedef io::seekert<sequence_t> seeker_t;
    typedef io::readert<seeker_t> reader_t;
    typedef io::writert<sequence_t> writer_t;

    /// constructors / destructor
    partt(const char_t* copy, size_t length): extends(copy, length), is_combined_(true), is_logged_(true) {
    }
    partt(const char_t* copy): extends(copy), is_combined_(true), is_logged_(true) {
    }
    partt(const string_t& copy): extends(copy), is_combined_(true), is_logged_(true) {
    }
    partt(const partt& copy): extends(copy), is_combined_(copy.is_combined()), is_logged_(copy.is_logged()) {
    }
    partt(): is_combined_(true), is_logged_(true) {
    }
    virtual ~partt() {
    }

    /// read / write
    virtual bool read(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        return success;
    }
    virtual bool write(ssize_t& count, writer_t& writer) {
        bool success = false;
        return success;
    }

    /// read_line / read_this / write_this
    virtual bool read_line(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        char_t cr = 0;
        ssize_t amount = 0;
        string_t chars;

        this->set_default();
        do {
            if (0 < (amount = reader.read(&c, 1))) {
                count += amount;
                if (('\r' != c)) {
                    if (('\n' != c)) {
                        chars.append(&c, 1);
                    } else {
                        success = this->is_set(chars);
                        break;
                    }
                } else {
                    if (cr != c) {
                        cr = c;
                    } else {
                        chars.append(&cr, 1);
                    }
                }
            } else {
                count = amount;
                break;
            }
        } while (0 < amount);
        return success;
    }
    virtual bool read_this(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        ssize_t amount = 0;
        string_t chars;
        
        set_default();
        do {
            if (0 < (amount = reader.read(&c, 1))) {
                count += amount;
                if (('\r' != c) && ('\n' != c)) {
                    chars.append(&c, 1);
                } else {
                    break;
                }
            } else {
                count = amount;
                return false;
            }
        } while (0 < amount);
        if ((chars.has_chars())) {
            this->assign(chars);
            success = separate();
        }
        return success;
    }
    virtual bool write_this(ssize_t& count, writer_t& writer) {
        bool success = false;
        const char_t* chars = 0;
        size_t length = 0;
        
        if ((chars = this->has_chars(length))) {
            ssize_t amount = 0;

            if (length <= (amount = writer.write(chars, length))) {
                count = amount;
                success = true;
            }
        }
        return success;
    }

    /// clear / ...set
    virtual derives& clear() {
        extends::clear();
        return *this;
    }
    virtual derives& set(const partt& to) {
        this->assign(to);
        return *this;
    }
    virtual derives& set(const string_t& to) {
        this->assign(to);
        separate();
        return *this;
    }
    virtual derives& set(const char_t* to, size_t length) {
        this->assign(to, length);
        separate();
        return *this;
    }
    virtual derives& set(const char_t* to) {
        this->assign(to);
        separate();
        return *this;
    }
    virtual bool is_set(const string_t& to) {
        bool success = false;
        this->assign(to);
        success = separate();
        return success;
    }
    virtual bool is_set(const char_t* to, size_t length) {
        bool success = false;
        this->assign(to, length);
        success = separate();
        return success;
    }
    virtual bool is_set(const char_t* to) {
        bool success = false;
        this->assign(to);
        success = separate();
        return success;
    }

    /// combine / separate
    virtual bool combine() {
        bool success = true;
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
        return *this;
    }
    virtual derives& set_defaults() {
        return *this;
    }

    /// ...is_combined
    virtual bool& set_is_combined(bool to = true) {
        bool& is_combined = this->is_combined();
        is_combined = to;
        return is_combined;
    }
    virtual bool& is_combined() const {
        return (bool&)is_combined_;
    }

    /// ...is_logged
    virtual bool& set_is_logged(bool to = true) {
        bool& is_logged = this->is_logged();
        is_logged = to;
        return is_logged;
    }
    virtual bool& is_logged() const {
        return (bool&)is_logged_;
    }

protected:
    bool is_combined_, is_logged_;
}; /// class partt
typedef partt<> part;

} /// namespace message
} /// namespace http
} /// namespace internet
} /// namespace protocol
} /// namespace xos

#endif /// XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_PART_HPP
