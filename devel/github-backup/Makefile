# $OpenBSD: Makefile,v 1.9 2020/07/15 20:59:36 edd Exp $

COMMENT =	 backup a github user or organization

MODPY_EGG_VERSION =	0.33.0
PKGNAME =	github-backup-${MODPY_EGG_VERSION}

GH_ACCOUNT =	josegonzalez
GH_PROJECT =	python-github-backup
GH_TAGNAME =	${MODPY_EGG_VERSION}

CATEGORIES =	devel

MAINTAINER =	Laurence Tratt <laurie@tratt.net>

# MIT license
PERMIT_PACKAGE =	Yes

MODULES =		lang/python
MODPY_SETUPTOOLS =	Yes
MODPY_VERSION =		${MODPY_DEFAULT_VERSION_3}

.include <bsd.port.mk>
