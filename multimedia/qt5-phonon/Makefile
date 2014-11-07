# $FreeBSD$

PORTNAME=	phonon
DISTVERSION=	4.7.2
CATEGORIES=	multimedia
PKGNAMEPREFIX=	qt5-
MASTER_SITES=   KDE/stable/${PORTNAME}/${PORTVERSION}
DIST_SUBDIR=    KDE


MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 bindings for phonon

USE_QT5=	assistant_run core gui network printsupport webkit \
		widgets xml buildtools_build
USE_KDE5=	kdeprefix

USES=		cmake tar:xz
CMAKE_ARGS=     -DPHONON_BUILD_PHONON4QT5=ON

USE_LDCONFIG=	yes

.include <bsd.port.mk>
