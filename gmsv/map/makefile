export CC=gcc
export RM=rm -f
export AR=ar cr
export MV=mv
export RANLIB=ranlib
export SED=sed


export SHELL=/bin/sh

INCFLAGS=-I.. -I../include


CFLAGS=-O3 -w -g -ggdb3 $(INCFLAGS) 
#Pentium 4 (Intel)
#CFLAGS=-march=pentium4 -O3 -pipe -fomit-frame-pointer $(INCFLAGS)
#Athlon XP (AMD)
#CFLAGS="-march=athlon-xp -O3 -pipe -fomit-frame-pointer" $(INCFLAGS)
#CFLAGS="-O2 -march=athlon64 -ftracer -fprefetch-loop-arrays -pipe" $(INCFLAGS)

PROG=libmap.a

SRC=readmap.c map_deal.c map_util.c map_warppoint.c
OBJ=$(SRC:.c=.o)

ifeq (0,$(MAKELEVEL))
CC=gcc
RM=rm -f
AR=ar cr
MV=mv
RANLIB=ranlib
SED=sed
SHELL=/bin/sh
endif

all: $(PROG)

$(PROG): $(OBJ)
	$(RM) $(PROG)
	$(AR) $(PROG) $(OBJ)
	$(RANLIB) $(PROG)

depend:
	$(MV) makefile makefile.bak
	$(SED) -ne '1,/^# DO NOT DELETE THIS LINE/p' makefile.bak>makefile
	$(CC) $(INCFLAGS) -M $(SRC) >> makefile 

clean:
	$(RM) $(PROG)
	$(RM) $(OBJ)
	$(RM) *~

distclean:
	$(RM) $(PROG)
	$(RM) $(OBJ)
	$(RM) *~
	$(MV) makefile makefile.bak
	$(SED) -ne '1,/^# DO NOT DELETE THIS LINE/p' makefile.bak>makefile
	$(RM) makefile.bak

# DO NOT DELETE THIS LINE
readmap.o: readmap.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/i386/_types.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/dirent.h \
  /usr/include/sys/dirent.h /usr/include/errno.h /usr/include/sys/errno.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h /usr/include/sys/_select.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/sys/stat.h ../include/common.h \
  ../include/object.h ../include/common.h ../include/readmap.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/time.h \
  /usr/include/_structs.h ../include/buf.h ../include/util.h \
  ../include/char.h ../include/char_base.h ../include/version.h \
  ../include/skill.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/signal.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h ../include/link.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h ../include/configfile.h
map_deal.o: map_deal.c ../include/version.h ../include/correct_bug.h \
  ../include/common.h /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/readmap.h ../include/common.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/sys/_structs.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_select.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/char.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/title.h \
  ../include/addressbook.h ../include/net.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/signal.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h ../include/link.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/map_util.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/net.h ../include/anim_tbl.h
map_util.o: map_util.c ../include/version.h ../include/correct_bug.h \
  ../include/common.h /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char.h ../include/common.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/sys/_structs.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_select.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/readmap.h
map_warppoint.o: map_warppoint.c ../include/version.h \
  ../include/correct_bug.h /usr/include/string.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  ../include/common.h /usr/include/stdio.h /usr/include/secure/_stdio.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/char.h \
  ../include/common.h ../include/char_base.h ../include/version.h \
  ../include/skill.h ../include/util.h /usr/include/sys/time.h \
  /usr/include/sys/_structs.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_select.h /usr/include/stdlib.h \
  /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/object.h \
  ../include/buf.h ../include/util.h ../include/configfile.h \
  ../include/readmap.h ../include/map_warppoint.h
