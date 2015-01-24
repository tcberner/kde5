# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	extra-cmake-modules
PORTVERSION=	${KDE5_ECM_VERSION}
CATEGORIES=	devel # kde-framework
COMMENT=	Extra Modules for Cmake

USE_KDE5=	kdeprefix 
USES=		cmake:outsource tar:xz

CMAKE_ARGS=	-DATTICA_ENABLE_TESTS:BOOL=OFF 	\
		-DQT4_BUILD:BOOL=OFF		\
		-DBUILD_HTML_DOCS:BOOL=OFF	\
		-DBUILD_MAN_DOCS:BOOL=OFF	# do not want to depend on sphynx

INSTALL_TARGET=install # does not have install/strip target

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk> 
