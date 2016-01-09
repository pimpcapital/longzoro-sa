#ifndef __NPC_SCHEDULEMAN_H__
#define __NPC_SCHEDULEMAN_H__

#include "common.h"
#include "char_base.h"
#define CHARNAME_MAX	32

// ��� scheduleman ����
#ifdef _FAMILY_MANORNUM_CHANGE
#define MAX_SCHEDULEMAN	20
#else
#define MAX_SCHEDULEMAN	12
#endif

// ÿһ�� scheduleman �عܵ� schedule ����
#define MAX_SCHEDULE	24

// schedule �б��һҳ�����г����������
#define MAXSCHEDULEINONEWINDOW	10

// family �б��һҳ�����г����������
#define MAXFAMILYINONEWINDOW	10

// ÿһ�� scheduleman ��ʹ�õ� schedule ����λ��
// ��Ӧ�� fmpks �� ID*MAX_SCHEDULE �� (ID=0~MAX_SCHEDULEMAN-1)
// ID ��д�� data/npc ��ָ���� "id:" ��ֵ

// dueltime = (����?10000:0) + (Сʱ*100)

enum {
	NPC_WORK_ID = CHAR_NPCWORKINT1,		// �Ǽ�Ա ID, �� 0 ��ʼ
	NPC_WORK_CHALLENGETIMEOUT = CHAR_NPCWORKINT2,	// ͬ����ս�� timeout
	NPC_WORK_SETTINGTIMEOUT = CHAR_NPCWORKINT3,	// �趨��ս�� timeout
	NPC_WORK_PREVIOUSCHECKTIME = CHAR_NPCWORKINT4,	// ��һ�μ���ʱ��
	NPC_WORK_FIGHTINTERVAL = CHAR_NPCWORKINT5,	// PK ���εļ�� (��λ: ��)
};

typedef struct tagFamilyPKSchedule {
	int	dueltime;	// ����ʱ��
	int	host_index;	// ���Ӽ���
	char host_name[CHARNAME_MAX];	// ���Ӽ�������
	int	guest_index;	// �ͶӼ���
	char guest_name[CHARNAME_MAX];	// �ͶӼ�������
	int	prepare_time;	// ׼��ʱ�� (1~40 ����)
	int	max_player;	// ���������� (1~������������)
	int	flag;		// ״̬
	int	win;		// ʤ�������趨
	int	challenge_timeout;	// ��սʱ��
	int	setting_timeout;	// �趨״̬�� timeout
	char gmsv_name[256];
} FamilyPKSchedule;

// ��¼�� FamilyPKSchedule (fmpks) �� flag ֵ
#define FMPKS_FLAG_NONE		-1	// û���κ��ų�
#define FMPKS_FLAG_CHALLENGE	0	// �ȴ��Ͷ�ͬ����
#define FMPKS_FLAG_SETTING	1	// ���������趨�ų� (ȡ��ʱ��� NONE)
#define FMPKS_FLAG_CONFIRMING	2	// �Ͷ�����ͬ����
#define FMPKS_FLAG_SCHEDULED	3	// �Ѿ��ź��ų̣���δ����
#define FMPKS_FLAG_DUEL		4	// ������
#define FMPKS_FLAG_HOSTWIN	5	// ����ʤ
#define FMPKS_FLAG_GUESTWIN	6	// �Ͷ�ʤ
#define FMPKS_FLAG_MANOR_BATTLEBEGIN	7	// ׯ԰��ս ս����
#define FMPKS_FLAG_MANOR_PREPARE	8	// ׯ԰��ս ׼����
#define FMPKS_FLAG_MANOR_PEACE	9	// ׯ԰��ս ��ս��
#define FMPKS_FLAG_MANOR_OTHERPLANET	10	// ׯ԰��ս �ڱ�������ս
#define FMPKS_FLAG_MANOR_BATTLEEND	11	// ׯ԰��ս ս������
#define FMPKS_FLAG_MANOR_PEACE_SAVE	12	// ��ׯ԰��ս�浵
#define FMPKS_FLAG_MANOR_READYTOFIGHT	13	// (GM: manorpk) ȫ��ϵ��ɿ�Լս״̬
#define FMPKS_FLAG_MANOR_CLEANFLAG	14	// (GM: manorpk) ���������״̬
#ifdef _NEW_MANOR_LAW
#define FMPKS_FLAG_WAIT		15	// ������ս��,�Ѽ�¼��������,�ȴ���ս�ų�
#endif

// ���� client �� flag
#define FLAG_NONE	-1
#define FLAG_MODIFY	0
#define FLAG_ACCEPT	1
#define FLAG_SETTING	2
#define FLAG_CONFIRM	3
#define FLAG_SCHEDULED	4

extern FamilyPKSchedule fmpks[MAX_SCHEDULE*MAX_SCHEDULEMAN];

void NPC_ProcessTimeout(int meindex);	// ���� timeout
void NPC_RemoveExpiredBattle(int meindex);	// �Ƴ����ڵ�ս��
BOOL NPC_SchedulemanInit(int meindex);
void NPC_SchedulemanTalked(int meindex, int talkerindex, char *msg, int color);
void NPC_SchedulemanWindowTalked(int meindex, int talkerindex,
				 int seqno, int select, char *data);
void NPC_SchedulemanLoop(int meindex);

#endif 

/*__NPC_SCHEDULEMAN_H__*/
