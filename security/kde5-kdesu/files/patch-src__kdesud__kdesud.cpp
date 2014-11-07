--- ./src/kdesud/kdesud.cpp.orig	2014-07-17 15:55:11.000000000 +0200
+++ ./src/kdesud/kdesud.cpp	2014-07-17 15:55:33.000000000 +0200
@@ -218,7 +218,7 @@
     strncpy(addr.sun_path, sock.constData(), sizeof(addr.sun_path)-1);
     addr.sun_path[sizeof(addr.sun_path)-1] = '\000';
     addrlen = SUN_LEN(&addr);
-    if (bind(sockfd, (struct sockaddr *)&addr, addrlen) < 0)
+    if (::bind(sockfd, (struct sockaddr *)&addr, addrlen) < 0)
     {
         qCritical() << "bind(): " << ERR << "\n";
         return -1;
