#
# Collect stuff shared over [nearly] all kde5-framworks ports in one location
#

PKGNAMEPREFIX?=			kde5-

MAINTAINER?=			kde@FreeBSD.org

PORTVERSION?=			${KDE5_FRAMEWORKS_VERSION}
MASTER_SITES?=			${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}
DIST_SUBDIR?=			KDE/frameworks/${KDE5_FRAMEWORKS_VERSION}

USES+=					cmake tar:xz
USE_LDCONFIG=			yes


