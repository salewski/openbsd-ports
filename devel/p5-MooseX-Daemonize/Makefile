# $OpenBSD: Makefile,v 1.7 2020/07/03 21:45:01 sthen Exp $

COMMENT =	role for daemonizing your Moose based application

MODULES =	cpan
PKG_ARCH =	*
DISTNAME =	MooseX-Daemonize-0.21
CATEGORIES =	devel
FIX_EXTRACT_PERMISSIONS =	Yes
REVISION =	0

# same as perl
PERMIT_PACKAGE =	Yes

CONFIGURE_STYLE =	modbuild tiny

BUILD_DEPENDS =	devel/p5-Devel-CheckOS
RUN_DEPENDS =	devel/p5-Moose \
		devel/p5-MooseX-Getopt>=0.62 \
		devel/p5-MooseX-Types-Path-Class
TEST_DEPENDS =	devel/p5-Test-Fatal

MAKE_ENV +=	TEST_POD=Yes

.include <bsd.port.mk>
