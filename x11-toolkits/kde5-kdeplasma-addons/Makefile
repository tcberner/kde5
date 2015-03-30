# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdeplasma-addons
CATEGORIES=	x11-toolkits # kde-framework
COMMENT=	KDE5 plasma addons

USE_QT5=	core gui linguisttools uitools widgets
USE_KDE5=	declarative ecm emoticons init itemmodels kcmutils \
		kdelibs4support kdeprefix plasma-framework runner \
		unitconversion

# TODO: do this better
USES=		cmake:outsource tar:xz gettext

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>
