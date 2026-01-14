#define TAP_ESC_WITH_UI_CHECK if game_ui_is_disabled then begin \
                                 game_ui_enable; \
                                 tap_key(DIK_ESCAPE); \
                                 game_ui_disable; \
                              end \
                              else \
                                 tap_key(DIK_ESCAPE);







//Unsafe
#define get_real_dude_real_base_stat(stat)  (call_offset_r2(0x4AF3E0, real_dude_obj, stat))
#define set_dude_level(new_level)  write_int(0x6681B0, new_level)

#define tile_refresh_display_disable call_offset_v0(0x4B12A8)
#define tile_refresh_display_enable  call_offset_v0(0x4B12B4)


#define get_obj_sid(obj_ptr) (get_object_data(obj_ptr, OBJ_DATA_SID))

#define set_obj_script_fixed_value(obj_sid, value) call_offset_v2(0x4A3B34, obj_sid, value)
#define set_obj_script_source(target_sid,target,source) call_offset_v3(0x4A3B0C, target_sid, target, source)
#define exec_obj_script_proc(obj_sid, script_proc_type) call_offset_v2(0x4A4810, obj_sid, script_proc_type)
#define get_combat_exp read_int(0x56D398)
#define set_combat_exp(value) write_int(0x56D398, value)
#define inc_kill_count(kill_type) call_offset_v1(0x42D878, kill_type)
#define combat_delete_critter(critter) call_offset_v1(0x426DDC, critter)
#define game_ui_disable2 call_offset_v1(0x443BFC,1)

#define reg_anim_callback_2(proc, arg0, agr1, delay) call_offset_v4(0x414E98, arg0, agr1, proc,delay)

#define days_since_visited_in_ticks read_int(0x631D8C)

#define set_anim_priority_disabled write_byte(0x413C20, 0xC3)
#define set_anim_priority_enabled write_byte(0x413C20, 0x52)


#define set_and_exec_critter_damage_proc (critter_ptr,source_obj_ptr, dmg)    (call_offset_v2(0x4A3B34, get_object_data(critter_ptr, OBJ_DATA_SID), dmg) \
                                                                               call_offset_v3(0x4A3B0C, get_object_data(critter_ptr, OBJ_DATA_SID), source_obj_ptr,critter_ptr) \
                                                                               call_offset_v2(0x4A4810, get_object_data(critter_ptr, OBJ_DATA_SID), damage_proc))

#define set_and_exec_obj_destroy_proc (critter_ptr,source_obj_ptr)  (call_offset_v3(0x4A3B0C, get_object_data(obj_ptr, OBJ_DATA_SID), source_obj_ptr,obj_ptr) \
                                                                     call_offset_v2(0x4A4810, get_object_data(obj_ptr, OBJ_DATA_SID), destroy_proc)

#define game_ui_disable2 call_offset_v1(0x443BFC,1)

#define set_cursor_animated_watch call_offset_v1(0x44C840,26)
#define set_cursor_hidden call_offset_v1(0x44C840,0)

#define set_game_time_no_queue_check(new_game_time) write_int(0x51C720, new_game_time)
#define game_time_advance_no_queue_check(ticks) (write_int(0x51C720, read_int(0x51C720) + ticks))
#define queueProcessEvents call_offset_v0(0x4A26D0)
#define queue_get_next_event_time call_offset_r0(0x4A2808)



procedure set_drug_timer_to_game_ticks begin
   write_byte(0x479BCF, 0x01);
   write_byte(0x479BD0, 0xD6);
   write_byte(0x479BD1, 0x90);
end

procedure set_drug_timer_to_game_minutes begin
   write_byte(0x479BCF, 0xC1);
   write_byte(0x479BD0, 0xE6);
   write_byte(0x479BD1, 0x04);
end
//



//by burner1024 https://github.com/BGforgeNet/FO2tweaks/blob/master/source/gl_g_damage_mod.ssl
//with calculation for negative values
procedure round_chance(variable value) begin
   variable base_value;
   variable chance;
   variable rnd;
   variable final_value;
   if value == 0 then
      return 0;

   base_value = floor2(value);
   chance = abs(value - base_value) * 1000;
   if chance != 0 then
      rnd = random(1, 1000);

   if chance >= rnd then begin
      if value > 0 then
         final_value = base_value + 1;
      else
         final_value = base_value - 1;
   end
   else begin
      final_value = base_value;
   end

   return final_value;
end




#define get_unique_id(obj) (get_object_data(obj, OBJ_DATA_ID))
#define critter_art_fid(critter_obj)   (obj_art_fid(critter_obj) bwand 0xFFFF0FFF)
#define critter_anim_fid(objFid, animType, rot)       ((rot * 0x10000000) bwor ((animType * 0x10000) bwand 0xFF0000) bwor (objFid bwand 0xF00FFFF))
#define get_critter_xp(critter_obj)    (get_proto_data(obj_pid(critter_obj), PROTO_CR_EXP_VAL))
#define can_use_items(critter_type)   (critter_type <= KILL_TYPE_ghoul_kills orElse critter_type == KILL_TYPE_big_boss)
#define critter_is_crippled(critter)   (critter_state(critter) BWAND (DAM_CRIP_LEG_LEFT BWOR DAM_CRIP_LEG_RIGHT BWOR DAM_CRIP_ARM_LEFT BWOR DAM_CRIP_ARM_RIGHT BWOR DAM_BLIND))
#define get_active_weapon(critter)  critter_inven_obj(critter, (2 - active_hand) if critter == dude_obj else INVEN_TYPE_RIGHT_HAND)
#define get_non_active_weapon(critter)  critter_inven_obj2(critter, (1 + active_hand) if critter == dude_obj else INVEN_TYPE_LEFT_HAND)



//sfall 5
#define REG_ANIM_CLEAR_FORCE                               (4)
#define REG_ANIM_PRIORITY                                  (5)
#define REG_ANIM_FLAG_UNSET                                (220)
#define REG_ANIM_FLAG_SET                                  (221)



#define obj_is_party_member(obj) sfall_func1("is_party_member", obj)

#define reg_anim_animate_and_move(object, tile, animID, delay)                 sfall_func4("reg_anim_animate_and_move", object, tile, animID, delay)

#define is_really_dead(critter_obj, critter_obj_state, critter_obj_cur_hp) (critter_obj_state == CRITTER_IS_DEAD orElse critter_obj_cur_hp <= 0 orElse (get_object_data(critter_obj, OBJ_DATA_DAMAGE_FLAGS) bwand DAM_DEAD) == DAM_DEAD)

#define reg_anim_clear_forced(who, is_sfall_510)      if is_sfall_510 <= 0 then reg_anim_clear(who); else reg_anim_func(REG_ANIM_CLEAR_FORCE, who)
#define reg_anim_set_priority(is_sfall_510)           if is_sfall_510 <= 0 then call_offset_v1(0x413C20, true); else reg_anim_func(REG_ANIM_PRIORITY, 1)
