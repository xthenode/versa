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
///   File: message.hpp
///
/// Author: $author$
///   Date: 5/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_MESSAGE_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_MESSAGE_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"
#include "xos/internet/protocol/xttp/message/parts.hpp"
#include "xos/internet/protocol/xttp/response/line.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace response {

/// class messaget
template 
<class TLine = internet::protocol::xttp::response::line,
 class TExtends = internet::protocol::xttp::message::partst<TLine>, class TImplements = typename TExtends::implements>
class exported messaget: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef messaget derives;
    
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
    typedef typename extends::parts_t parts_t;

    /// constructor / destructor
    messaget(const line_t& line, const headers_t& headers, const content_t& content): extends(line, headers, content) {
    }
    messaget(const line_t& line, const headers_t& headers): extends(line, headers) {
    }
    messaget(const line_t& line): extends(line) {
    }
    messaget(const string_t& chars): extends(chars) {
    }
    messaget(const char_t* chars, size_t length): extends(chars, length) {
    }
    messaget(const char_t* chars): extends(chars) {
    }
    messaget(const part_t& copy): extends(copy) {
    }
    messaget(const derives& copy): extends(copy) {
    }
    messaget() {
    }
    virtual ~messaget() {
    }

protected:
}; /// class messaget
typedef messaget<> message;

} /// namespace response
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_MESSAGE_HPP
