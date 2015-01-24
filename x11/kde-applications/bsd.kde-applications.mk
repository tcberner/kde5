KDE_APPLICATIONS_VERSION=	14.12.1
MASTER_SITES?=			${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR?=		stable/applications/${KDE5_APPLICATIONS_VERSION}/src

PORTVERSION?=			${KDE_APPLICATIONS_VERSION}

USE_QT5+=	qmake_build buildtools_build
USE_KDE5+=	kdeprefix

USES+=		tar:xz cmake gettext pkgconfig
USE_LCONFIG=	yes
