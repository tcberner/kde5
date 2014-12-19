# created by Tobias C. Berner <tcberner@gmail.com>
#
# Interface with kde public git
# > it only fetches ${KDEGIT_PROJECT}-latest.tar.gz


# to use the following variables have to be defined within the makefile
# * KDEGIT_PROJECT

KDEGIT_PROJECT?=	${PORTNAME}
DISTNAME?=		${KDEGIT_PROJECT}-latest

MASTER_SITES=		http://anongit.kde.org/${KDEGIT_PROJECT}/
USES?=			cmake

WRKSRC?=		${WRKDIR}/${KDEGIT_PROJECT}		

.if defined(KDEGIT_USEGITORIOUS) 
MASTER_SITES=https://gitorious.org/${KDEGIT_PROJECT}/master/archive/
DISTNAME=${KDEGIT_REVISION}
WRKSRC=				${WRKDIR}/${KDEGIT_PROJECT}-master
.endif

.if !defined(KDEGIT_USEGITORIOUS)
pre-configure:
	cd ${WRKSRC} && ./initrepo.sh
.endif
