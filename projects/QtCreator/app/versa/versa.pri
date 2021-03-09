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
#   File: versa.pri
#
# Author: $author$
#   Date: 3/8/2021
#
# QtCreator .pri file for versa executable versa
########################################################################

########################################################################
# versa

# versa_exe TARGET
#
versa_exe_TARGET = versa

# versa_exe INCLUDEPATH
#
versa_exe_INCLUDEPATH += \
$${versa_INCLUDEPATH} \

# versa_exe DEFINES
#
versa_exe_DEFINES += \
$${versa_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_VERSA_MAIN_INSTANCE \

########################################################################
# versa_exe OBJECTIVE_HEADERS
#
#versa_exe_OBJECTIVE_HEADERS += \
#$${VERSA_SRC}/versa/base/Base.hh \

# versa_exe OBJECTIVE_SOURCES
#
#versa_exe_OBJECTIVE_SOURCES += \
#$${VERSA_SRC}/versa/base/Base.mm \

########################################################################
# versa_exe HEADERS
#
versa_exe_HEADERS += \
$${VERSA_SRC}/xos/app/console/versa/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/versa/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# versa_exe SOURCES
#
versa_exe_SOURCES += \
$${VERSA_SRC}/xos/app/console/versa/main_opt.cpp \
$${VERSA_SRC}/xos/app/console/versa/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# versa_exe FRAMEWORKS
#
versa_exe_FRAMEWORKS += \
$${versa_FRAMEWORKS} \

# versa_exe LIBS
#
versa_exe_LIBS += \
$${versa_LIBS} \


