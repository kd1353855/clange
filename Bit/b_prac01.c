#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BitState
{
	Base = 0,				//00000000通常状態
	Poison=1<<0,			//00000001毒状態
	Sleep=1<<1,				//00000010眠り状態
	Paralysis=1<<2,			//00000100麻痺状態
	Burn=1<<3,				//00001000やけど状態
	AtkUp=1<<4,				//00010000攻撃力アップ状態
	AtkDown=1<<5			//00100000攻撃力ダウン状態
};
typedef unsigned int UINT;
typedef struct
{
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT MyState;
} Chara;
typedef struct
{
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT State;
} Mob;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
int DisplayMenu(void);
main()
{
	//				名前	hp	  mp atk def Mystate
	Chara chara = { "主人公",2000,200,100,50,Base };
	//				名前   hp atk def state
	Mob mob[3] = { {"敵A",100,50,20,Base},
				{"敵B",1000,1000,40,Base},
				{"敵C",5000,500,100,Base} };
	srand(time(0));
}
int DisplayMenu(void)
{
	char ch;
	printf("コマンド？\n");
	printf("1:戦う\n２：防御\n");
	ch = getch();
}
void DisplayStatus(UINT s) 
{
	printf("*****現在の状態*****\n");
	if(s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep) 
	{
		printf("眠り\n");
	}
	if(s & Paralysis)
	{
		printf("麻痺\n");
	}
	if(s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	printf("***************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態にしますか？\n");
		printf("1：毒　２：睡眠３：麻痺４：火傷５：攻撃↑６：攻撃↓０：入力終了＞");
		scanf("%d", &a);
		if(a==0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}

}
void ClearFlag(UINT* s)
{
	int a;
	while(1)
	{
		DisplayStatus(*s);
		printf("どの状態を回復しますか？\n");
		printf("1：毒　２：睡眠３：麻痺４：火傷５：攻撃↑６：攻撃↓７：全ての状態回復０：入力終了＞");
		scanf("%d", &a);
		if(a==0)
		{
			break;
		}
		switch(a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
		case 7:
			*s = Base;
			break;
			default:
			break;
		}
	}
}
