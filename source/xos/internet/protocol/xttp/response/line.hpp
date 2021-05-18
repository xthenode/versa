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
///   Date: 5/15/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_LINE_HPP
#define XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_LINE_HPP

#include "xos/internet/protocol/xttp/message/part.hpp"
#include "xos/internet/protocol/xttp/message/line.hpp"
#include "xos/internet/protocol/xttp/protocol/identifier.hpp"
#include "xos/internet/protocol/xttp/response/status/code.hpp"
#include "xos/internet/protocol/xttp/response/status/reason.hpp"

namespace xos {
namespace internet {
namespace protocol {
namespace xttp {
namespace response {

/// class linet
template 
<class TProtocol = internet::protocol::xttp::protocol::identifier, 
 class TStatus = internet::protocol::xttp::response::status::code, 
 class TReason = internet::protocol::xttp::response::status::reason,
 class TExtends = internet::protocol::xttp::message::line, class TImplements = typename TExtends::implements>
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

    typedef TProtocol protocol_t;
    typedef TStatus status_t;
    typedef TReason reason_t;
    
    /// constructor / destructor
    linet(const protocol_t& protocol, const status_t& status, const reason_t& reason) {
        this->append(protocol);
        this->append(this->separator());
        this->append(status);
        this->append(this->separator());
        this->append(reason);
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
        this->separate();
    }
    linet(const derives& copy): extends(copy) {
    }
    linet() {
        this->set_default();
    }
    virtual ~linet() {
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
        this->assign(protocol_);
        this->append(this->separator());
        this->append(status_);
        this->append(this->separator());
        this->append(reason_);
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
        protocol_.set_default();
        status_.set_default();
        reason_.set_default();
        return *this;
    }

protected:
    protocol_t protocol_;
    status_t status_;
    reason_t reason_;
}; /// class linet
typedef linet<> line;

} /// namespace response
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace xos

#endif ///ndef XOS_INTERNET_PROTOCOL_XTTP_RESPONSE_LINE_HPP
