#ifndef NEVADA_RINO_H
#define NEVADA_RINO_H

/*****************************************************************
*****************      NEW RINO LIFE PARAMETRS     ***************
******************************************************************/

// ----> Звания ГГ в Рино:

#define dude_is_madman_Tommi      (global_var(GVAR_NEW_RENO_MADMAN_TOMMI) >0)

#define dude_is_madman_Strik      (global_var(GVAR_NEW_RENO_MADMAN_STRAIK) >0)

#define dude_is_madman_Oliver     (global_var(GVAR_NEW_RENO_MADMAN_OLIVER) >0)

#define dude_is_madman_Rikardo    (global_var(GVAR_NEW_RENO_MADMAN_RIKARDO) >0)

#define dude_is_madman_all        (dude_is_madman_Tommi or dude_is_madman_Strik or dude_is_madman_Oliver or dude_is_madman_Rikardo)

// ----> Параметры жизни персонажей:

#define lvLive            0
#define lvDead            1
#define lvEnemy           2

#define set_BOSS_enemy(gvar)   if (global_var(gvar) == lvLive) then begin \
                               set_global_var(gvar,lvEnemy); \
                               end \

//Томмиган
#define lv_Tommi_live     (global_var(GVAR_NEW_RENO_LIVE_TOMMIGUN) == lvLive)

#define lv_Tommi_dead     (global_var(GVAR_NEW_RENO_LIVE_TOMMIGUN) == lvDead)

#define lv_Tommi_enemy    (global_var(GVAR_NEW_RENO_LIVE_TOMMIGUN) == lvEnemy)

#define set_Tommi_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_TOMMIGUN) \

//Страйкер
#define lv_Strkr_live     (global_var(GVAR_NEW_RENO_LIVE_STRAIKER) == lvLive)

#define lv_Strkr_dead     (global_var(GVAR_NEW_RENO_LIVE_STRAIKER) == lvDead)

#define lv_Strkr_enemy    (global_var(GVAR_NEW_RENO_LIVE_STRAIKER) == lvEnemy)

#define set_Strkr_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_STRAIKER) \

//Владелец казино Эльдорадо
#define lv_Eldorado_live   (global_var(GVAR_NEW_RENO_LIVE_ELDORADO) == lvLive)

#define lv_Eldorado_dead   (global_var(GVAR_NEW_RENO_LIVE_ELDORADO) == lvDead)

#define lv_Eldorado_enemy  (global_var(GVAR_NEW_RENO_LIVE_ELDORADO) == lvEnemy)

#define set_Eldorado_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_ELDORADO) \

//Владелец отеля Сильвер
#define lv_Slvr_live      (global_var(GVAR_NEW_RENO_LIVE_SILVER) == lvLive)

#define lv_Slvr_dead      (global_var(GVAR_NEW_RENO_LIVE_SILVER) == lvDead)

#define lv_Slvr_enemy     (global_var(GVAR_NEW_RENO_LIVE_SILVER) == lvEnemy)

#define set_Slvr_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_SILVER) \

//Оливер
#define lv_Oliver_live    (global_var(GVAR_NEW_RENO_LIVE_OLIVER) == lvLive)

#define lv_Oliver_dead    (global_var(GVAR_NEW_RENO_LIVE_OLIVER) == lvDead)

#define lv_Oliver_enemy   (global_var(GVAR_NEW_RENO_LIVE_OLIVER) == lvEnemy)

#define set_Oliver_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_OLIVER) \

//Райт
#define lv_Write_live     (global_var(GVAR_NEW_RENO_LIVE_BOONDOCSBOSS) == lvLive)

#define lv_Write_dead     (global_var(GVAR_NEW_RENO_LIVE_BOONDOCSBOSS) == lvDead)

#define lv_Write_enemy    (global_var(GVAR_NEW_RENO_LIVE_BOONDOCSBOSS) == lvEnemy)

#define set_Write_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_BOONDOCSBOSS) \

//Чейз
#define lv_Cheis_live     (global_var(GVAR_NEW_RENO_LIVE_CHEIS) == lvLive)

#define lv_Cheis_dead     (global_var(GVAR_NEW_RENO_LIVE_CHEIS) == lvDead)

#define lv_Cheis_enemy    (global_var(GVAR_NEW_RENO_LIVE_CHEIS) == lvEnemy)

#define set_Cheis_enemy   set_BOSS_enemy(GVAR_NEW_RENO_LIVE_CHEIS) \

//Семья владельца Сильвер

//Тед Банди

/*****************************************************************
****************      NEW RINO QUEST PARAMETRS     ***************
******************************************************************/

#define BalaclavDamageQuestOliver                 if (source_obj == dude_obj) then begin \
                                                         if (BalaclavaOutDude and not(wornDudePIDInvisFace)) then begin \
                                                            if ((global_var(GVAR_RENO_OLIVER_QST_B) == 1) and (gvar_bit(GVAR_RENO_OLIVER_QST_BMask, bit_2) == 0)) then begin \
                                                                if (weapon_dmg_type(target_obj) == DMG_normal_dam) then begin \
                                                                    if ((obj_pid(critter_inven_obj(dude_obj, 1)) == PID_TOMMY_GUN) or (obj_pid(critter_inven_obj(dude_obj, 2)) == PID_TOMMY_GUN)) then begin \
                                                                        if ((cur_map_index == MAP_RENO_SILVER) or (cur_map_index == MAP_RENO_ELDORADO) or (cur_map_index == MAP_RENO_BOWLING_STUDIUM) or (cur_map_index == MAP_RENO_RING) or (cur_map_index == MAP_RENO_RING)) then begin \
                                                                        dec_general_rep(5); \
                                                                        give_xp(500);       \
                                                                        display_msg(message_str(SCRIPT_NIHat, 107));       \
                                                                        set_local_var(LVAR_Flags,0);                       \
                                                                        set_gvar_bit_on(GVAR_RENO_OLIVER_QST_BMask,bit_2); \
                                                                        end \
                                                                    end \
                                                                end \
                                                            end \
                                                         end \
                                                     end \

#define dilizhansQuest_no             (global_var(GVAR_NEW_RENO_DILIZHAS_QUEST) == 0)

#define dilizhansQuest_start          (global_var(GVAR_NEW_RENO_DILIZHAS_QUEST) == 1)

#define dilizhansQuest_endBaiker      (global_var(GVAR_NEW_RENO_DILIZHAS_QUEST) == 2)

#define dilizhansQuest_endTuko        (global_var(GVAR_NEW_RENO_DILIZHAS_QUEST) == 3)

/*****************************************************************
****************   NEW RINO JAZ BAND PARAMETRS   *****************
******************************************************************/

#define djazGrds_start                (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 1)

#define djazGrds_Tompson              (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 2)

#define djazGrds_Striker              (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 3)

#define djazGrds_Oliver               (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 4)

#define djazGrds_Bertolini            (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 5)

#define djazGrds_Writer               (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 6)

#define djazGrds_TompsonBonus         (global_var(GVAR_NEW_RENO_JAZZ_BAND_GRDS) == 7)

#define dialog_JazAfishaStart         ((local_var(LVAR_Dialog_JazAfisha) == 0) and (global_var(GVAR_NEW_RENO_JAZZ_BAND) == 1) and (obj_is_carrying_obj_pid(dude_obj, PID_RINO_JAZ_AFISHA) >0)) \

#define AFCLD_Option(x,y)              giQ_Option(001,SCRIPT_NCChlds,x,y,NEUTRAL_REACTION) \

/*****************************************************************
*********   NEW RINO STRIPTEASE AND PROSTITUT PARAMETRS   ********
******************************************************************/

#define getProstiEnemy_Tommi         (map_var(MVAR_RENO_PROSTI_ENEMY_TOMMI) > 0)

#define getProstiEnemy_Strip         (map_var(MVAR_RENO_PROSTI_ENEMY_STRIP) > 0)

/*****************************************************************
*****************      NEW RINO OTHER MACROS      ****************
******************************************************************/

#define TILE_DRUGDILER_BOX_A              7646
#define TILE_DRUGDILER_BOX_B              7648
#define TILE_DRUGDILER_BOX_C              7650
#define TILE_DRUGDILER_BOX_D              7652
#define TILE_DRUGDILER_BOX_E              7654
#define TILE_DRUGDILER_BOX_SOLOMON        7656

#define gopstopMinaseatchFloats         if ((self_can_see_dude) and (tile_distance(self_tile, dude_tile) <= 10) and (self_elevation == dude_elevation)) then begin \
                                             if (combat_is_initialized == false) then begin \
                                                if MinaseachItemInInvnDude then begin       \
                                                   float_msg(self_obj, message_str(SCRIPT_NCGopStp, random(300,309)), FLOAT_MSG_BLUE); \
                                                   param_timer_next := 40; \
                                                end                        \
                                             end                           \
                                        end                                \

#define MolotovNOption(msg,node,check)              if ((obj_is_carrying_obj_pid(dude_obj, PID_ROT_GUT) >= check) and (obj_is_carrying_obj_pid(dude_obj, PID_BEER) >= check) and (obj_is_carrying_obj_pid(dude_obj, PID_FLARE) >= check) and (dude_caps >= molotovCost*check)) then begin \
                                                    NOption(msg,node,001); \
                                                    end                    \

#endif