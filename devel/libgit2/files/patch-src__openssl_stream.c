--- src/openssl_stream.c.orig	2015-01-22 20:26:32.580903285 +0100
+++ src/openssl_stream.c	2015-01-22 20:29:29.880892804 +0100
@@ -12,6 +12,8 @@
 #include <openssl/x509v3.h>
 
 #include <ctype.h>
+#include <sys/socket.h>
+#include <netinet/in.h>
 
 #include "global.h"
 #include "posix.h"
