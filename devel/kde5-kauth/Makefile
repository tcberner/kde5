# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kauth 
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 auth 

LIB_DEPENDS=	libpolkit-qt5-agent-1.so:${PORTSDIR}/sysutils/polkit-qt5

USE_QT5=	core dbus gui linguisttools widgets
USE_KDE5=	coreaddons ecm kdeprefix

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
