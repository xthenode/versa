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
///   Date: 3/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_VERSA_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_VERSA_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"
#include "xos/lib/versa/version.hpp"

#define XOS_APP_CONSOLE_VERSA_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_VERSA_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_OPTIONS \
   
#define XOS_APP_CONSOLE_VERSA_MAIN_ARGS 0
#define XOS_APP_CONSOLE_VERSA_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace versa {

/// class main_optt
template <class TExtends = version::maint<lib::versa::version>, class TImplements = typename TExtends::implements>
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
        throw xos::exception(exception_unexpected);
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace versa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_VERSA_MAIN_OPT_HPP 
