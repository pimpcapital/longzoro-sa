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

PROG=libbattle.a

SRC=battle.c battle_event.c battle_command.c battle_ai.c battle_magic.c pet_skill.c battle_item.c profession_skill.c
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
battle.o: battle.c ../include/version.h ../include/correct_bug.h \
  /usr/include/string.h /usr/include/_types.h /usr/include/sys/_types.h \
  /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h /usr/include/time.h /usr/include/_structs.h \
  ../include/buf.h ../include/common.h /usr/include/stdio.h \
  /usr/include/secure/_stdio.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/object.h ../include/char.h \
  ../include/char_base.h ../include/version.h ../include/skill.h \
  ../include/util.h /usr/include/sys/time.h /usr/include/sys/_select.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/char_data.h \
  ../include/battle.h ../include/battle_event.h \
  ../include/battle_command.h ../include/battle_ai.h \
  ../include/configfile.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  ../include/encount.h ../include/enemy.h ../include/handletime.h \
  ../include/readmap.h ../include/pet_skill.h ../include/npcutil.h \
  ../include/magic.h ../include/npc_npcenemy.h ../include/log.h \
  ../include/pet_skillinfo.h ../include/anim_tbl.h ../include/common.h \
  ../include/battle_magic.h ../include/item.h ../include/correct_bug.h \
  ../include/npc_autopk.h ../include/profession_skill.h \
  ../include/skill.h
battle_event.o: battle_event.c ../include/version.h \
  ../include/correct_bug.h /usr/include/string.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/math.h ../include/char.h ../include/common.h \
  /usr/include/stdio.h /usr/include/secure/_stdio.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char_base.h ../include/version.h \
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
  ../include/char.h ../include/char_event.h ../include/battle.h \
  ../include/battle_event.h ../include/configfile.h ../include/pet.h \
  ../include/log.h ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/anim_tbl.h \
  ../include/battle_magic.h ../include/util.h ../include/enemy.h \
  ../include/pet_skill.h ../include/char_base.h ../include/item_event.h \
  ../include/profession_skill.h ../include/item.h ../include/skill.h \
  ../include/magic_base.h
battle_command.o: battle_command.c ../include/version.h \
  ../include/correct_bug.h /usr/include/string.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  /usr/include/stdlib.h /usr/include/sys/wait.h /usr/include/sys/signal.h \
  /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h \
  /usr/include/i386/signal.h /usr/include/i386/_structs.h \
  /usr/include/sys/_structs.h /usr/include/machine/_structs.h \
  /usr/include/mach/i386/_structs.h /usr/include/sys/resource.h \
  /usr/include/machine/endian.h /usr/include/i386/endian.h \
  /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h \
  /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h \
  /usr/include/machine/types.h /usr/include/i386/types.h \
  /usr/include/i386/_types.h ../include/char.h ../include/common.h \
  /usr/include/stdio.h /usr/include/secure/_stdio.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char_base.h ../include/version.h \
  ../include/skill.h ../include/util.h /usr/include/sys/time.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_select.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/char_data.h ../include/item.h \
  ../include/char.h ../include/char_base.h ../include/battle.h \
  ../include/pet_skill.h ../include/battle_event.h \
  ../include/battle_command.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h ../include/magic.h \
  ../include/magic_base.h ../include/handletime.h \
  ../include/profession_skill.h
battle_ai.o: battle_ai.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h ../include/common.h /usr/include/errno.h \
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
  ../include/char.h ../include/char_base.h ../include/battle.h \
  ../include/npcutil.h ../include/pet_skill.h
battle_magic.o: battle_magic.c ../include/version.h \
  ../include/correct_bug.h /usr/include/string.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  ../include/char.h ../include/common.h /usr/include/stdio.h \
  /usr/include/secure/_stdio.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char_base.h ../include/version.h \
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
  ../include/char.h ../include/char_base.h ../include/battle.h \
  ../include/battle_event.h ../include/magic_base.h \
  ../include/battle_magic.h ../include/item_event.h ../include/anim_tbl.h \
  ../include/common.h ../include/lssproto_serv.h \
  ../include/lssproto_util.h /usr/include/strings.h /usr/include/unistd.h \
  /usr/include/sys/unistd.h /usr/include/sys/select.h \
  ../include/profession_skill.h ../include/skill.h
pet_skill.o: pet_skill.c ../include/version.h ../include/correct_bug.h \
  /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  ../include/common.h /usr/include/errno.h /usr/include/sys/errno.h \
  ../include/buf.h ../include/common.h ../include/configfile.h \
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
  ../include/char.h ../include/char_base.h ../include/char_data.h \
  ../include/pet_skill.h ../include/battle.h ../include/battle_event.h \
  ../include/battle_magic.h ../include/item.h ../include/item_gen.h \
  ../include/char_talk.h
battle_item.o: battle_item.c ../include/version.h \
  ../include/correct_bug.h /usr/include/string.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/strings.h \
  /usr/include/secure/_string.h /usr/include/secure/_common.h \
  ../include/char.h ../include/common.h /usr/include/stdio.h \
  /usr/include/secure/_stdio.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/char_base.h ../include/version.h \
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
  ../include/char.h ../include/char_base.h ../include/battle.h \
  ../include/battle_event.h ../include/battle_item.h \
  ../include/battle_magic.h ../include/item_event.h ../include/log.h \
  ../include/anim_tbl.h ../include/npcutil.h ../include/magic_base.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h
profession_skill.o: profession_skill.c ../include/version.h \
  ../include/correct_bug.h /usr/include/stdio.h /usr/include/sys/cdefs.h \
  /usr/include/sys/_symbol_aliasing.h \
  /usr/include/sys/_posix_availability.h /usr/include/Availability.h \
  /usr/include/AvailabilityInternal.h /usr/include/_types.h \
  /usr/include/sys/_types.h /usr/include/machine/_types.h \
  /usr/include/i386/_types.h /usr/include/secure/_stdio.h \
  /usr/include/secure/_common.h /usr/include/string.h \
  /usr/include/strings.h /usr/include/secure/_string.h \
  /usr/include/time.h /usr/include/_structs.h /usr/include/sys/_structs.h \
  ../include/buf.h ../include/common.h /usr/include/errno.h \
  /usr/include/sys/errno.h ../include/profession_skill.h \
  ../include/version.h ../include/util.h /usr/include/sys/time.h \
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
  /usr/include/i386/_types.h ../include/skill.h ../include/char_base.h \
  ../include/title.h ../include/addressbook.h ../include/net.h \
  /usr/include/netinet/in.h /usr/include/stdint.h \
  /usr/include/sys/socket.h /usr/include/sys/types.h \
  /usr/include/machine/_param.h /usr/include/i386/_param.h \
  /usr/include/netinet6/in6.h /usr/include/signal.h \
  /usr/include/pthread.h /usr/include/pthread_impl.h /usr/include/sched.h \
  ../include/link.h ../include/battle.h ../include/magic_base.h \
  ../include/configfile.h ../include/char.h ../include/char_base.h \
  ../include/char_data.h ../include/item.h ../include/char.h \
  ../include/lssproto_serv.h ../include/lssproto_util.h \
  /usr/include/strings.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/include/sys/select.h ../include/skill.h
