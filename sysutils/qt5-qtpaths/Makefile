# $FreeBSD$

PORTNAME=       qtpaths
DISTVERSION=    ${QT5_VERSION}
CATEGORIES=     sysutils
PKGNAMEPREFIX=  qt5-

MAINTAINER=     kde@FreeBSD.org
COMMENT=        Qt Paths utility

USE_QT5=        core buildtools_build xml
QT_DIST=        tools
USES=           qmake

USE_LDCONFIG=   ${PREFIX}/${QT_LIBDIR_REL}

BUILD_WRKSRC=   ${WRKSRC}/src/${PORTNAME}
INSTALL_WRKSRC= ${WRKSRC}/src/${PORTNAME}


.include <bsd.port.mk>


