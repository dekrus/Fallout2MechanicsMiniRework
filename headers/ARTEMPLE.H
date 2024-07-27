#ifndef ARTEMPLE_H
#define ARTEMPLE_H

#define MVAR_VAULTSTART_MonitorCheck            (0)
#define MVAR_VAULTSTART_START_RUN               (1)
#define MVAR_VAULTSTART_DEAD_MORO               (2)
#define MVAR_VAULTSTART_DEAD_CTZN               (3)
#define MVAR_VAULTSTART_DEAD_GRDS               (4)
#define MVAR_VAULTSTART_PARTY                   (5)
#define MVAR_VAULTSTART_RESERV02                (6)
#define MVAR_VAULTSTART_RESERV03                (7)
#define MVAR_VAULTSTART_RESERV04                (8)
#define MVAR_VAULTSTART_RESERV05                (9)

#define OBG_SMALL_DOOR                   tile_contains_pid_obj(16296, 0, 33554440) \

#define OBG_VAULT_DOOR                   tile_contains_pid_obj(19496, 0, 33554605) \

#define ClearDude_Inventar               inven_unwield(dude_obj);                                       \
                                         ConteinerObj := create_object_sid(PID_CHEST, 21151, 0, -1);    \
                                                         move_obj_inven_to_obj(dude_obj, ConteinerObj); \
                                                         ConteinerObj := 0;                             \

#define ClearDude_HP                     poison(dude_obj,-(get_poison(dude_obj))); \
                                         radiation_dec(dude_obj,get_critter_stat(dude_obj,STAT_current_rad)); \
                                         critter_heal(dude_obj,dude_max_hits-dude_cur_hits); \
                                         critter_uninjure(dude_obj, (DAM_BLIND bwor DAM_CRIP_LEG_LEFT bwor DAM_CRIP_LEG_RIGHT bwor DAM_CRIP_ARM_LEFT bwor DAM_CRIP_ARM_RIGHT)); \

#define ClearDude_MoveToCity             set_global_var(GVAR_VC_PROLOG,1);    \
                                         set_global_var(GVAR_ENEMY_VAULT8,0); \
                                         load_map(MAP_VAULT_8_CITY, -1);      \

#endif