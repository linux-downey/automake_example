SUBDIRS = share_lib/ static_lib/
bin_PROGRAMS = helloDowney
helloDowney_CFLAGS = -g -Istatic_lib -Ishare_lib
helloDowney_SOURCES = main.c
helloDowney_LDADD = static_lib/libstatic_hello.a  share_lib/libhello.la


