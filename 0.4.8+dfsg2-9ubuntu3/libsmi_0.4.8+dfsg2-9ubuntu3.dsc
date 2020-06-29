-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA1

Format: 3.0 (quilt)
Source: libsmi
Binary: smitools, smistrip, libsmi2ldbl, libsmi2-dev, libsmi2-dbg, libsmi2-common
Architecture: any all
Version: 0.4.8+dfsg2-9ubuntu3
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Homepage: http://www.ibr.cs.tu-bs.de/projects/libsmi/
Standards-Version: 3.9.5
Vcs-Browser: http://anonscm.debian.org/gitweb/?p=collab-maint/libsmi.git
Vcs-Git: git://anonscm.debian.org/collab-maint/libsmi.git
Build-Depends: flex, bison, debhelper (>= 9), dh-autoreconf
Package-List:
 libsmi2-common deb oldlibs extra arch=all
 libsmi2-dbg deb debug extra arch=any
 libsmi2-dev deb libdevel optional arch=any
 libsmi2ldbl deb libs optional arch=any
 smistrip deb libs optional arch=all
 smitools deb libs optional arch=any
Checksums-Sha1:
 a51044ae2d5f4a045354fa16245f3ae040999c40 1803126 libsmi_0.4.8+dfsg2.orig.tar.gz
 922ef0950289f1eafb94ab7956ce324c00eba307 14000 libsmi_0.4.8+dfsg2-9ubuntu3.debian.tar.xz
Checksums-Sha256:
 1d6894aa4aa73f8949ccb420a57e4e1275f8099c187771a41838e30a703269e8 1803126 libsmi_0.4.8+dfsg2.orig.tar.gz
 22960091e46b5448397b41e322fcaff3ddbcb6805567f1091a4e7b5cb32ec7e8 14000 libsmi_0.4.8+dfsg2-9ubuntu3.debian.tar.xz
Files:
 bc3c2e63930dfd97e44bd81480f503b6 1803126 libsmi_0.4.8+dfsg2.orig.tar.gz
 26e6dfe31f78ac61eb5367a2922a56ef 14000 libsmi_0.4.8+dfsg2-9ubuntu3.debian.tar.xz
Original-Maintainer: Vincent Bernat <bernat@debian.org>

-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iEYEARECAAYFAlRIJp4ACgkQStlRaw+TLJzZ2wCeLcIOMeQLQ9LK1xxzPJHxIdyp
Z0YAn3FcpFHb4U5MrUcg74C2MbQr4ymZ
=F7wJ
-----END PGP SIGNATURE-----
