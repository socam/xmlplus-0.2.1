# DOXYGEN SUPPORT
include $(top_srcdir)/aminclude.am

# ensure the distribution of the doxygen configuration file
EXTRA_DIST = doxygen.cfg

ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = foreign
SUBDIRS = src include

AM_CXXFLAGS= -I/usr/local/include -I$(top_srcdir)/include

bin_PROGRAMS=mailsrun
mailsrun_SOURCES=main.cpp

mailsrun_LDADD = $(top_srcdir)/src/libmails.la /usr/local/lib/libxsdall.la 
mailsrun_LDFLAGS = -lexpat
