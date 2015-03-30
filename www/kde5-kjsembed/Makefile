# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kjsembed
CATEGORIES=	www # kde-framework
COMMENT=	KDE5 jsembed
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=	core gui svg uitools widgets xml
USE_KDE5=	archive doctools ecm i18n js kdeprefix

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
