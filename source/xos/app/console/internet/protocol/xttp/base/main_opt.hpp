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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 5/12/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"
#include "xos/lib/versa/version.hpp"

#ifndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_xttp
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_xttp "xttp"
#endif /// ndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_xttp

#ifndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp "Xttp"
#endif /// ndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPT "response"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG "[{ filename | url }]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " response"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_S "s::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_C 's'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPT "request"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG "[{ filename | url }]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " request"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPT "request-method"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG "[{ GET | POST | PUT | ...}]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " request method"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_S "m::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPT "request-parameters"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG "[{ / | /.../... | ...}]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " request parameters"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_S "a::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_C 'a'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPT "headers"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG "[name:value;...]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " message headers"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_S "d::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_C 'd'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPT "content"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG "[string]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " message content"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_S "t::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C 't'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPT "content-type"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG "[string[/string]]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp " message content type"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPT "content-length"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTUSE XOS_APP_CONSOLE_INTERNET_PROTOCOL_Xttp  " message content length"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_S "n::"
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTION \
   {XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG_RESULT, \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_C}, \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_S \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_S \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_S \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_S \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_S \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_S \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_S \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTION \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTION \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTION \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTION \
    XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTION \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTION \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTION \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTION \   

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace internet {
namespace protocol {
namespace xttp {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::version::maint<xos::lib::versa::version>, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0), default_run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = this->all_default_run(argc, argv, env);
        }
        return err;
    }
    int (derives::*default_run_)(int argc, char_t** argv, char_t** env);
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((default_run_)) {
            err = (this->*default_run_)(argc, argv, env);
        } else {
            err = this->do_usage(argc, argv, env);
        }
        return err;
    }
    virtual int do_usage(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(this->did_usage())) {
            if (!(err = this->all_version_run(argc, argv, env))) {
                err = this->all_usage(argc, argv, env);
            }
        }
        return err;
    }

    /// ...response_status_run
    virtual int response_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_response_status_run(argc, argv, env))) {
            int err2 = 0;
            err = response_status_run(argc, argv, env);
            if ((err2 = after_response_status_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_response_status_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_response_status_run;
        return err;
    }
    virtual int before_set_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_response_status_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_response_status_run(argc, argv, env))) {
            int err2 = 0;
            err = set_response_status_run(argc, argv, env);
            if ((err2 = after_set_response_status_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...response_reason_run
    virtual int response_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_response_reason_run(argc, argv, env))) {
            int err2 = 0;
            err = response_reason_run(argc, argv, env);
            if ((err2 = after_response_reason_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_response_reason_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_response_reason_run;
        return err;
    }
    virtual int before_set_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_response_reason_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_response_reason_run(argc, argv, env))) {
            int err2 = 0;
            err = set_response_reason_run(argc, argv, env);
            if ((err2 = after_set_response_reason_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...response_line_run
    virtual int response_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_protocol_run(argc, argv, env))) {
            if (!(err = all_response_status_run(argc, argv, env))) {
                if (!(err = all_response_reason_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int before_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_response_line_run(argc, argv, env))) {
            int err2 = 0;
            err = response_line_run(argc, argv, env);
            if ((err2 = after_response_line_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_response_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_response_line_run;
        return err;
    }
    virtual int before_set_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_response_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_response_line_run(argc, argv, env))) {
            int err2 = 0;
            err = set_response_line_run(argc, argv, env);
            if ((err2 = after_set_response_line_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...response_run
    virtual int response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_response_line_run(argc, argv, env))) {
            if (!(err = all_headers_run(argc, argv, env))) {
                if (!(err = all_content_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int before_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_response_run(argc, argv, env))) {
            int err2 = 0;
            err = response_run(argc, argv, env);
            if ((err2 = after_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_response_run;
        return err;
    }
    virtual int before_set_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_response_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_response_run(argc, argv, env))) {
            int err2 = 0;
            err = set_response_run(argc, argv, env);
            if ((err2 = after_set_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...request_method_run
    virtual int request_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_request_method_run(argc, argv, env))) {
            int err2 = 0;
            err = request_method_run(argc, argv, env);
            if ((err2 = after_request_method_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_request_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_request_method_run;
        return err;
    }
    virtual int before_set_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_method_run(argc, argv, env))) {
            int err2 = 0;
            err = set_request_method_run(argc, argv, env);
            if ((err2 = after_set_request_method_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...request_parameters_run
    virtual int request_parameters_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_request_parameters_run(argc, argv, env))) {
            int err2 = 0;
            err = request_parameters_run(argc, argv, env);
            if ((err2 = after_request_parameters_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_request_parameters_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_request_parameters_run;
        return err;
    }
    virtual int before_set_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_parameters_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_parameters_run(argc, argv, env))) {
            int err2 = 0;
            err = set_request_parameters_run(argc, argv, env);
            if ((err2 = after_set_request_parameters_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...request_line_run
    virtual int request_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_request_method_run(argc, argv, env))) {
            if (!(err = all_request_parameters_run(argc, argv, env))) {
                if (!(err = all_protocol_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int before_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_request_line_run(argc, argv, env))) {
            int err2 = 0;
            err = request_line_run(argc, argv, env);
            if ((err2 = after_request_line_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_request_line_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_request_line_run;
        return err;
    }
    virtual int before_set_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_line_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_line_run(argc, argv, env))) {
            int err2 = 0;
            err = set_request_line_run(argc, argv, env);
            if ((err2 = after_set_request_line_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...request_run
    virtual int request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_request_line_run(argc, argv, env))) {
            if (!(err = all_headers_run(argc, argv, env))) {
                if (!(err = all_content_run(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual int before_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_request_run(argc, argv, env))) {
            int err2 = 0;
            err = request_run(argc, argv, env);
            if ((err2 = after_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_request_run;
        return err;
    }
    virtual int before_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_run(argc, argv, env))) {
            int err2 = 0;
            err = set_request_run(argc, argv, env);
            if ((err2 = after_set_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...headers_run
    virtual int headers_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_headers_run(argc, argv, env))) {
            int err2 = 0;
            err = headers_run(argc, argv, env);
            if ((err2 = after_headers_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_headers_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_headers_run;
        return err;
    }
    virtual int before_set_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_headers_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_headers_run(argc, argv, env))) {
            int err2 = 0;
            err = set_headers_run(argc, argv, env);
            if ((err2 = after_set_headers_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...content_run
    virtual int content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_run(argc, argv, env))) {
            int err2 = 0;
            err = content_run(argc, argv, env);
            if ((err2 = after_content_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_run;
        return err;
    }
    virtual int before_set_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content_run(argc, argv, env))) {
            int err2 = 0;
            err = set_content_run(argc, argv, env);
            if ((err2 = after_set_content_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...content_type_run
    virtual int content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_type_run(argc, argv, env))) {
            int err2 = 0;
            err = content_type_run(argc, argv, env);
            if ((err2 = after_content_type_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_type_run;
        return err;
    }
    virtual int before_set_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content_type_run(argc, argv, env))) {
            int err2 = 0;
            err = set_content_type_run(argc, argv, env);
            if ((err2 = after_set_content_type_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...content_length_run
    virtual int content_length_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_length_run(argc, argv, env))) {
            int err2 = 0;
            err = content_length_run(argc, argv, env);
            if ((err2 = after_content_length_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_length_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_length_run;
        return err;
    }
    virtual int before_set_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content_length_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content_length_run(argc, argv, env))) {
            int err2 = 0;
            err = set_content_length_run(argc, argv, env);
            if ((err2 = after_set_content_length_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...protocol_run
    virtual int protocol_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->do_usage(argc, argv, env);
        return err;
    }
    virtual int before_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_protocol_run(argc, argv, env))) {
            int err2 = 0;
            err = protocol_run(argc, argv, env);
            if ((err2 = after_protocol_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_protocol_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_protocol_run;
        return err;
    }
    virtual int before_set_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_protocol_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_protocol_run(argc, argv, env))) {
            int err2 = 0;
            err = set_protocol_run(argc, argv, env);
            if ((err2 = after_set_protocol_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_request_method
    virtual int set_request_method(const char_t* request_method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_request_method(const char_t* request_method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_method(const char_t* request_method, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_method(const char_t* request_method, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_method(request_method, argc, argv, env))) {
            int err2 = 0;
            err = set_request_method(request_method, argc, argv, env);
            if ((err2 = after_set_request_method(request_method, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_request_parameters
    virtual int set_request_parameters(const char_t* request_parameters, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_request_parameters(const char_t* request_parameters, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_parameters(const char_t* request_parameters, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_parameters(const char_t* request_parameters, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_parameters(request_parameters, argc, argv, env))) {
            int err2 = 0;
            err = set_request_parameters(request_parameters, argc, argv, env);
            if ((err2 = after_set_request_parameters(request_parameters, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_request_line
    virtual int set_request_line(const char_t* request_line, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_request_line(const char_t* request_line, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_request_line(const char_t* request_line, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_request_line(const char_t* request_line, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_request_line(request_line, argc, argv, env))) {
            int err2 = 0;
            err = set_request_line(request_line, argc, argv, env);
            if ((err2 = after_set_request_line(request_line, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_headers
    virtual int set_headers(const char_t* headers, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_headers(const char_t* headers, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_headers(const char_t* headers, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_headers(const char_t* headers, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_headers(headers, argc, argv, env))) {
            int err2 = 0;
            err = set_headers(headers, argc, argv, env);
            if ((err2 = after_set_headers(headers, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_content
    virtual int set_content(const char_t* content, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_content(const char_t* content, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content(const char_t* content, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content(const char_t* content, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content(content, argc, argv, env))) {
            int err2 = 0;
            err = set_content(content, argc, argv, env);
            if ((err2 = after_set_content(content, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_content_type
    virtual int set_content_type(const char_t* content_type, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_content_type(const char_t* content_type, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content_type(const char_t* content_type, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content_type(const char_t* content_type, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content_type(content_type, argc, argv, env))) {
            int err2 = 0;
            err = set_content_type(content_type, argc, argv, env);
            if ((err2 = after_set_content_type(content_type, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...set_content_length
    virtual int set_content_length(const char_t* content_length, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int before_set_content_length(const char_t* content_length, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_content_length(const char_t* content_length, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_content_length(const char_t* content_length, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_content_length(content_length, argc, argv, env))) {
            int err2 = 0;
            err = set_content_length(content_length, argc, argv, env);
            if ((err2 = after_set_content_length(content_length, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...option...
    virtual int on_response_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = this->all_set_response_run(argc, argv, env);
        return err;
    }
    virtual const char_t* response_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTARG;
        return chars;
    }
    virtual int on_request_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = this->all_set_request_run(argc, argv, env);
        return err;
    }
    virtual const char_t* request_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTARG;
        return chars;
    }
    virtual int on_request_method_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_request_method(optarg, argc, argv, env);
        } else {
            err = this->all_set_request_method_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* request_method_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTARG;
        return chars;
    }
    virtual int on_request_parameters_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_request_parameters(optarg, argc, argv, env);
        } else {
            err = this->all_set_request_parameters_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* request_parameters_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTARG;
        return chars;
    }
    virtual int on_headers_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_headers(optarg, argc, argv, env);
        } else {
            err = this->all_set_headers_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* headers_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTARG;
        return chars;
    }
    virtual int on_content_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_content(optarg, argc, argv, env);
        } else {
            err = this->all_set_content_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* content_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG;
        return chars;
    }
    virtual int on_content_type_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_content_type(optarg, argc, argv, env);
        } else {
            err = this->all_set_content_type_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* content_type_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG;
        return chars;
    }
    virtual int on_content_length_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = all_set_content_length(optarg, argc, argv, env);
        } else {
            err = this->all_set_content_length_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* content_length_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTUSE;
        optarg = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_C:
            err = this->on_response_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_C:
            err = this->on_request_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_C:
            err = this->on_request_method_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_C:
            err = this->on_request_parameters_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_C:
            err = this->on_headers_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            err = this->on_content_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            err = this->on_content_type_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_C:
            err = this->on_content_length_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_RESPONSE_OPTVAL_C:
            chars = response_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_OPTVAL_C:
            chars = request_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_METHOD_OPTVAL_C:
            chars = request_method_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_REQUEST_PARAMETERS_OPTVAL_C:
            chars = request_parameters_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_HEADERS_OPTVAL_C:
            chars = headers_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            chars = content_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            chars = content_type_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_CONTENT_LENGTH_OPTVAL_C:
            chars = content_length_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace xttp
} /// namespace protocol
} /// namespace internet
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP
