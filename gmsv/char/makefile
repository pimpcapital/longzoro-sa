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

PROG=libchar.a

SRC=char_base.c char.c char_event.c char_data.c skill.c title.c\
addressbook.c chatmagic.c event.c char_walk.c encount.c pet.c \
enemy.c pet_event.c char_talk.c char_party.c char_item.c deathcontend.c \
chatroom.c petmail.c trade.c family.c defend.c char_angel.c

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
char_base.o: char_base.c ../include/version.h ../include/correct_bug.h \
  /usr/include/string.h /usr/include/_types.h /usr/include/sys/_types.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_structs.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/common.h /usr/include/stdio.h /usr/include/secure/_stdio.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_select.h \
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
  ../include/char.h ../include/char_base.h ../include/char_data.h \
  ../include/item.h ../include/buf.h ../include/magic.h \
  ../include/function.h ../include/npccreate.h ../include/configfile.h \
  ../include/title.h ../include/pet.h ../include/pet_skill.h \
  ../include/anim_tbl.h ../include/enemy.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/log.h
char.o: char.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/secure/_string.h /usr/include/sys/stat.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/sys/_select.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/net.h ../include/common.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/common.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/util.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/char_base.h ../include/char_data.h ../include/char.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/item.h ../include/item_event.h \
  ../include/buf.h ../include/object.h ../include/map_deal.h \
  ../include/saacproto_cli.h ../include/saacproto_util.h \
  ../include/readmap.h ../include/handletime.h ../include/char_event.h \
  ../include/npccreate.h ../include/addressbook.h ../include/magic_base.h \
  ../include/magic.h ../include/chatmagic.h ../include/configfile.h \
  ../include/log.h ../include/anim_tbl.h ../include/encount.h \
  ../include/battle.h ../include/pet_skill.h ../include/util.h \
  ../include/enemy.h ../include/npcutil.h ../include/pet.h \
  ../include/family.h ../include/defend.h ../include/correct_bug.h \
  ../include/npc_checkman.h ../include/profession_skill.h \
  ../include/chatroom.h
char_event.o: char_event.c ../include/version.h ../include/correct_bug.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h ../include/common.h /usr/include/stdio.h \
  /usr/include/Availability.h /usr/include/AvailabilityInternal.h \
  /usr/include/secure/_stdio.h /usr/include/secure/_common.h \
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
  ../include/char.h ../include/item_event.h ../include/net.h \
  ../include/item.h ../include/object.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/util.h ../include/char_data.h \
  ../include/readmap.h ../include/map_deal.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h ../include/npccreate.h \
  ../include/handletime.h ../include/anim_tbl.h ../include/family.h
char_data.o: char_data.c ../include/version.h ../include/correct_bug.h \
  /usr/include/string.h /usr/include/_types.h /usr/include/sys/_types.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/math.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/readmap.h ../include/common.h /usr/include/stdio.h \
  /usr/include/secure/_stdio.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/common.h ../include/util.h \
  ../include/anim_tbl.h ../include/battle.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/title.h \
  ../include/addressbook.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_data.h ../include/buf.h \
  ../include/item.h ../include/log.h ../include/pet.h ../include/enemy.h \
  ../include/char_base.h ../include/configfile.h defaultPlayer.h \
  ../ls2data.dat ../include/family.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h
skill.o: skill.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/secure/_string.h ../include/skill.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_select.h ../include/util.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/battle.h ../include/profession_skill.h
title.o: title.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/secure/_string.h /usr/include/ctype.h \
  /usr/include/runetype.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/title.h ../include/common.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_select.h ../include/char.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/title.h \
  ../include/addressbook.h ../include/net.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/signal.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h ../include/link.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/char_base.h ../include/item.h ../include/skill.h \
  ../include/buf.h ../include/util.h ../include/configfile.h
addressbook.o: addressbook.c ../include/version.h \
  ../include/correct_bug.h /usr/include/stdio.h /usr/include/sys/cdefs.h \
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
  /usr/include/secure/_string.h /usr/include/strings.h \
  ../include/addressbook.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/util.h /usr/include/sys/time.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_select.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/title.h \
  ../include/addressbook.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/handletime.h ../include/buf.h \
  ../include/net.h ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h ../include/object.h ../include/battle.h \
  ../include/configfile.h ../include/npcutil.h ../include/pet.h \
  ../include/petmail.h ../include/log.h
chatmagic.o: chatmagic.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/math.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_structs.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char.h ../include/common.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/sys/_select.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/util.h ../include/buf.h \
  ../include/npcutil.h ../include/char_base.h ../include/object.h \
  ../include/char_data.h ../include/handletime.h ../include/chatmagic.h \
  ../include/configfile.h ../include/readmap.h ../include/map_deal.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/log.h ../include/battle.h \
  ../include/pet.h ../include/enemy.h ../include/encount.h \
  ../include/magic_base.h ../include/magic.h ../include/pet_skill.h \
  ../include/pet_event.h ../include/item_gen.h ../include/mclient.h \
  ../include/npc_eventaction.h ../include/map_warppoint.h \
  ../include/npc_manorsman.h ../include/net.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h ../include/npc_scheduleman.h \
  ../include/trade.h ../include/npccreate.h ../include/profession_skill.h \
  ../include/char_talk.h ../include/family.h ../include/petmail.h \
  ../include/npc_autopk.h ../include/item.h
event.o: event.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/object.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_structs.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h \
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
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/readmap.h ../include/map_warppoint.h ../include/event.h \
  ../include/npc_warp.h ../include/npc_npcenemy.h
char_walk.o: char_walk.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/ctype.h \
  /usr/include/runetype.h /usr/include/time.h /usr/include/_structs.h \
  /usr/include/sys/_structs.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/handletime.h \
  /usr/include/sys/time.h /usr/include/sys/_select.h ../include/common.h \
  ../include/object.h ../include/char_base.h ../include/version.h \
  ../include/skill.h ../include/util.h /usr/include/stdlib.h \
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
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/char_event.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/readmap.h ../include/map_deal.h \
  ../include/npccreate.h ../include/encount.h ../include/npcutil.h \
  ../include/battle.h ../include/net.h ../include/configfile.h \
  ../include/npc_npcenemy.h
encount.o: encount.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/math.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/common.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/common.h ../include/buf.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/configfile.h ../include/encount.h ../include/enemy.h
pet.o: pet.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_structs.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h \
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
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/object.h ../include/readmap.h ../include/map_deal.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/handletime.h ../include/pet.h \
  ../include/battle.h ../include/petmail.h ../include/log.h \
  ../include/function.h
enemy.o: enemy.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  ../include/common.h /usr/include/errno.h /usr/include/sys/errno.h \
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
  /usr/include/i386/_types.h ../include/common.h ../include/buf.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/configfile.h ../include/encount.h ../include/enemy.h \
  ../include/pet.h ../include/enemyexptbl.h ../include/petmail.h \
  ../include/battle.h ../include/pet_skillinfo.h ../include/anim_tbl.h \
  ../include/log.h ../include/npcutil.h
pet_event.o: pet_event.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/i386/_types.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/object.h ../include/common.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h ../include/title.h \
  ../include/addressbook.h ../include/net.h /usr/include/netinet/in.h \
  /usr/include/stdint.h /usr/include/sys/socket.h \
  /usr/include/sys/types.h /usr/include/machine/_param.h \
  /usr/include/i386/_param.h /usr/include/netinet6/in6.h \
  /usr/include/signal.h /usr/include/pthread.h \
  /usr/include/pthread_impl.h /usr/include/sched.h ../include/link.h \
  ../include/char.h ../include/char_base.h ../include/char_data.h \
  ../include/item.h ../include/char.h ../include/configfile.h \
  ../include/handletime.h ../include/pet_event.h ../include/npcutil.h \
  ../include/log.h ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/npc_exchangeman.h \
  ../include/npc_eventaction.h
char_talk.o: char_talk.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/ctype.h \
  /usr/include/runetype.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h ../include/readmap.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_structs.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/chatmagic.h \
  ../include/battle.h ../include/log.h ../include/configfile.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h ../include/family.h \
  ../include/profession_skill.h ../include/net.h
char_party.o: char_party.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/readmap.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_structs.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/battle.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/npcutil.h ../include/npc_bus.h \
  ../include/npc_airplane.h ../include/family.h ../include/init.h
char_item.o: char_item.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/configfile.h \
  ../include/common.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/readmap.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/map_deal.h ../include/object.h \
  ../include/char.h ../include/char_base.h ../include/version.h \
  ../include/skill.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/item.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/handletime.h ../include/log.h \
  ../include/item_event.h ../include/battle.h ../include/petmail.h
deathcontend.o: deathcontend.c
chatroom.o: chatroom.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/ctype.h \
  /usr/include/runetype.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h ../include/readmap.h ../include/common.h \
  /usr/include/errno.h /usr/include/sys/errno.h ../include/util.h \
  /usr/include/sys/time.h /usr/include/sys/_structs.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_select.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/machine/_structs.h /usr/include/mach/i386/_structs.h \
  /usr/include/sys/resource.h /usr/include/machine/endian.h \
  /usr/include/i386/endian.h /usr/include/sys/_endian.h \
  /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/chatmagic.h \
  ../include/battle.h ../include/log.h ../include/configfile.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/saacproto_cli.h \
  ../include/saacproto_util.h ../include/family.h ../include/chatroom.h \
  ../include/net.h ../include/util.h
petmail.o: petmail.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/configfile.h \
  ../include/common.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/buf.h ../include/char_base.h ../include/version.h \
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
  ../include/link.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/battle.h ../include/handletime.h ../include/map_deal.h \
  ../include/addressbook.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/string.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/strings.h \
  /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/pet.h ../include/petmail.h \
  ../include/npcutil.h ../include/log.h
trade.o: trade.c ../include/version.h ../include/correct_bug.h \
  ../include/correct_bug.h /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/ctype.h /usr/include/runetype.h ../include/readmap.h \
  ../include/common.h /usr/include/errno.h /usr/include/sys/errno.h \
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
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  ../include/npcutil.h ../include/trade.h ../include/log.h \
  ../include/handletime.h ../include/buf.h ../include/net.h \
  ../include/battle.h ../include/npc_bus.h ../include/char_talk.h \
  ../include/pet_skill.h
family.o: family.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_structs.h \
  ../include/readmap.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  ../include/saacproto_cli.h ../include/saacproto_util.h \
  ../include/npcutil.h ../include/family.h ../include/log.h \
  ../include/handletime.h ../include/buf.h ../include/net.h \
  ../include/battle.h ../include/npc_bus.h ../include/char_talk.h \
  ../include/npc_scheduleman.h ../include/npc_fmdengon.h
defend.o: defend.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/_structs.h \
  ../include/readmap.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  ../include/saacproto_cli.h ../include/saacproto_util.h \
  ../include/npcutil.h ../include/family.h ../include/log.h \
  ../include/handletime.h ../include/buf.h ../include/net.h \
  ../include/battle.h ../include/npc_bus.h ../include/char_talk.h \
  ../include/npc_scheduleman.h ../include/defend.h
char_angel.o: char_angel.c ../include/version.h ../include/correct_bug.h \
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
  /usr/include/secure/_string.h /usr/include/sys/stat.h \
  /usr/include/ctype.h /usr/include/runetype.h /usr/include/time.h \
  /usr/include/_structs.h /usr/include/sys/time.h \
  /usr/include/sys/_select.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/common.h ../include/char_base.h \
  ../include/version.h ../include/skill.h ../include/common.h \
  ../include/util.h ../include/title.h ../include/addressbook.h \
  ../include/net.h /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/char_data.h \
  ../include/char.h ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/item.h ../include/item_event.h \
  ../include/buf.h ../include/object.h ../include/map_deal.h \
  ../include/saacproto_cli.h ../include/saacproto_util.h \
  ../include/readmap.h ../include/handletime.h ../include/char_event.h \
  ../include/npccreate.h ../include/addressbook.h ../include/magic_base.h \
  ../include/magic.h ../include/chatmagic.h ../include/configfile.h \
  ../include/log.h ../include/anim_tbl.h ../include/encount.h \
  ../include/battle.h ../include/pet_skill.h ../include/util.h \
  ../include/enemy.h ../include/npcutil.h ../include/pet.h \
  ../include/family.h
