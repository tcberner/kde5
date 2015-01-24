# $FreeBSD$

# drop this port -> move to x11-themese/kde4-icons-oxygen
#kde4-icons-oxygen-4.14.2
PORTNAME=	oxygen
PORTVERSION=	4.14.2
CATEGORIES=	x11-themes kde
MASTER_SITES=	KDE/${KDE4_BRANCH}/${PORTVERSION}/src
PKGNAMEPREFIX=	kde5-icons-
DISTNAME=	${PORTNAME}-icons-${PORTVERSION}
DIST_SUBDIR=	KDE/${PORTVERSION}

FORBIDDEN=	"Use x11-themese/kde4-icons-oxygen"

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The Oxygen icon theme for KDE

USE_KDE5=	kdeprefix

USES=		cmake:outsource tar:xz
INSTALL_TARGET=	install

.include <bsd.port.mk>
