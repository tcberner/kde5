--- src/kdeinit/kinit.cpp.orig	2014-10-04 17:06:15 UTC
+++ src/kdeinit/kinit.cpp
@@ -957,7 +957,8 @@
         memset(&sa, 0, socklen);
         sa.sun_family = AF_UNIX;
         strcpy(sa.sun_path, sock_file);
-        if (bind(d.wrapper, (struct sockaddr *)&sa, socklen) != 0) {
+        //use ::bind as 'bind' conflicts with std::bind
+        if (::bind(d.wrapper, (struct sockaddr *)&sa, socklen) != 0) {
             if (max_tries == 0) {
                 perror("kdeinit5: Aborting. bind() failed");
                 fprintf(stderr, "Could not bind to socket '%s'\n", sock_file);
