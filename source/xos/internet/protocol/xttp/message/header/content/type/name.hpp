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
///   File: name.hpp
///
/// Author: $author$
///   Date: 5/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_TYPE_NAME_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_TYPE_NAME_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"

namespace xos {
namespace internet { 
namespace protocol {
namespace xttp {
namespace message {
namespace header {
namespace content {
namespace type {

/// class namet
template <class TExtends = internet::protocol::xttp::message::part, class TImplements = typename TExtends::implements>
class exported namet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef namet derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;

    /// constructor / destructor
    namet(const derives& copy): extends(copy) {
    }
    namet() {
        this->set_default();
    }
    virtual ~namet() {
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

    /// set_default...
    virtual derives& set_default() {
        this->assign(this->the_name());
        set_defaults();
        return *this;
    }
    virtual derives& set_defaults() {
        return *this;
    }

    virtual const string_t& the_name() const {
        static string_t name("Content-Type");
        return name;
    }

protected:
}; /// class namet
typedef namet<> name;

} /// namespace type
} /// namespace content
} /// namespace header
} /// namespace message
} /// namespace xttp
} /// namespace protocol 
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_TYPE_NAME_HPP
