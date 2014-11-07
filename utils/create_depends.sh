#!/bin/sh

if [ $# = 1 ] ; then
cd $1
fi

make clean
deps=`make | grep -E '^ \*' | awk '{print $2}' | tr "[:upper:]" "[:lower:]"`


echo "========================================================="
echo ${deps}
echo "========================================================="
qt5deps=""
kf5deps=""
for d in ${deps} ; do 
    is_qt5=`echo "${d}" | grep -oE '^qt5'`
    is_kf5=`echo "${d}" | grep -oE '^kf5'`
    if [ "x${is_qt5}y" = "xqt5y" ] ; then
        c=`echo  "${d}" | sed 's#^qt5##g'`
        if [ "x${c}y" = "xtesty" ] ; then
            c=""
        fi
        qt5deps="${qt5deps} ${c}"
    elif [ "x${is_kf5}y" = "xkf5y" ] ; then
        c=`echo  "${d}" | sed 's#^kf5##g'`
        kf5deps="${kf5deps} ${c}"    
    fi
    if [ "x${d}y" = "xecmy" ] ; then
        kf5deps="${kf5deps} ${d}"    
    fi    
done

echo "========================================================="
echo -e "USE_QT5=\t"`echo "${qt5deps}" | sed 's#^ ##g'`
echo -e "USE_KDE5=\t"kdeprefix `echo ${kf5deps} | sed 's#^ ##g'`
echo "========================================================="
