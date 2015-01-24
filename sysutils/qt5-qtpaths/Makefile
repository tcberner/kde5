# $FreeBSD$

PORTNAME=	qtpaths
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	sysutils
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Command line client to QStandardPaths

USE_QT5=	core
QT_DIST=	tools
USES=		qmake

PLIST_FILES=	${QT_BINDIR}/qtpaths

# see x11/qt5-qev
WRKSRC_SUBDIR=	src/${PORTNAME}
post-patch:
	${CP} ${WRKSRC}/../../.qmake.conf ${WRKSRC}

.include <bsd.port.mk>

