# $FreeBSD$

PORTNAME=	oxygen
CATEGORIES=	x11-themes kde
PKGNAMEPREFIX=	kde-icons-
DISTNAME=	${PORTNAME}-icons-${PORTVERSION}
DIST_SUBDIR=	KDE/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The Oxygen icon theme for KDE

USE_KDE4=	kdeprefix
USES=		cmake:outsource tar:xz
INSTALL_TARGET=	install
EXTRACT_AFTER_ARGS=	--exclude '${DISTNAME}/scalable'

.include "${.CURDIR}/../../x11/kde-applications/bsd.kde-applications.mk"
.include <bsd.port.mk>
