# Created by: Tobias Berner <tcberner@gmail.com>

FORBIDDEN=	Is anyone really using this?

PORTNAME=	libdbusmenu-qt5
PORTVERSION=	20140619
CATEGORIES=	devel
MASTER_SITES=	https://launchpad.net/libdbusmenu-qt/trunk/0.9.2/+download/
WRKSRC=		${WRKDIR}/${PORTNAME}
DIST_SUBDIR=	KDE/plasma/${KDE5_VERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE5 libdbusmenu-qt

USE_QT5=	core dbus
USE_KDE5=	ecm kdeprefix

LIB_DEPENDS=	libqjson.so.0:${PORTSDIR}/devel/qt5-qjson

USE_LDCONFIG=	yes
USES=		cmake tar:bzip2

.include <bsd.port.mk>

