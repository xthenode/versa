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
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/12/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HPP

#include "xos/app/console/internet/protocol/xttp/base/main_opt.hpp"

#include "xos/internet/protocol/xttp/message/body/content.hpp"
#include "xos/internet/protocol/xttp/message/content/coding/name.hpp"
#include "xos/internet/protocol/xttp/message/content/type/name.hpp"
#include "xos/internet/protocol/xttp/message/content/media/type/name.hpp"
#include "xos/internet/protocol/xttp/message/content/media/subtype/name.hpp"
#include "xos/internet/protocol/xttp/message/content/length.hpp"

#include "xos/internet/protocol/xttp/protocol/name.hpp"
#include "xos/internet/protocol/xttp/protocol/version.hpp"
#include "xos/internet/protocol/xttp/protocol/identifier.hpp"

#include "xos/internet/protocol/xttp/message/header/field.hpp"
#include "xos/internet/protocol/xttp/message/header/fields.hpp"
#include "xos/internet/protocol/xttp/message/parts.hpp"

#include "xos/internet/protocol/xttp/message/header/content/length/name.hpp"
#include "xos/internet/protocol/xttp/message/header/content/length/value.hpp"
#include "xos/internet/protocol/xttp/message/header/content/length/field.hpp"

#include "xos/internet/protocol/xttp/message/header/content/type/name.hpp"
#include "xos/internet/protocol/xttp/message/header/content/type/value.hpp"
#include "xos/internet/protocol/xttp/message/header/content/type/field.hpp"

#include "xos/internet/protocol/xttp/message/header/content/encoding/name.hpp"
#include "xos/internet/protocol/xttp/message/header/content/encoding/value.hpp"
#include "xos/internet/protocol/xttp/message/header/content/encoding/field.hpp"

#include "xos/internet/protocol/xttp/request/method/which.hpp"
#include "xos/internet/protocol/xttp/request/method/name.hpp"
#include "xos/internet/protocol/xttp/request/parameters.hpp"
#include "xos/internet/protocol/xttp/request/line.hpp"
#include "xos/internet/protocol/xttp/request/message.hpp"

#include "xos/internet/protocol/xttp/response/status/code.hpp"
#include "xos/internet/protocol/xttp/response/status/reason.hpp"
#include "xos/internet/protocol/xttp/response/line.hpp"
#include "xos/internet/protocol/xttp/response/message.hpp"

#include "xos/internet/protocol/http/request/method/which.hpp"
#include "xos/internet/protocol/http/request/resource/identifier.hpp"
#include "xos/internet/protocol/http/response/status/which.hpp"

namespace xos {
namespace app {
namespace console {
namespace internet {
namespace protocol {
namespace xttp {
namespace base {

/// class maint
template 
<class TExtends = main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint()
    : hello_("Hello\r\n"), bye_("Bye\r\n"), content_(hello_),
      content_coding_identity_("identity"), content_coding_(content_coding_identity_),
      content_media_type_text_("text"), content_media_subtype_plain_("plain"),
      content_type_text_(content_media_type_text_, content_media_subtype_plain_),
      content_type_(content_type_text_), content_length_(content_.length()),

      content_length_field_(content_length_), 
      content_type_field_(content_type_), 
      content_encoding_field_(content_coding_), 

      headers_(&content_encoding_field_, &content_type_field_, &content_length_field_, null),
      
      protocol_name_("HTTP"), protocol_version_(1, 0), 
      protocol_(protocol_name_, protocol_version_),  

      request_method_restart_(xttp_request_which_t::name_of(xttp_request_which_t::restart)), 
      request_method_start_(xttp_request_which_t::name_of(xttp_request_which_t::start)), 
      request_method_stop_(xttp_request_which_t::name_of(xttp_request_which_t::stop)), 
      request_method_get_(http_request_which_t::name_of(http_request_which_t::GET)), 
      request_method_put_(http_request_which_t::name_of(http_request_which_t::PUT)), 
      request_method_post_(http_request_which_t::name_of(http_request_which_t::POST)), 
      request_method_(request_method_get_),
      request_resource_path_root_("/"), request_resource_(request_resource_path_root_),
      request_parameters_(request_resource_),
      request_line_(request_method_, request_parameters_, protocol_),
      request_(request_line_, headers_, content_),
    
      response_status_ok_(http_response_which_t::OK), 
      response_status_not_found_(http_response_which_t::Not_Found), 
      response_status_(response_status_ok_),
      response_reason_ok_(http_response_which_t::name_of(http_response_which_t::OK)), 
      response_reason_not_found_(http_response_which_t::name_of(http_response_which_t::Not_Found)), 
      response_reason_(response_reason_ok_),
      response_line_(protocol_, response_status_, response_reason_),
      response_(response_line_, headers_, content_) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef xos::internet::protocol::xttp::message::content::coding::name content_coding_t;
    typedef xos::internet::protocol::xttp::message::content::media::type::name content_media_type_t;
    typedef xos::internet::protocol::xttp::message::content::media::subtype::name content_media_subtype_t;
    typedef xos::internet::protocol::xttp::message::content::type::name content_type_t;
    typedef xos::internet::protocol::xttp::message::content::length content_length_t;
    typedef xos::internet::protocol::xttp::message::body::content content_t;

    typedef xos::internet::protocol::xttp::message::header::field header_t;
    typedef xos::internet::protocol::xttp::message::header::fields headers_t;
    typedef xos::internet::protocol::xttp::message::parts message_parts_t;
    
    typedef xos::internet::protocol::xttp::message::header::content::length::field content_length_field_t;
    typedef xos::internet::protocol::xttp::message::header::content::type::field content_type_field_t;
    typedef xos::internet::protocol::xttp::message::header::content::encoding::field content_encoding_field_t;
    
    typedef xos::internet::protocol::xttp::protocol::name protocol_name_t;
    typedef xos::internet::protocol::xttp::protocol::version protocol_version_t;
    typedef xos::internet::protocol::xttp::protocol::identifier protocol_t;
    
    typedef xos::internet::protocol::xttp::request::method::which xttp_request_which_t;
    typedef xos::internet::protocol::xttp::request::method::name request_method_t;
    typedef xos::internet::protocol::xttp::request::parameters request_parameters_t;
    typedef xos::internet::protocol::xttp::request::line request_line_t;
    typedef xos::internet::protocol::xttp::request::message request_t;

    typedef xos::internet::protocol::xttp::response::status::code response_status_t;
    typedef xos::internet::protocol::xttp::response::status::reason response_reason_t;
    typedef xos::internet::protocol::xttp::response::line response_line_t;
    typedef xos::internet::protocol::xttp::response::message response_t;
    
    typedef xos::internet::protocol::http::request::method::which http_request_which_t;
    typedef xos::internet::protocol::http::request::resource::identifier http_request_resource_t;
    typedef xos::internet::protocol::http::response::status::which http_response_which_t;
    
    /// ...response..._run
    virtual int response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_t& response = this->response();

        if ((chars = response.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int response_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_status_t& response_status = this->response_status();
        
        if ((chars = response_status.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int response_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_reason_t& response_reason = this->response_reason();
        
        if ((chars = response_reason.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int response_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        protocol_t& protocol = this->protocol();
        response_status_t& response_status = this->response_status();
        response_reason_t& response_reason = this->response_reason();
        response_line_t& response_line = this->response_line();
        
        if ((chars = response_line.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = protocol.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = response_status.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = response_reason.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }

    /// ...request..._run
    virtual int request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        request_t& request = this->request();
        
        if ((chars = request.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int request_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        request_method_t& request_method = this->request_method();
        
        if ((chars = request_method.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int request_parameters_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        request_parameters_t& request_parameters = this->request_parameters();
        
        if ((chars = request_parameters.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int request_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        request_line_t& request_line = this->request_line();
        
        if ((chars = request_line.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }

    /// ...headers..._run
    virtual int headers_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        headers_t& headers = this->headers();
        
        if ((chars = headers.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }

    /// ...content..._run
    virtual int content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        content_t& content = this->content();
        
        if ((chars = content.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        content_type_field_t& content_type_field = this->content_type_field();
        content_type_t& content_type = this->content_type();
        content_encoding_field_t& content_encoding_field = this->content_encoding_field();
        content_coding_t& content_coding = this->content_coding();
        
        if ((chars = content_type_field.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = content_type.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = content_encoding_field.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = content_coding.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }
    virtual int content_length_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        content_length_field_t& content_length_field = this->content_length_field();
        content_length_t& content_length = this->content_length();
        
        if ((chars = content_length_field.has_chars(length))) {
            this->outln(chars, length);
        }
        if ((chars = content_length.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }

    /// ...protocol..._run
    virtual int protocol_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        protocol_t& protocol = this->protocol();
        
        if ((chars = protocol.has_chars(length))) {
            this->outln(chars, length);
        }
        return err;
    }

    /// ...set_response...
    virtual int set_response_status(const char_t* response_status, int argc, char_t** argv, char** env) {
        int err = 0;
        set_response_status(response_status);
        return err;
    }
    virtual int set_response_reason(const char_t* response_reason, int argc, char_t** argv, char** env) {
        int err = 0;
        set_response_reason(response_reason);
        return err;
    }
    virtual int set_response_line(const char_t* response_line, int argc, char_t** argv, char** env) {
        int err = 0;
        set_response_line(response_line);
        return err;
    }

    /// ...set_request...
    virtual int set_request_method(const char_t* request_method, int argc, char_t** argv, char** env) {
        int err = 0;
        set_request_method(request_method);
        return err;
    }
    virtual int set_request_parameters(const char_t* request_parameters, int argc, char_t** argv, char** env) {
        int err = 0;
        set_request_parameters(request_parameters);
        return err;
    }
    virtual int set_request_line(const char_t* request_line, int argc, char_t** argv, char** env) {
        int err = 0;
        set_request_line(request_line);
        return err;
    }

    /// ...set_content...
    virtual int set_content(const char_t* content, int argc, char_t** argv, char** env) {
        int err = 0;
        set_content(content);
        return err;
    }
    virtual int set_content_type(const char_t* content_type, int argc, char_t** argv, char** env) {
        int err = 0;
        set_content_type(content_type);
        return err;
    }
    virtual int set_content_length(const char_t* content_length, int argc, char_t** argv, char** env) {
        int err = 0;
        set_content_length(content_length);
        return err;
    }
    
    /// ...response...
    virtual response_t& set_response(const char_t* to) {
        response_t& response = this->response();
        response.set(to);
        return response;
    }
    virtual response_t& response() const {
        return (response_t&)response_;
    }
    virtual response_status_t& set_response_status(const char_t* to) {
        response_status_t& response_status = this->response_status();
        response_status.set(to);
        return response_status;
    }
    virtual response_status_t& response_status() const {
        return (response_status_t&)response_status_;
    }
    virtual response_reason_t& set_response_reason(const char_t* to) {
        response_reason_t& response_reason = this->response_reason();
        response_reason.set(to);
        return response_reason;
    }
    virtual response_reason_t& response_reason() const {
        return (response_reason_t&)response_reason_;
    }
    virtual response_line_t& set_response_line(const char_t* to) {
        response_line_t& response_line = this->response_line();
        response_line.set(to);
        return response_line;
    }
    virtual response_line_t& response_line() const {
        return (response_line_t&)response_line_;
    }

    /// ...request...
    virtual request_t& set_request(const char_t* to) {
        request_t& request = this->request();
        request.set(to);
        return request;
    }
    virtual request_t& request() const {
        return (request_t&)request_;
    }
    virtual request_method_t& set_request_method(const char_t* to) {
        request_method_t& request_method = this->request_method();
        request_method.set(to);
        return request_method;
    }
    virtual request_method_t& request_method() const {
        return (request_method_t&)request_method_;
    }
    virtual request_parameters_t& set_request_parameters(const char_t* to) {
        request_parameters_t& request_parameters = this->request_parameters();
        request_parameters.set(to);
        return request_parameters;
    }
    virtual request_parameters_t& request_parameters() const {
        return (request_parameters_t&)request_parameters_;
    }
    virtual request_line_t& set_request_line(const char_t* to) {
        request_line_t& request_line = this->request_line();
        request_line.set(to);
        return request_line;
    }
    virtual request_line_t& request_line() const {
        return (request_line_t&)request_line_;
    }

    /// ...headers
    virtual headers_t& headers() const {
        return (headers_t&)headers_;
    }

    /// ...content
    virtual content_coding_t& set_content_coding(const char_t* to) {
        content_coding_t& content_coding = this->content_coding();
        content_coding.set(to);
        return content_coding;
    }
    virtual content_encoding_field_t& content_encoding_field() const {
        return (content_encoding_field_t&)content_encoding_field_;
    }
    virtual content_coding_t& content_coding() const {
        return (content_coding_t&)content_coding_;
    }
    virtual content_type_t& set_content_type(const char_t* to) {
        content_type_t& content_type = this->content_type();
        content_type.set(to);
        return content_type;
    }
    virtual content_type_field_t& content_type_field() const {
        return (content_type_field_t&)content_type_field_;
    }
    virtual content_type_t& content_type() const {
        return (content_type_t&)content_type_;
    }
    virtual content_length_field_t& content_length_field() const {
        return (content_length_field_t&)content_length_field_;
    }
    virtual content_length_t& set_content_length(const char_t* to) {
        content_length_field_t& content_length_field = this->content_length_field();
        content_length_t& content_length = this->content_length();
        content_length.set(to);
        content_length_field.set(content_length);
        return content_length;
    }
    virtual content_length_t& content_length() const {
        return (content_length_t&)content_length_;
    }
    virtual content_t& set_content(const char_t* to) {
        content_length_field_t& content_length_field = this->content_length_field();
        content_length_t& content_length = this->content_length();
        content_t& content = this->content();
        content.set(to);
        content_length.set(content.length());
        content_length_field.set(content_length);
        return content;
    }
    virtual content_t& content() const {
        return (content_t&)content_;
    }

    /// ...protocol
    virtual protocol_t& set_protocol(const char_t* to) {
        protocol_t& protocol = this->protocol();
        protocol.set(to);
        return protocol;
    }
    virtual protocol_t& protocol() const {
        return (protocol_t&)protocol_;
    }

protected:
    content_t hello_, bye_, content_;
    content_coding_t content_coding_identity_, content_coding_;
    content_media_type_t content_media_type_text_;
    content_media_subtype_t content_media_subtype_plain_;
    content_type_t content_type_text_, content_type_;
    content_length_t content_length_;

    content_length_field_t content_length_field_;
    content_type_field_t content_type_field_;
    content_encoding_field_t content_encoding_field_;
    
    headers_t headers_;
    
    protocol_name_t protocol_name_; protocol_version_t protocol_version_; 
    protocol_t protocol_;
    
    request_method_t request_method_restart_, request_method_start_, request_method_stop_, 
                     request_method_get_, request_method_put_, request_method_post_, request_method_;
    http_request_resource_t request_resource_path_root_, request_resource_;
    request_parameters_t request_parameters_;
    request_line_t request_line_;
    request_t request_;
    
    response_status_t response_status_ok_, response_status_not_found_, response_status_;
    response_reason_t response_reason_ok_, response_reason_not_found_, response_reason_;
    response_line_t response_line_;
    response_t response_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HPP
