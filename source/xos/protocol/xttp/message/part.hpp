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
///   Date: 3/7/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_XTTP_MESSAGE_PART_HPP
#define XOS_PROTOCOL_XTTP_MESSAGE_PART_HPP

#include "xos/protocol/xttp/message/string.hpp"

namespace protocol {
namespace xttp {
namespace message {

/// class partt
template <class TExtends = protocol::xttp::message::string, class TImplements = typename TExtends::implements>
class exported partt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef partt derives;
    
    typedef typename string_t::char_t char_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef extends part_t;

    /// constructor / destructor
    partt(const string_t& chars): extends(chars) {
        this->separate();
    }
    partt(const char_t* chars, size_t length): extends(chars, length) {
        this->separate();
    }
    partt(const char_t* chars): extends(chars) {
        this->separate();
    }
    partt(const partt& copy): extends(copy) {
    }
    partt() {
        this->set_default();
    }
    virtual ~partt() {
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
        this->clear();
        set_defaults();
        return *this;
    }
    virtual derives& set_defaults() {
        return *this;
    }

protected:
}; /// class partt
typedef partt<> part;

} /// namespace message
} /// namespace xttp
} /// namespace protocol

#endif ///ndef XOS_PROTOCOL_XTTP_MESSAGE_PART_HPP
