# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       kinfocenter
CATEGORIES=     sysutils # kde-plasma
COMMENT=        KDE5 kinfocenter 

USE_QT5=        xml dbus network printsupport gui widgets core
USE_KDE5=       kdeprefix auth codecs guiaddons archive itemviews globalaccel \
                sonnet textwidgets attica crash designerplugin emoticons      \
                itemmodels init notifications bookmarks jobwidgets parts      \
                unitconversion completion config configwidgets coreaddons     \
                dbusaddons doctools i18n iconthemes kcmutils kdelibs4support  \
                kio ecm plasma-framework service solid widgetsaddons windowsystem xmlgui

# TODO	-- this should be handled correctly...
LDFLAGS+=-ldevinfo

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

