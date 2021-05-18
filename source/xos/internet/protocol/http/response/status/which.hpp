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
///   File: which.hpp
///
/// Author: $author$
///   Date: 5/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_HTTP_RESPONSE_STATUS_WHICH_HPP
#define XOS_INTERNET_PROTOCOL_HTTP_RESPONSE_STATUS_WHICH_HPP

#include "xos/internet/protocol/http/message/part.hpp"
#include "xos/internet/protocol/xttp/response/status/which.hpp"

#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_OK "OK"
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_FOUND "Not Found"
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_IMPLEMENTED "Not Implemented"
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_METHOD_NOT_ALLOWED "Method Not Allowed"
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_INTERNAL_SERVER_ERROR "Internal Server Error"

#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAMES \
    XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_OK, \
    XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_FOUND, \
    XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_IMPLEMENTED, \
    XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_METHOD_NOT_ALLOWED, \
    XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_INTERNAL_SERVER_ERROR, \

namespace xos {
namespace internet {
namespace protocol {
namespace http {
namespace response {
namespace status {

/// enum which_t
typedef int which_t;
enum {
    none = 0,

    Continue = 100,
    Switching_Protocols = 101,
    
    OK = 200,
    Created = 201,
    Accepted = 202,
    Non_Authoritative_Information = 203,
    No_Content = 204,
    Reset_Content = 205,
    Partial_Content = 206,

    Bad_Request = 400,
    Unauthorized = 401,
    Payment_Required = 402,
    Forbidden = 403,
    Not_Found = 404,
    Method_Not_Allowed = 405,

    Internal_Server_Error = 500,
    Not_Implemented = 501,
    Bad_Gateway = 502,
    Service_Unavailable = 503,
    Gateway_Timeout = 504,
    HTTP_Version_not_supported = 505,
    
    next,
    first = (none + 1),
    last = (next - 1),
    count = ((last - first) + 1)
}; /// enum which_t

/// class whicht
template 
<class TExtends = internet::protocol::xttp::response::status::extended::which, class TImplements = typename TExtends::implements>
class exported whicht: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef whicht derives;
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::part_t part_t;

    typedef internet::protocol::http::response::status::which_t which_t;
    enum {
        OK = http::response::status::OK,
        Not_Found = http::response::status::Not_Found,
        Not_Implemented = http::response::status::Not_Implemented,
        Method_Not_Allowed = http::response::status::Method_Not_Allowed,
        Internal_Server_Error = http::response::status::Internal_Server_Error,
    };
    
    /// constructor / destructor
    whicht(const which_t& of, const string_t& name): extends(of, name) {
    }
    whicht(const which_t& of): extends(of, name_of(of)) {
    }
    whicht(const derives& copy): extends(copy) {
    }
    whicht() {
    }
    virtual ~whicht() {
    }

    /// name... / of...
    static const char_t* name_of(status::which_t of) {
        if ((of >= status::first) && (of <= status::last)) {
            switch (of) {
            case OK: return XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_OK;
            case Not_Found: return XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_FOUND;
            case Not_Implemented: return XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_NOT_IMPLEMENTED;
            case Method_Not_Allowed: return XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_METHOD_NOT_ALLOWED;
            case Internal_Server_Error: return XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_STATUS_NAME_INTERNAL_SERVER_ERROR;
            }
        }
        return extends::name_of_none();
    }
    static status::which_t of_name(const char_t* name) {
        if ((name)) {
            const char* to = 0;
            int unequal = 0;
            for (status::which_t of = status::first; of <= status::last; ++of) {
                if ((to = name_of(of))) {
                    if (!(unequal = chars_t::compare(name, to)))
                        return of;
                }
            }
        }
        return extends::of_name_none();
    }
    /// of / name
    virtual whicht& operator = (const char_t* name) {
        extends::set_name_(name_of(extends::set_of(of_name(name))));
        return *this;
    }
    virtual whicht& operator = (const which_t& of) {
        extends::set_name(name_of(extends::set_of(of)));
        return *this;
    }
    virtual operator which_t() const {
        return extends::of();
    }

protected:
}; /// class whicht
typedef whicht<> which;

} /// namespace status
} /// namespace response
} /// namespace http
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_HTTP_RESPONSE_STATUS_WHICH_HPP
