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
///   File: line.hpp
///
/// Author: $author$
///   Date: 5/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_LINE_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_LINE_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace message {

/// class linet
template <class TExtends = internet::protocol::xttp::message::part, class TImplements = typename TExtends::implements>
class exported linet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef linet derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;

    /// constructor / destructor
    linet(const string_t& chars): extends(chars) {
    }
    linet(const char_t* chars, size_t length): extends(chars, length) {
    }
    linet(const char_t* chars): extends(chars) {
    }
    linet(const part_t& copy): extends(copy) {
    }
    linet(const derives& copy): extends(copy) {
    }
    linet() {
    }
    virtual ~linet() {
    }

    /// read / write
    virtual bool read(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        char_t ch = 0;
        ssize_t amount = 0;
        string_t chars;

        this->set_default();
        do {
            if (0 < (amount = reader.read(&c, 1))) {
                count += amount;
                if ((cr() != c)) {
                    if ((lf() != c)) {
                        chars.append(&c, 1);
                        ch = 0;
                    } else {
                        success = this->is_set(chars);
                        break;
                    }
                } else {
                    if (ch != c) {
                        ch = c;
                    } else {
                        chars.append(&ch, 1);
                    }
                }
            } else {
                count = amount;
                break;
            }
        } while (0 < amount);
        return success;
    }
    virtual bool write(ssize_t& count, writer_t& writer) {
        bool success = false;
        success = this->write_this(count, writer);
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

    /// separator
    virtual const char_t& cr() const {
        static char_t ch = '\r';
        return ch;
    }
    virtual const char_t& lf() const {
        static char_t ch = '\n';
        return ch;
    }
    virtual const string_t& separator() const {
        static string_t separator(" ");
        return separator;
    }

protected:
}; /// class linet
typedef linet<> line;

} /// namespace message
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_LINE_HPP
