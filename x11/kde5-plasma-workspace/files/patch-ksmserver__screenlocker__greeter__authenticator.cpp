--- ./ksmserver/screenlocker/greeter/authenticator.cpp.orig	2014-07-10 18:30:26.000000000 +0200
+++ ./ksmserver/screenlocker/greeter/authenticator.cpp	2014-07-18 07:21:22.000000000 +0200
@@ -35,6 +35,8 @@
 #include <sys/socket.h>
 #include <sys/wait.h>
 
+#include <errno.h>
+
 Authenticator::Authenticator(QObject *parent)
     : QObject(parent)
     , m_graceLockTimer(new QTimer(this))
