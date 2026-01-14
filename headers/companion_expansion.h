/*

TODO:    Fix getting NPCs laid in Reno (Kitty's)
         Fix doctor services for NPCs
         Fix NPCs in the ring with Lenny (Merk in NCR)
         Add bouquets to "give flower" (Angela, Miria, possible others?)
       X Change all party.h hide/unhide bits/definitions (Get following scripts from TH source + RPU Source)
         recompile: scmerk.ssl, ncangbis.ssl, nclabish.ssl, fcdokgrd.ssl, fsface.ssl, sfmboat.ssl, oscomptr.ssl

*/
#ifndef COMPANION_EXPANSION_H
#define COMPANION_EXPANSION_H

#include                                     "PARTY.h"

//variable unhealthy_members                := 0;
//variable poisoned_members                 := 0;
//variable healing_injury                   := 0;
//variable healing_poison                   := 0;
//variable heal_item                        := 0;
//variable heal_item2                       := 0;
//variable use_heal_item                    := 0;
//variable use_heal_item2                   := 0;

//variable patient                          := 0;

/*    MAKE THESE BIT FLAGS!      *//*
variable vic_hurt                         := 0;
variable myron_hurt                       := 0;
variable cass_hurt                        := 0;
variable marcus_hurt                      := 0;
variable sulik_hurt                       := 0;
variable lenny_hurt                       := 0;
variable cyberdog_hurt                    := 0;
variable k9_hurt                          := 0;
variable davin_hurt                       := 0;
variable miria_hurt                       := 0;
variable goris_hurt                       := 0;
variable robobrain_hurt                   := 0;
variable dogmeat_hurt                     := 0;
variable kitsune_hurt                     := 0;
variable dex_hurt                         := 0;
variable cat_hurt                         := 0;
variable ceri_hurt                        := 0;
variable rhea_hurt                        := 0;
variable lara_hurt                        := 0;
variable angela_hurt                      := 0;
variable mason_hurt                       := 0;
variable lilj_hurt                        := 0;
variable chris_hurt                       := 0;
variable slavem_hurt                      := 0;
variable slavef_hurt                      := 0;

variable vic_poisoned                     := 0;
variable myron_poisoned                   := 0;
variable cass_poisoned                    := 0;
variable marcus_poisoned                  := 0;
variable sulik_poisoned                   := 0;
variable lenny_poisoned                   := 0;
variable cyberdog_poisoned                := 0;
variable k9_poisoned                      := 0;
variable davin_poisoned                   := 0;
variable miria_poisoned                   := 0;
variable goris_poisoned                   := 0;
variable robobrain_poisoned               := 0;
variable dogmeat_poisoned                 := 0;
variable kitsune_poisoned                 := 0;
variable dex_poisoned                     := 0;
variable cat_poisoned                     := 0;
variable ceri_poisoned                    := 0;
variable rhea_poisoned                    := 0;
variable lara_poisoned                    := 0;
variable angela_poisoned                  := 0;
variable mason_poisoned                   := 0;
variable lilj_poisoned                    := 0;
variable chris_poisoned                   := 0;
variable slavem_poisoned                  := 0;
variable slavef_poisoned                  := 0;
*/
/*******************************************************************************
    Generic Defines
*******************************************************************************/
//variable in_dialog;
//variable forced_node;

#define PARTY_NODE_X                      Node1000

#define FEM                               dude_is_female
#define MALE                              dude_is_male
#define STUPID                            dude_is_stupid
#define Self_Wounds                       ((get_critter_stat(self_obj,STAT_max_hp)) -                                  \
                                          (get_critter_stat(self_obj,STAT_current_hp)))
#define Health_Warn                       (self_cur_hits <= (self_max_hits * 3 / 4))

#define cedebug(message)                  display_msg("CE DEBUG - " + SCRIPT_REALNAME + ": " + message + "\n")

/* Simple Global flag shared among all CE companions to use when destroying and respawning them
   via script. in order to prevent any of the usual proc effects like karma, separation, etc.   */
#define CE_Script_Kill                    (get_sfall_global_int("CESCKILL") == 1)
#define Set_CE_Script_Kill                set_sfall_global("CESCKILL", 1)
#define Off_CE_Script_Kill                set_sfall_global("CESCKILL", 0)

// Quick macros for handy trait checks
#define dude_has_cult                     has_trait(TRAIT_PERK, dude_obj, PERK_cult_of_personality)
#define dude_has_sexpert                  (global_var(GVAR_SEXPERT) >= 1)
#define dude_has_gigolo                   (global_var(GVAR_GIGALO) >= 1)
#define dude_has_virgin                   (global_var(GVAR_DUDE_VIRGIN >= 1)
#define dude_has_sex_appeal               has_trait(TRAIT_TRAIT, dude_obj, TRAIT_sex_appeal)
#define dude_has_kama_sutra               has_trait(TRAIT_PERK, dude_obj, PERK_kama_sutra_perk)

// State when told "Wait Here"
#define Waiting                           (local_var(LVAR_WAITING) >= 1)
#define Not_Waiting                       (local_var(LVAR_WAITING) == 0)
#define Set_Waiting                       set_local_var(LVAR_WAITING, 1)
#define Off_Waiting                       set_local_var(LVAR_WAITING, 0)

// Easy Karma Junk
#define Karma                             global_var(GVAR_PLAYER_REPUTATION)
#define KarmaInc(x)                       inc_general_rep(x)
#define KarmaDec(x)                       dec_general_rep(x)

// Macro to increment an sfall global.  I would only use this with INT types.
#define inc_sfall_global(x)               set_sfall_global(x, (get_sfall_global_int(x) + 1) )
#define dev_sfall_global(x)               set_sfall_global(x, (get_sfall_global_int(x) - 1) )

//transparency set, credit to Lexx and EtTu
#define SetSelfFlag(x)                    set_flags(self_obj, x)
#define GetSelfFlag                       get_flags(self_obj)

#define set_ghost                         SetSelfFlag(GetSelfFlag bwor FLAG_TRANSGLASS)
#define rem_ghost                         SetSelfFlag(GetSelfFlag bwand bwnot(FLAG_TRANSGLASS))

#define Is_Drug_Addict                    ( (global_var(GVAR_BUFF_OUT_ADDICT)) or (global_var(GVAR_MENTATS_ADDICT)) or \
                                          (  global_var(GVAR_RADAWAY_ADDICT))  or (global_var(GVAR_PSYCHO_ADDICT))  or \
                                          (  global_var(GVAR_ADDICT_JET)) )
#define Is_Addict_Any                     ( (global_var(GVAR_ALCOHOL_ADDICT))  or (global_var(GVAR_ADDICT_TRAGIC))  or \
                                          (  Is_Drug_Addict) )

#define Start_TH_Dialog_At_Node(the_node, mood, head)                                                                         \
                                          if (not in_dialog) then begin                                                \
                                             in_dialog := true;                                                        \
                                             if (TH_Version) then                                                      \
                                                start_gdialog(NAME, self_obj, mood, head, PartyMemberBackground);      \
                                             else                                                                      \
                                                start_gdialog(NAME, self_obj, mood, -1, -1);                           \
                                             gSay_Start;                                                               \
                                                call the_node;                                                         \
                                             gSay_End;                                                                 \
                                             end_dialogue;                                                             \
                                             in_dialog := false;                                                       \
                                          end else call the_node

#define Force_TH_Dialog_Start(the_node)   cedebug("force_dialog_start("+forced_node+"): "+self_name);                  \
                                          forced_node := the_node;                                                     \
                                          dialogue_system_enter

#define Check_TH_Forced_Dialog(mood, head)                                                                             \
                                          if (forced_node != 0) then begin                                             \
                                             cedebug("calling forced dialog: "+forced_node);                           \
                                             Start_TH_Dialog_At_Node(forced_node, mood, head);                         \
                                             forced_node := 0;                                                         \
                                          end


/*                                      All Companion Expansion base Flags (bits)                                     */
/* These are all from command.h and can be used universally. Left here for reference, the bit table and aliases can
   be added to if need be. Note these bits are all entirely lower_snake_case, so if you want a 'custom' "hostile"
   or the like, just use Snake_Caps or some other variation to distinguish the defines.

#define herebefore_bit                    bit_1
#define hostile_bit                       bit_2
#define examined_bit                      bit_3
#define personal_enemy_bit                bit_4
#define initialized_bit                   bit_5
#define is_float_bit                      bit_7
#define destroy_me_bit                    bit_8
#define heard_call_bit                    bit_9

Additions below
*/

#define left_party_definitive_bit         bit_10
#define insulted_light_bit                bit_11
#define insulted_bad_bit                  bit_12
#define slave_leave_bit                   bit_13
#define joined_player_bit                 bit_14

/*                           All Companion Expansion base Flags (Aliases) -- See note above                           */
/*
#define herebefore                        lvar_bit(LVAR_Flags, herebefore_bit)
#define set_herebefore                    set_lvar_bit_on(LVAR_Flags, herebefore_bit)
#define off_herebefore                    set_lvar_bit_off(LVAR_Flags, herebefore_bit)

#define hostile                           lvar_bit(LVAR_Flags, hostile_bit)
#define set_hostile                       set_lvar_bit_on(LVAR_Flags, hostile_bit)
#define off_hostile                       set_lvar_bit_off(LVAR_Flags, hostile_bit)

#define examined                          lvar_bit(LVAR_Flags, examined_bit)
#define set_examined                      set_lvar_bit_on(LVAR_Flags, examined_bit)

#define personal_enemy                    lvar_bit(LVAR_Flags, personal_enemy_bit)
#define set_personal_enemy                set_lvar_bit_on(LVAR_Flags, personal_enemy_bit); set_hostile

#define destroy_me                        lvar_bit(LVAR_Flags, destroy_me_bit)
#define set_destroy_me                    set_lvar_bit_on(LVAR_Flags, destroy_me_bit)

#define initialized                       lvar_bit(LVAR_Flags, initialized_bit)
#define set_initialized                   set_lvar_bit_on(LVAR_Flags, initialized_bit)

#define heard_call                        lvar_bit(LVAR_Flags, heard_call_bit)
#define set_heard_call                    set_lvar_bit_on(LVAR_Flags, heard_call_bit)

#define is_float                          lvar_bit(LVAR_Flags, is_float_bit)
#define is_click                          (is_float == false)
#define set_is_float                      set_lvar_bit_on(LVAR_Flags, is_float_bit)
#define set_is_click                      set_lvar_bit_off(LVAR_Flags, is_float_bit)

Additions Below
*/
#define Left_Party_Definitive             lvar_bit(LVAR_Flags, left_party_definitive_bit)
#define Set_Left_Party_Definitive         set_lvar_bit_on(LVAR_Flags, left_party_definitive_bit)
#define Off_Left_Party_Definitive         set_lvar_bit_off(LVAR_Flags, left_party_definitive_bit)
#define Insulted                          ( lvar_bit(LVAR_Flags, insulted_light_bit) or                                \
                                            lvar_bit(LVAR_Flags, insulted_bad_bit) )
#define Insulted_Light                    lvar_bit(LVAR_Flags, insulted_light_bit)
#define Insulted_Bad                      lvar_bit(LVAR_Flags, insulted_bad_bit)
#define Off_Insulted                      set_lvar_bit_off(LVAR_Flags, insulted_light_bit);                            \
                                          set_lvar_bit_off(LVAR_Flags, insulted_bad_bit)
#define Set_Insulted_Light                if (not Insulted) then begin                                                 \
                                             set_lvar_bit_on(LVAR_Flags, insulted_light_bit);                          \
                                          end else begin                                                               \
                                             set_lvar_bit_off(LVAR_Flags, insulted_light_bit);                         \
                                             set_lvar_bit_off(LVAR_Flags, insulted_bad_bit);                           \
                                          end                                                                          \
                                          cedebug("Insulted Light Set")
#define Set_Insulted_Bad                  set_lvar_bit_off(LVAR_Flags, insulted_light_bit);                            \
                                          set_lvar_bit_on(LVAR_Flags, insulted_bad_bit)
#define Slave_Leave                       lvar_bit(LVAR_Flags, slave_leave_bit)
#define Set_Slave_Leave                   set_lvar_bit_on(LVAR_Flags, slave_leave_bit)
#define Off_Slave_Leave                   set_lvar_bit_off(LVAR_Flags, slave_leave_bit)
#define Set_Joined_Player                 set_lvar_bit_on(LVAR_Flags, joined_player_bit)

/*******************************************************************************
    New Reno Stuff - newreno.h causes errors in some global scripts when
    included, so I copied some here (and created a few for ease of use)
*******************************************************************************/
#ifndef get_new_reno_flag
   #define set_new_reno_flag_on(x,n)         set_gvar_bit_on(GVAR_NEW_RENO_FLAG_##n, x)
   #define set_new_reno_flag_off(x,n)        set_gvar_bit_off(GVAR_NEW_RENO_FLAG_##n, x)
   #define get_new_reno_flag(x,n)            gvar_bit(GVAR_NEW_RENO_FLAG_##n, x)

   #define set_wright_flag(x)                set_gvar_bit_on(GVAR_NEW_RENO_WRIGHT_FLAGS, x)
   #define off_wright_flag(x)                set_gvar_bit_off(GVAR_NEW_RENO_WRIGHT_FLAGS, x)
   #define get_wright_flag(x)                gvar_bit(GVAR_NEW_RENO_WRIGHT_FLAGS, x)

   #define lil_jesus_dead_bit                bit_1
   #define lil_jesus_dead                    (get_new_reno_flag(lil_jesus_dead_bit, 1))
   #define set_lil_jesus_dead                set_new_reno_flag_on(x,n)
   #define big_jesus_dead_bit                bit_26
   #define big_jesus_dead                    get_new_reno_flag(big_jesus_dead_bit, 2)

   #define angela_dead                       status_is_dead(GVAR_NEW_RENO_ANGELA)
   #define set_angela_dead                   set_status_dead(GVAR_NEW_RENO_ANGELA)

   #define bishop_dead                       status_is_dead(GVAR_NEW_RENO_BISHOP)

   #define mason_dead                        (new_reno_mason_obj != 0)  // NEW
   #define set_mason_dead                    (new_reno_mason_obj := 0)  // NEW

   #define chris_dead_bit                    bit_17   // NEW
   #define chris_dead                        (get_wright_flag(chris_dead_bit))  // NEW
   #define set_chris_dead                    (set_wright_flag(chris_dead_bit))  // NEW

   // Define for Kitty's drug thingy in New Reno instead of 'map_var(x) which is hard to read.
   #define MVAR_Kitty_Drug                   (2)
   #define Kitty_AGI                         (480)  // + 1 agility for 1 hr      -- Just a shorter alias
   #define Kitty_STR                         (482)  // + 1 strength for 1 hr     -- Just a shorter alias
#endif


/*******************************************************************************
    NCR crap
*******************************************************************************/
#ifndef MVAR_Do_Lenny_Fight
   #define MVAR_Do_Lenny_Fight               (8)
   #define MVAR_Lenny_Dead                   (2)
#endif

/*******************************************************************************
    Modoc crap to avoid including its entire header
*******************************************************************************/
//#define get_modoc_flag(x, y)              gvar_bit(GVAR_MODOC_GENERIC_FLAG_##y, x)
//#define set_modoc_flag_on(x, y)           set_gvar_bit_on(GVAR_MODOC_GENERIC_FLAG_##y, x)
//#define set_modoc_flag_off(x, y)          set_gvar_bit_off(GVAR_MODOC_GENERIC_FLAG_##y, x)

//#define miria_dead_bit                    bit_14
//#define set_modoc_flag_2_on(x)            set_modoc_flag_on(x, 2)
//#define set_modoc_flag_2_off(x)           set_modoc_flag_off(x, 2)
//#define get_modoc_flag_2(x)               get_modoc_flag(x, 2)

//#define miria_dead                        (get_modoc_flag_2(miria_dead_bit))
//#define set_miria_dead                    set_modoc_flag_2_on(miria_dead_bit)

/*******************************************************************************
    New 'person_dead' aliases (experimental)
*******************************************************************************/
#define Ceri_Dead                         is_critter_dead(Ceri_Ptr)
#define Rhea_Dead                         is_critter_dead(Rhea_Ptr)
#define Doc_Dead                          is_critter_dead(Doc_Ptr)

/*******************************************************************************
   Companion defines/alias' - ease of use
*******************************************************************************/
// Lara Spawn State
#define Lara_Spawned                      (get_sfall_global_int("LARASPWN") == 1)
#define Set_Lara_Spawned                  set_sfall_global("LARASPWN", 1)
#define Off_Lara_Spawned                  set_sfall_global("LARASPWN", 0)
// Lara companion state
#define Lara_Available                    (get_sfall_global_int("LARAVAIL") == 1)
#define Set_Lara_Available                set_sfall_global("LARAVAIL", 1)
#define Off_Lara_Available                set_sfall_global("LARAVAIL", 0)

// Ceri spawn state
#define Ceri_Spawned                      (get_sfall_global_int("CERISPWN") == 1)
#define Set_Ceri_Spawned                  set_sfall_global("CERISPWN", 1)
#define Off_Ceri_Spawned                  set_sfall_global("CERISPWN", 0)
// Ceri Companion State
#define Ceri_Available                    (get_sfall_global_int("CERIVAIL") == 1)
#define Set_Ceri_Available                set_sfall_global("CERIVAIL", 1)
#define Off_Ceri_Available                set_sfall_global("CERIVAIL", 0)

// Miria Base Data
#define PID_MIRIA_EVIL                    (16777784)
#define EVIL_MIRIA_SPRITE                 FID_NMLTBB
// Miria Spawn State (NON-Evil one)
#define Miria_Spawned                     (get_sfall_global_int("MIRISPWN") == 1)
#define Set_Miria_Spawned                 set_sfall_global("MIRISPWN", 1)
#define Off_Miria_Spawned                 set_sfall_global("MIRISPWN", 0)
// Custom, not a normal 'is_critter_dead(who)' function
#define Miria_Killed                      (get_sfall_global_int("MIRIKILL") == 1)
#define Set_Miria_Killed                  set_sfall_global("MIRIKILL", 1)
#define Off_Miria_Killed                  set_sfall_global("MIRIKILL", 0)
// Miria Available States: for when code is reformatted into vanilla/new blocks
#define Miria_Available                   (get_sfall_global_int("MIRIVAIL") == 1)
#define Set_Miria_Available               set_sfall_global("MIRIVAIL", 1)
#define Off_Miria_Available               set_sfall_global("MIRIVAIL", 0)
// Miria Evil Faction State
#define Miria_Evil_Faction                get_sfall_global_int("MIRIFACT")
#define Miria_Evil_Faction_Is(x)          (get_sfall_global_int("MIRIFACT") == x)
#define Miria_Evil_Faction_Not(x)         (get_sfall_global_int("MIRIFACT") != x)
#define Set_Miria_Evil_Faction(x)         set_sfall_global("MIRIFACT", x)
// Used to hide Miria in Modoc when she goes evil
#define Miria_Modoc_Hidden                get_sfall_global_int("MIRIHIDE")
#define Set_Miria_Modoc_Hidden            set_sfall_global("MIRIHIDE", 1)
#define Off_Miria_Modoc_Hidden            set_sfall_global("MIRIHIDE", 0)
// Faction Constants
#define FAC_NONE                          (0)
#define FAC_DEN_SLAVER                    (1)
#define FAC_NCR_SLAVER                    (2)
#define FAC_HUBOLOGIST                    (3)
#define FAC_ABBEY_NUN                     (4)
// Miria Evil Spawn States
#define Miria_Evil_Spawned                (get_sfall_global_int("MIRIEVIL") == 1)
#define Set_Miria_Evil_Spawned            set_sfall_global("MIRIEVIL", 1)
#define Off_Miria_Evil_Spawned            set_sfall_global("MIRIEVIL", 0)
// Miria Slave States                     down with other companion slave states

// Li'l Jesus Mordino spawn state
#define Lil_Jesus_Spawned                 (get_sfall_global_int("LILJSPWN") == 1 )
#define Set_Lil_Jesus_Spawned             set_sfall_global("LILJSPWN", 1)
#define Off_Lil_Jesus_Spawned             set_sfall_global("LILJSPWN", 0)
// Li'l Jesus Mordino companion state
#define Lil_Jesus_Available               (get_sfall_global_int("LILJVAIL") == 1)
#define Set_Lil_Jesus_Available           set_sfall_global("LILJVAIL", 1)
#define Off_Lil_Jesus_Available           set_sfall_global("LILJVAIL", 0)

// Angela Bishop Spawn State
#define Angela_Spawned                    (get_sfall_global_int("ANGLSPWN") == 1 )
#define Set_Angela_Spawned                set_sfall_global("ANGLSPWN", 1)
#define Off_Angela_Spawned                set_sfall_global("ANGLSPWN", 0)
// Angela Bishop Companion State
#define Angela_Available                  (get_sfall_global_int("ANGLVAIL") == 1)
#define Set_Angela_Available              set_sfall_global("ANGLVAIL", 1)
#define Off_Angela_Available              set_sfall_global("ANGLVAIL", 0)

// Mason Spawn State
#define Mason_Spawned                     (get_sfall_global_int("MASNSPWN") == 1 )
#define Set_Mason_Spawned                 set_sfall_global("MASNSPWN", 1)
#define Off_Mason_Spawned                 set_sfall_global("MASNSPWN", 0)
// Mason Companion State
#define Mason_Available                   (get_sfall_global_int("MASNVAIL") == 1)
#define Set_Mason_Available               set_sfall_global("MASNVAIL", 1)
#define Off_Mason_Available               set_sfall_global("MASNVAIL", 0)

// Chris Wright Spawn State
#define Chris_Spawned                     (get_sfall_global_int("CRISSPWN") == 1 )
#define Set_Chris_Spawned                 set_sfall_global("CRISSPWN", 1)
#define Off_Chris_Spawned                 set_sfall_global("CRISSPWN", 0)
// Chris Wright Companion State
#define Chris_Available                   (get_sfall_global_int("CRISVAIL") == 1)
#define Set_Chris_Available               set_sfall_global("CRISVAIL", 1)
#define Off_Chris_Available               set_sfall_global("CRISVAIL", 0)

// Rhea Spawn State
#define Rhea_Spawned                      (get_sfall_global_int("RHEASPWN") == 1 )
#define Set_Rhea_Spawned                  set_sfall_global("RHEASPWN", 1)
#define Off_Rhea_Spawned                  set_sfall_global("RHEASPWN", 0)
// Rhea Companion State
#define Rhea_Available                    (get_sfall_global_int("RHEAVAIL") == 1)
#define Set_Rhea_Available                set_sfall_global("RHEAVAIL", 1)
#define Off_Rhea_Available                set_sfall_global("RHEAVAIL", 0)

// Doc Jones Spawn State
#define Doc_Spawned                       (get_sfall_global_int("DOCJSPWN") == 1 )
#define Set_Doc_Spawned                   set_sfall_global("DOCSPAWN", 1)
#define Off_Doc_Spawned                   set_sfall_global("DOCJSPAWN", 0)
// Doc JonesCompanion State
#define Doc_Available                     (get_sfall_global_int("DOCAVAIL") == 1)
#define Set_Doc_Available                 set_sfall_global("DOCAVAIL", 1)
#define Off_Doc_Available                 set_sfall_global("DOCAVAIL", 0)

/*******************************************************************************
    Companion Slaves
*******************************************************************************/
// Give/Remove 'Slaver' status for players who buy CE Slaves.
#define Set_Slave_Owner_Rep               set_global_var(GVAR_REPUTATION_SLAVE_OWNER,1)
#define Off_Slave_Owner_Rep               set_global_var(GVAR_REPUTATION_SLAVE_OWNER,0)

// How long they're a slave of the Slavers somewhere.
#define Time_As_Slave                     local_var(LVAR_Time_As_Slave)
#define Set_Time_As_Slave(x)              set_local_var(LVAR_Time_As_Slave, x)

// Slave-state constants
#define SLAVE_NONE                        (0)
#define SLAVE_METZGER                     (1)
#define SLAVE_DIED                        (2)
#define SLAVE_TO_SLAVER                   (3)

// Metzger Slave States - NOTE: 'who' MUST be a unique 4-char string!!!
#define Metzger_Slave(who)                get_sfall_global_int(who+"SLAV")
#define Set_Metzger_Slave_Is(who, state)  set_sfall_global(who+"SLAV", state)
#define Set_Metzger_Slave_Free(who)       set_sfall_global(who+"SLAV", 0)
#define Set_Metzger_Slave_Slave(who)      set_sfall_global(who+"SLAV", 1)
#define Set_Metzger_Slave_Died(who)       set_sfall_global(who+"SLAV", 2)
#define Set_Metzger_Slave_To_Slaver(who)  set_sfall_global(who+"SLAV", 3)

// Miria Slave States
#define Miria_Metzger_Slave               get_sfall_global_int("MIRISLAV")
#define Set_Miria_Metzger_Free            set_sfall_global("MIRISLAV", 0)
#define Set_Miria_Metzger_Slave           set_sfall_global("MIRISLAV", 1)
#define Set_Miria_Metzger_Died            set_sfall_global("MIRISLAV", 2)
#define Set_Miria_Metzger_Slave_Slaver    set_sfall_global("MIRISLAV", 3)

// Angela Slave States
#define Angela_Metzger_Slave              get_sfall_global_int("ANGLSLAV")
#define Set_Angela_Metzger_Free           set_sfall_global("ANGLSLAV", 0)
#define Set_Angela_Metzger_Slave          set_sfall_global("ANGLSLAV", 1)
#define Set_Angela_Metzger_Died           set_sfall_global("ANGLSLAV", 2)
#define Set_Angela_Metzger_Slave_Slaver   set_sfall_global("ANGLSLAV", 3)

// Rhea Slave States
#define Rhea_Metzger_Slave                get_sfall_global_int("RHEASLAV")
#define Set_Rhea_Metzger_Free             set_sfall_global("RHEASLAV", 0)
#define Set_Rhea_Metzger_Slave            set_sfall_global("RHEASLAV", 1)
#define Set_Rhea_Metzger_Died             set_sfall_global("RHEASLAV", 2)
#define Set_Rhea_Metzger_Slave_Slaver     set_sfall_global("RHEASLAV", 3)

// See if Slave is Alive/dead, or set accordingly
#define Slave_Companion_Alive             (get_sfall_global_int("SLAVDIED") == 0 )
#define Slave_Companion_Died              (get_sfall_global_int("SLAVDIED") == 1 )
#define Set_Slave_Companion_Alive         set_sfall_global("SLAVDIED", 0)
#define Set_Slave_Companion_Died          set_sfall_global("SLAVDIED", 1)

/*******************************************************************************
    Ini Settings
*******************************************************************************/
#define ce_ini                            "mods\\x_rpu_companion_expansion.ini"
#define ce_main                           "MAIN"
#define ce_flavor                         "FLAVOR"
#define ce_setting(section, setting)      get_ini_setting(ce_ini + "|" + section + "|" + setting)
#define ce_s_sounds                       "intercourse_sounds"
#define s_sounds_enabled                  get_ini_setting(ce_ini + "|" + ce_flavor + "|" + ce_s_sounds)
#define ce_heads                          "companion_heads"
#define heads_enabled                     get_ini_setting(ce_ini + "|" + ce_main + "|" + ce_heads)


/*******************************************************************************
   Abusive Party Member Options : Mainly for Miria right now.
   These just make player responses more "bitch, now" and less "lovey".
*******************************************************************************/

#define party_member_options_heal_abusive(abusive_threshold, heal_msg, heal_normal_msg, heal_abusive_msg)              \
                                          if (heal_msg != 0) then begin                                                \
                                             if (self_cur_hits < self_max_hits) then begin                             \
                                                if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin\
                                                   NOption(heal_abusive_msg, DEF_PARTY_HEAL_NODE, 004);                \
                                                end else begin                                                         \
                                                   NOption(heal_normal_msg, DEF_PARTY_HEAL_NODE, 004);                 \
                                                end                                                                    \
                                             end                                                                       \
                                          end

#define party_member_options_follow_abusive(abusive_threshold, follow_msg, follow_normal_msg, follow_abusive_msg)      \
                                          if (follow_msg != 0) then begin                                              \
                                             if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin   \
                                                NOption(follow_abusive_msg, DEF_PARTY_FOLLOW_NODE, 004);               \
                                             end else begin                                                            \
                                                NOption(follow_normal_msg, DEF_PARTY_FOLLOW_NODE, 004);                \
                                             end                                                                       \
                                          end

#define party_member_options_gear_abusive(abusive_threshold, gear_msg, gear_normal_msg, gear_abusive_msg)              \
                                          if (gear_msg != 0) then begin                                                \
                                             if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin   \
                                                NOption(gear_abusive_msg, DEF_PARTY_GEAR_NODE, 004);                   \
                                             end else begin                                                            \
                                                NOption(gear_normal_msg, DEF_PARTY_GEAR_NODE, 004);                    \
                                             end                                                                       \
                                          end

#define party_member_options_wait_abusive(abusive_threshold, wait_msg, wait_normal_msg, wait_abusive_msg)              \
                                          if (wait_msg != 0) then begin                                                \
                                             if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin   \
                                                NOption(wait_abusive_msg, DEF_PARTY_WAIT_NODE, 004);                   \
                                             end else begin                                                            \
                                                NOption(wait_normal_msg, DEF_PARTY_WAIT_NODE, 004);                    \
                                             end                                                                       \
                                          end

#define party_member_options_nowait_abusive(abusive_threshold, nowait_msg, nowait_normal_msg, nowait_abusive_msg)      \
                                          if (nowait_msg != 0) then begin                                              \
                                             if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin   \
                                                NOption(nowait_abusive_msg, DEF_PARTY_NOWAIT_NODE, 004);               \
                                             end else begin                                                            \
                                                NOption(nowait_normal_msg, DEF_PARTY_NOWAIT_NODE, 004);                \
                                             end                                                                       \
                                          end

#define party_member_options_end_abusive(abusive_threshold, end_msg, end_normal_msg, end_abusive_msg)                  \
                                          if (end_msg != 0) then begin                                                 \
                                             if (global_var(GVAR_PLAYER_REPUTATION) > abusive_threshold) then begin    \
                                                NOption(end_normal_msg, DEF_PARTY_END_NODE, 004);                      \
                                             end else begin                                                            \
                                                NOption(end_abusive_msg, DEF_PARTY_END_NODE, 004);                     \
                                             end                                                                       \
                                          end

#define party_member_options_stupid_abusive(abusive_threshold, stupid_msg, stupid_normal_msg)                          \
                                          if (stupid_msg != 0) then begin                                              \
                                             NOption(stupid_normal_msg, DEF_PARTY_STUPID_NODE, -003);                  \
                                          end

#define party_gear_options_abusive(abusive_threshold, weapon_use_msg, unarm_msg, unarm_normal_msg, unarm_abusive_msg,  \
                                          armor_msg, armor_normal_msg, armor_abusive_msg, gear_ignore_msg)             \
                                          if (weapon_use_msg != 0) then begin                                          \
                                             NOption(weapon_use_msg, DEF_WEAPON_USE_NODE, 004);                        \
                                          end                                                                          \
                                          if (unarm_msg != 0) then begin                                               \
                                             if (self_is_armed) then begin                                             \
                                                if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin\
                                                   NOption(unarm_abusive_msg, DEF_UNARM_NODE, 004);                    \
                                                end else begin                                                         \
                                                   NOption(unarm_normal_msg, DEF_UNARM_NODE, 004);                     \
                                                end                                                                    \
                                                NOption(unarm_msg, DEF_UNARM_NODE, 004);                               \
                                             end                                                                       \
                                          end                                                                          \
                                          if (armor_msg != 0) then begin                                               \
                                             if (self_wearing_armor) then begin                                        \
                                                if (global_var(GVAR_PLAYER_REPUTATION) <= abusive_threshold) then begin\
                                                   NOption(armor_abusive_msg, Node1009, 004);                          \
                                                end else begin                                                         \
                                                   NOption(armor_normal_msg, Node1009, 004);                           \
                                                end                                                                    \
                                             end                                                                       \
                                          end                                                                          \
                                          if (gear_ignore_msg != 0) then begin                                         \
                                             NOption(gear_ignore_msg, PARTY_NODE_X, 004);                              \
                                          end                                                                          \
                                          cedebug("USED PARTY GEAR OPTIONS")

#define party_member_options_abusive(abusive_threshold, additional_first_option, heal_msg, heal_normal_msg,            \
                                          heal_abusive_msg, follow_msg, follow_normal_msg, follow_abusive_msg,         \
                                          gear_msg, gear_normal_msg, gear_abusive_msg, wait_msg, wait_normal_msg,      \
                                          wait_abusive_msg, nowait_msg, nowait_normal_msg, nowait_abusive_msg,         \
                                          end_msg, end_normal_msg, end_abusive_msg, stupid_msg, stupid_normal_msg)     \
                                          if (party_is_waiting == false) then begin                                    \
                                             if (local_var(LVAR_FOLLOW_DISTANCE) == 0) then begin                      \
                                                set_follow_medium;                                                     \
                                             end                                                                       \
                                             additional_first_option;                                                  \
                                             party_member_options_heal_abusive(abusive_threshold, heal_msg, heal_normal_msg, heal_abusive_msg)\
                                             party_member_options_follow_abusive(abusive_threshold, follow_msg, follow_normal_msg, follow_abusive_msg)\
                                             party_member_options_gear_abusive(abusive_threshold, gear_msg, gear_normal_msg, gear_abusive_msg)\
                                             party_member_options_wait_abusive(abusive_threshold, wait_msg, wait_normal_msg, wait_abusive_msg)\
                                          end else                                                                     \
                                             party_member_options_nowait_abusive(abusive_threshold, nowait_msg, nowait_normal_msg, nowait_abusive_msg)\
                                          party_member_options_end_abusive(abusive_threshold, end_msg, end_normal_msg, end_abusive_msg)\
                                          party_member_options_stupid_abusive(abusive_threshold, stupid_msg, stupid_normal_msg)\
                                          cedebug("USED PARTY MEMBER OPTIONS")

#define set_self_abandon_party_no_spouse  if (obj_in_party(self_obj)) then begin                                       \
                                             cedebug("abandon party: " + self_name);                                   \
                                             party_remove_self;                                                        \
                                          end                                                                          \
                                          if ((local_var(LVAR_TEAM) != -1) and (self_team == false)) then begin        \
                                              set_team(self_obj, local_var(LVAR_TEAM));                                \
                                              set_local_var(LVAR_TEAM, -1);                                            \
                                          end                                                                          \
                                          cedebug("" + self_name + " has abandoned the party")

/*******************************************************************************
    Medical
*******************************************************************************/
/*
#define Check_Which_Companion_Injured    if (Vic_In_Party) then                                                        \
                                            if (Is_Injured(Vic_Ptr)) or (Is_Crippled(Vic_Ptr)) then                    \
                                                vic_hurt+=1;                                                           \
                                          if (Myron_In_Party) then                                                     \
                                             if (Is_Injured(Myron_Ptr)) or (Is_Crippled(Myron_Ptr)) then               \
                                                myron_hurt+=1;                                                         \
                                          if (Marcus_In_Party) then                                                    \
                                             if (Is_Injured(Marcus_Ptr)) or (Is_Crippled(Marcus_Ptr)) then             \
                                                marcus_hurt+=1;                                                        \
                                          if (MacRae_In_Party) then                                                    \
                                             if (Is_Injured(MacRae_Ptr)) or (Is_Crippled(MacRae_Ptr)) then             \
                                                 cass_hurt+=1;                                                         \
                                          if (Sulik_In_Party) then                                                     \
                                             if (Is_Injured(Sulik_Ptr)) or (Is_Crippled(Sulik_Ptr)) then               \
                                                 sulik_hurt+=1;                                                        \
                                          if (Lenny_In_Party) then                                                     \
                                             if (Is_Injured(Lenny_Ptr)) or (Is_Crippled(Lenny_Ptr)) then               \
                                                 lenny_hurt+=1;                                                        \
                                          if (Cyberdog_In_Party) then                                                  \
                                             if (Is_Injured(Cyberdog_Ptr)) or (Is_Crippled(Cyberdog_Ptr)) then         \
                                                 cyberdog_hurt+=1;                                                     \
                                          if (Goris_In_Party) then                                                     \
                                             if (Is_Injured(Goris_Ptr)) or (Is_Crippled(Goris_Ptr)) then               \
                                                 goris_hurt+=1;                                                        \
                                          if (Davin_In_Party) then                                                     \
                                             if (Is_Injured(Davin_Ptr)) or (Is_Crippled(Davin_Ptr)) then               \
                                                 davin_hurt+=1;                                                        \
                                          if (Miria_In_Party) then                                                     \
                                             if (Is_Injured(Miria_Ptr)) or (Is_Crippled(Miria_Ptr)) then               \
                                                 miria_hurt+=1;                                                        \
                                          if (Robobrain_In_Party) then                                                 \
                                             if (Is_Injured(Robobrain_Ptr)) or (Is_Crippled(Robobrain_Ptr)) then       \
                                                 robobrain_hurt+=1;                                                    \
                                          if (Dogmeat_In_Party) then                                                   \
                                             if (Is_Injured(Dogmeat_Ptr)) or (Is_Crippled(Dogmeat_Ptr)) then           \
                                                 dogmeat_hurt+=1;                                                      \
                                          if (K9_In_Party) then                                                        \
                                             if (Is_Injured(K9_Ptr)) or (Is_Crippled(K9_Ptr)) then                     \
                                                 k9_hurt+=1;                                                           \
                                          if (Kitsune_In_Party) then                                                   \
                                             if (Is_Injured(Kitsune_Ptr)) or (Is_Crippled(Kitsune_Ptr)) then           \
                                                 kitsune_hurt+=1;                                                      \
                                          if (Dex_In_Party) then                                                       \
                                             if (Is_Injured(Dex_Ptr)) or (Is_Crippled(Dex_Ptr)) then                   \
                                                 dex_hurt+=1;                                                          \
                                          if (Cat_Jules_In_Party) then                                                 \
                                             if (Is_Injured(Cat_Jules_Ptr)) or (Is_Crippled(Cat_Jules_Ptr)) then       \
                                                 cat_hurt+=1;                                                          \
                                          if (Ceri_In_Party) then                                                      \
                                             if (Is_Injured(Ceri_Ptr)) or (Is_Crippled(Ceri_Ptr)) then                 \
                                                 ceri_hurt+=1;                                                         \
                                          if (Rhea_In_Party) then                                                      \
                                             if (Is_Injured(Rhea_Ptr)) or (Is_Crippled(Rhea_Ptr)) then                 \
                                                 rhea_hurt+=1;                                                         \
                                          if (Lara_In_Party) then                                                      \
                                             if (Is_Injured(Lara_Ptr)) or (Is_Crippled(Lara_Ptr)) then                 \
                                                 lara_hurt+=1;                                                         \
                                          if (Angela_In_Party) then                                                    \
                                             if (Is_Injured(Angela_Ptr)) or (Is_Crippled(Angela_Ptr)) then             \
                                                 angela_hurt+=1;                                                       \
                                          if (Mason_In_Party) then                                                     \
                                             if (Is_Injured(Mason_Ptr)) or (Is_Crippled(Mason_Ptr)) then               \
                                                 mason_hurt+=1;                                                        \
                                          if (Lil_Jesus_In_Party) then                                                 \
                                             if (Is_Injured(Lil_Jesus_Ptr)) or (Is_Crippled(Lil_Jesus_Ptr)) then       \
                                                 lilj_hurt+=1;                                                         \
                                          if (Chris_In_Party) then                                                     \
                                             if (Is_Injured(Chris_Ptr)) or (Is_Crippled(Chris_Ptr)) then               \
                                                 chris_hurt+=1;                                                        \
                                          if (Male_Slave_In_Party) then                                                \
                                             if (Is_Injured(Male_Slave_Ptr)) or (Is_Crippled(Male_Slave_Ptr)) then     \
                                                 slavem_hurt+=1;                                                       \
                                          if (Female_Slave_In_Party) then                                              \
                                             if (Is_Injured(Female_Slave_Ptr)) or (Is_Crippled(Female_Slave_Ptr)) then \
                                                 slavef_hurt+=1;


#define Check_Which_Companion_Poisoned    if (Vic_In_Party) then                                                       \
                                             if ((get_poison(Vic_Ptr) > 0) or (get_rads(Vic_Ptr))) then                \
                                                vic_poisoned+=1;                                                       \
                                          if (Myron_In_Party) then                                                     \
                                             if ((get_poison(Myron_Ptr) > 0) or (get_rads(Myron_Ptr))) then            \
                                                myron_poisoned+=1;                                                     \
                                          if (Marcus_In_Party) then                                                    \
                                             if ((get_poison(Marcus_Ptr) > 0) or (get_rads(Marcus_Ptr))) then          \
                                                marcus_poisoned+=1;                                                    \
                                          if (MacRae_In_Party) then                                                    \
                                             if ((get_poison(MacRae_Ptr) > 0) or (get_rads(MacRae_Ptr))) then          \
                                                cass_poisoned+=1;                                                      \
                                          if (Sulik_In_Party) then                                                     \
                                             if ((get_poison(Sulik_Ptr) > 0) or (get_rads(Sulik_Ptr))) then            \
                                                sulik_poisoned+=1;                                                     \
                                          if (Lenny_In_Party) then                                                     \
                                             if ((get_poison(Lenny_Ptr) > 0) or (get_rads(Lenny_Ptr))) then            \
                                                lenny_poisoned+=1;                                                     \
                                          if (Cyberdog_In_Party) then                                                  \
                                             if ((get_poison(Cyberdog_Ptr) > 0) or (get_rads(Cyberdog_Ptr))) then      \
                                                cyberdog_poisoned+=1;                                                  \
                                          if (Goris_In_Party) then                                                     \
                                             if ((get_poison(Goris_Ptr) > 0) or (get_rads(Goris_Ptr))) then            \
                                                goris_poisoned+=1;                                                     \
                                          if (Davin_In_Party) then                                                     \
                                             if ((get_poison(Davin_Ptr) > 0) or (get_rads(Davin_Ptr))) then            \
                                                davin_poisoned+=1;                                                     \
                                          if (Miria_In_Party) then                                                     \
                                             if ((get_poison(Miria_Ptr) > 0) or (get_rads(Miria_Ptr))) then            \
                                                miria_poisoned+=1;                                                     \
                                          if (Robobrain_In_Party) then                                                 \
                                             if ((get_poison(Robobrain_Ptr) > 0) or (get_rads(Robobrain_Ptr))) then    \
                                                robobrain_poisoned+=1;                                                 \
                                          if (Dogmeat_In_Party) then                                                   \
                                             if ((get_poison(Dogmeat_Ptr) > 0) or (get_rads(Dogmeat_Ptr))) then        \
                                                dogmeat_poisoned+=1;                                                   \
                                          if (K9_In_Party) then                                                        \
                                             if ((get_poison(K9_Ptr) > 0) or (get_rads(K9_Ptr))) then                  \
                                                k9_poisoned+=1;                                                        \
                                          if (Kitsune_In_Party) then                                                   \
                                             if ((get_poison(Kitsune_Ptr) > 0) or (get_rads(Kitsune_Ptr))) then        \
                                                kitsune_poisoned+=1;                                                   \
                                          if (Dex_In_Party) then                                                       \
                                             if ((get_poison(Dex_Ptr) > 0) or (get_rads(Dex_Ptr))) then                \
                                                dex_poisoned+=1;                                                       \
                                          if (Cat_Jules_In_Party) then                                                 \
                                             if ((get_poison(Cat_Jules_Ptr) > 0) or (get_rads(Cat_Jules_Ptr))) then    \
                                                cat_poisoned+=1;                                                       \
                                          if (Ceri_In_Party) then                                                      \
                                             if ((get_poison(Ceri_Ptr) > 0) or (get_rads(Ceri_Ptr))) then              \
                                                ceri_poisoned+=1;                                                      \
                                          if (Rhea_In_Party) then                                                      \
                                             if ((get_poison(Rhea_Ptr) > 0) or (get_rads(Rhea_Ptr))) then              \
                                                rhea_poisoned+=1;                                                      \
                                          if (Lara_In_Party) then                                                      \
                                             if ((get_poison(Lara_Ptr) > 0) or (get_rads(Lara_Ptr))) then              \
                                                lara_poisoned+=1;                                                      \
                                          if (Angela_In_Party) then                                                    \
                                             if ((get_poison(Angela_Ptr) > 0) or (get_rads(Angela_Ptr))) then          \
                                                angela_poisoned+=1;                                                    \
                                          if (Mason_In_Party) then                                                     \
                                             if ((get_poison(Mason_Ptr) > 0) or (get_rads(Mason_Ptr))) then            \
                                                mason_poisoned+=1;                                                     \
                                          if (Lil_Jesus_In_Party) then                                                 \
                                             if ((get_poison(Lil_Jesus_Ptr) > 0) or (get_rads(Lil_Jesus_Ptr))) then    \
                                                lilj_poisoned+=1;                                                      \
                                          if (Chris_In_Party) then                                                     \
                                             if ((get_poison(Chris_Ptr) > 0) or (get_rads(Chris_Ptr))) then            \
                                                chris_poisoned+=1;                                                     \
                                          if (Male_Slave_In_Party) then                                                \
                                             if ((get_poison(Male_Slave_Ptr) > 0) or (get_rads(Male_Slave_Ptr))) then  \
                                                slavem_poisoned+=1;                                                    \
                                          if (Female_Slave_In_Party) then                                              \
                                             if ((get_poison(Female_Slave_Ptr) > 0) or (get_rads(Female_Slave_Ptr))) then \
                                                slavef_poisoned+=1;


#define Companion_is_injured              unhealthy_members := 0;                                                      \
                                             if (Vic_In_Party) then                                                    \
                                                if (Is_Injured(Vic_Ptr)) or (Is_Crippled(Vic_Ptr)) then                \
                                                   unhealthy_members+=1;                                               \
                                             if (Myron_In_Party) then                                                  \
                                                if (Is_Injured(Myron_Ptr)) or (Is_Crippled(Myron_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Marcus_In_Party) then                                                 \
                                                if (Is_Injured(Marcus_Ptr)) or (Is_Crippled(Marcus_Ptr)) then          \
                                                   unhealthy_members+=1;                                               \
                                             if (MacRae_In_Party) then                                                 \
                                                if (Is_Injured(MacRae_Ptr)) or (Is_Crippled(MacRae_Ptr)) then          \
                                                   unhealthy_members+=1;                                               \
                                             if (Sulik_In_Party) then                                                  \
                                                if (Is_Injured(Sulik_Ptr)) or (Is_Crippled(Sulik_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Lenny_In_Party) then                                                  \
                                                if (Is_Injured(Lenny_Ptr)) or (Is_Crippled(Lenny_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Cyberdog_In_Party) then                                               \
                                                if (Is_Injured(Cyberdog_Ptr)) or (Is_Crippled(Cyberdog_Ptr)) then      \
                                                   unhealthy_members+=1;                                               \
                                             if (Doc_In_Party) then                                                    \
                                                if (Is_Injured(Doc_Ptr)) or (Is_Crippled(Doc_Ptr)) then                \
                                                   unhealthy_members+=1;                                               \
                                             if (Goris_In_Party) then                                                  \
                                                if (Is_Injured(Goris_Ptr)) or (Is_Crippled(Goris_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Davin_In_Party) then                                                  \
                                                if (Is_Injured(Davin_Ptr)) or (Is_Crippled(Davin_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Miria_In_Party) then                                                  \
                                                if (Is_Injured(Miria_Ptr)) or (Is_Crippled(Miria_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Robobrain_In_Party) then                                              \
                                                if (Is_Injured(Robobrain_Ptr)) or (Is_Crippled(Robobrain_Ptr)) then    \
                                                   unhealthy_members+=1;                                               \
                                             if (Dogmeat_In_Party) then                                                \
                                                if (Is_Injured(Dogmeat_Ptr)) or (Is_Crippled(Dogmeat_Ptr)) then        \
                                                   unhealthy_members+=1;                                               \
                                             if (K9_In_Party) then                                                     \
                                                if (Is_Injured(K9_Ptr)) or (Is_Crippled(K9_Ptr)) then                  \
                                                   unhealthy_members+=1;                                               \
                                             if (Kitsune_In_Party) then                                                \
                                                if (Is_Injured(Kitsune_Ptr)) or (Is_Crippled(Kitsune_Ptr)) then        \
                                                   unhealthy_members+=1;                                               \
                                             if (Dex_In_Party) then                                                    \
                                                if (Is_Injured(Dex_Ptr)) or (Is_Crippled(Dex_Ptr)) then                \
                                                   unhealthy_members+=1;                                               \
                                             if (Cat_Jules_In_Party) then                                              \
                                                if (Is_Injured(Cat_Jules_Ptr) or (Is_Crippled(Cat_Jules_Ptr)) then     \
                                                   unhealthy_members+=1;                                               \
                                             if (Ceri_In_Party) then                                                   \
                                                if (Is_Injured(Ceri_Ptr)) or (Is_Crippled(Ceri_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Rhea_In_Party) then                                                   \
                                                if (Is_Injured(Rhea_Ptr)) or (Is_Crippled(Rhea_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Lara_In_Party) then                                                   \
                                                if (Is_Injured(Lara_Ptr)) or (Is_Crippled(Lara_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Angela_In_Party) then                                                 \
                                                if (Is_Injured(Angela_Ptr)) or (Is_Crippled(Angela_Ptr)) then          \
                                                   unhealthy_members+=1;                                               \
                                             if (Mason_In_Party) then                                                  \
                                                if (Is_Injured(Mason_Ptr)) or (Is_Crippled(Mason_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Lil_Jesus_In_Party) then                                              \
                                                if (Is_Injured(Lil_Jesus_Ptr)) or (Is_Crippled(Lil_Jesus_Ptr)) then    \
                                                   unhealthy_members+=1;                                               \
                                             if (Chris_In_Party) then                                                  \
                                                if (Is_Injured(Chris_Ptr)) or (Is_Crippled(Chris_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Male_Slave_In_Party) then                                             \
                                                if (Is_Injured(Male_Slave_Ptr)) or (Is_Crippled(Male_Slave_Ptr)) then  \
                                                   unhealthy_members+=1;                                               \
                                             if (Female_Slave_In_Party) then                                           \
                                                if (Is_Injured(Female_Slave_Ptr)) or (Is_Crippled(Female_Slave_Ptr)) then \
                                                   unhealthy_members+=1;                                               \
                                             if (unhealthy_members > 0)


#define Companion_is_poisoned             poisoned_members := 0;                                                       \
                                             if (Vic_In_Party) then                                                    \
                                                if ((get_poison(VicI_Ptr) > 0) or (get_rads(Vic_Ptr))) then            \
                                                   poisoned_members+=1;                                                \
                                             if (Myron_In_Party) then                                                  \
                                                if ((get_poison(Myron_Ptr) > 0) or (get_rads(Myron_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Marcus_In_Party) then                                                 \
                                                if ((get_poison(Marcus_Ptr) > 0) or (get_rads(Marcus_Ptr))) then       \
                                                   poisoned_members+=1;                                                \
                                             if (MacRae_In_Party) then                                                 \
                                                if ((get_poison(MacRae_Ptr) > 0) or (get_rads(MacRae_Ptr))) then       \
                                                   poisoned_members+=1;                                                \
                                             if (Sulik_In_Party) then                                                  \
                                                if ((get_poison(Sulik_Ptr) > 0) or (get_rads(Sulik_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Lenny_In_Party) then                                                  \
                                                if ((get_poison(Lenny_Ptr) > 0) or (get_rads(Lenny_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Cyberdog_In_Party) then                                               \
                                                if ((get_poison(Cyberdog_Ptr) > 0) or (get_rads(Cyberdog_Ptr))) then   \
                                                   poisoned_members+=1;                                                \
                                             if (Doc_In_Party) then                                                    \
                                                if ((get_poison(Doc_Ptr) > 0) or (get_rads(Doc_Ptr))) then             \
                                                   poisoned_members+=1;                                                \
                                             if (Goris_In_Party) then                                                  \
                                                if ((get_poison(Goris_Ptr) > 0) or (get_rads(Goris_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Davin_In_Party) then                                                  \
                                                if ((get_poison(Davin_Ptr) > 0) or (get_rads(Davin_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Miria_In_Party) then                                                  \
                                                if ((get_poison(Miria_Ptr) > 0) or (get_rads(Miria_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Robobrain_In_Party) then                                              \
                                                if ((get_poison(Robobrain_Ptr) > 0) or (get_rads(Robobrain_Ptr))) then \
                                                   poisoned_members+=1;                                                \
                                             if (Dogmeat_In_Party) then                                                \
                                                if ((get_poison(Dogmeat_Ptr) > 0) or (get_rads(Dogmeat_Ptr))) then     \
                                                   poisoned_members+=1;                                                \
                                             if (K9_In_Party) then                                                     \
                                                if ((get_poison(K9_Ptr) > 0) or (get_rads(K9_Ptr))) then               \
                                                   poisoned_members+=1;                                                \
                                             if (Kitsune_In_Party) then                                                \
                                                if ((get_poison(Kitsune_Ptr) > 0) or (get_rads(Kitsune_Ptr))) then     \
                                                   poisoned_members+=1;                                                \
                                             if (Dex_In_Party) then                                                    \
                                                if ((get_poison(Dex_Ptr) > 0) or (get_rads(Dex_Ptr))) then             \
                                                   poisoned_members+=1;                                                \
                                             if (Cat_Jules_In_Party) then                                              \
                                                if ((get_poison(Cat_Jules_Ptr) > 0) or (get_rads(Cat_Jules_Ptr))) then \
                                                   poisoned_members+=1;                                                \
                                             if (Ceri_In_Party) then                                                   \
                                                if ((get_poison(Ceri_Ptr) > 0) or (get_rads(Ceri_Ptr))) then           \
                                                   poisoned_members+=1;                                                \
                                             if (Rhea_In_Party) then                                                   \
                                                if ((get_poison(Rhea_Ptr) > 0) or (get_rads(Rhea_Ptr))) then           \
                                                   poisoned_members+=1;                                                \
                                             if (Lara_In_Party) then                                                   \
                                                if ((get_poison(Lara_Ptr) > 0) or (get_rads(Lara_Ptr))) then           \
                                                   poisoned_members+=1;                                                \
                                             if (Angela_In_Party) then                                                 \
                                                if ((get_poison(Angela_Ptr) > 0) or (get_rads(Angela_Ptr))) then       \
                                                   poisoned_members+=1;                                                \
                                             if (Mason_In_Party) then                                                  \
                                                if ((get_poison(Mason_Ptr) > 0) or (get_rads(Mason_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Lil_Jesus_In_Party) then                                              \
                                                if ((get_poison(Lil_Jesus_Ptr) > 0) or (get_rads(Lil_Jesus_Ptr))) then \
                                                   poisoned_members+=1;                                                \
                                             if (Chris_In_Party) then                                                  \
                                                if ((get_poison(Chris_Ptr) > 0) or (get_rads(Chris_Ptr))) then         \
                                                   poisoned_members+=1;                                                \
                                             if (Male_Slave_In_Party) then                                             \
                                                if ((get_poison(Male_Slave_Ptr) > 0) or (get_rads(Male_Slave_Ptr))) then \
                                                   poisoned_members+=1;                                                \
                                             if (Female_Slave_In_Party) then                                           \
                                                if ((get_poison(Female_Slave_Ptr) > 0) or (get_rads(Female_Slave_Ptr))) then \
                                                   poisoned_members+=1;                                                \
                                             if (poisoned_members > 0)


#define Companion_is_injured_no_Doc          if (Vic_In_Party) then                                                    \
                                                if ((Is_Injured(Vic_Ptr)) or (Is_Crippled(Vic_Ptr)) ) then             \
                                                   unhealthy_members+=1;                                               \
                                             if (Myron_In_Party) then                                                  \
                                                if ((Is_Injured(Myron_Ptr)) or (Is_Crippled(Myron_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Marcus_In_Party) then                                                 \
                                                if ((Is_Injured(Marcus_Ptr)) or (Is_Crippled(Marcus_Ptr)) ) then       \
                                                   unhealthy_members+=1;                                               \
                                             if (MacRae_In_Party) then                                                 \
                                                if ((Is_Injured(MacRae_Ptr)) or (Is_Crippled(MacRae_Ptr)) ) then       \
                                                   unhealthy_members+=1;                                               \
                                             if (Sulik_In_Party) then                                                  \
                                                if ((Is_Injured(Sulik_Ptr)) or (Is_Crippled(Sulik_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Lenny_In_Party) then                                                  \
                                                if ((Is_Injured(Lenny_Ptr)) or (Is_Crippled(Lenny_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Cyberdog_In_Party) then                                               \
                                                if ((Is_Injured(Cyberdog_Ptr)) or (Is_Crippled(Cyberdog_Ptr)) ) then   \
                                                   unhealthy_members+=1;                                               \
                                             if (Goris_In_Party) then                                                  \
                                                if ((Is_Injured(Goris_Ptr)) or (Is_Crippled(Goris_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Davin_In_Party) then                                                  \
                                                if ((Is_Injured(Davin_Ptr)) or (Is_Crippled(Davin_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Miria_In_Party) then                                                  \
                                                if ((Is_Injured(Miria_Ptr)) or (Is_Crippled(Miria_Ptr)) ) then         \
                                                   unhealthy_members+=1;                                               \
                                             if (Robobrain_In_Party) then                                              \
                                                if ((Is_Injured(Robobrain_Ptr)) or (Is_Crippled(Robobrain_Ptr)) ) then \
                                                   unhealthy_members+=1;                                               \
                                             if (Dogmeat_In_Party) then                                                \
                                                if ((Is_Injured(Dogmeat_Ptr)) or (Is_Crippled(Dogmeat_Ptr)) ) then     \
                                                   unhealthy_members+=1;                                               \
                                             if (K9_In_Party) then                                                     \
                                                if ((Is_Injured(K9_Ptr)) or (Is_Crippled(K9_Ptr)) ) then               \
                                                   unhealthy_members+=1;                                               \
                                             if (Kitsune_In_Party) then                                                \
                                                if ((Is_Injured(Kitsune_Ptr)) or (Is_Crippled(Kitsune_Ptr)) ) then     \
                                                   unhealthy_members+=1;                                               \
                                             if (Dex_In_Party) then                                                    \
                                                if ((Is_Injured(Dex_Ptr)) or (Is_Crippled(Dex_Ptr)) ) then             \
                                                   unhealthy_members+=1;                                               \
                                             if (Cat_Jules_In_Party) then                                              \
                                                if (Is_Injured(Cat_Jules_Ptr)) or (Is_Crippled(Cat_Jules_Ptr)) then    \
                                                   unhealthy_members+=1;                                               \
                                             if (Ceri_In_Party) then                                                   \
                                                if (Is_Injured(Ceri_Ptr)) or (Is_Crippled(Ceri_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Rhea_In_Party) then                                                   \
                                                if (Is_Injured(Rhea_Ptr)) or (Is_Crippled(Rhea_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Lara_In_Party) then                                                   \
                                                if (Is_Injured(Lara_Ptr)) or (Is_Crippled(Lara_Ptr)) then              \
                                                   unhealthy_members+=1;                                               \
                                             if (Angela_In_Party) then                                                 \
                                                if (Is_Injured(Angela_Ptr)) or (Is_Crippled(Angela_Ptr)) then          \
                                                   unhealthy_members+=1;                                               \
                                             if (Mason_In_Party) then                                                  \
                                                if (Is_Injured(Mason_Ptr)) or (Is_Crippled(Mason_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Lil_Jesus_In_Party) then                                              \
                                                if (Is_Injured(Lil_Jesus_Ptr)) or (Is_Crippled(Lil_Jesus_Ptr)) then    \
                                                   unhealthy_members+=1;                                               \
                                             if (Chris_In_Party) then                                                  \
                                                if (Is_Injured(Chris_Ptr)) or (Is_Crippled(Chris_Ptr)) then            \
                                                   unhealthy_members+=1;                                               \
                                             if (Male_Slave_In_Party) then                                             \
                                                if (Is_Injured(Male_Slave_Ptr)) or (Is_Crippled(Male_Slave_Ptr)) then  \
                                                   unhealthy_members+=1;                                               \
                                             if (Female_Slave_In_Party) then                                           \
                                                if (Is_Injured(Female_Slave_Ptr)) or (Is_Crippled(Female_Slave_Ptr)) then \
                                                   unhealthy_members+=1;


#define Companion_is_poisoned_no_Doc         poisoned_members := 0;                                                    \
                                                if (Vic_In_Party) then                                                 \
                                                   if ((get_poison(Vic_Ptr) > 0) or (get_rads(Vic_Ptr))) then          \
                                                      poisoned_members+=1;                                             \
                                                if (Myron_In_Party) then                                               \
                                                   if ((get_poison(Myron_Ptr) > 0) or (get_rads(Myron_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Marcus_In_Party) then                                              \
                                                   if ((get_poison(Marcus_Ptr) > 0) or (get_rads(Marcus_Ptr))) then    \
                                                      poisoned_members+=1;                                             \
                                                if (MacRae_In_Party) then                                              \
                                                   if ((get_poison(MacRae_Ptr) > 0) or (get_rads(MacRae_Ptr))) then    \
                                                      poisoned_members+=1;                                             \
                                                if (Sulik_In_Party) then                                               \
                                                   if ((get_poison(Sulik_Ptr) > 0) or (get_rads(Sulik_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Lenny_In_Party) then                                               \
                                                   if ((get_poison(Lenny_Ptr) > 0) or (get_rads(Lenny_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Cyberdog_In_Party) then                                            \
                                                   if ((get_poison(Cyberdog_Ptr) > 0) or (get_rads(Cyberdog_Ptr))) then\
                                                      poisoned_members+=1;                                             \
                                                if (Goris_In_Party) then                                               \
                                                   if ((get_poison(Goris_Ptr) > 0) or (get_rads(Goris_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Davin_In_Party) then                                               \
                                                   if ((get_poison(Davin_Ptr) > 0) or (get_rads(Davin_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Miria_In_Party) then                                               \
                                                   if ((get_poison(Miria_Ptr) > 0) or (get_rads(Miria_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Robobrain_In_Party) then                                           \
                                                   if ((get_poison(Robobrain_Ptr) > 0) or (get_rads(Robobrain_Ptr))) then\
                                                      poisoned_members+=1;                                             \
                                                if (Dogmeat_In_Party) then                                             \
                                                   if ((get_poison(Dogmeat_Ptr) > 0) or (get_rads(Dogmeat_Ptr))) then  \
                                                      poisoned_members+=1;                                             \
                                                if (K9_In_Party) then                                                  \
                                                   if ((get_poison(K9_Ptr) > 0) or (get_rads(K9_Ptr))) then            \
                                                      poisoned_members+=1;                                             \
                                                if (Kitsune_In_Party) then                                             \
                                                   if ((get_poison(Kitsune_Ptr) > 0) or (get_rads(Kitsune_Ptr))) then  \
                                                      poisoned_members+=1;                                             \
                                                if (Dex_In_Party) then                                                 \
                                                   if ((get_poison(Dex_Ptr) > 0) or (get_rads(Dex_Ptr))) then          \
                                                      poisoned_members+=1;                                             \
                                                if (Cat_Jules_In_Party) then                                           \
                                                   if ((get_poison(Cat_Jules_Ptr) > 0) or (get_rads(Cat_Jules_Ptr))) then\
                                                      poisoned_members+=1;                                             \
                                                if (Ceri_In_Party) then                                                \
                                                   if ((get_poison(Ceri_Ptr) > 0) or (get_rads(Ceri_Ptr))) then        \
                                                      poisoned_members+=1;                                             \
                                                if (Rhea_In_Party) then                                                \
                                                   if ((get_poison(Rhea_Ptr) > 0) or (get_rads(Rhea_Ptr))) then        \
                                                      poisoned_members+=1;                                             \
                                                if (Lara_In_Party) then                                                \
                                                   if ((get_poison(Lara_Ptr) > 0) or (get_rads(Lara_Ptr))) then        \
                                                      poisoned_members+=1;                                             \
                                                if (Angela_In_Party) then                                              \
                                                   if ((get_poison(Angela_Ptr) > 0) or (get_rads(Angela_Ptr))) then    \
                                                      poisoned_members+=1;                                             \
                                                if (Mason_In_Party) then                                               \
                                                   if ((get_poison(Mason_Ptr) > 0) or (get_rads(Mason_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Lil_Jesus_In_Party) then                                           \
                                                   if ((get_poison(Lil_Jesus_Ptr) > 0) or (get_rads(Lil_Jesus_Ptr))) then \
                                                      poisoned_members+=1;                                             \
                                                if (Chris_In_Party) then                                               \
                                                   if ((get_poison(Chris_Ptr) > 0) or (get_rads(Chris_Ptr))) then      \
                                                      poisoned_members+=1;                                             \
                                                if (Male_Slave_In_Party) then                                          \
                                                   if ((get_poison(Male_Slave_Ptr) > 0) or (get_rads(Male_Slave_Ptr))) then \
                                                      poisoned_members+=1;                                             \
                                                if (Female_Slave_In_Party) then                                        \
                                                   if ((get_poison(Female_Slave_Ptr) > 0) or (get_rads(Female_Slave_Ptr))) then \
                                                      poisoned_members+=1;
*/
/*  From Killap - use to revise above excess variables later adding in CE companions
#define If_Companion_Needs_Healing           unhealthy_members := 0;                                                   \
                                                if (Vic_In_Party) then                                                 \
                                                   if ((Is_Injured(Vic_Ptr)) or (get_poison(Vic_Ptr) > 0) or           \
                                                      (get_rads(Vic_Ptr)) or (Is_Crippled(Vic_Ptr)) ) then             \
                                                      unhealthy_members+=1;                                            \
                                                if (Myron_In_Party) then                                               \
                                                   if ((Is_Injured(Myron_Ptr)) or (get_poison(Myron_Ptr) > 0) or       \
                                                      (get_rads(Myron_Ptr)) or (Is_Crippled(Myron_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Marcus_In_Party) then                                              \
                                                   if ((Is_Injured(Marcus_Ptr)) or (get_poison(Marcus_Ptr) > 0) or     \
                                                      (get_rads(Marcus_Ptr)) or (Is_Crippled(Marcus_Ptr)) ) then       \
                                                      unhealthy_members+=1;                                            \
                                                if (MacRae_In_Party) then                                              \
                                                   if ((Is_Injured(MacRae_Ptr)) or (get_poison(MacRae_Ptr) > 0) or     \
                                                      (get_rads(MacRae_Ptr)) or (Is_Crippled(MacRae_Ptr)) ) then       \
                                                      unhealthy_members+=1;                                            \
                                                if (Sulik_In_Party) then                                               \
                                                   if ((Is_Injured(Sulik_Ptr)) or (get_poison(Sulik_Ptr) > 0) or       \
                                                      (get_rads(Sulik_Ptr)) or (Is_Crippled(Sulik_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Lenny_In_Party) then                                               \
                                                   if ((Is_Injured(Lenny_Ptr)) or (get_poison(Lenny_Ptr) > 0) or       \
                                                      (get_rads(Lenny_Ptr)) or (Is_Crippled(Lenny_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Cyberdog_In_Party) then                                            \
                                                   if ((Is_Injured(Cyberdog_Ptr)) or (get_poison(Cyberdog_Ptr) > 0) or \
                                                      (get_rads(Cyberdog_Ptr)) or (Is_Crippled(Cyberdog_Ptr)) ) then   \
                                                      unhealthy_members+=1;                                            \
                                                if (Doc_In_Party) then                                                 \
                                                   if ((Is_Injured(Doc_Ptr)) or (get_poison(Doc_Ptr) > 0) or           \
                                                      (get_rads(Doc_Ptr)) or (Is_Crippled(Doc_Ptr)) ) then             \
                                                      unhealthy_members+=1;                                            \
                                                if (Goris_In_Party) then                                               \
                                                   if ((Is_Injured(Goris_Ptr)) or (get_poison(Goris_Ptr) > 0) or       \
                                                      (get_rads(Goris_Ptr)) or (Is_Crippled(Goris_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Davin_In_Party) then                                               \
                                                   if ((Is_Injured(Davin_Ptr)) or (get_poison(Davin_Ptr) > 0) or       \
                                                      (get_rads(Davin_Ptr)) or (Is_Crippled(Davin_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Miria_In_Party) then                                               \
                                                   if ((Is_Injured(Miria_Ptr)) or (get_poison(Miria_Ptr) > 0) or       \
                                                      (get_rads(Miria_Ptr)) or (Is_Crippled(Miria_Ptr)) ) then         \
                                                      unhealthy_members+=1;                                            \
                                                if (Robobrain_In_Party) then                                           \
                                                   if ((Is_Injured(Robobrain_Ptr)) or                                  \
                                                      (get_poison(Robobrain_Ptr) > 0) or (get_rads(Robobrain_Ptr)) or  \
                                                      (Is_Crippled(Robobrain_Ptr)) ) then                              \
                                                      unhealthy_members+=1;                                            \
                                                if (Dogmeat_In_Party) then                                             \
                                                   if ((Is_Injured(Dogmeat_Ptr)) or (get_poison(Dogmeat_Ptr) > 0) or   \
                                                      (get_rads(Dogmeat_Ptr)) or (Is_Crippled(Dogmeat_Ptr)) ) then     \
                                                      unhealthy_members+=1;                                            \
                                                if (K9_In_Party) then                                                  \
                                                   if ((Is_Injured(K9_Ptr)) or (get_poison(K9_Ptr) > 0) or             \
                                                      (get_rads(K9_Ptr)) or (Is_Crippled(K9_Ptr)) ) then               \
                                                      unhealthy_members+=1;                                            \
                                                if (Kitsune_In_Party) then                                             \
                                                   if ((Is_Injured(Kitsune_Ptr)) or (get_poison(Kitsune_Ptr) > 0) or   \
                                                      (get_rads(Kitsune_Ptr)) or (Is_Crippled(Kitsune_Ptr)) ) then     \
                                                      unhealthy_members+=1;                                            \
                                                if (Dex_In_Party) then                                                 \
                                                   if ((Is_Injured(Dex_Ptr)) or (get_poison(Dex_Ptr) > 0) or           \
                                                      (get_rads(Dex_Ptr)) or (Is_Crippled(Dex_Ptr)) ) then             \
                                                      unhealthy_members+=1;                                            \
                                                if (Cat_Jules_In_Party) then                                           \
                                                   if ((Is_Injured(Cat_Jules_Ptr)) or                                  \
                                                      (get_poison(Cat_Jules_Ptr) > 0) or (get_rads(Cat_Jules_Ptr)) or  \
                                                      (Is_Crippled(Cat_Jules_Ptr)) ) then                              \
                                                      unhealthy_members+=1;                                            \
                                                if (unhealthy_members > 0)
    */

#endif // COMPANION_EXPANSION_H

