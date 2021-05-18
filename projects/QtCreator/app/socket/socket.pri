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
#   File: socket.pri
#
# Author: $author$
#   Date: 5/18/2021
#
# QtCreator .pri file for versa executable socket
########################################################################

########################################################################
# socket

# socket TARGET
#
socket_TARGET = socket

# socket INCLUDEPATH
#
socket_INCLUDEPATH += \
$${versa_INCLUDEPATH} \

# socket DEFINES
#
socket_DEFINES += \
$${versa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INSTANCE \

########################################################################
# socket OBJECTIVE_HEADERS
#
#socket_OBJECTIVE_HEADERS += \
#$${VERSA_SRC}/xos/app/console/socket/main.hh \

# socket OBJECTIVE_SOURCES
#
#socket_OBJECTIVE_SOURCES += \
#$${VERSA_SRC}/xos/app/console/socket/main.mm \

########################################################################
# socket HEADERS
#
socket_HEADERS += \
$${VERSA_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${VERSA_SRC}/xos/app/console/main_main.hpp \

# socket SOURCES
#
socket_SOURCES += \
$${VERSA_SRC}/xos/app/console/network/sockets/base/main_opt.cpp \
$${VERSA_SRC}/xos/app/console/network/sockets/base/main.cpp \
$${VERSA_SRC}/xos/app/console/main_main.cpp \

########################################################################
# socket FRAMEWORKS
#
socket_FRAMEWORKS += \
$${versa_FRAMEWORKS} \

# socket LIBS
#
socket_LIBS += \
$${versa_LIBS} \


