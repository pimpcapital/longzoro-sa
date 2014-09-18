export CC=gcc
export RM=rm -f
export AR=ar cr
export MV=mv
export RANLIB=ranlib
export SED=sed

export SHELL=/bin/sh

#
# Edit by ringo 19980606
# 19990723
#
#
#

INCFLAGS=-I. -I./include -I/usr/local/include

ARCHFLAGS="-arch i386 -arch x86_64"
CFLAGS=-Wall -g -ggdb3 $(INCFLAGS)
#Pentium 4 (Intel)
#CFLAGS=-march=pentium4 -O3 -pipe -fomit-frame-pointer $(INCFLAGS)
#Athlon XP (AMD)
#CFLAGS="-march=athlon-xp -O3 -pipe -fomit-frame-pointer" $(INCFLAGS)
#Athlon64
#CFLAGS="-O2 -march=athlon64 -ftracer -fprefetch-loop-arrays -pipe" $(INCFLAGS)

MYSQL= -lmysqlclient -L/usr/local/lib -lz

TOP=../..
PROG=./saac
SHELL = /bin/sh
PERL=/usr/bin/perl

RPCGEN=${TOP}/bin/lsgen.perl

RPCHTML = ${TOP}/doc/saacproto.html
#RPCSRC = saacproto_serv.c saacproto_util.csaacproto_sup.c 
RPCSRC = saacproto_serv.c saacproto_util.c 
RPCINCLUDE = saacproto_serv.h saacproto_util.h mac.h
RPCNOUSE = saacproto_cli.c saacproto_cli.h

SRC = main.c recv.c util.c char.c db.c mail.c acfamily.c lock.c sasql.c $(RPCSRC)
#SRC = main.c recv.c util.c char.c db.c mail.c acfamily.c lock.c $(RPCSRC)

OBJ=$(SRC:.c=.o)

${PROG} : $(RPCSRC) $(OBJ)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJ) $(MYSQL)

dos2unix:
	dos2unix $(SRC) ./include/*.h makefile

chmod:
	chmod 777 $(SRC) ./include/*.h makefile

depend: $(RPCSRC) $(ANIMDATAFILE)
	$(MV) makefile makefile.bak
	$(SED) -ne '1,/^# DO NOT DELETE THIS LINE/p' makefile.bak>makefile
	$(CC) $(INCFLAGS) -M $(SRC) >> makefile 
	
clean:
	$(RM) $(PROG)
	$(RM) $(OBJ)
	$(RM) *~

distclean:
	$(RM) $(CLIRPCSRC)
	$(RM) $(CLIRPCINCLUDE)
	$(RM) $(SERVRPCSRC)
	$(RM) $(SERVRPCINCLUDE)
	$(RM) $(ANIMDATAFILE)
	$(RM) include/*~

	$(RM) $(PROG)
	$(RM) $(OBJ)
	$(RM) *~

	$(MV) Makefile Makefile.bak
	$(SED) -ne '1,/^# DO NOT DELETE THIS LINE/p' Makefile.bak>Makefile
	$(RM) Makefile.bak

rpc : ${RPCHTML} ${RPCGEN}
	$(PERL) ${RPCGEN} ${RPCHTML} -h . -o .
	rm -f ${RPCNOUSE}

# DO NOT DELETE THIS LINE
main.o: main.c include/main.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/util.h include/mail.h include/db.h include/saacproto_util.h \
  include/saacproto_serv.h include/saacproto_util.h include/acfamily.h \
  include/version.h include/recv.h include/acfamily.h include/char.h \
  include/sasql.h /usr/include/signal.h /usr/include/getopt.h \
  /usr/include/fcntl.h /usr/include/sys/fcntl.h \
  /usr/include/netinet/tcp.h include/lock.h
recv.o: recv.c include/version.h include/main.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/saacproto_util.h include/saacproto_serv.h \
  include/saacproto_util.h include/recv.h include/acfamily.h \
  include/char.h include/db.h include/mail.h include/lock.h \
  include/util.h include/sasql.h include/acfamily.h
util.o: util.c /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/types.h \
  /usr/include/i386/types.h /usr/include/i386/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/sys/_structs.h \
  /usr/include/sys/socket.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/sys/time.h \
  /usr/include/time.h /usr/include/_types.h /usr/include/_structs.h \
  /usr/include/sys/_select.h /usr/include/sys/stat.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/netinet6/in6.h /usr/include/arpa/inet.h \
  /usr/include/stdio.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/machine/signal.h /usr/include/i386/signal.h \
  /usr/include/i386/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/alloca.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h /usr/include/dirent.h \
  /usr/include/sys/dirent.h /usr/include/netdb.h /usr/include/errno.h \
  /usr/include/sys/errno.h /usr/include/ctype.h /usr/include/runetype.h \
  include/main.h /usr/include/strings.h include/version.h include/util.h
char.o: char.c /usr/include/time.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h /usr/include/stdio.h \
  /usr/include/Availability.h /usr/include/AvailabilityInternal.h \
  /usr/include/secure/_stdio.h /usr/include/secure/_common.h \
  /usr/include/sys/types.h /usr/include/sys/appleapiopts.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/sys/stat.h \
  /usr/include/fcntl.h /usr/include/sys/fcntl.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h include/main.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/machine/signal.h /usr/include/i386/signal.h \
  /usr/include/i386/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/alloca.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/strings.h \
  /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/char.h include/saacproto_serv.h include/saacproto_util.h \
  include/util.h include/acfamily.h include/version.h include/lock.h \
  include/recv.h include/acfamily.h include/sasql.h
db.o: db.c include/db.h include/main.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/util.h include/version.h /usr/include/dirent.h \
  /usr/include/sys/dirent.h /usr/include/sys/stat.h
mail.o: mail.c include/main.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/mail.h include/util.h include/saacproto_serv.h \
  include/saacproto_util.h /usr/include/dirent.h \
  /usr/include/sys/dirent.h /usr/include/sys/stat.h
acfamily.o: acfamily.c include/version.h include/main.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/acfamily.h include/util.h include/saacproto_serv.h \
  include/saacproto_util.h /usr/include/dirent.h \
  /usr/include/sys/dirent.h /usr/include/sys/stat.h
lock.o: lock.c /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h include/lock.h include/version.h \
  include/main.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/arpa/inet.h \
  /usr/include/netdb.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h /usr/include/sys/_select.h \
  /usr/include/strings.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/time.h /usr/include/errno.h \
  /usr/include/sys/errno.h include/char.h
sasql.o: sasql.c include/version.h include/main.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/arpa/inet.h /usr/include/netdb.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/errno.h /usr/include/sys/errno.h include/version.h \
  include/sasql.h /usr/local/Cellar/mysql/5.5.28/include/mysql.h \
  /usr/local/Cellar/mysql/5.5.28/include/mysql_version.h \
  /usr/local/Cellar/mysql/5.5.28/include/mysql_com.h \
  /usr/local/Cellar/mysql/5.5.28/include/mysql_time.h \
  /usr/local/Cellar/mysql/5.5.28/include/my_list.h \
  /usr/local/Cellar/mysql/5.5.28/include/typelib.h \
  /usr/local/Cellar/mysql/5.5.28/include/my_alloc.h
saacproto_serv.o: saacproto_serv.c include/version.h \
  include/saacproto_serv.h include/version.h include/saacproto_util.h \
  /usr/include/stdlib.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/sys/wait.h \
  /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h \
  /usr/include/machine/signal.h /usr/include/i386/signal.h \
  /usr/include/i386/_structs.h /usr/include/sys/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h /usr/include/sys/_select.h include/main.h \
  /usr/include/stdio.h /usr/include/secure/_stdio.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/arpa/inet.h \
  /usr/include/netdb.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/time.h /usr/include/errno.h /usr/include/sys/errno.h
saacproto_util.o: saacproto_util.c include/version.h /usr/include/stdio.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  /usr/include/sys/_select.h /usr/include/strings.h include/main.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/arpa/inet.h \
  /usr/include/netdb.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/time.h /usr/include/errno.h /usr/include/sys/errno.h \
  include/version.h include/saacproto_util.h
