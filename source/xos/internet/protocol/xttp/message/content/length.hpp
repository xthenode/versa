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
///   File: length.hpp
///
/// Author: $author$
///   Date: 5/12/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_CONTENT_LENGTH_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_CONTENT_LENGTH_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace message {
namespace content {

/// class lengtht
template <class TExtends = internet::protocol::xttp::message::part, class TImplements = typename TExtends::implements>
class exported lengtht: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef lengtht derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;

    /// constructor / destructor
    lengtht(const size_t& length) {
        this->assign_unsigned(length);
        this->separate();
    }
    lengtht(const string_t& chars): extends(chars) {
        this->separate();
    }
    lengtht(const char_t* chars, size_t length): extends(chars, length) {
        this->separate();
    }
    lengtht(const char_t* chars): extends(chars) {
        this->separate();
    }
    lengtht(const part_t& copy): extends(copy) {
    }
    lengtht(const derives& copy): extends(copy) {
    }
    lengtht() {
        this->set_default();
    }
    virtual ~lengtht() {
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
        return success;
    }
    virtual bool separate() {
        bool success = true;
        return success;
    }

    /// set
    using extends::set;
    virtual derives& set(const size_t& to) {
        this->assign_unsigned(to);
        this->separate();
        return *this;
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

protected:
}; /// class lengtht
typedef lengtht<> length;

} /// namespace content
} /// namespace message
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_CONTENT_LENGTH_HPP
