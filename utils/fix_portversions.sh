#!/bin/sh

NAMES="kde5-kdelibs4support    kde5-khtml      kde5-kjs        kde5-kjsembed   kde5-kmediaplayer       kde5-kross      kde5-krunner    kde5-attica     kde5-extra-cmake-modules-1.1.0.tar.xz   kde5-frameworkintegration       kde5-kactivities        kde5-kapidox    kde5-karchive   kde5-kauth      kde5-kbookmarks kde5-kcmutils   kde5-kcodecs    kde5-kcompletion        kde5-kconfig    kde5-kconfigwidgets     kde5-kcoreaddons        kde5-kcrash     kde5-kdbusaddons        kde5-kdeclarative       kde5-kded       kde5-kdesignerplugin    kde5-kdesu      kde5-kdewebkit  kde5-kdnssd     kde5-kguiaddons kde5-ki18n      kde5-kiconthemes        kde5-kidletime  kde5-kimageformats      kde5-kinit      kde5-kio        kde5-kitemmodels        kde5-kitemviews kde5-kjobwidgets        kde5-knewstuff  kde5-knotifications     kde5-knotifyconfig      kde5-kparts     kde5-kplotting  kde5-kpty       kde5-kservice   kde5-ktexteditor        kde5-ktextwidgets       kde5-kunitconversion    kde5-kwallet    kde5-kwidgetsaddons     kde5-kwindowsystem      kde5-kxmlgui    kde5-plasma-framework   kde5-solid      kde5-sonnet     kde5-threadweaver"


SUCC=""
FAIL=""
for pkg in ${NAMES} ; do
  echo "================ $pkg =========================="
  port=`find /usr/ports -type d -mindepth 2 -maxdepth 2 -name "${pkg}"`
  if [ $? ] ; then
    echo "==> ${port}"
    if [ -d ${port} ] ; then
      cd ${port}
      make deinstall clean
      make install clean
      if [ $? -eq 0 ] ; then
	SUCC="${SUCC} ${port}"
	echo -e "\033[32m${SUCC}\033[0m"
      else
	FAIL="${FAIL} ${port}"
	echo -e "\033[33m${FAIL}\033[0m"
      fi
    fi
  fi
done


echo "==========================================================="
echo -e "\033[32m${SUCC}"
echo -e "\033[33m${FAIL}"

echo "done."