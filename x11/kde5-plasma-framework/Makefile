# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	plasma-framework
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 plasma framework

LIB_DEPENDS=	libXrandr.so.2:${PORTSDIR}/x11/libXrandr

USE_QT5=        network quick gui sql qml widgets svg script xml \
                dbus x11extras core
USE_KDE5=       kdeprefix doctools activities archive config auth\
                codecs widgetsaddons configwidgets dbusaddons    \
                itemviews completion sonnet textwidgets attica   \
                bookmarks jobwidgets solid declarative globalaccel\
                guiaddons i18n iconthemes kio service windowsystem\
                xmlgui ecm coreaddons

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
