# Created by: Tobias Berner <tcberner@gmail.com>
# $FreeBSD: ports/devel/kde5-kconfig/Makefile,v 1.6 2014/07/16c 18:48:25 makc Exp $

PORTNAME=       libdbusmenu-qt5
PORTVERSION=    20140619
CATEGORIES=     devel
MASTER_SITES=   https://launchpad.net/libdbusmenu-qt/trunk/0.9.2/+download/
WRKSRC=         ${WRKDIR}/${PORTNAME}
DIST_SUBDIR=    KDE/plasma/${KDE5_VERSION}

MAINTAINER=     kde@FreeBSD.org
COMMENT=        KDE5 libdbusmenu-qt

USE_QT5=        core dbus
USE_KDE5=       kdeprefix ecm

LIB_DEPENDS=	libqjson.so.0:${PORTSDIR}/devel/qt5-qjson
CMAKE_ARGS+=    -DWITH_DOC:BOOL=OFF
                
USE_LDCONFIG=   yes
USES=           cmake tar:bzip2

.include <bsd.port.mk>

