# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	sonnet
CATEGORIES=	textproc # kde-framework
COMMENT=	KDE5 sonnet

USE_QT5=	core gui linguisttools widgets
USE_KDE5=	ecm kdeprefix

OPTIONS_DEFINE=	ASPELL HUNSPELL NLS
OPTIONS_SUB=	yes

ASPELL_LIB_DEPENDS=	libaspell.so:${PORTSDIR}/textproc/aspell
HUNSPELL_LIB_DEPENDS=	libhunspell-1.3.so:${PORTSDIR}/textproc/hunspell

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
