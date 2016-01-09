#include "version.h"
#include <time.h>
#include "npc_scheduleman.h"
#include "char.h"
#include "lssproto_serv.h"
#include "npcutil.h"
#include "handletime.h"
#include "family.h"

enum {
	CHAR_WORK_PAGE = CHAR_WORKSHOPRELEVANT,		// ��ҳ��
	CHAR_WORK_DUELTIME = CHAR_WORKSHOPRELEVANTSEC,	// ��ѡ��� pk ʱ��
};

#define SCHEDULEFILEDIR		"./Schedule/"


extern	int	familyNumTotal;

void NPC_LoadPKSchedule(int meindex);	// Load schedule from disk
void NPC_SavePKSchedule(int meindex);	// save schedule to disk
// �����ų̱�� data
void NPC_LIST_gendata(int meindex, int talkerindex, int page, char *buf, int size);
// ����ѡ������ data
void NPC_SELECT_gendata(int meindex, int page, char *buf, int size);
// �����ų���ϸ�� data
void NPC_DETAIL_gendata(int meindex, char *buf, int size, int dueltime);
