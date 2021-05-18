########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: xttp.pri
#
# Author: $author$
#   Date: 5/12/2021
#
# QtCreator .pri file for versa executable xttp
########################################################################

########################################################################
# xttp

# xttp TARGET
#
xttp_TARGET = xttp

# xttp INCLUDEPATH
#
xttp_INCLUDEPATH += \
$${versa_INCLUDEPATH} \

# xttp DEFINES
#
xttp_DEFINES += \
$${versa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_INTERNET_PROTOCOL_XTTP_BASE_MAIN_INSTANCE \

########################################################################
# xttp OBJECTIVE_HEADERS
#
#xttp_OBJECTIVE_HEADERS += \
#$${VERSA_SRC}/xos/app/console/xttp/main.hh \

# xttp OBJECTIVE_SOURCES
#
#xttp_OBJECTIVE_SOURCES += \
#$${VERSA_SRC}/xos/app/console/xttp/main.mm \

########################################################################
# xttp HEADERS
#
xttp_HEADERS += \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/string.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/part.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/message/content/length.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/content/media/type/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/content/media/subtype/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/content/type/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/content/coding/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/body/content.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/protocol/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/protocol/version.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/protocol/identifier.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/line.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/field.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/fields.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/type/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/type/value.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/type/field.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/length/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/length/value.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/length/field.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/encoding/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/encoding/value.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/header/content/encoding/field.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/parts.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/request/method/which.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/request/method/name.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/request/parameters.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/request/line.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/request/message.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/xttp/response/status/which.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/response/status/code.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/response/status/reason.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/response/line.hpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/response/message.hpp \
\
$${VERSA_SRC}/xos/internet/protocol/http/request/method/which.hpp \
$${VERSA_SRC}/xos/internet/protocol/http/request/resource/identifier.hpp \
$${VERSA_SRC}/xos/internet/protocol/http/response/status/which.hpp \
\
$${VERSA_SRC}/xos/app/console/internet/protocol/xttp/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/xttp/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# xttp SOURCES
#
xttp_SOURCES += \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/string.cpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/part.cpp \
$${VERSA_SRC}/xos/internet/protocol/xttp/message/body/content.cpp \
\
$${VERSA_SRC}/xos/app/console/internet/protocol/xttp/base/main_opt.cpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/xttp/base/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# xttp FRAMEWORKS
#
xttp_FRAMEWORKS += \
$${versa_FRAMEWORKS} \

# xttp LIBS
#
xttp_LIBS += \
$${versa_LIBS} \


