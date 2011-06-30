#
# Copyright (c) 2002-2006 by OpenMFG, LLC
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
#
# If you do not wish to be bound by the terms of the GNU General Public
# License, DO NOT USE THIS SOFTWARE.  Please contact OpenMFG, LLC at
# info@openmfg.com for details on how to purchase a commercial license.
#

include( ../../global.pri )

TEMPLATE = app
CONFIG += qt warn_on
INCLUDEPATH += ../common ../../common ../renderer . ../../MetaSQL

TARGET = RPTrender
unix:TARGET = rptrender

OBJECTS_DIR = tmp
MOC_DIR     = tmp
UI_DIR      = tmp

LIBS += -L../../lib -lrenderer -lcommon

DESTDIR = ../../bin

RC_FILE = renderapp.rc
macx:RC_FILE = ../images/OpenRPT.icns

# Input
FORMS   += ../../MetaSQL/newvariant.ui \
           ../../MetaSQL/booledit.ui \
           ../../MetaSQL/doubleedit.ui \
           ../../MetaSQL/intedit.ui \
           ../../MetaSQL/listedit.ui \
           ../../MetaSQL/stringedit.ui \
           renderlist.ui \
           renderwindow.ui

HEADERS += data.h \
           renderwindow.h \
           renderlist.h \
           ../../MetaSQL/newvariant.h \
           ../../MetaSQL/booledit.h \
           ../../MetaSQL/doubleedit.h \
           ../../MetaSQL/intedit.h \
           ../../MetaSQL/listedit.h \
           ../../MetaSQL/stringedit.h \
           ../../MetaSQL/qlistboxvariant.h

SOURCES += data.cpp \
           renderwindow.cpp \
           renderlist.cpp \
           ../../MetaSQL/newvariant.cpp \
           ../../MetaSQL/booledit.cpp \
           ../../MetaSQL/doubleedit.cpp \
           ../../MetaSQL/intedit.cpp \
           ../../MetaSQL/listedit.cpp \
           ../../MetaSQL/stringedit.cpp \
           ../../MetaSQL/qlistboxvariant.cpp \
           main.cpp

#The following line was inserted by qt3to4
QT += xml  sql qt3support 

