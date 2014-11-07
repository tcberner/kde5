--- ./src/core/connectionbackend.cpp.orig	2014-07-17 14:51:38.000000000 +0200
+++ ./src/core/connectionbackend.cpp	2014-07-17 14:52:40.000000000 +0200
@@ -138,7 +138,8 @@
         const QString prefix = QStandardPaths::writableLocation(QStandardPaths::RuntimeLocation);
         static QBasicAtomicInt s_socketCounter = Q_BASIC_ATOMIC_INITIALIZER(0);
         s_socketCounter.ref();
-        QTemporaryFile socketfile(prefix + QLatin1Char('/') + QCoreApplication::instance()->applicationName() + QString("XXXXXX.%1.slave-socket").arg(s_socketCounter));
+        int v = s_socketCounter.load();
+        QTemporaryFile socketfile(prefix + QLatin1Char('/') + QCoreApplication::instance()->applicationName() + QString("XXXXXX.%1.slave-socket").arg(v));
         if (!socketfile.open()) {
             errorString = i18n("Unable to create io-slave: %1", strerror(errno));
             return false;
