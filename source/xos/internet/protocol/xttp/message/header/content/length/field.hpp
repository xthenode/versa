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
///   File: field.hpp
///
/// Author: $author$
///   Date: 5/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_LENGTH_FIELD_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_LENGTH_FIELD_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"
#include "xos/internet/protocol/xttp/message/header/field.hpp"
#include "xos/internet/protocol/xttp/message/header/content/length/name.hpp"
#include "xos/internet/protocol/xttp/message/header/content/length/value.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace message {
namespace header {
namespace content {
namespace length {

/// class fieldt
template <class TExtends = internet::protocol::xttp::message::header::field, class TImplements = typename TExtends::implements>
class exported fieldt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef fieldt derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::part_t part_t;

    typedef internet::protocol::xttp::message::header::content::length::name name_t;
    typedef internet::protocol::xttp::message::header::content::length::value value_t;
    
    /// constructor / destructor
    fieldt(const size_t& copy) {
        this->set(this->the_name(), copy);
    }
    fieldt(const part_t& copy) {
        this->set(this->the_name(), copy);
    }
    fieldt(const derives& copy): extends(copy) {
    }
    fieldt() {
        this->set_default();
    }
    virtual ~fieldt() {
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

    /// set
    using extends::set;
    virtual derives& set(const size_t& to) {
        value_t value(to);
        this->set(this->the_name(), value);
        return *this;
    }
    virtual derives& set(const part_t& to) {
        this->set(this->the_name(), to);
        return *this;
    }

    /// set_default...
    virtual derives& set_default() {
        this->set(this->the_name(), this->the_default_value());
        return *this;
    }
    virtual derives& set_defaults() {
        return *this;
    }

    virtual const name_t& the_name() const {
        static name_t name;
        return name;
    }
    virtual value_t& the_default_value() const {
        static value_t value;
        return value;
    }

protected:
}; /// class fieldt
typedef fieldt<> field;

} /// namespace length
} /// namespace content
} /// namespace header
} /// namespace message
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_MESSAGE_HEADER_CONTENT_LENGTH_FIELD_HPP
