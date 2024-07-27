#ifndef NEVADA_HAWTHORN_H
#define NEVADA_HAWTHORN_H

//vars for map ElCapitan:
#define MVAR_Made_Car                          (0)
#define MVAR_Reiders_Next_Map                  (1)
#define MVAR_SignTurrel_Flag                   (2)
#define MVAR_Howthorne_Video                   (3)
#define MVAR_Howthorne_CritBonus               (4)
#define MVAR_HOWTHORNE_ENTRANCE_TREASURE_01    (5)
#define MVAR_HOWTHORNE_ENTRANCE_TREASURE_02    (6)
#define MVAR_HOWTHORNE_ENTRANCE_TREASURE_03    (7)
#define MVAR_HOWTHORNE_ENTRANCE_TREASURE_04    (8)
#define MVAR_HOWTHORNE_ENTRANCE_TREASURE_05    (9)

//vars for map Howthorne: Poligon
#define MVAR_HOWTHORNE_BARRACS_TREASURE_01     (1)
#define MVAR_HOWTHORNE_BARRACS_TREASURE_02     (2)
#define MVAR_HOWTHORNE_BARRACS_TREASURE_03     (3)
#define MVAR_HOWTHORNE_BARRACS_TREASURE_04     (4)
#define MVAR_HOWTHORNE_BARRACS_TREASURE_05     (5)
#define MVAR_HOWTHORNE_BARRACS_TREASURE_06     (6)
#define MVAR_HOWTHORNE_ROBOGLASS_PSSWRD        (7)
#define MVAR_HOWTHORNE_BARRACS_TURREL          (8)
#define MVAR_HOWTHORNE_BARRACS_TURREL_CNTRL    (9)
#define MVAR_HOWTHORNE_BARRACS_CritBonus       (10)

//vars for map Howthorne: Sklades and Angar
#define MVAR_Swich_Electro                     (1)
#define MVAR_Howthorne_Turrels_Dead_Depots     (2)
#define MVAR_Howthorne_Depots_Solar            (3)

//vars for map Howthorne: Trine Depo
#define MVAR_HOWTHORNE_TRAIN_TREASURE_01   (1)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_02   (2)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_03   (3)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_04   (4)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_05   (5)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_06   (6)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_07   (7)
#define MVAR_HOWTHORNE_TRAIN_TREASURE_08   (8)
#define MVAR_HOWTHORNE_TRAIN_RAIDERDIALOG  (9)

//vars for map Howthorne: Reactor
#define MVAR_HOWTHORNE_REACTOR_DOOR        (1)

#define deleteTurrelCrit(tile)          critterObjVar := tile_get_next_critter(tile, 0, target_obj);                  \
                                        if (critterObjVar >0) then begin                                              \
                                            critterRotatVar := obj_get_rot(critterObjVar);                            \
                                            if (critter_state(critterObjVar) != CRITTER_IS_DEAD) then begin           \
                                             set_obj_visibility(critterObjVar,1);                                     \
                                             anim(create_object_sid(PID_ZERO_NUMBER+1578, tile, 0, -1), ANIMATE_ROTATION, critterRotatVar); \
                                             destroy_object(critterObjVar);                                           \
                                            end                                                                       \
                                        end                                                                           \

#define creatRobotBonus(pid,tile,rot,elv,item)      ht_Rat_obj := create_object_sid(pid, tile, elv, SCRIPT_ECUNIPAT);  \
                                                    anim(ht_Rat_obj, ANIMATE_ROTATION, rot);                           \
                                                    if (item>0) then begin                                             \
                                                     add_mult_objs_to_inven(ht_Rat_obj,(create_object(item,0,0)),1);   \
                                                     if (item == PID_ROBO_ROCKET_LAUNCHER) then begin                  \
                                                     add_mult_objs_to_inven(ht_Rat_obj,(create_object(PID_ROBO_ROCKET_AMMO,0,0)),18); \
                                                     end                                                               \
                                                     wield_obj_critter(ht_Rat_obj, obj_carrying_pid_obj(ht_Rat_obj, item)); \
                                                    end              \
                                                    add_timer_event(ht_Rat_obj,2,1); \
                                                    ht_Rat_obj := 0; \

#endif // NEVADA_HAWTHORN_H