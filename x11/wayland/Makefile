# Created by: kwm@FreeBSD.org
# $FreeBSD$

PORTNAME=	wayland
PORTVERSION=	1.6.91
CATEGORIES=	x11
MASTER_SITES=	http://rainbow-runner.nl/freebsd/
#http://wayland.freedesktop.org/releases/

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Wayland composite "server"

LIB_DEPENDS=	libexpat.so:${PORTSDIR}/textproc/expat2 \
		libffi.so:${PORTSDIR}/devel/libffi

USES=		gmake libtool pathfix pkgconfig tar:xz
USE_GNOME=	libxslt:build
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-documentation

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
