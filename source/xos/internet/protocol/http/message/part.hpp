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
#ifndef XOS_INTERNET_PROTOCOL_HTTP_MESSAGE_PART_HPP
#define XOS_INTERNET_PROTOCOL_HTTP_MESSAGE_PART_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"

namespace xos {
namespace internet { 
namespace protocol {
namespace http {
namespace message {

/// class partt
template <class TExtends = xttp::message::part, class TImplements = typename TExtends::implements>
class exported partt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef partt derives; 
    
    typedef typename extends::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::sstream_t sstream_t;
    typedef typename extends::sequence_t sequence_t;
    typedef typename extends::seeker_t seeker_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;

    /// constructors / destructor
    partt(const char_t* copy, size_t length): extends(copy, length) {
    }
    partt(const char_t* copy): extends(copy) {
    }
    partt(const string_t& copy): extends(copy) {
    }
    partt(const part_t& copy): extends(copy) {
    }
    partt(const derives& copy): extends(copy) {
    }
    partt() {
    }
    virtual ~partt() {
    }

protected:
}; /// class partt
typedef partt<> part;

} /// namespace message
} /// namespace http
} /// namespace protocol 
} /// namespace internet 
} /// namespace xos

#endif /// XOS_INTERNET_PROTOCOL_HTTP_MESSAGE_PART_HPP
