#ifndef FO2_REP_H
#define FO2_REP_H

#include "lib.misc.h"

#include "maps.h"
#include "global.h"

#include "ecco_ini.h"

variable town_to_gvar_map;
procedure get_ini_section_int_to_int(variable arg0, variable arg1, variable arg2) begin
   variable LVar3 := 0;
   variable LVar4 := 0;
   variable LVar5 := 0;
   variable LVar6 := 0;
   variable LVar7 := 0;
   variable LVar8 := 0;
   LVar4 := temp_array(-1, 0);
   LVar3 := sfall_func2("get_ini_section", arg0, arg1);
   LVar7 := len_array(LVar3);
   while (LVar8 < LVar7) do begin
      LVar5 := array_key(LVar3, LVar8);
      LVar6 := get_array(LVar3, LVar5);
      set_array(LVar4, atoi(LVar5), atoi(LVar6));
      LVar8 := LVar8 + 1;
   end
   if (arg2) then begin
      fix_array(LVar4);
   end
   return LVar4;
end

procedure get_town_rep_var(variable townId) begin
   if (town_to_gvar_map == 0) then begin
      town_to_gvar_map := get_ini_section_int_to_int(INI_MISC, "TOWN_REP", true);
   end
   //debug_log_fmt("get_town_rep_var %d = %d", townId, town_to_gvar_map[townId]);
   return town_to_gvar_map[townId];
end

#define cur_town_rep_var           get_town_rep_var(cur_town)

procedure get_town_rep(variable townId := -1) begin
   //if (townId < 0) then townId = cur_town;
   //variable var = get_town_rep_var(townId);
   //return global_var(var) if (var > 0) else 0;
end

procedure inc_town_rep(variable arg0, variable arg1 := -1) begin
   variable LVar2 := 0;
   variable LVar3 := 0;
   if (arg1 < 0) then begin
      arg1 := metarule(46, 0);
   end
   LVar2 := get_town_rep_var(arg1);
   if (LVar2 <= 0) then begin
      return 0;
   end
   LVar3 := global_var(LVar2);
   debug_msg("gl_pbs_steal: " + sfall_func4("string_format", "Change town %d rep from %d to %d.", arg1, LVar3, LVar3 + arg0));
   set_global_var(LVar2, LVar3 + arg0);
end

#endif
