# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	gwenview
CATEGORIES=	graphics # kde-applications
COMMENT=	KDE5 gwenview
PKGNAMEPREFIX=	kde5-

USE_QT5=	buildtools_build core dbus qmake_build
USE_KDE5=	activities ecm emoticons init itemmodels kdelibs4support kdeprefix kdeprefix


LIB_DEPENDS=	libexiv2.so:${PORTSDIR}/graphics/exiv2 \
		liblcms2.so:${PORTSDIR}/graphics/lcms2


.include "${.CURDIR}/../../x11/kde-applications/bsd.kde-applications.mk"
.include <bsd.port.mk>

