# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kactivities
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 activities

LIB_DEPENDS=	libboost_system.so.5:${PORTSDIR}/devel/boost-libs

USE_QT5=        network qml sql gui widgets xml core dbus
USE_KDE5=       kdeprefix dbusaddons auth codecs guiaddons widgetsaddons   \
                configwidgets itemviews iconthemes globalaccel completion  \
                sonnet textwidgets attica xmlgui bookmarks jobwidgets solid\
                kio ecm config coreaddons i18n service windowsystem        \
		declarative kcmutils

USES=		cmake:outsource

# hopefully fix crash -- TODO: still necessary?
CXXFLAGS+=      -fno-use-cxa-atexit

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
