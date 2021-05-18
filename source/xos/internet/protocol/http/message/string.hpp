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
///   File: string.hpp
///
/// Author: $author$
///   Date: 3/13/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_STRING_HPP
#define XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_STRING_HPP

#include "xos/base/string.hpp"
#include "xos/base/logged.hpp"
#include "xos/base/logger.hpp"
#include "xos/io/sequence.hpp"
#include "xos/io/seeker.hpp"
#include "xos/io/reader.hpp"
#include "xos/io/writer.hpp"

namespace xos {
namespace protocol {
namespace internet {
namespace http {
namespace message {

/// class stringt
template <class TExtends = xos::string, class TImplements = typename TExtends::implements>
class exported stringt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef stringt derives; 
    
    typedef extends string_t;
    typedef typename string_t::sstream_t sstream_t;
    typedef typename string_t::char_t char_t;
    typedef io::sequencet<char_t> sequence_t;
    typedef io::seekert<sequence_t> seeker_t;
    typedef io::readert<seeker_t> reader_t;
    typedef io::writert<sequence_t> writer_t;

    /// constructors / destructor
    stringt(const char_t* copy, size_t length): extends(copy, length) {
    }
    stringt(const char_t* copy): extends(copy) {
    }
    stringt(const stringt& copy): extends(copy) {
    }
    stringt() {
    }
    virtual ~stringt() {
    }

    /// ...is_equal
    virtual bool is_equal(const string_t& to) const {
        int unequal = compare(*this, to, compare);
        return !unequal;
    }
    virtual bool uncased_is_equal(const string_t& to) const {
        int unequal = compare(*this, to, uncased_compare);
        return !unequal;
    }

    /// ...compare
    virtual int compare(const string_t& to) const {
        int unequal = compare(*this, to, compare);
        return unequal;
    }
    virtual int uncased_compare(const string_t& to) const {
        int unequal = compare(*this, to, uncased_compare);
        return unequal;
    }
    static int compare(const string_t& s, const string_t& to, int compare(const char_t& c, const char_t& c2)) {
        int unequal = 0, compared = 0;
        const char_t *chars = 0, *to_chars = 0, *end = 0;
        size_t length = 0, to_length = 0;

        if ((chars = s.has_chars(length))) {
            if ((to_chars = to.has_chars(to_length))) {
                if (((end = (chars + length)) - chars) > to_length) {
                    end = (chars + to_length);
                    unequal = 1;
                } else {
                    if (to_length > length) {
                        unequal = -1;
                    }
                }
                for (; chars != end; ++chars, ++to_chars) {
                    if ((compared = compare(*chars, *to_chars))) {
                        return compared;
                    }
                }
            } else {
                unequal = 1;
            }
        } else {
            if ((to_chars = to.has_chars(to_length))) {
                unequal = -1;
            }
        }
        return unequal;
    }
    static int compare(const char_t& c, const char_t& c2) {
        if (c > c2) { return 1; } else {
            if (c < c2) { return -1; }
        }
        return 0;
    }
    static int uncased_compare(const char_t& c, const char_t& c2) {
        return compare(tolower(c), tolower(c2));
    }

}; /// class stringt
typedef stringt<> string;

} /// namespace message
} /// namespace http
} /// namespace internet
} /// namespace protocol
} /// namespace xos

#endif /// XOS_PROTOCOL_INTERNET_HTTP_MESSAGE_STRING_HPP
