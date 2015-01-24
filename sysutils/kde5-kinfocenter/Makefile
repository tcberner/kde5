# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kinfocenter
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 kinfocenter 

USE_QT5=	core dbus gui network printsupport widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons designerplugin \
		doctools ecm emoticons globalaccel guiaddons i18n iconthemes \
		init itemmodels itemviews jobwidgets kcmutils kdelibs4support \
		kdeprefix kio notifications parts plasma-framework service \
		solid sonnet textwidgets unitconversion wayland widgetsaddons \
		windowsystem xmlgui

LIB_DEPENDS=	libEGL.so:${PORTSDIR}/graphics/libEGL \
		libGLU.so:${PORTSDIR}/graphics/libGLU

# TODO	-- this should be handled correctly...
LDFLAGS+=-ldevinfo

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

