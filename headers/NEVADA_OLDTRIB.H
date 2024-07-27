#ifndef NEVADA_OLDTRIB_H
#define NEVADA_OLDTRIB_H

/*****************************************************************
***************     OLDTRIBE MVAR PARAMETRS     ***************
******************************************************************/

// Map vars Tribe

#define MVAR_Made_Car                   (0)
#define MVAR_ManExecut                  (1)
#define MVAR_ManPrison                  (2)
#define MVAR_ManLive                    (3)
#define MVAR_ManFreedom                 (4)
#define MVAR_SesterLive                 (5)
#define MVAR_PrisonVisa                 (6)
#define MVAR_BossReput                  (7)
#define MVAR_BossTainik                 (8)
#define MVAR_BratherBossTainik          (9)
#define MVAR_SesterSex                  (10)
#define MVAR_WaterPoisonTimer           (11)
#define MVAR_EnemyDudeCtzn              (12)
#define MVAR_ManTimeToEndLive           (13)
#define MVAR_JERLAK_TREASURE_01         (14)
#define MVAR_JERLAK_TREASURE_02         (15)
#define MVAR_JERLAK_TREASURE_03         (16)
#define MVAR_JERLAK_TREASURE_04         (17)
#define MVAR_JERLAK_TREASURE_05         (18)
#define MVAR_JERLAK_MailoFmlDead        (19)
#define MVAR_JERLAK_GeckoDead           (20)
#define MVAR_JERLAK_GeckoTrp            (21)

// Map vars Cave

#define MVAR_oldTrbCv_KillGecko         (1)
#define MVAR_oldTrbCv_LifeGecko         (2)

// Map vars parametrs
// ------- Параметры жизни для местных нпс:

#define ManLive_Live                 (map_var(MVAR_ManLive) == 0) \

#define ManLive_Dead                 (map_var(MVAR_ManLive) == 1) \

#define ManLive_DudeKill             (map_var(MVAR_ManLive) == 2) \

#define SesterLive_Live              (map_var(MVAR_SesterLive) == 0) \

#define SesterLive_Dead              (map_var(MVAR_SesterLive) == 1) \

#define SesterLive_DudeKill          (map_var(MVAR_SesterLive) == 2) \

#define BossLive_Live                (global_var(GVAR_ARTEL_LIVE_BOSS) == 0) \

#define BossLive_Dead                (global_var(GVAR_ARTEL_LIVE_BOSS) == 1) \

#define BossLive_DudeKill            (global_var(GVAR_ARTEL_LIVE_BOSS) == 2) \

// Map vars parametrs
// ------- положения в отношении провинившегося парня:

#define ManExecut_Start              (map_var(MVAR_ManExecut) == 0) \

#define ManExecut_End                (map_var(MVAR_ManExecut) == 1) \

#define ManPrison_Out                (map_var(MVAR_ManPrison) == 0) \

#define ManPrison_In                 (map_var(MVAR_ManPrison) == 1) \

#define ManFreedom_Non               (map_var(MVAR_ManFreedom) == 0) \

#define ManFreedom_Yes               (map_var(MVAR_ManFreedom) == 1) \

#define PrisonVisa_Non               (map_var(MVAR_PrisonVisa) == 0) \

#define PrisonVisa_Ok                (map_var(MVAR_PrisonVisa) == 1) \

// Map vars parametrs
// ------- разное:

#define BossReput_Bad                (map_var(MVAR_BossReput) == 0) \

#define BossReput_Good               (map_var(MVAR_BossReput) == 1) \

#define BossTainik_Non               (map_var(MVAR_BossTainik) == 0) \

#define BossTainik_Know              (map_var(MVAR_BossTainik) == 1) \

#define BossTainik_Ok                (map_var(MVAR_BossTainik) == 2) \

#define Q_VAULT_ARTEL_Noknow         (global_var(GVAR_ARTEL_KNOW) == 0) \

#define Q_VAULT_ARTEL_Know           (global_var(GVAR_ARTEL_KNOW) == 1) \

#define Q_VAULT_ARTEL_Finish         (global_var(GVAR_ARTEL_KNOW) == 2) \

// GVAR vars parametrs (quest)

#define pNASOS_Noknow       0
#define pNASOS_Know         1
#define pNASOS_InPipBoy     2
#define pNASOS_RepairDude   3
#define pNASOS_RepairEnd    4

#define Q_NASOS_Noknow               (global_var(GVAR_ARTEL_NASOSREPAIR) == pNASOS_Noknow) \

#define Q_NASOS_Know                 (global_var(GVAR_ARTEL_NASOSREPAIR) == pNASOS_Know) \

#define Q_NASOS_InPipBoy             (global_var(GVAR_ARTEL_NASOSREPAIR) == pNASOS_InPipBoy) \

#define Q_NASOS_RepairDude           (global_var(GVAR_ARTEL_NASOSREPAIR) == pNASOS_RepairDude) \

#define Q_NASOS_RepairEnd            (global_var(GVAR_ARTEL_NASOSREPAIR) == pNASOS_RepairEnd) \

#define set_NASOS_Noknow              set_global_var(GVAR_ARTEL_NASOSREPAIR,pNASOS_Noknow); \

#define set_NASOS_Know                set_global_var(GVAR_ARTEL_NASOSREPAIR,pNASOS_Know); \

#define set_NASOS_InPipBoy            set_global_var(GVAR_ARTEL_NASOSREPAIR,pNASOS_InPipBoy); \

#define set_NASOS_RepairDude          set_global_var(GVAR_ARTEL_NASOSREPAIR,pNASOS_RepairDude); \

#define set_NASOS_RepairEnd           set_global_var(GVAR_ARTEL_NASOSREPAIR,pNASOS_RepairEnd); \

#define Q_STIF_FREEDOM_Non           (global_var(GVAR_ARTEL_STIF_FREEDOM) == 0) \

#define Q_STIF_FREEDOM_Yes           (global_var(GVAR_ARTEL_STIF_FREEDOM) == 1) \

// Слуги города убежища

#define Q_CVLT_SLVR_Noknow           (global_var(GVAR_ARTEL_SLAVER_VCITY) == 0) \

#define Q_CVLT_SLVR_Know             (global_var(GVAR_ARTEL_SLAVER_VCITY) == 1) \

#define Q_CVLT_SLVR_Next             (global_var(GVAR_ARTEL_SLAVER_VCITY) == 2) \

#define Q_CVLT_SLVR_Final            (global_var(GVAR_ARTEL_SLAVER_VCITY) == 3) \

// Отравить поселение

#define Q_CVLT_POISON_Noknow         (global_var(GVAR_ARTEL_POISON_VCITY) == 0) \

#define Q_CVLT_POISON_Know           (global_var(GVAR_ARTEL_POISON_VCITY) == 1) \

#define Q_CVLT_POISON_Next           (global_var(GVAR_ARTEL_POISON_VCITY) == 2) \

#define Q_CVLT_POISON_Final          (global_var(GVAR_ARTEL_POISON_VCITY) == 3) \

// Обучение охоте на гекко

#define Q_HUNTER_SCHOOL_Noknow       (global_var(GVAR_ARTEL_HUNTER_SCHOOL) == 0) \

#define Q_HUNTER_SCHOOL_NextA        (global_var(GVAR_ARTEL_HUNTER_SCHOOL) == 1) \

#define Q_HUNTER_SCHOOL_FinalA       (global_var(GVAR_ARTEL_HUNTER_SCHOOL) == 2) \

#define Q_HUNTER_SCHOOL_NextB        (global_var(GVAR_ARTEL_HUNTER_SCHOOL) == 3) \

#define Q_HUNTER_SCHOOL_FinalB       (global_var(GVAR_ARTEL_HUNTER_SCHOOL) == 4) \

// Objects in Artel

#define DoorBpxerA                    tile_contains_pid_obj(19121, 0, 33554838) \

#define DoorBpxerB                    tile_contains_pid_obj(18126, 0, 33555281) \

#define closeDoorBpxerA               if (DoorBpxerA != 0) then begin  \
                                         obj_close(DoorBpxerA);        \
                                      end                              \

#define closeDoorBpxerB               if (DoorBpxerB != 0) then begin  \
                                         obj_close(DoorBpxerB);        \
                                      end                              \

#endif