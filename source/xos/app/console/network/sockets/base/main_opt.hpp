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
///   Date: 5/18/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"
#include "xos/lib/rete/version.hpp"

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ACCEPT_HOST "*"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ACCEPT_PORT 8080

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_CONNECT_HOST "localhost"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_CONNECT_PORT 80

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPT "info"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG ""
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTUSE "Address info"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_S "i::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPT "host"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTUSE "Hostname or address"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_S "o::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_C 'o'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPT "port"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTUSE "Port number"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPT "relay-host"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTUSE "Relay hostname or address"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_S "s::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_C 's'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPT "relay-port"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTUSE "Relay port number"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_S "t::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_C 't'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_S \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTION \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_CONSOLE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_CONSOLE_MAIN_OPTIONS_OPTIONS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::version::maint<xos::lib::rete::version>, 
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

    /// ...options...
    virtual int on_info_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* info_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTARG;
        chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTUSE;
        return chars;
    }
    virtual int on_host_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTARG;
        chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTUSE;
        return chars;
    }
    virtual int on_port_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTARG;
        chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTUSE;
        return chars;
    }
    virtual int on_relay_host_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* relay_host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTARG;
        return chars;
    }
    virtual int on_relay_port_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* relay_port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_C:
            err = this->on_info_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_C:
            err = this->on_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_C:
            err = this->on_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_C:
            err = this->on_relay_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_C:
            err = this->on_relay_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_C:
            chars = info_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_C:
            chars = host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_C:
            chars = port_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_HOST_OPTVAL_C:
            chars = relay_host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_RELAY_PORT_OPTVAL_C:
            chars = relay_port_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPT_HPP
