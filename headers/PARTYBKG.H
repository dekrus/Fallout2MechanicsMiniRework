/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef PARTYBKG_H
#define PARTYBKG_H

/*****************************************
 Header File for Party Member Backgrounds
*****************************************/

variable PartyMemberBackground := -1;

procedure Check_Next_Third_Of_Areas;
procedure Check_Second_Third_Of_Areas;
procedure Check_Final_Third_Of_Areas;

#define find_party_background       if (cur_town == AREA_ARROYO) then begin                                                    \
                                        if (cur_map_index == MAP_ARROYO_CAVES) then                                           \
                                            PartyMemberBackground:=BACKGROUND_CAVE;                                            \
                                        else if (cur_map_index == MAP_ARROYO_WILDERNESS) then                                  \
                                            PartyMemberBackground:=BACKGROUND_WASTELAND;                                       \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_RAIDERS;                                         \
                                    end                                                                                        \
                                    else if (cur_town == AREA_KLAMATH) then begin                                              \
                                        PartyMemberBackground:=BACKGROUND1;                                                    \
                                    end                                                                                        \
                                    else if (cur_town == AREA_DEN) then begin                                                  \
                                        PartyMemberBackground:=BACKGROUND_HUB;                                                 \
                                    end                                                                                        \
                                    else if (cur_town == AREA_MODOC) then begin                                                \
                                        PartyMemberBackground:=BACKGROUND_HUB;                                                 \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_CITY) then begin                                           \
                                        PartyMemberBackground:=BACKGROUND_SHADY;                                               \
                                    end                                                                                        \
                                    else if (cur_town == AREA_GECKO) then begin                                                \
                                        PartyMemberBackground:=BACKGROUND_JUNKTOWN;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_BROKEN_HILLS) then begin                                         \
                                        PartyMemberBackground:=BACKGROUND_JUNKTOWN;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NEW_RENO) then begin                                             \
                                        PartyMemberBackground:=BACKGROUND_FOLLOWER;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_SIERRA_ARMY_BASE) then begin                                     \
                                        if (cur_map_index == MAP_SIERRA_BATTLE) then                                           \
                                            PartyMemberBackground:=BACKGROUND_WASTELAND;                                       \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_MILITARYBS;                                      \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_15) then begin                                             \
                                        if (cur_map_index == MAP_VAULT_15) then                                                \
                                            PartyMemberBackground:=BACKGROUND_VAULT;                                           \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_WASTELAND;                                       \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NCR) then begin                                                  \
                                        PartyMemberBackground:=BACKGROUND_SHADY;                                               \
                                    end                                                                                        \
                                    else if (cur_town == AREA_VAULT_13) then begin                                             \
                                        if (cur_map_index == MAP_VAULT_13) then                                                \
                                            PartyMemberBackground:=BACKGROUND_VAULT;                                           \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_CAVE;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_MILITARY_BASE) then begin                                        \
                                        if (cur_map_index == MAP_MILITARY_BASE_ENTRANCE) then                                  \
                                            PartyMemberBackground:=BACKGROUND_WASTELAND;                                       \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_CAVE;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_REDDING) then begin                                              \
                                        if ((cur_map_index == MAP_REDDING_DTOWN_TUNNEL) or                                     \
                                            (cur_map_index == MAP_REDDING_MINE_TUNNEL) or                                      \
                                            (cur_map_index == MAP_REDDING_WANAMINGO_12)) then                                  \
                                            PartyMemberBackground:=BACKGROUND_CAVE;                                            \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_HUB;                                             \
                                    end                                                                                        \
                                    else if (cur_town == AREA_SAN_FRANCISCO) then begin                                        \
                                        PartyMemberBackground:=BACKGROUND_FOLLOWER;                                            \
                                    end                                                                                        \
                                    else if (cur_town == AREA_NAVARRO) then begin                                              \
                                        if (elevation(self_obj) == 1) then                                                     \
                                            PartyMemberBackground:=BACKGROUND_JUNKTOWN;                                        \
                                        else                                                                                   \
                                            PartyMemberBackground:=BACKGROUND_MILITARYBS;                                      \
                                    end                                                                                        \
                                    else                                                                                       \
                                        Call Check_Next_Third_Of_Areas

procedure Check_Next_Third_Of_Areas begin
   if (cur_town == AREA_THE_ENCLAVE) then begin
       PartyMemberBackground:=BACKGROUND_ENCLAVE;
   end

   else if (cur_town == AREA_ABBEY) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_PRIMITIVE_TRIBE) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_EPA) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_GHOST_TOWN) then begin
   end

   else if (cur_town == AREA_CAR_OUTTA_GAS) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_ARROYO_DESTROYED) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_KLAMATH_TOXIC_CAVES) then begin
       PartyMemberBackground:=BACKGROUND_CAVE;
   end
   else if (cur_town == AREA_DEN_SLAVE_RUN) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RAIDERS) then begin
      if (cur_map_index == MAP_RAIDERS_CAMP1) then begin
        if (elevation(self_obj) == 0) then
            PartyMemberBackground:=BACKGROUND_WASTELAND;
        else
            PartyMemberBackground:=BACKGROUND_NECROPOLIS;
      end
      else
        PartyMemberBackground:=BACKGROUND_CAVE;
   end

   else if (cur_town == AREA_RND_DESERT) then begin
      PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RND_MOUNTAIN) then begin
        if (elevation(self_obj) == 1) then
            PartyMemberBackground:=BACKGROUND_CAVE;
        else
            PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RND_CITY) then begin
      PartyMemberBackground:=BACKGROUND_NECROPOLIS;
   end

   else if (cur_town == AREA_RND_COAST) then begin
        if (elevation(self_obj) == 1) then
            PartyMemberBackground:=BACKGROUND_CAVE;
        else
            PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_GOLGATHA) then begin
        if (elevation(self_obj) == 1) then
            PartyMemberBackground:=BACKGROUND_CAVE;
        else
            PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else
       call Check_Second_Third_Of_Areas;
end

procedure Check_Second_Third_Of_Areas begin
   if (cur_town == AREA_SPECIAL_RND_WHALE) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_WOODSMAN) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_HEAD) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_SHUTTLE) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_UNWASHED) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_BRIDGE) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_CAFE) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_HOLY1) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_HOLY2) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_GUARDIAN) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_PRIMITIVE_TRIBE) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_TOXIC) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_PARIAH) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SPECIAL_RND_MAD_COW) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_CARAVAN_ENCOUNTER) then begin
       PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else
       call Check_Final_Third_Of_Areas;
end

procedure Check_Final_Third_Of_Areas begin
   if (cur_town == AREA_FAKE_VAULT_13A) then begin
       if (elevation(self_obj) == 1) then
           PartyMemberBackground:=BACKGROUND_CAVE;
       else
           PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_FAKE_VAULT_13B) then begin
       if (elevation(self_obj) == 1) then
           PartyMemberBackground:=BACKGROUND_CAVE;
       else
           PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_SHADOW_MAPS) then begin
        if (elevation(self_obj) == 1) then
            PartyMemberBackground:=BACKGROUND_CAVE;
        else
            PartyMemberBackground:=BACKGROUND_WASTELAND;
   end

   else if (cur_town == AREA_RENO_STABLES) then begin
       PartyMemberBackground:=BACKGROUND_HUB;
   end
end

#endif // PARTYBKG_H
