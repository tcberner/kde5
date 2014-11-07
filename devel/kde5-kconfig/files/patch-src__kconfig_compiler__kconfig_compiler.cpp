--- ./src/kconfig_compiler/kconfig_compiler.cpp.orig	2014-07-01 20:27:51.000000000 +0200
+++ ./src/kconfig_compiler/kconfig_compiler.cpp	2014-07-16 18:02:48.000000000 +0200
@@ -46,8 +46,8 @@
 
 namespace
 {
-QTextStream cout(stdout);
-QTextStream cerr(stderr);
+QTextStream kc_cout(stdout);
+QTextStream kc_cerr(stderr);
 }
 
 QStringList allNames;
@@ -69,7 +69,7 @@
         nameSpace = codegenConfig.value("NameSpace").toString();
         className = codegenConfig.value("ClassName").toString();
         if (className.isEmpty()) {
-            cerr << "Class name missing" << endl;
+            kc_cerr << "Class name missing" << endl;
             exit(1);
         }
         inherits = codegenConfig.value("Inherits").toString();
@@ -102,7 +102,7 @@
             translationSystem = KdeTranslation;
         } else {
             if (!trString.isEmpty() && trString != "qt") {
-                cerr << "Unknown translation system, falling back to Qt tr()" << endl;
+                kc_cerr << "Unknown translation system, falling back to Qt tr()" << endl;
             }
             translationSystem = QtTranslation;
         }
@@ -410,27 +410,27 @@
 
     void dump() const
     {
-        cerr << "<entry>" << endl;
-        cerr << "  group: " << mGroup << endl;
-        cerr << "  type: " << mType << endl;
-        cerr << "  key: " << mKey << endl;
-        cerr << "  name: " << mName << endl;
-        cerr << "  label context: " << mLabelContext << endl;
-        cerr << "  label: " << mLabel << endl;
+        kc_cerr << "<entry>" << endl;
+        kc_cerr << "  group: " << mGroup << endl;
+        kc_cerr << "  type: " << mType << endl;
+        kc_cerr << "  key: " << mKey << endl;
+        kc_cerr << "  name: " << mName << endl;
+        kc_cerr << "  label context: " << mLabelContext << endl;
+        kc_cerr << "  label: " << mLabel << endl;
 // whatsthis
-        cerr << "  code: " << mCode << endl;
-//      cerr << "  values: " << mValues.join(":") << endl;
+        kc_cerr << "  code: " << mCode << endl;
+//      kc_cerr << "  values: " << mValues.join(":") << endl;
 
         if (!param().isEmpty()) {
-            cerr << "  param name: " << mParamName << endl;
-            cerr << "  param type: " << mParamType << endl;
-            cerr << "  paramvalues: " << mParamValues.join(QChar::fromLatin1(':')) << endl;
+            kc_cerr << "  param name: " << mParamName << endl;
+            kc_cerr << "  param type: " << mParamType << endl;
+            kc_cerr << "  paramvalues: " << mParamValues.join(QChar::fromLatin1(':')) << endl;
         }
-        cerr << "  default: " << mDefaultValue << endl;
-        cerr << "  hidden: " << mHidden << endl;
-        cerr << "  min: " << mMin << endl;
-        cerr << "  max: " << mMax << endl;
-        cerr << "</entry>" << endl;
+        kc_cerr << "  default: " << mDefaultValue << endl;
+        kc_cerr << "  hidden: " << mHidden << endl;
+        kc_cerr << "  min: " << mMin << endl;
+        kc_cerr << "  max: " << mMax << endl;
+        kc_cerr << "</entry>" << endl;
     }
 
 private:
@@ -762,18 +762,18 @@
             param = e.attribute("name");
             paramType = e.attribute("type");
             if (param.isEmpty()) {
-                cerr << "Parameter must have a name: " << dumpNode(e) << endl;
+                kc_cerr << "Parameter must have a name: " << dumpNode(e) << endl;
                 return 0;
             }
             if (paramType.isEmpty()) {
-                cerr << "Parameter must have a type: " << dumpNode(e) << endl;
+                kc_cerr << "Parameter must have a type: " << dumpNode(e) << endl;
                 return 0;
             }
             if ((paramType == "Int") || (paramType == "UInt")) {
                 bool ok;
                 paramMax = e.attribute("max").toInt(&ok);
                 if (!ok) {
-                    cerr << "Integer parameter must have a maximum (e.g. max=\"0\"): "
+                    kc_cerr << "Integer parameter must have a maximum (e.g. max=\"0\"): "
                          << dumpNode(e) << endl;
                     return 0;
                 }
@@ -789,13 +789,13 @@
                     }
                 }
                 if (paramValues.isEmpty()) {
-                    cerr << "No values specified for parameter '" << param
+                    kc_cerr << "No values specified for parameter '" << param
                          << "'." << endl;
                     return 0;
                 }
                 paramMax = paramValues.count() - 1;
             } else {
-                cerr << "Parameter '" << param << "' has type " << paramType
+                kc_cerr << "Parameter '" << param << "' has type " << paramType
                      << " but must be of type int, uint or Enum." << endl;
                 return 0;
             }
@@ -815,7 +815,7 @@
                     CfgEntry::Choice choice;
                     choice.name = e2.attribute("name");
                     if (choice.name.isEmpty()) {
-                        cerr << "Tag <choice> requires attribute 'name'." << endl;
+                        kc_cerr << "Tag <choice> requires attribute 'name'." << endl;
                     }
                     for (QDomElement e3 = e2.firstChildElement(); !e3.isNull(); e3 = e3.nextSiblingElement()) {
                         if (e3.tagName() == "label") {
@@ -845,7 +845,7 @@
 
     bool nameIsEmpty = name.isEmpty();
     if (nameIsEmpty && key.isEmpty()) {
-        cerr << "Entry must have a name or a key: " << dumpNode(element) << endl;
+        kc_cerr << "Entry must have a name or a key: " << dumpNode(element) << endl;
         return 0;
     }
 
@@ -857,18 +857,18 @@
         name = key;
         name.remove(' ');
     } else if (name.contains(' ')) {
-        cout << "Entry '" << name << "' contains spaces! <name> elements can not contain spaces!" << endl;
+        kc_cout << "Entry '" << name << "' contains spaces! <name> elements can not contain spaces!" << endl;
         name.remove(' ');
     }
 
     if (name.contains("$(")) {
         if (param.isEmpty()) {
-            cerr << "Name may not be parameterized: " << name << endl;
+            kc_cerr << "Name may not be parameterized: " << name << endl;
             return 0;
         }
     } else {
         if (!param.isEmpty()) {
-            cerr << "Name must contain '$(" << param << ")': " << name << endl;
+            kc_cerr << "Name must contain '$(" << param << ")': " << name << endl;
             return 0;
         }
     }
@@ -903,13 +903,13 @@
                 if (!ok) {
                     i = paramValues.indexOf(index);
                     if (i == -1) {
-                        cerr << "Index '" << index << "' for default value is unknown." << endl;
+                        kc_cerr << "Index '" << index << "' for default value is unknown." << endl;
                         return 0;
                     }
                 }
 
                 if ((i < 0) || (i > paramMax)) {
-                    cerr << "Index '" << i << "' for default value is out of range [0, " << paramMax << "]." << endl;
+                    kc_cerr << "Index '" << i << "' for default value is out of range [0, " << paramMax << "]." << endl;
                     return 0;
                 }
 
@@ -926,20 +926,20 @@
 
     if (!validNameRegexp->exactMatch(name)) {
         if (nameIsEmpty)
-            cerr << "The key '" << key << "' can not be used as name for the entry because "
+            kc_cerr << "The key '" << key << "' can not be used as name for the entry because "
                  "it is not a valid name. You need to specify a valid name for this entry." << endl;
         else {
-            cerr << "The name '" << name << "' is not a valid name for an entry." << endl;
+            kc_cerr << "The name '" << name << "' is not a valid name for an entry." << endl;
         }
         return 0;
     }
 
     if (allNames.contains(name)) {
         if (nameIsEmpty)
-            cerr << "The key '" << key << "' can not be used as name for the entry because "
+            kc_cerr << "The key '" << key << "' can not be used as name for the entry because "
                  "it does not result in a unique name. You need to specify a unique name for this entry." << endl;
         else {
-            cerr << "The name '" << name << "' is not unique." << endl;
+            kc_cerr << "The name '" << name << "' is not unique." << endl;
         }
         return 0;
     }
@@ -1026,7 +1026,7 @@
     } else if (type == "urllist") {
         return "const QList<QUrl> &";
     } else {
-        cerr << "kconfig_compiler_kf5 does not support type \"" << type << "\"" << endl;
+        kc_cerr << "kconfig_compiler_kf5 does not support type \"" << type << "\"" << endl;
         return "QString"; //For now, but an assert would be better
     }
 }
@@ -1080,7 +1080,7 @@
     } else if (type == "urllist") {
         return "QList<QUrl>";
     } else {
-        cerr << "kconfig_compiler_kf5 does not support type \"" << type << "\"" << endl;
+        kc_cerr << "kconfig_compiler_kf5 does not support type \"" << type << "\"" << endl;
         return "QString"; //For now, but an assert would be better
     }
 }
@@ -1131,7 +1131,7 @@
     } else if (type == "urllist") {
         return "QList<QUrl>()";
     } else {
-        cerr << "Error, kconfig_compiler_kf5 does not support the \"" << type << "\" type!" << endl;
+        kc_cerr << "Error, kconfig_compiler_kf5 does not support the \"" << type << "\" type!" << endl;
         return "QString"; //For now, but an assert would be better
     }
 }
@@ -1545,22 +1545,22 @@
     parser.process(app);
 
     if (parser.isSet(licenseOption)) {
-	cout << "Copyright 2003 Cornelius Schumacher, Waldo Bastian, Zack Rusin," << endl;
-        cout << "    Reinhold Kainhofer, Duncan Mac-Vicar P., Harald Fernengel" << endl;
-        cout << "This program comes with ABSOLUTELY NO WARRANTY." << endl;
-        cout << "You may redistribute copies of this program" << endl;
-        cout << "under the terms of the GNU Library Public License." << endl;
-        cout << "For more information about these matters, see the file named COPYING." << endl;
+	kc_cout << "Copyright 2003 Cornelius Schumacher, Waldo Bastian, Zack Rusin," << endl;
+        kc_cout << "    Reinhold Kainhofer, Duncan Mac-Vicar P., Harald Fernengel" << endl;
+        kc_cout << "This program comes with ABSOLUTELY NO WARRANTY." << endl;
+        kc_cout << "You may redistribute copies of this program" << endl;
+        kc_cout << "under the terms of the GNU Library Public License." << endl;
+        kc_cout << "For more information about these matters, see the file named COPYING." << endl;
         return 0;
     }
 
     const QStringList args = parser.positionalArguments();
     if (args.count() < 2) {
-	cerr << "Too few arguments." << endl;
+	kc_cerr << "Too few arguments." << endl;
 	return 1;
     }
     if (args.count() > 2) {
-	cerr << "Too many arguments." << endl;
+	kc_cerr << "Too many arguments." << endl;
 	return 1;
     }
     inputFilename = args.at(0);
@@ -1576,7 +1576,7 @@
         baseDir.append("/");
 
     if (!codegenFilename.endsWith(QLatin1String(".kcfgc"))) {
-        cerr << "Codegen options file must have extension .kcfgc" << endl;
+        kc_cerr << "Codegen options file must have extension .kcfgc" << endl;
         return 1;
     }
     QString baseName = QFileInfo(codegenFilename).fileName();
@@ -1591,15 +1591,15 @@
     int errorRow;
     int errorCol;
     if (!doc.setContent(&input, &errorMsg, &errorRow, &errorCol)) {
-        cerr << "Unable to load document." << endl;
-        cerr << "Parse error in " << inputFilename << ", line " << errorRow << ", col " << errorCol << ": " << errorMsg << endl;
+        kc_cerr << "Unable to load document." << endl;
+        kc_cerr << "Parse error in " << inputFilename << ", line " << errorRow << ", col " << errorCol << ": " << errorMsg << endl;
         return 1;
     }
 
     QDomElement cfgElement = doc.documentElement();
 
     if (cfgElement.isNull()) {
-        cerr << "No document in kcfg file" << endl;
+        kc_cerr << "No document in kcfg file" << endl;
         return 1;
     }
 
@@ -1639,7 +1639,7 @@
         } else if (tag == "group") {
             QString group = e.attribute("name");
             if (group.isEmpty()) {
-                cerr << "Group without name" << endl;
+                kc_cerr << "Group without name" << endl;
                 return 1;
             }
             for (QDomElement e2 = e.firstChildElement(); !e2.isNull(); e2 = e2.nextSiblingElement()) {
@@ -1650,14 +1650,14 @@
                 if (entry) {
                     entries.append(entry);
                 } else {
-                    cerr << "Can not parse entry." << endl;
+                    kc_cerr << "Can not parse entry." << endl;
                     return 1;
                 }
             }
         } else if (tag == "signal") {
             QString signalName = e.attribute("name");
             if (signalName.isEmpty()) {
-                cerr << "Signal without name." << endl;
+                kc_cerr << "Signal without name." << endl;
                 return 1;
             }
             Signal theSignal;
@@ -1668,7 +1668,7 @@
                     SignalArguments argument;
                     argument.type = e2.attribute("type");
                     if (argument.type.isEmpty()) {
-                        cerr << "Signal argument without type." << endl;
+                        kc_cerr << "Signal argument without type." << endl;
                         return 1;
                     }
                     argument.variableName = e2.text();
@@ -1682,22 +1682,22 @@
     }
 
     if (cfg.className.isEmpty()) {
-        cerr << "Class name missing" << endl;
+        kc_cerr << "Class name missing" << endl;
         return 1;
     }
 
     if (cfg.singleton && !parameters.isEmpty()) {
-        cerr << "Singleton class can not have parameters" << endl;
+        kc_cerr << "Singleton class can not have parameters" << endl;
         return 1;
     }
 
     if (!cfgFileName.isEmpty() && cfgFileNameArg) {
-        cerr << "Having both a fixed filename and a filename as argument is not possible." << endl;
+        kc_cerr << "Having both a fixed filename and a filename as argument is not possible." << endl;
         return 1;
     }
 
     if (entries.isEmpty()) {
-        cerr << "No entries." << endl;
+        kc_cerr << "No entries." << endl;
     }
 
 #if 0
@@ -1715,7 +1715,7 @@
 
     QFile header(baseDir + headerFileName);
     if (!header.open(QIODevice::WriteOnly)) {
-        cerr << "Can not open '" << baseDir  << headerFileName << "for writing." << endl;
+        kc_cerr << "Can not open '" << baseDir  << headerFileName << "for writing." << endl;
         return 1;
     }
 
@@ -1837,7 +1837,7 @@
         QList<Signal>::ConstIterator it, itEnd = signalList.constEnd();
         for (it = signalList.constBegin(); it != itEnd; val <<= 1) {
             if (!val) {
-                cerr << "Too many signals to create unique bit masks" << endl;
+                kc_cerr << "Too many signals to create unique bit masks" << endl;
                 exit(1);
             }
             Signal signal = *it;
@@ -2149,7 +2149,7 @@
 
     QFile implementation(baseDir + implementationFileName);
     if (!implementation.open(QIODevice::WriteOnly)) {
-        cerr << "Can not open '" << implementationFileName << "for writing."
+        kc_cerr << "Can not open '" << implementationFileName << "for writing."
              << endl;
         return 1;
     }
