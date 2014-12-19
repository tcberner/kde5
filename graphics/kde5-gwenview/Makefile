# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       gwenview
CATEGORIES=     graphics # kde-plasma
COMMENT=        KDE5 gwenview (git version)

USE_QT5=        core dbus gui widgets script scripttools sql 
USE_KDE5=       kdeprefix ecm newstuff dbusaddons xmlgui windowsystem texteditor parts kio jobwidgets init i18n guiaddons config

LIB_DEPENDS=	libexiv2.so:${PORTSDIR}/graphics/exiv2 \
		liblcms2.so:${PORTSDIR}/graphics/lcms2

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-git.mk"
.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

