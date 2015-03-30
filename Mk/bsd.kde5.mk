# $FreeBSD$

# This is basically a copy of bsd.kde4.mk with some changes to match
# kde5

.if !defined(_POSTMKINCLUDED) && !defined(Kde5_Pre_Include)

# Please make sure all changes to this file are past through the maintainer.
# Do not commit them yourself (unless of course you're the Port's Wraith ;).
Kde5_Include_MAINTAINER=kde@FreeBSD.org
Kde5_Pre_Include=	bsd.kde5.mk

#
# This file contains some variable definitions that are supposed to make your
# life easier when dealing with ports related to the KDE Frameworks and Plasma 5.
# It's automatically included when ${USE_KDE5} is defined in a port's Makefile.
#
# KDE5 related ports can use this as follows:
#
# USE_KDE5=		kdehier kdelibs kdeprefix
#
# .include <bsd.port.mk>
#
# Additionally, '_build' and '_run' suffixes can be used to force components
# dependency type (e.g., 'marble_run'). If no suffix is set, a default
# dependency type will be used. If you want to force both types, add the
# component twice with both suffixes (e.g., 'pykde4_build pykde4_run').
#
# Available KDE5 components are:
#
# <todo>
#
# These read-only variables can be used in a port's Makefile:
#
# KDE5_PREFIX		- The place where KDE5 ports live. Currently it is
#			          ${LOCALBASE}.
#

KDE5_VERSION?=			5.2.2
KDE5_BRANCH?=           	stable

KDE5_FRAMEWORKS_VERSION?=	5.8.0
KDE5_FRAMEWORKS_BRANCH?= 	stable

KDE5_ECM_VERSION=		1.8.0

KDE5_PREFIX?=			${LOCALBASE}

# Help cmake to find files when testing ports with non-default PREFIX
CMAKE_ARGS+=	-DCMAKE_PREFIX_PATH="${KDE5_PREFIX};${LOCALBASE}" \
		-DCMAKE_MODULE_PATH="${KDE5_PREFIX};${LOCALBASE}" \
 		-DKDE5_BUILD_TESTS:BOOL=OFF                       \
		-DCMAKE_INSTALL_PREFIX=${KDE5_PREFIX} 		  \
		-DBUILD_TESTING:BOOL=OFF 

# ${PREFIX} and ${NO_MTREE} have to be defined in the pre-makefile section.
.if defined(USE_KDE5) && ${USE_KDE5:Mkdeprefix} != ""
. if ${.MAKEFLAGS:MPREFIX=*} == ""
PREFIX=		${KDE5_PREFIX}
USE_LDCONFIG=	yes
.  if ${KDE5_PREFIX} != ${LOCALBASE}
NO_MTREE=	yes
.  endif
. endif
.endif

PLIST_SUB+=	KDE5_PREFIX="${KDE5_PREFIX}" \
		KDE5_VERSION="${KDE5_VERSION}" \
		KDE5_FRAMEWORKS_VERSION="${KDE5_FRAMEWORKS_VERSION}" \
		KDE5_GENERIC_LIB_VERSION=${KDE5_VERSION} \
		KDE5_NON_GENERIC_LIB_VERSION=${KDE5_VERSION:S,^4,5,}

# Keep in sync with cmake/modules/PythonMacros.cmake
_PYTHON_SHORT_VER=	${PYTHON_VERSION:S/^python//:S/.//}
.if ${_PYTHON_SHORT_VER} > 31
PLIST_SUB+=	PYCACHE="__pycache__/" \
		PYC_SUFFIX=cpython-${_PYTHON_SHORT_VER}.pyc \
		PYO_SUFFIX=cpython-${_PYTHON_SHORT_VER}.pyo
.else
PLIST_SUB+=	PYCACHE="" \
		PYC_SUFFIX=pyc \
		PYO_SUFFIX=pyo
.endif

.endif # !defined(_POSTMKINCLUDED) && !defined(Kde5_Pre_Include)

.if defined(_POSTMKINCLUDED) && !defined(Kde5_Post_Include)

Kde5_Post_Include=	bsd.kde5.mk

#
# KDE5 components.
# Set ${component}_TYPE to 'build' or 'run' to specify default dependency type
# for ${component}; otherwise, it will default to 'build run'.
#


MAKE_JOBS_UNSAFE=Y

_USE_KDE5_FRAMEWORKS_ALL=	ecm activities archive attica auth	\
				bookmarks kcmutils codecs completion 	\
				config configwidgets coreaddons 	\
				crash dbusaddons declarative kded 	\
				kdelibs4support designerplugin 		\
				kdesu kdewebkit dnssd doctools 		\
				emoticons frameworkintegration 		\
				globalaccel guiaddons khtml i18n 	\
				iconthemes idletime imageformats 	\
				init kcmutils kio itemmodels itemviews 	\
				jobwidgets js jsembed kpackage newstuff \
				notifications notifyconfig parts 	\
				plasma-framework plotting pty kross 	\
				runner service solid sonnet 		\
				texteditor textwidgets threadweaver	\
				unitconversion wallet widgetsaddons	\
				windowsystem xmlgui
_USE_KDE5_PLASMA_ALL=		baloo breeze decoration kde-cli-tools 	\
				filemetadata helpcenter hotkeys 	\
				infocenter kio-extras libkscreen 	\
				libksysguard kmenuedit milou oxygen 	\
				oxygen-fonts plasma-desktop 		\
				plasma-workspace powerdevil 		\
				ksysguard systemsettings kwin kwrited	\
				icons-oxygen kdeplasma-addons 		\
				plasma-workspace-wallpapers wayland

_USE_KDE5_ALL=			kdeprefix			\
				${_USE_KDE5_FRAMEWORKS_ALL} 	\
				${_USE_KDE5_PLASMA_ALL}		\
				${_EXTRA_COMPONENTS_ALL}
                   
  

ecm_PORT=		devel/kde5-extra-cmake-modules
ecm_PATH=		${KDE5_PREFIX}/share/ECM/cmake/ECMConfig.cmake
			
attica_PORT=		x11-toolkits/kde5-attica
attica_PATH=		${KDE5_PREFIX}/lib/libKF5Attica.so

kpackage_PORT=          devel/kde5-kpackage
kpackage_PATH=          ${KDE5_PREFIX}/lib/libKF5Package.so

config_PORT=		devel/kde5-kconfig
config_PATH=		${KDE5_PREFIX}/lib/libKF5ConfigCore.so

i18n_PORT=		devel/kde5-ki18n
i18n_PATH=		${KDE5_PREFIX}/lib/libKF5I18n.so

dbusaddons_PORT=	devel/kde5-kdbusaddons
dbusaddons_PATH=	${KDE5_PREFIX}/lib/libKF5DBusAddons.so

windowsystem_PORT=	x11/kde5-kwindowsystem
windowsystem_PATH=	${KDE5_PREFIX}/lib/libKF5WindowSystem.so

coreaddons_PORT=	devel/kde5-kcoreaddons
coreaddons_PATH=	${KDE5_PREFIX}/lib/libKF5CoreAddons.so

crash_PORT=		devel/kde5-kcrash
crash_PATH=		${KDE5_PREFIX}/lib/libKF5Crash.so

archive_PORT=		archivers/kde5-karchive
archive_PATH=		${KDE5_PREFIX}/lib/libKF5Archive.so

doctools_PORT=		devel/kde5-kdoctools
doctools_PATH=		${KDE5_PREFIX}/bin/meinproc5

service_PORT=		devel/kde5-kservice
service_PATH=		${KDE5_PREFIX}/bin/kbuildsycoca5
 
guiaddons_PORT=		x11-toolkits/kde5-kguiaddons
guiaddons_PATH=		${KDE5_PREFIX}/lib/libKF5GuiAddons.so

auth_PORT=		devel/kde5-kauth
auth_PATH=		${KDE5_PREFIX}/lib/libKF5Auth.so

codecs_PORT=            textproc/kde5-kcodecs
codecs_PATH=            ${KDE5_PREFIX}/lib/libKF5Codecs.so

widgetsaddons_PORT=	x11-toolkits/kde5-kwidgetsaddons
widgetsaddons_PATH=	${KDE5_PREFIX}/lib/libKF5WidgetsAddons.so

configwidgets_PORT=	x11-toolkits/kde5-kconfigwidgets
configwidgets_PATH=	${KDE5_PREFIX}/lib/libKF5ConfigWidgets.so

itemviews_PORT=		x11-toolkits/kde5-kitemviews
itemviews_PATH=		${KDE5_PREFIX}/lib/libKF5ItemViews.so

solid_PORT=		devel/kde5-solid
solid_PATH=		${KDE5_PREFIX}/lib/libKF5Solid.so

jobwidgets_PORT=	x11-toolkits/kde5-kjobwidgets
jobwidgets_PATH=	${KDE5_PREFIX}/lib/libKF5JobWidgets.so

iconthemes_PORT=	x11-themes/kde5-kiconthemes
iconthemes_PATH=	${KDE5_PREFIX}/lib/libKF5IconThemes.so

completion_PORT=	x11-toolkits/kde5-kcompletion
completion_PATH=	${KDE5_PREFIX}/lib/libKF5Completion.so

sonnet_PORT=    	textproc/kde5-sonnet
sonnet_PATH=	        ${KDE5_PREFIX}/lib/libKF5SonnetCore.so

textwidgets_PORT=	x11-toolkits/kde5-ktextwidgets
textwidgets_PATH=	${KDE5_PREFIX}/lib/libKF5TextWidgets.so

globalaccel_PORT=	x11/kde5-kglobalaccel
globalaccel_PATH=       ${KDE5_PREFIX}/lib/libKF5GlobalAccel.so

xmlgui_PORT=		x11-toolkits/kde5-kxmlgui
xmlgui_PATH=		${KDE5_PREFIX}/lib/libKF5XmlGui.so

bookmarks_PORT=		devel/kde5-kbookmarks
bookmarks_PATH=		${KDE5_PREFIX}/lib/libKF5Bookmarks.so

notifications_PORT=	devel/kde5-knotifications
notifications_PATH=	${KDE5_PREFIX}/lib/libKF5Notifications.so

wallet_PORT=		sysutils/kde5-kwallet
wallet_PATH=		${KDE5_PREFIX}/lib/libKF5Wallet.so

kio_PORT=		devel/kde5-kio
kio_PATH=		${KDE5_PREFIX}/lib/libKF5KIOCore.so

activities_PORT=	x11/kde5-kactivities
activities_PATH=	${KDE5_PREFIX}/lib/libKF5Activities.so

kcmutils_PORT=		devel/kde5-kcmutils
kcmutils_PATH=		${KDE5_PREFIX}/lib/libKF5KCMUtils.so

unitconversion_PORT=	devel/kde5-kunitconversion
unitconversion_PATH=	${KDE5_PREFIX}/lib/libKF5UnitConversion.so

init_PORT=		x11/kde5-kinit
init_PATH=		${KDE5_PREFIX}/bin/kdeinit5

parts_PORT=		devel/kde5-kparts
parts_PATH=		${KDE5_PREFIX}/lib/libKF5Parts.so

plotting_PORT=		graphics/kde5-kplotting
plotting_PATH=		${KDE5_PREFIX}/lib/libKF5Plotting.so

kdewebkit_PORT=		www/kde5-kdewebkit
kdewebkit_PATH=		${KDE5_PREFIX}/lib/libKF5WebKit.so

designerplugin_PORT=	x11-toolkits/kde5-kdesignerplugin
designerplugin_PATH=	${KDE5_PREFIX}/lib/plugins/designer/kf5widgets.so

declarative_PORT=	devel/kde5-kdeclarative
declarative_PATH=	${KDE5_PREFIX}/lib/libKF5Declarative.so

kded_PORT=		x11/kde5-kded
kded_PATH=		${KDE5_PREFIX}/lib/libkdeinit5_kded5.so

kdelibs4support_PORT=	x11/kde5-kdelibs4support
kdelibs4support_PATH=	${KDE5_PREFIX}/lib/libKF5KDELibs4Support.so

dnssd_PORT=		dns/kde5-kdnssd
dnssd_PATH=		${KDE5_PREFIX}/lib/libKF5DNSSD.so

emoticons_PORT=		x11-themes/kde5-kemoticons
emoticons_PATH=		${KDE5_PREFIX}/lib/libKF5Emoticons.so

js_PORT=		www/kde5-kjs
js_PATH=		${KDE5_PREFIX}/lib/libKF5JS.so

khtml_PORT=		www/kde5-khtml
khtml_PATH=		${KDE5_PREFIX}/lib/libKF5KHtml.so

jsembed_PORT=		www/kde5-kjsembed
jsembed_PATH=		${KDE5_PREFIX}/lib/libKF5JsEmbed.so

itemmodels_PORT=	devel/kde5-kitemmodels
itemmodels_PATH=	${KDE5_PREFIX}/lib/libKF5ItemModels.so

idletime_PORT=		devel/kde5-kidletime
idletime_PATH=		${KDE5_PREFIX}/lib/libKF5IdleTime.so

newstuff_PORT=		devel/kde5-knewstuff
newstuff_PATH=		${KDE5_PREFIX}/lib/libKF5NewStuff.so

notifyconfig_PORT=	devel/kde5-knotifyconfig
notifyconfig_PATH=	${KDE5_PREFIX}/lib/libKF5NotifyConfig.so

frameworkintegration_PORT=	x11/kde5-frameworkintegration
frameworkintegration_PATH=	${KDE5_PREFIX}/lib/libKF5Style.so

pty_PORT=		devel/kde5-kpty
pty_PATH=		${KDE5_PREFIX}/lib/libKF5Pty.so

kdesu_PORT=		security/kde5-kdesu
kdesu_PATH=		${KDE5_PREFIX}/lib/libKF5Su.so

kross_PORT=		lang/kde5-kross
kross_PATH=		${KDE5_PREFIX}/lib/libKF5KrossCore.so

texteditor_PORT=	devel/kde5-ktexteditor
texteditor_PATH=	${KDE5_PREFIX}/lib/libKF5TextEditor.so

threadweaver_PORT=	devel/kde5-threadweaver
threadweaver_PATH=	${KDE5_PREFIX}/lib/libKF5ThreadWeaver.so

plasma-framework_PORT=	x11/kde5-plasma-framework
plasma-framework_PATH=	${KDE5_PREFIX}/lib/libKF5Plasma.so

imageformats_PORT=	graphics/kde5-kimageformats
imageformats_PATH=	${KDE5_PREFIX}/lib/plugins/imageformats/kimg_xcf.so

runner_PORT=		x11/kde5-krunner
runner_PATH=		${KDE5_PREFIX}/lib/libKF5Runner.so

libksysguard_PORT=	sysutils/kde5-libksysguard
libksysguard_PATH=	${KDE5_PREFIX}/lib/libksgrd.so

baloo_PORT=		sysutils/kde5-baloo
baloo_PATH=		${KDE5_PREFIX}/lib/libKF5Baloo.so

kwin_PORT=              x11-wm/kde5-kwin
kwin_PATH=              ${KDE5_PREFIX}/bin/kwin_x11

filemetadata_PORT=	devel/kde5-kfilemetadata
filemetadata_PATH=	${KDE5_PREFIX}/lib/libKF5FileMetaData.so

helpcenter_PORT=	sysutils/kde5-khelpcenter
helpcenter_PATH=	${KDE5_PREFIX}/bin/khelpcenter

kde-cli-tools_PORT=	sysutils/kde5-kde-cli-tools
kde-cli-tools_PATH=	${KDE5_PREFIX}/bin/kcmshell5

kio-extras_PORT=	devel/kde5-kio-extras
kio-extras_PATH=	${KDE5_PREFIX}/lib/libmolletnetwork.so.5

breeze_PORT=		x11-themes/kde5-breeze
breeze_PATH=		${KDE5_PREFIX}/share/QtCurve/Breeze.qtcurve

libkscreen_PORT=	x11/kde5-libkscreen
libkscreen_PATH=	${KDE5_PREFIX}/lib/libKF5Screen.so

kwrited_PORT=		devel/kde5-kwrited
kwrited_PATH=		${KDE5_PREFIX}/bin/kwrited

systemsettings_PORT=	sysutils/kde5-systemsettings
systemsettings_PATH=	${KDE5_PREFIX}/bin/systemsettings5

oxygen_PORT= 		x11-themes/kde5-oxygen
oxygen_PATH=		${KDE5_PREFIX}/lib/liboxygenstyle5.so

kmenuedit_PORT=		sysutils/kde5-kmenuedit
kmenuedit_PATH=		${KDE5_PREFIX}/lib/libkdeinit5_kmenuedit.so

plasma-workspace_PORT=	x11/kde5-plasma-workspace
plasma-workspace_PATH=	${KDE5_PREFIX}/lib/libkworkspace5.so

plasma-desktop_PORT=	x11/kde5-plasma-desktop
plasma-desktop_PATH=	${KDE5_PREFIX}/bin/krdb

hotkeys_PORT=		devel/kde5-khotkeys
hotkeys_PATH=		${KDE5_PREFIX}/lib/plugins/kcm_hotkeys.so

powerdevil_PORT=	sysutils/kde5-powerdevil
powerdevil_PATH=	${KDE5_PREFIX}/lib/libpowerdevilcore.so

ksysguard_PORT=		sysutils/kde5-ksysguard
ksysguard_PATH=		${KDE5_PREFIX}/bin/ksysguard

infocenter_PORT=	sysutils/kde5-kinfocenter
infocenter_PATH=	${KDE5_PREFIX}/bin/kinfocenter # ?

oxygen-fonts_PORT=	x11-fonts/kde5-oxygen-fonts
oxygen-fonts_PATH=	${KDE5_PREFIX}/share/fonts/truetype/oxygen/Oxygen-Sans.ttf

milou_PORT=		deskutils/kde5-milou
milou_PATH=		${KDE5_PREFIX}/lib/libmilou.so.5

icons-oxygen_PORT=	x11-themes/kde-icons-oxygen
icons-oxygen_PATH=	${KDE5_PREFIX}/share/icons/oxygen/index.theme

kdeplasma-addons_PORT=	x11-toolkits/kde5-kdeplasma-addons
kdeplasma-addons_PATH=	${KDE5_PREFIX}/lib/plugins/kcm_krunner_dictionary.so

plasma-workspace-wallpapers_PORT=	x11-themes/kde5-plasma-workspace-wallpapers
plasma-workspace-wallpapers_PATH=	${KDE5_PREFIX}/share/wallpapers/Dance_of_the_Spirits/contents/images/1280x1024.jpg

decoration_PORT=	x11-wm/kde5-kdecoration
decoration_PATH=	${KDE5_PREFIX}/lib/libkdecorations2.so

wayland_PORT=		x11/kde5-kwayland
wayland_PATH=		${KDE5_PREFIX}/lib/libKF5WaylandClient.so

#########################################################################################
#########################################################################################


# Iterate through components deprived of suffix.
.for component in ${USE_KDE5:O:u:C/_.+//}
  # Check that the component is valid.
. if ${_USE_KDE5_ALL:M${component}} != ""
   # Skip meta-components (e.g., kde5prefix).
.  if defined(${component}_PORT) && defined(${component}_PATH)
${component}_DEPENDS=	${${component}_PATH}:${PORTSDIR}/${${component}_PORT}
    # Check if a dependency type is explicitly requested.
.   if ${USE_KDE5:M${component}_*} != "" && ${USE_KDE5:M${component}} == ""
${component}_TYPE=	# empty
.    if ${USE_KDE5:M${component}_build} != ""
${component}_TYPE+=	build
.    endif
.    if ${USE_KDE5:M${component}_run} != ""
${component}_TYPE+=	run
.    endif
.   endif # ${USE_KDE5:M${component}_*} != "" && ${USE_KDE5:M${component}} == ""
    # If no dependency type is set, default to full dependency.
.   if !defined(${component}_TYPE)
${component}_TYPE=	build run
.   endif
    # Set real dependencies.
.   if ${${component}_TYPE:Mbuild} != ""
BUILD_DEPENDS+=		${${component}_DEPENDS}
.   endif
.   if ${${component}_TYPE:Mrun} != ""
RUN_DEPENDS+=		${${component}_DEPENDS}
.   endif
.  endif # defined(${component}_PORT) && defined(${component}_PATH)
. else # ! ${_USE_KDE5_ALL:M${component}} != ""
IGNORE=				can't be installed: unknown USE_KDE5 component '${component}'
. endif # ${_USE_KDE5_ALL:M${component}} != ""
.endfor

.endif # defined(_POSTMKINCLUDED) && !defined(Kde5_Post_Include)
