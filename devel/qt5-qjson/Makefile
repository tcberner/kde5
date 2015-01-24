# $FreeBSD: head/devel/qjson/Makefile 363371 2014-07-29 18:41:15Z adamw $

# TODO merge/make compatible with existing qjson port
PORTNAME=	qjson
PKGNAMEPREFIX=	qt5-

PORTVERSION=	0.8.2
CATEGORIES=	devel

MAINTAINER=	avilla@FreeBSD.org
COMMENT=	Library to manage JSON objects with Qt5

CONFLICTS=	qjson-*

USE_GITHUB=	YES
GH_ACCOUNT=	flavio
GH_PROJECT=	qjson
GH_TAGNAME=	500f51b32fac7f06e2877e6053176e5dd6e1935f
GH_COMMIT=	500f51b # 500f51b32fac7f06e2877e6053176e5dd6e1935f

LICENSE=	LGPL21

USE_QT5=	qmake_build buildtools core 
USES=		cmake:outsource tar:bzip2

USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,/pkgconfig,/../libdata/pkgconfig,' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
