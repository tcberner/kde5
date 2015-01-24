--- kcms/keyboard/preview/kbpreviewframe.cpp.orig	2015-01-17 23:24:56 UTC
+++ kcms/keyboard/preview/kbpreviewframe.cpp
@@ -181,18 +181,17 @@ void KbPreviewFrame::drawShape(QPainter 
 
             drawKeySymbols(painter, temp, s, name);
         } else {
-            QPoint temp[cordi_count];
-
+            QVarLengthArray<QPoint> temp(cordi_count);
             for (int i = 0; i < cordi_count; i++) {
                 temp[i].setX(scaleFactor * (s.getCordii(i).x() + x + 1));
                 temp[i].setY(scaleFactor * (s.getCordii(i).y() + y + 1));
             }
 
-            painter.drawPolygon(temp, cordi_count);
-            drawKeySymbols(painter, temp, s, name);
+            painter.drawPolygon(temp.data(), cordi_count);
+            drawKeySymbols(painter, temp.data(), s, name); // no length passed check here, is this safe?
         }
     } else {
-        QPoint temp[cordi_count == 1 ? 4 : cordi_count];
+        QVarLengthArray<QPoint> temp(cordi_count == 1 ? 4 : cordi_count);
         int size;
 
         if (cordi_count == 1) {
@@ -239,8 +238,8 @@ void KbPreviewFrame::drawShape(QPainter 
             qCDebug(KEYBOARD_PREVIEW) <<temp[i];
         }*/
 
-        painter.drawPolygon(temp, size);
-        drawKeySymbols(painter, temp, s, name);
+        painter.drawPolygon(temp.data(), size);
+        drawKeySymbols(painter, temp.data(), s, name); // no length passed check here, is this safe?
     }
 
 }
