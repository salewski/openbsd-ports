# $OpenBSD: Makefile.inc,v 1.26 2020/09/07 11:48:30 landry Exp $

MODPY_EGG_VERSION ?=	2.8.4
DISTNAME ?=	buildbot-${PART}-${MODPY_EGG_VERSION}
PKGNAME ?=	py-${DISTNAME:S/post/pl/}

CATEGORIES =	devel devel/py-buildbot

HOMEPAGE ?=	https://buildbot.net/

# GPLv2
PERMIT_PACKAGE =	Yes

MODPY_PI =	Yes

MODULES =	lang/python

MODPY_SETUPTOOLS = Yes

MODPY_VERSION =	${MODPY_DEFAULT_VERSION_3}
