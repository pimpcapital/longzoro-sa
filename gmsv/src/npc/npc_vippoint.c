#include "version.h"
#include <string.h>
#include "char.h"
#include "object.h"
#include "char_base.h"
#include "npcutil.h"
#include "npc_vipshop.h"
#include "lssproto_serv.h"
#include "saacproto_cli.h"
#include "readmap.h"
#include "battle.h"
#include "log.h"
#include "enemy.h"
#include "handletime.h"
#include "npc_eventaction.h"

//�صش����ø�н�ڽ�����"����ʦ"
#ifdef _VIP_SHOP
enum {
	WINDOW_START=1,
	WINDOW_SELECT,
	WINDOW_PREV,
	WINDOW_NEXT,
	WINDOW_WARP,
	WINDOW_END,
};
enum {
	NPC_WORK_CURRENTTIME = CHAR_NPCWORKINT1,
/*
	NPC_WORK_ROUTETOY = CHAR_NPCWORKINT2,
	NPC_WORK_ROUTEPOINT = CHAR_NPCWORKINT3,
	NPC_WORK_ROUNDTRIP = CHAR_NPCWORKINT4,
	NPC_WORK_MODE = CHAR_NPCWORKINT5,
	NPC_WORK_CURRENTROUTE = CHAR_NPCWORKINT6, 
	NPC_WORK_ROUTEMAX = CHAR_NPCWORKINT7,
	NPC_WORK_WAITTIME = CHAR_NPCWORKINT8,
	NPC_WORK_CURRENTTIME = CHAR_NPCWORKINT9,
	NPC_WORK_SEFLG = CHAR_NPCWORKINT10,
*/
};

#define STANDBYTIME 50

static void NPC_VipShop_selectWindow( int meindex, int toindex, int num,int select);
BOOL VipShop_GetMenuStr( int meindex, int toindex, char *npcarg, char *token, int index );
int VipShop_ShowMenulist( char *npcarg );

int page;

static void NPC_VipShop_selectWindow( int meindex, int toindex, int num,int select)
{
	char npcarg[NPC_UTIL_GETARGSTR_BUFSIZE];
	char token[256];
	char buf1[256];
	char buf2[256];
	char buf3[256];
	int buttontype = 0, windowtype = 0, windowno = 0;
	int fd = getfdFromCharaIndex( toindex);
	static int select1;
	windowtype = WINDOW_MESSAGETYPE_MESSAGE;

	if(NPC_Util_isFaceToFace( meindex ,toindex , 2) == FALSE) {
		if(NPC_Util_isFaceToChara( toindex, meindex, 1) == FALSE)
			return;
	}

	memset( npcarg, 0, sizeof( npcarg));
	if(NPC_Util_GetArgStr( meindex, npcarg, sizeof(npcarg))==NULL){
		print("VipShop_MAN: GetArgStrErr!!");
		return;
	}
	memset( token, 0, sizeof( token));

	switch( num)	{
	case WINDOW_START:
		if( NPC_Util_GetStrFromStrWithDelim( npcarg, "START_MSG", token, sizeof( token) ) == NULL) {
			print("VipShop Get START_MSG ERROR !");
			return;
		}
		CHAR_setWorkInt( toindex, CHAR_WORKSHOPRELEVANT, WINDOW_START);
		buttontype = WINDOW_BUTTONTYPE_YESNO;
		windowno = NPC_TRANSERMAN_SELECT;
		break;
	case WINDOW_SELECT:
		CHAR_setInt( toindex, CHAR_LISTPAGE, 0);
		page=VipShop_ShowMenulist(npcarg);
		if( VipShop_GetMenuStr( meindex, toindex, npcarg, token,CHAR_getInt( toindex, CHAR_LISTPAGE)) == FALSE )	{
			print( "VipShop GetMenu ERROR !!");
			return;
		}
		windowtype = WINDOW_MESSAGETYPE_SELECT;
		if(page>1)
			buttontype = WINDOW_BUTTONTYPE_CANCEL|WINDOW_BUTTONTYPE_NEXT;
		else
			buttontype = WINDOW_BUTTONTYPE_CANCEL;
		windowno = NPC_TRANSERMAN_WARP;
		break;
	case WINDOW_NEXT:
		if(CHAR_getInt( toindex, CHAR_LISTPAGE)<=page)
			CHAR_setInt( toindex, CHAR_LISTPAGE, CHAR_getInt( toindex, CHAR_LISTPAGE)+1);
		if( VipShop_GetMenuStr( meindex, toindex, npcarg, token,CHAR_getInt( toindex, CHAR_LISTPAGE)) == FALSE )	{
			print( "VipShop GetMenu ERROR !!");
			return;
		}
		windowtype = WINDOW_MESSAGETYPE_SELECT;
		if(CHAR_getInt( toindex, CHAR_LISTPAGE)+1==page)
			buttontype = WINDOW_BUTTONTYPE_CANCEL|WINDOW_BUTTONTYPE_PREV;
		else
			buttontype = WINDOW_BUTTONTYPE_CANCEL|WINDOW_BUTTONTYPE_PREV|WINDOW_BUTTONTYPE_NEXT;
		windowno = NPC_TRANSERMAN_WARP;
		break;
	case WINDOW_PREV:
		if(CHAR_getInt( toindex, CHAR_LISTPAGE)>0)
			CHAR_setInt( toindex, CHAR_LISTPAGE, CHAR_getInt( toindex, CHAR_LISTPAGE)-1);
		if( VipShop_GetMenuStr( meindex, toindex, npcarg, token,CHAR_getInt( toindex, CHAR_LISTPAGE)) == FALSE )	{
			print( "VipShop GetMenu ERROR !!");
			return;
		}
		windowtype = WINDOW_MESSAGETYPE_SELECT;
		if(CHAR_getInt( toindex, CHAR_LISTPAGE)==0)
			buttontype = WINDOW_BUTTONTYPE_CANCEL|WINDOW_BUTTONTYPE_NEXT;
		else
			buttontype = WINDOW_BUTTONTYPE_PREV|WINDOW_BUTTONTYPE_CANCEL|WINDOW_BUTTONTYPE_NEXT;
		windowno = NPC_TRANSERMAN_WARP;
		break;
	case WINDOW_WARP:
		select1=CHAR_getInt( toindex, CHAR_LISTPAGE)*7+select;

		if( NPC_Util_GetStrFromStrWithDelim( npcarg, "END_MSG", buf1, sizeof( buf1) ) == NULL) {
			print("VipShop Get START_MSG ERROR !");
			return;
		}
		if(getStringFromIndexWithDelim( npcarg,"}",select1, buf2, sizeof( buf2)) != FALSE)
			NPC_Util_GetStrFromStrWithDelim( buf2, "MenuStr", buf3, sizeof( buf3));
		sprintf( token, "\n%s\n\n        %s\n",buf1, buf3);
		
		windowtype = WINDOW_MESSAGETYPE_MESSAGE;
		buttontype = WINDOW_BUTTONTYPE_YESNO;
		windowno = NPC_TRANSERMAN_END;
		break;
	case WINDOW_END:
		ActionNpc_CheckMenuFree( meindex, toindex, npcarg, select1);
		return;
		break;
	}

	lssproto_WN_send( fd, windowtype, buttontype, windowno,
		CHAR_getWorkInt( meindex, CHAR_WORKOBJINDEX), token);
}
#endif


