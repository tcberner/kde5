#!/bin/sh

if [ $# -gt 0 ] ; then
cd $1
fi

make clean && make && make && make makeplist | grep -v '^/you' | grep -v ldconfig | sed 's#%%QT_LIBDIR%%/%%QT_LIBDIR%%#%%QT_LIBDIR%%/lib#g' | grep -v '@dir' > pkg-plist
