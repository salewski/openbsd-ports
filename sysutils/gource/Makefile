# $OpenBSD: Makefile,v 1.22 2020/01/16 09:46:58 gonzalo Exp $

COMMENT =	software version control visualization tool

DISTNAME =	gource-0.51
CATEGORIES =	sysutils graphics
HOMEPAGE =	https://gource.io/

MAINTAINER =	Gonzalo L. R. <gonzalo@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

MASTER_SITES =	https://github.com/acaudwell/Gource/releases/download/${DISTNAME}/

CONFIGURE_STYLE =	gnu noman
COMPILER =		base-clang ports-gcc


WANTLIB += GL GLEW GLU SDL2 SDL2_image boost_filesystem boost_system
WANTLIB += c freetype m pcre png pthread z ${COMPILER_LIBCXX}

BUILD_DEPENDS =		graphics/glm
LIB_DEPENDS =           devel/boost \
			devel/pcre \
			devel/sdl2-image \
			graphics/glew

post-install:
	@gzip -d ${PREFIX}/man/man1/gource.1.gz

.include <bsd.port.mk>
