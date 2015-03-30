# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kio-extras
CATEGORIES=	devel # kde-plasma
COMMENT=	KDE5 kio-extras

USE_QT5=	core dbus gui network printsupport widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons designerplugin \
		dnssd doctools ecm emoticons globalaccel guiaddons i18n \
		iconthemes init itemmodels itemviews jobwidgets js \
		kdelibs4support kdeprefix khtml kio notifications parts \
		service solid sonnet textwidgets unitconversion wallet \
		widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	PHONON SAMBA MTP EXR EXIV SLP SSH DOCS NLS
OPTIONS_DEFAULT=PHONON SAMBA MTP EXR EXIV SLP SSH DOCS NLS
OPTIONS_SUB=	YES

PHONON_USE=		QT5=phonon5
PHONON_DESC=		Required for the audio preview plugin
SAMBA_LIB_DEPENDS=	libsmbclient.so:${PORTSDIR}/net/samba-libsmbclient
SAMBA_DESC=		Needed to build the SMB kioslave
MTP_LIB_DEPENDS=	libmtp.so:${PORTSDIR}/multimedia/libmtp
MTP_DESC=		Needed to build the MTP kioslave
EXR_LIB_DEPENDS=	libIlmImf.so:${PORTSDIR}/graphics/OpenEXR
EXR_DESC=		Provides support for OpenEXR formatted images in the thumbnail kioslave
EXIV_LIB_DEPENDS=	libexiv2.so:${PORTSDIR}/graphics/exiv2
EXIV_DESC=		Provides support for automatic rotation of JPEGs in the thumbnail kioslave
SLP_LIB_DEPENDS=	libslp.so:${PORTSDIR}/net/openslp
SLP_DESC=		Provides SLP support in the network:/ kioslave
SSH_LIB_DEPENDS=	libssh.so:${PORTSDIR}/security/libssh
SSH_DESC=		Needed to build the SFTP kioslave

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

