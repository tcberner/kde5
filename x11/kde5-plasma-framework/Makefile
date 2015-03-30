# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	plasma-framework
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 plasma framework

LIB_DEPENDS=	libXrandr.so.2:${PORTSDIR}/x11/libXrandr

USE_QT5=	core dbus gui network qml quick script sql svg \
		widgets x11extras xml
USE_KDE5=	activities archive attica auth bookmarks codecs \
		completion config configwidgets coreaddons \
		dbusaddons declarative doctools ecm globalaccel \
		guiaddons i18n iconthemes itemviews jobwidgets \
		kdeprefix kio kpackage service solid sonnet \
		textwidgets widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
