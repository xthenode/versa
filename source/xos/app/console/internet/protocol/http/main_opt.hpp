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
///   Date: 3/12/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPT_HPP

#include "xos/app/console/internet/protocol/http/client/main.hpp"
#include "xos/app/console/internet/protocol/http/server/main.hpp"
#include "xos/app/console/network/sockets/client/main.hpp"
#include "xos/app/console/network/sockets/server/main.hpp"

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_OPTIONS_EXTEND \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS \
   
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_ARGS 0
#define XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace xos { namespace internet { namespace protocol {
namespace internet {
namespace http {

/// class main_optt
template 
<class TExtends = http::client::maint<http::client::main_optt
 <http::server::maint<http::server::main_optt
  <http::base::maint<http::base::main_optt
   <network::sockets::client::maint<network::sockets::client::main_optt
    <network::sockets::server::maint<network::sockets::server::main_optt
      <os::sockets::base::maint<os::sockets::base::main_optt
        <network::sockets::base::maint<network::sockets::base::main_optt
          <network::client::main_optt<network::server::main_optt
            <versa::maint<versa::main_optt<> > > > > > > > > > > > > > > > > >, 
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
    main_optt() {
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

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace http
} /// namespace internet
} /// namespace protocol } /// namespace internet } /// namespace xos
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPT_HPP
