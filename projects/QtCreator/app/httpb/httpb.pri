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
#   File: httpb.pri
#
# Author: $author$
#   Date: 3/13/2021
#
# QtCreator .pri file for versa executable httpb
########################################################################

########################################################################
# httpb

# httpb TARGET
#
httpb_TARGET = httpb

# httpb INCLUDEPATH
#
httpb_INCLUDEPATH += \
$${versa_INCLUDEPATH} \

# httpb DEFINES
#
httpb_DEFINES += \
$${versa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_PROTOCOL_INTERNET_HTTP_BASE_MAIN_INSTANCE \

########################################################################
# httpb OBJECTIVE_HEADERS
#
#httpb_OBJECTIVE_HEADERS += \
#$${VERSA_SRC}/app/console/protocol/internet/http/base/main.hh \

# httpb OBJECTIVE_SOURCES
#
#httpb_OBJECTIVE_SOURCES += \
#$${VERSA_SRC}/app/console/protocol/internet/http/base/main.mm \

########################################################################
# httpb HEADERS
#
httpb_HEADERS += \
$${VERSA_SRC}/xos/protocol/internet/http/message/string.hpp \
$${VERSA_SRC}/xos/protocol/internet/http/message/part.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/internet/http/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/internet/http/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# httpb SOURCES
#
httpb_SOURCES += \
$${VERSA_SRC}/xos/protocol/internet/http/message/string.cpp \
$${VERSA_SRC}/xos/protocol/internet/http/message/part.cpp \
\
$${VERSA_SRC}/xos/app/console/protocol/internet/http/base/main_opt.cpp \
$${VERSA_SRC}/xos/app/console/protocol/internet/http/base/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# httpb FRAMEWORKS
#
httpb_FRAMEWORKS += \
$${versa_FRAMEWORKS} \

# httpb LIBS
#
httpb_LIBS += \
$${versa_LIBS} \


