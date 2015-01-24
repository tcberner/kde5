# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kfilemetadata
PORTVERSION=	5.5.95

CATEGORIES=	devel # kde-plasma
COMMENT=	KDE5 kfilemetadata 

LIB_DEPENDS=	libpoppler-qt5.so:${PORTSDIR}/graphics/poppler-qt5 \
		libtag.so:${PORTSDIR}/audio/taglib \
		libexiv2.so:${PORTSDIR}/graphics/exiv2 \
		libavutil.so:${PORTSDIR}/multimedia/ffmpeg \
		libepub.so:${PORTSDIR}/textproc/ebook-tools
		
USE_QT5=	core dbus xml
USE_KDE5=	archive config coreaddons dbusaddons ecm i18n kdeprefix service

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

