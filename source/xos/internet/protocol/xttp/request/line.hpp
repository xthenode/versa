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
///   Date: 5/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_REQUEST_LINE_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_LINE_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"
#include "xos/internet/protocol/xttp/message/line.hpp"
#include "xos/internet/protocol/xttp/request/method/name.hpp"
#include "xos/internet/protocol/xttp/request/parameters.hpp"
#include "xos/internet/protocol/xttp/protocol/identifier.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace request {

/// class linet
template <class TExtends = internet::protocol::xttp::message::line, class TImplements = typename TExtends::implements>
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
    typedef typename extends::part_t part_t;

    typedef internet::protocol::xttp::message::line line_t;
    typedef internet::protocol::xttp::protocol::identifier protocol_identifier_t;
    typedef internet::protocol::xttp::request::method::name request_method_t;
    typedef internet::protocol::xttp::request::parameters request_parameters_t;
    
    /// constructor / destructor
    linet
    (const request_method_t& request_method, 
     const request_parameters_t& request_parameters,
     const protocol_identifier_t& protocol_identifier): extends(request_method) {
        this->append(this->separator());
        this->append(request_parameters);
        this->append(this->separator());
        this->append(protocol_identifier);
        this->separate();
    }
    linet(const string_t& chars): extends(chars) {
        this->separate();
    }
    linet(const char_t* chars, size_t length): extends(chars, length) {
        this->separate();
    }
    linet(const char_t* chars): extends(chars) {
        this->separate();
    }
    linet(const part_t& copy): extends(copy) {
    }
    linet(const derives& copy): extends(copy) {
    }
    linet() {
        this->set_default();
    }
    virtual ~linet() {
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

protected:
}; /// class linet
typedef linet<> line;

} /// namespace request
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_REQUEST_LINE_HPP
