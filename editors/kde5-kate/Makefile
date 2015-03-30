# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kate
CATEGORIES=	editors # kde-applications
COMMENT=	KDE5 kate
PKGNAMEPREFIX=	kde5-

USE_QT5=	core dbus script sql widgets
USE_KDE5=	config doctools ecm guiaddons i18n init \
		itemmodels jobwidgets kdeprefix kio \
		newstuff parts plasma-framework \
		texteditor threadweaver windowsystem \
		xmlgui

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=    YES

LIB_DEPENDS=	libgit2.so:${PORTSDIR}/devel/libgit2

.include "${.CURDIR}/../../x11/kde-applications/bsd.kde-applications.mk"
.include <bsd.port.mk>

