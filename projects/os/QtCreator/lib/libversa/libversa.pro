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
#   File: libversa.pro
#
# Author: $author$
#   Date: 3/8/2021
#
# QtCreator .pro file for versa library libversa
########################################################################
include(../../../../../../build/QtCreator/versa.pri)
include(../../../../../build/QtCreator/versa.pri)
include(../../../../QtCreator/versa.pri)
include(../../versa.pri)
include(../../../../QtCreator/lib/libversa/libversa.pri)

TARGET = $${libversa_TARGET}
TEMPLATE = $${libversa_TEMPLATE}
CONFIG += $${libversa_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libversa_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libversa_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libversa_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libversa_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libversa_HEADERS} \
$${libversa_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libversa_SOURCES} \

########################################################################


