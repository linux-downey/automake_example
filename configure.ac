AC_PREREQ([2.69])
AC_INIT([Downey-package],[1.0.0],[linux_downey@sina.com])
AM_INIT_AUTOMAKE(-Wall)

AC_DEFINE([CUST_VALUE],[123],[Customize value])

LT_INIT
AC_PROG_CC
AC_PROG_RANLIB
AM_PROG_AR
AC_PROG_INSTALL
AC_PROG_MKDIR_P
AC_CHECK_FILE(/usr/bin/install,echo find file,echo can not find file)

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_SRCDIR([src/])
AC_CONFIG_FILES([
		Makefile
		src/Makefile
		src/share_lib/Makefile
		src/static_lib/Makefile
])

AC_OUTPUT



