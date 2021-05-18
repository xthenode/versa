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
#ifndef XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_WHICH_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_WHICH_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"

#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_HELLO "hello"
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_RESTART "restart"
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_START "start"
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_STOP "stop"
#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_UNKNOWN "unknown"

#define XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAMES \
    XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_HELLO, \
    XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_RESTART, \
    XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_START, \
    XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_STOP, \

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace request {
namespace method {

/// enum which_t
typedef int which_t;
enum {
    none = 0,

    hello, restart, start, stop, 

    next,
    first = (none + 1),
    last = (next - 1),
    count = ((last - first) + 1)
}; /// enum which_t

namespace extended {
/// class whicht
template <class TExtends = internet::protocol::xttp::message::part, class TImplements = typename TExtends::implements>
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
    typedef extends part_t;

    typedef internet::protocol::xttp::request::method::which_t which_t;
    enum {
        hello = internet::protocol::xttp::request::method::hello, 
        restart = internet::protocol::xttp::request::method::restart, 
        start = internet::protocol::xttp::request::method::start, 
        stop = internet::protocol::xttp::request::method::stop 
    };
    
    /// constructor / destructor
    whicht(const which_t& of, const string_t& name): of_(of), name_(name) {
    }
    whicht(const which_t& of): of_(of), name_(name_of_none()) {
    }
    whicht(const derives& copy): of_(copy.of_), name_(copy.name_) {
    }
    whicht(): of_(method::none), name_(name_of_none()) {
    }
    virtual ~whicht() {
    }

    virtual which_t set_of(const which_t& of) {
        of_ = of;
        return of_;
    }
    virtual which_t of() const {
        return of_;
    }
    virtual const char_t* set_name(const char_t* to) {
        if ((to) && (to[0])) {
            name_.assign(to);
        } else {
            name_.assign(name_of_none());
        }
        return name_.chars();
    }
    virtual const char_t* name() const {
        return name_.chars();
    }

    static const char_t* name_of_none() {
        return XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAME_UNKNOWN;
    }
    static which_t of_name_none() {
        return method::none;
    }

protected:
    which_t of_;
    string_t name_;
}; /// class whicht
typedef whicht<> which;
} /// namespace extended

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

    typedef internet::protocol::xttp::request::method::which_t which_t;
    
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
            XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_NAMES
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
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_REQUEST_METHOD_WHICH_HPP
