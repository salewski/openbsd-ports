# $OpenBSD: Makefile,v 1.47 2020/09/25 09:56:19 stsp Exp $

COMMENT-main =		game of trees version control system
COMMENT-web =		game of trees repository server for web browsers

V =			0.41
DISTNAME =		got-${V}
PKGNAME-main =		${DISTNAME}
PKGNAME-web =		gotweb-${V}
CATEGORIES =		devel
HOMEPAGE =		https://gameoftrees.org
MAINTAINER =		Stefan Sperling <stsp@openbsd.org>

# ISC
PERMIT_PACKAGE =	Yes

MULTI_PACKAGES =	-main -web

# uses pledge()
WANTLIB-main =		c curses panel pthread util z
WANTLIB-web =		c util z

MAKE_FLAGS =		CC="${CC}"
ALL_TARGET =		all web
INSTALL_TARGET =	install web-install

MASTER_SITES =		https://gameoftrees.org/releases/

DEBUG_PACKAGES =	${BUILD_PACKAGES}

BUILD_DEPENDS =		www/kcgi>=0.12.0

# some tests will fail without working non-interactive 'ssh 127.0.0.1'
TEST_IS_INTERACTIVE =	Yes
TEST_DEPENDS =		devel/git \
			${PKGPATH}=${V}

PREFIX-web =		${VARBASE}/www
TEST_TARGET =		regress
FAKE_FLAGS =		MANDIR=${PREFIX}/man/man CHROOT_DIR=${VARBASE}/www

.include <bsd.port.mk>
