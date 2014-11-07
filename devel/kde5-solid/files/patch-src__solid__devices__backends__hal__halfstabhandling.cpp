--- ./src/solid/devices/backends/hal/halfstabhandling.cpp.orig	2014-07-04 22:19:20.000000000 +0200
+++ ./src/solid/devices/backends/hal/halfstabhandling.cpp	2014-07-17 13:26:36.000000000 +0200
@@ -27,15 +27,9 @@
 #include <QtCore/QTextStream>
 #include <QtCore/QTime>
 
-#include <solid/soliddefs_p.h>
+#include <devices/soliddefs_p.h>
 #include <config-solid.h>
 
-#if HAVE_MNTENT_H
-#include <mntent.h>
-#elif defined(HAVE_SYS_MNTENT_H)
-#include <sys/mntent.h>
-#endif
-
 #ifdef Q_OS_SOLARIS
 #define FSTAB "/etc/vfstab"
 #else
@@ -86,27 +80,6 @@
 
     globalMountPointsCache->clear();
 
-#ifdef HAVE_SETMNTENT
-
-    FILE *fstab;
-    if ((fstab = setmntent(FSTAB, "r")) == 0) {
-        return;
-    }
-
-    struct mntent *fe;
-    while ((fe = getmntent(fstab)) != 0) {
-        if (!_k_isNetworkFileSystem(fe->mnt_type, fe->mnt_fsname)) {
-            const QString device = _k_resolveSymLink(QFile::decodeName(fe->mnt_fsname));
-            const QString mountpoint = _k_resolveSymLink(QFile::decodeName(fe->mnt_dir));
-
-            globalMountPointsCache->insert(device, mountpoint);
-        }
-    }
-
-    endmntent(fstab);
-
-#else
-
     QFile fstab(FSTAB);
     if (!fstab.open(QIODevice::ReadOnly)) {
         return;
@@ -143,7 +116,6 @@
     }
 
     fstab.close();
-#endif
 }
 
 bool Solid::Backends::Hal::FstabHandling::isInFstab(const QString &device)
