#ifndef NEVADA_QUEST_PARAM_H
#define NEVADA_QUEST_PARAM_H

/*****************************************************************
***************     BOSSSHAIENN GVAR PARAMETRS     ***************
******************************************************************/

#define quest_Straiker_end                 (global_var(GVAR_BOSS_STRAIKER_BOX) == StraikerBox_End) \

#define getQuest_Straiker                   global_var(GVAR_BOSS_STRAIKER_BOX) \

#define quest_Predatel_end                 (global_var(GVAR_BOSS_KILL_PREDATEL) == Predatel_Final) \

#define getQuest_Predatel                   global_var(GVAR_BOSS_KILL_PREDATEL) \

#define quest_CurKill_end                  (global_var(GVAR_BOSS_CURIERKILL) == CurKill_Final) \

#define getQuest_CurKilll                   global_var(GVAR_BOSS_CURIERKILL) \

#define quest_DrugKill_end                 (global_var(GVAR_BOSS_DRUGKILL) == DrugKill_Final) \

#define getQuest_DrugKill                   global_var(GVAR_BOSS_DRUGKILL) \

#define quest_CurierLive                   (global_var(GVAR_BOSS_CURIERDEAD) == 0) \

#define quest_CurierRunMap                 (global_var(GVAR_BOSS_CURIERDEAD) == 1) \

#define quest_CurierDead                   (global_var(GVAR_BOSS_CURIERDEAD) == 2) \

#define StraikerBox_noKnow			(0)
#define StraikerBox_Know			(1)
#define StraikerBox_ToDude			(2)
#define StraikerBox_End 			(3)

#define Predatel_noKnow			        (0)
#define Predatel_Know			        (1)
#define Predatel_ManKnow			(2)
#define Predatel_ManInVegas 			(3)
#define Predatel_ManKill 			(4)
#define Predatel_Final 			        (5)

#define CurKill_noKnow				(0)
#define CurKill_Know				(1)
#define CurKill_Final				(2)

#define DrugKill_noKnow				(0)
#define DrugKill_Know				(1) // Б.Луи дал квест
#define DrugKill_UlikFirst			(2) // получена первая улика у Жирюге
#define DrugKill_UlikRing			(3) // заводила ринга дал отсылку на Гонщика
#define DrugKill_UlikStraiker			(4) // - не используется
#define DrugKill_UlikBarmen			(5) // - не используется
#define DrugKill_UlikSilver			(6) // Гонщик дал рекомендацию либо это сделали драгдилеры за деньги
#define DrugKill_NoKill				(7) // ГГ нашел Соломона
#define DrugKill_Kill				(8) // Соломон убит
#define DrugKill_Final				(9) // квест сдан Б.Луи

#define BossReper_noKnow			(0)
#define BossReper_Know			        (1)
#define BossReper_CafeKnow			(2)
#define BossReper_Final 			(3)

#endif