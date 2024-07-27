/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef DEPOLVA_H
#define DEPOLVA_H

// General Information
#define MAX_BOTS                    (6)
#define ELEVATOR_1                  (20517)//(19722)
#define ELEVATOR_2                  (19724)
#define ELEVATOR_3                  (21135)//(20540)

#define BOT_TILE_E0T0               (21697)
#define BOT_TILE_E0T1               (17505)
#define BOT_TILE_E0T2               (17088)
#define BOT_TILE_E0T3               (13113)
#define BOT_TILE_E0T4               (16514)
#define BOT_TILE_E0T5               (20514)

#define BOT_TILE_E1T0               (18911)
#define BOT_TILE_E1T1               (21712)
#define BOT_TILE_E1T2               (19688)
#define BOT_TILE_E1T3               (21489)
#define BOT_TILE_E1T4               (23890)
#define BOT_TILE_E1T5               (26516)

#define BOT_TILE_E2T0               (24317)
#define BOT_TILE_E2T1               (22929)
#define BOT_TILE_E2T2               (18884)
#define BOT_TILE_E2T3               (20329)
#define BOT_TILE_E2T4               (17283)
#define BOT_TILE_E2T5               (17102)

#define Robot_Missile_Bot(Robot)            ((Robot == PID_MISSILE_BOT) or (Robot == PID_TOUGH_MISSILE_BOT))
#define Robot_Robobrain(Robot)              (Robot == PID_ROBOBRAIN)

#define Move_Elevator_Obj(Who,Elevation)    if (Elevation == 0) then                          \
                                                move_to(Who,ELEVATOR_1,0);                    \
                                            else if (Elevation == 1) then                     \
                                                move_to(Who,ELEVATOR_2,1);                    \
                                            else                                              \
                                                move_to(Who,ELEVATOR_3,2)

#define Move_Elevator(Elevation)            Move_Elevator_Obj(self_obj,Elevation)


// Map Vars
#define MVAR_Free_Bots              (0)
#define MVAR_Repair_Request1        (1)
#define MVAR_Repair_Request2        (2)
#define MVAR_Repair_Request3        (3)
#define MVAR_Repair_Request4        (4)
#define MVAR_Repair_Request5        (5)
#define MVAR_Repair_Request6        (6)

#define MVAR_Elevation_Request1     (7)
#define MVAR_Elevation_Request2     (8)
#define MVAR_Elevation_Request3     (9)
#define MVAR_Elevation_Request4     (10)
#define MVAR_Elevation_Request5     (11)
#define MVAR_Elevation_Request6     (12)

#define MVAR_Tile_Request1          (13)
#define MVAR_Tile_Request2          (14)
#define MVAR_Tile_Request3          (15)
#define MVAR_Tile_Request4          (16)
#define MVAR_Tile_Request5          (17)
#define MVAR_Tile_Request6          (18)

#define MVAR_Pid_Request1           (19)
#define MVAR_Pid_Request2           (20)
#define MVAR_Pid_Request3           (21)
#define MVAR_Pid_Request4           (22)
#define MVAR_Pid_Request5           (23)
#define MVAR_Pid_Request6           (24)

#define MVAR_Security_Level_1       (25)
#define MVAR_Security_Level_2       (26)
#define MVAR_Security_Level_3       (27)

#define MVAR_Ammo_Request_1a        (28)
#define MVAR_Ammo_Request_1b        (29)
#define MVAR_Ammo_Request_2a        (30)
#define MVAR_Ammo_Request_2b        (31)
#define MVAR_Ammo_Request_3a        (32)
#define MVAR_Ammo_Request_3b        (33)
#define MVAR_Ammo_Request_4a        (34)
#define MVAR_Ammo_Request_4b        (35)
#define MVAR_Ammo_Request_5a        (36)
#define MVAR_Ammo_Request_5b        (37)
#define MVAR_Ammo_Request_6a        (38)
#define MVAR_Ammo_Request_6b        (39)

#define MVAR_Level1_Fields          (40)
#define MVAR_Level2_Fields          (41)
#define MVAR_Level3_Fields          (42)

#define MVAR_Field_1a               (43)
#define MVAR_Field_1b               (44)
#define MVAR_Field_1c               (45)
#define MVAR_Field_1d               (46)
#define MVAR_Field_1e               (47)

#define MVAR_Eyeball_Level          (48)
#define MVAR_Eyeball_Used           (49)

#define MVAR_Field_2a               (50)
#define MVAR_Field_2b               (51)
#define MVAR_Field_2c               (52)
#define MVAR_Field_2d               (53)

#define MVAR_Field_3a               (54)
#define MVAR_Field_3b               (55)

#define MVAR_Electric_Floor_2       (56)

#define MVAR_Plasma_Trap_L3_00      (57)
#define MVAR_Plasma_Trap_L3_01      (58)

#define MVAR_Level1_Tough_Bots      (59)
#define MVAR_Level1_Robobrain       (60)
#define MVAR_Level1_Eyeball         (61)

#define MVAR_Level2_Tough_Bots      (62)
#define MVAR_Level2_Robobrain       (63)
#define MVAR_Level2_Eyeball         (64)

#define MVAR_Level3_Tough_Bots      (65)
#define MVAR_Level3_Robobrain       (66)
#define MVAR_Level3_Eyeball         (67)

#define MVAR_Last_Restock           (68)
#define MVAR_Last_Spot_0            (69)
#define MVAR_Last_Spot_1            (70)
#define MVAR_Last_Spot_2            (71)

#define MVAR_Bio_Brain              (72)
#define MVAR_Bio_Motivator          (73)
#define MVAR_Bio_Gel                (74)
#define MVAR_Explode_Robot          (75)

#define MVAR_Skynet_Defeat          (76)
#define MVAR_Skynet_Battle_3        (77)

#define MVAR_Plasma_Trap_L2_00      (77)
#define MVAR_Plasma_Trap_L2_01      (78)
#define MVAR_Plasma_Trap_L2_02      (79)
#define MVAR_Plasma_Trap_L2_03      (80)
#define MVAR_Plasma_Trap_L2_04      (81)
#define MVAR_Plasma_Trap_L2_05      (82)
#define MVAR_Plasma_Trap_L2_06      (83)
#define MVAR_Plasma_Trap_L2_07      (84)
#define MVAR_Plasma_Trap_L2_08      (85)
#define MVAR_Plasma_Trap_L2_09      (86)
#define MVAR_Plasma_Trap_L2_10      (87)
#define MVAR_Plasma_Trap_L2_11      (88)
#define MVAR_Plasma_Trap_L2_12      (89)
#define MVAR_Plasma_Trap_L2_13      (90)
#define MVAR_Robot_Activation       (91)

// Map Var States
#define REPAIR_NONE                 (0)
#define REPAIR_REQUEST              (1)
#define REPAIR_ANSWERED             (2)
#define REPAIR_PICKUP               (3)
#define REPAIR_PICKUP_ANSWER        (4)
#define REPAIR_DESTROYED            (5)
#define REPAIR_PICKUP_COMPLETE      (6)
#define REPAIR_COMPLETE             (0)

#define LEVEL_NONE                  (-1)
#define LEVEL_ONE                   (0)
#define LEVEL_TWO                   (1)
#define LEVEL_THREE                 (2)

#define FIELD_ENABLED               (0)
#define FIELD_DISABLED              (1)
#define FIELD_DAMAGED               (2)
#define FIELD_DESTROYED             (3)

#define EYEBALL_NONE                (0)
#define EYEBALL_DIXON               (1)
#define EYEBALL_CLIFTON             (2)

// commands
#define Inc_Bot(Robot,Elevation)            if (Elevation == 0) then begin                      \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level1_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level1_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level1_Eyeball);           \
                                            end                                                 \
                                            else if (Elevation == 1) then begin                 \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level2_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level2_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level2_Eyeball);           \
                                            end                                                 \
                                            else begin                                          \
                                                if (Robot_Missile_Bot(Robot)) then              \
                                                    inc_map_var(MVAR_Level3_Tough_Bots);        \
                                                else if (Robot_Robobrain(Robot)) then           \
                                                    inc_map_var(MVAR_Level3_Robobrain);         \
                                                else                                            \
                                                    inc_map_var(MVAR_Level3_Eyeball);           \
                                            end                                                 \
                                            debug_msg("Add Robot to Queue")

#define Next_Hex_0                      if (map_var(MVAR_Last_Spot_0) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T0);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T0) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T1);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T1) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T2);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T2) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T3);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T3) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T4);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T4) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T5);            \
                                        else if (map_var(MVAR_Last_Spot_0) == BOT_TILE_E0T5) then   \
                                            set_map_var(MVAR_Last_Spot_0,BOT_TILE_E0T0)

#define Next_Hex_1                      if (map_var(MVAR_Last_Spot_1) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T0);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T0) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T1);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T1) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T2);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T2) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T3);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T3) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T4);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T4) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T5);            \
                                        else if (map_var(MVAR_Last_Spot_1) == BOT_TILE_E1T5) then   \
                                            set_map_var(MVAR_Last_Spot_1,BOT_TILE_E1T0)

#define Next_Hex_2                      if (map_var(MVAR_Last_Spot_2) == 0) then                    \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T0);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T0) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T1);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T1) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T2);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T2) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T3);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T3) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T4);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T4) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T5);            \
                                        else if (map_var(MVAR_Last_Spot_2) == BOT_TILE_E2T5) then   \
                                            set_map_var(MVAR_Last_Spot_2,BOT_TILE_E2T0)

#endif // DEPOLVA_H
