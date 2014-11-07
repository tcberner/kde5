--- ./kde-modules/KDECompilerSettings.cmake.orig	2014-07-16 17:43:20.000000000 +0200
+++ ./kde-modules/KDECompilerSettings.cmake	2014-07-16 17:44:28.000000000 +0200
@@ -107,7 +107,7 @@
     # See http://www.delorie.com/gnu/docs/glibc/libc_13.html, although
     # this define is for the benefit of other libc implementations
     # (since _GNU_SOURCE is defined below).
-    _kde_add_platform_definitions(-D_XOPEN_SOURCE=500)
+    #_kde_add_platform_definitions(-D_XOPEN_SOURCE=500)
 
     # Enable everything in GNU libc.  Any code using non-portable features
     # needs to perform feature tests, but this ensures that any such features
@@ -117,7 +117,7 @@
     # against the -lbsd-compat library (it changes the behaviour of some
     # functions).  This, however, means that strlcat and strlcpy are not
     # provided by glibc.
-    _kde_add_platform_definitions(-D_GNU_SOURCE)
+    #_kde_add_platform_definitions(-D_GNU_SOURCE)
 
     # Enable extra API for using 64-bit file offsets on 32-bit systems.
     # FIXME: this is included in _GNU_SOURCE in glibc; do other libc
