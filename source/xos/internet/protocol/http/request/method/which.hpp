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
///   Date: 5/16/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_WHICH_HPP
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_WHICH_HPP

#include "xos/internet/protocol/http/message/part.hpp"
#include "xos/internet/protocol/xttp/request/method/which.hpp"

#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_CONNECT "CONNECT"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_DELETE "DELETE"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_GET "GET"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_HEAD "HEAD"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_OPTIONS "OPTIONS"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_PATCH "PATCH"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_POST "POST"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_PUT "PUT"
#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_TRACE "TRACE"

#define XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAMES \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_CONNECT, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_DELETE, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_GET, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_HEAD, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_OPTIONS, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_PATCH, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_POST, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_PUT, \
    XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAME_TRACE, \

namespace xos {
namespace internet {
namespace protocol {
namespace http {
namespace request {
namespace method {

/// enum which_t
typedef int which_t;
enum {
    none = 0,

    CONNECT, DELETE, GET, HEAD, OPTIONS, PATCH, POST, PUT, TRACE, 

    next,
    first = (none + 1),
    last = (next - 1),
    count = ((last - first) + 1)
}; /// enum which_t

/// class whicht
template 
<class TExtends = internet::protocol::xttp::request::method::extended::which, class TImplements = typename TExtends::implements>
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

    typedef internet::protocol::http::request::method::which_t which_t;
    enum {
        CONNECT = internet::protocol::http::request::method::CONNECT, 
        DELETE = internet::protocol::http::request::method::DELETE, 
        GET = internet::protocol::http::request::method::GET, 
        HEAD = internet::protocol::http::request::method::HEAD, 
        OPTIONS = internet::protocol::http::request::method::OPTIONS, 
        PATCH = internet::protocol::http::request::method::PATCH, 
        POST = internet::protocol::http::request::method::POST, 
        PUT = internet::protocol::http::request::method::PUT, 
        TRACE = internet::protocol::http::request::method::TRACE 
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
    static const char_t** name_of() {
        static const char_t* name[method::count + 1] = {
            XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_NAMES
            0
        };
        return name;
    }
    static const char_t* name_of(const which_t& of) {
        const char_t** name = name_of();
        if ((name) && (of >= method::first) && (of <= method::last)) {
            return name[of - method::first];
        }
        return extends::name_of_none();
    }
    static which_t of_name(const char_t* name) {
        if ((name)) {
            const char* to = 0;
            int unequal = 0;
            for (which_t of = method::first; of <= method::last; ++of) {
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

} /// namespace method
} /// namespace request
} /// namespace http
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_HTTP_REQUEST_METHOD_WHICH_HPP
