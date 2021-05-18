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
#   File: http.pri
#
# Author: $author$
#   Date: 3/12/2021
#
# QtCreator .pri file for versa executable http
########################################################################

########################################################################
# http

# http TARGET
#
http_TARGET = http

# http INCLUDEPATH
#
http_INCLUDEPATH += \
$${versa_INCLUDEPATH} \

# http DEFINES
#
http_DEFINES += \
$${versa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_INTERNET_PROTOCOL_HTTP_MAIN_OPT_INSTANCE \

########################################################################
# http OBJECTIVE_HEADERS
#
#http_OBJECTIVE_HEADERS += \
#$${VERSA_SRC}/xos/app/console/http/main.hh \

# http OBJECTIVE_SOURCES
#
#http_OBJECTIVE_SOURCES += \
#$${VERSA_SRC}/xos/app/console/http/main.mm \

########################################################################
# http HEADERS
#
http_HEADERS += \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/base/main.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/client/main.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/server/main.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# http SOURCES
#
http_SOURCES += \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/main_opt.cpp \
$${VERSA_SRC}/xos/app/console/internet/protocol/http/server/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# http FRAMEWORKS
#
http_FRAMEWORKS += \
$${versa_FRAMEWORKS} \

# http LIBS
#
http_LIBS += \
$${versa_LIBS} \


