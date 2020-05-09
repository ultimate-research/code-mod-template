#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GroundModule {
        u64 update_force(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__update_force_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 update_shape(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31GroundModule__update_shape_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_rhombus(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind30GroundModule__get_rhombus_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 modify_rhombus(app::BattleObjectModuleAccessor *, float,float,float) asm("_ZN3app8lua_bind33GroundModule__modify_rhombus_implEPNS_26BattleObjectModuleAccessorEfff") LINKABLE;
        u64 set_init_circle(app::BattleObjectModuleAccessor *, const Vector2f*,float) asm("_ZN3app8lua_bind34GroundModule__set_init_circle_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fEf") LINKABLE;
        u64 get_circle_radius(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__get_circle_radius_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_offset_x(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind31GroundModule__set_offset_x_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_offset_y(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind31GroundModule__set_offset_y_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_offset_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__get_offset_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_offset_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__get_offset_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_rhombus_offset(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind37GroundModule__set_rhombus_offset_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 correct(app::BattleObjectModuleAccessor *, app::GroundCorrectKind) asm("_ZN3app8lua_bind26GroundModule__correct_implEPNS_26BattleObjectModuleAccessorENS_17GroundCorrectKindE") LINKABLE;
        u64 set_correct(app::BattleObjectModuleAccessor *, app::GroundCorrectKind) asm("_ZN3app8lua_bind30GroundModule__set_correct_implEPNS_26BattleObjectModuleAccessorENS_17GroundCorrectKindE") LINKABLE;
        u64 get_correct(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__get_correct_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_collidable(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33GroundModule__set_collidable_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_passable_check(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37GroundModule__set_passable_check_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_passable_check(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__is_passable_check_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_cloud_through(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind36GroundModule__set_cloud_through_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_ignore_line_type1(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40GroundModule__set_ignore_line_type1_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_ignore_boss(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind34GroundModule__set_ignore_boss_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_ignore_fighter_other(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42GroundModule__is_ignore_fighter_other_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_ignore_fighter_other(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind43GroundModule__set_ignore_fighter_other_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_ignore_fighter_other_wall_l(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49GroundModule__is_ignore_fighter_other_wall_l_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_ignore_fighter_other_wall_r(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49GroundModule__is_ignore_fighter_other_wall_r_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_correct_ignore_slope(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind43GroundModule__set_correct_ignore_slope_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_cliff_check(app::BattleObjectModuleAccessor *, app::GroundCliffCheckKind) asm("_ZN3app8lua_bind34GroundModule__set_cliff_check_implEPNS_26BattleObjectModuleAccessorENS_20GroundCliffCheckKindE") LINKABLE;
        u64 cliff_check(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__cliff_check_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 select_cliff_hangdata(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind40GroundModule__select_cliff_hangdata_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        bool is_status_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34GroundModule__is_status_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 correct_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__correct_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 entry_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__entry_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reentry_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32GroundModule__reentry_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 can_entry_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34GroundModule__can_entry_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 can_entry_cliff_same(app::BattleObjectModuleAccessor *, Vector2f &) asm("_ZN3app8lua_bind39GroundModule__can_entry_cliff_same_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector2fE") LINKABLE;
        u64 can_entry_cliff_hang_data(app::BattleObjectModuleAccessor *, unsigned int,app::GroundCliffCheckKind) asm("_ZN3app8lua_bind44GroundModule__can_entry_cliff_hang_data_implEPNS_26BattleObjectModuleAccessorEjNS_20GroundCliffCheckKindE") LINKABLE;
        u64 leave_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__leave_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 hang_cliff_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33GroundModule__hang_cliff_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        Vector3f* hang_cliff_pos_3f(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__hang_cliff_pos_3f_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 hang_can_entry_cliff_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43GroundModule__hang_can_entry_cliff_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 hang_cliff_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33GroundModule__hang_cliff_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 hang_can_entry_cliff_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43GroundModule__hang_can_entry_cliff_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_cliff_movement_speed(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43GroundModule__get_cliff_movement_speed_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_cliff_move_exception(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42GroundModule__is_cliff_move_exception_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void clear_cliff_point(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__clear_cliff_point_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_test_coll_stop(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37GroundModule__set_test_coll_stop_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_test_coll_stop_status(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind44GroundModule__set_test_coll_stop_status_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_coll_stop_slidable_length(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind48GroundModule__set_coll_stop_slidable_length_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_ignore_slide_up(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38GroundModule__set_ignore_slide_up_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_ottotto(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind29GroundModule__is_ottotto_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        bool is_ottotto_lr(app::BattleObjectModuleAccessor *, float,float) asm("_ZN3app8lua_bind32GroundModule__is_ottotto_lr_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        bool is_myground_nearcliff(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind40GroundModule__is_myground_nearcliff_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        bool is_near_cliff(app::BattleObjectModuleAccessor *, float,float) asm("_ZN3app8lua_bind32GroundModule__is_near_cliff_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        bool is_miss_foot(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__is_miss_foot_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_shape_flag(app::BattleObjectModuleAccessor *, unsigned short,bool) asm("_ZN3app8lua_bind33GroundModule__set_shape_flag_implEPNS_26BattleObjectModuleAccessorEtb") LINKABLE;
        u64 set_shape_safe_pos(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind37GroundModule__set_shape_safe_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 get_shape_safe_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37GroundModule__get_shape_safe_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_status_ground(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__set_status_ground_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        //u64 set_shape_kind(app::BattleObjectModuleAccessor *, app::grcol::GroundCorrectShapeType) asm("_ZN3app8lua_bind33GroundModule__set_shape_kind_implEPNS_26BattleObjectModuleAccessorENS_5grcol22GroundCorrectShapeTypeE") LINKABLE;
        u64 set_init_shape_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38GroundModule__set_init_shape_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_shape_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33GroundModule__get_shape_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_z(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind24GroundModule__set_z_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_z(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24GroundModule__get_z_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 attach_ground(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind32GroundModule__attach_ground_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_attach_ground(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind36GroundModule__set_attach_ground_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_attachable(app::BattleObjectModuleAccessor *, app::GroundTouchFlag) asm("_ZN3app8lua_bind32GroundModule__is_attachable_implEPNS_26BattleObjectModuleAccessorENS_15GroundTouchFlagE") LINKABLE;
        u64 attach(app::BattleObjectModuleAccessor *, app::GroundTouchFlag) asm("_ZN3app8lua_bind25GroundModule__attach_implEPNS_26BattleObjectModuleAccessorENS_15GroundTouchFlagE") LINKABLE;
        bool is_attach(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28GroundModule__is_attach_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_line_movement_speed(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind42GroundModule__get_line_movement_speed_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 detach(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25GroundModule__detach_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 test(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23GroundModule__test_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_touch_normal(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind35GroundModule__get_touch_normal_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_x(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind37GroundModule__get_touch_normal_x_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_y(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind37GroundModule__get_touch_normal_y_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_consider_gravity(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind52GroundModule__get_touch_normal_consider_gravity_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_x_consider_gravity(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind54GroundModule__get_touch_normal_x_consider_gravity_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_y_consider_gravity(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind54GroundModule__get_touch_normal_y_consider_gravity_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_normal_for_touch_attack_data(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind57GroundModule__get_touch_normal_for_touch_attack_data_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 ground_touch_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__ground_touch_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 ground_touch_flag_ex(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind39GroundModule__ground_touch_flag_ex_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 get_touch_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33GroundModule__get_touch_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_touch_moment_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40GroundModule__get_touch_moment_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_touch_material_type(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind42GroundModule__get_touch_material_type_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_pos(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind32GroundModule__get_touch_pos_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        bool is_touch(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind27GroundModule__is_touch_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_touch_line_raw(app::BattleObjectModuleAccessor *, app::GroundTouchID) asm("_ZN3app8lua_bind37GroundModule__get_touch_line_raw_implEPNS_26BattleObjectModuleAccessorENS_13GroundTouchIDE") LINKABLE;
        u64 get_touch_wall_cliff_pos(app::BattleObjectModuleAccessor *, unsigned int,Vector2f &) asm("_ZN3app8lua_bind43GroundModule__get_touch_wall_cliff_pos_implEPNS_26BattleObjectModuleAccessorEjRN3phx8Vector2fE") LINKABLE;
        bool is_floor_touch_line(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind38GroundModule__is_floor_touch_line_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        bool is_wall_touch_line(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind37GroundModule__is_wall_touch_line_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        bool is_passable_ground(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37GroundModule__is_passable_ground_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_floor_vanishing(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37GroundModule__is_floor_vanishing_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_cliff_id_uint32(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38GroundModule__get_cliff_id_uint32_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_up_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29GroundModule__get_up_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_down_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__get_down_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_left_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31GroundModule__get_left_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_right_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32GroundModule__get_right_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_center_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33GroundModule__get_center_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 center_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29GroundModule__center_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_width(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28GroundModule__get_width_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_down_movement_speed(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42GroundModule__get_down_movement_speed_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 check_down_correct_pos(app::BattleObjectModuleAccessor *, Vector2f) asm("_ZN3app8lua_bind41GroundModule__check_down_correct_pos_implEPNS_26BattleObjectModuleAccessorEN3phx8Vector2fE") LINKABLE;
        u64 get_latest_down_correct_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind46GroundModule__get_latest_down_correct_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_down_correct_edge_pos(app::BattleObjectModuleAccessor *, Vector2f &,const Vector2f*) asm("_ZN3app8lua_bind44GroundModule__get_down_correct_edge_pos_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector2fERKS4_") LINKABLE;
        u64 get_down_friction(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36GroundModule__get_down_friction_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_distance_to_floor(app::BattleObjectModuleAccessor *, const Vector3f*,float,bool) asm("_ZN3app8lua_bind40GroundModule__get_distance_to_floor_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEfb") LINKABLE;
        bool is_still_on_floor(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind36GroundModule__is_still_on_floor_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 ray_check(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,bool) asm("_ZN3app8lua_bind28GroundModule__ray_check_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_b") LINKABLE;
        u64 ray_check_hit_pos(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,bool) asm("_ZN3app8lua_bind36GroundModule__ray_check_hit_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_b") LINKABLE;
        u64 ray_check_hit_normal(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,bool) asm("_ZN3app8lua_bind39GroundModule__ray_check_hit_normal_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_b") LINKABLE;
        u64 ray_check_hit_pos_normal(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,Vector2f&,bool) asm("_ZN3app8lua_bind43GroundModule__ray_check_hit_pos_normal_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_S7_b") LINKABLE;
        u64 ray_check_hit_pos_normal_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,Vector2f&,bool) asm("_ZN3app8lua_bind54GroundModule__ray_check_hit_pos_normal_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_S7_b") LINKABLE;
        u64 ray_check_hit_pos_target(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,unsigned int,bool) asm("_ZN3app8lua_bind43GroundModule__ray_check_hit_pos_target_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_jb") LINKABLE;
        u64 ray_check_get_line(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,bool) asm("_ZN3app8lua_bind37GroundModule__ray_check_get_line_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_b") LINKABLE;
        u64 ray_check_get_line_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,bool) asm("_ZN3app8lua_bind48GroundModule__ray_check_get_line_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_b") LINKABLE;
        u64 ray_check_get_line_hit_pos(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,bool) asm("_ZN3app8lua_bind45GroundModule__ray_check_get_line_hit_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_b") LINKABLE;
        u64 ray_check_get_line_hit_pos_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,bool) asm("_ZN3app8lua_bind56GroundModule__ray_check_get_line_hit_pos_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_b") LINKABLE;
        u64 ray_check_get_line_target_any(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,unsigned int,bool) asm("_ZN3app8lua_bind48GroundModule__ray_check_get_line_target_any_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_jb") LINKABLE;
        u64 ray_check_get_line_target_any_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,unsigned int,bool) asm("_ZN3app8lua_bind59GroundModule__ray_check_get_line_target_any_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_jb") LINKABLE;
        u64 ray_check_get_line_ignore_any(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,unsigned int) asm("_ZN3app8lua_bind48GroundModule__ray_check_get_line_ignore_any_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_j") LINKABLE;
        u64 ray_check_get_line_ignore_any_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,unsigned int) asm("_ZN3app8lua_bind59GroundModule__ray_check_get_line_ignore_any_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_j") LINKABLE;
        u64 ray_check_get_line_hit_pos_ignore_any(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,unsigned int) asm("_ZN3app8lua_bind56GroundModule__ray_check_get_line_hit_pos_ignore_any_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_j") LINKABLE;
        u64 ray_check_get_line_hit_pos_ignore_any_no_culling(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,Vector2f&,unsigned int) asm("_ZN3app8lua_bind67GroundModule__ray_check_get_line_hit_pos_ignore_any_no_culling_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_RS4_j") LINKABLE;
        u64 line_segment_check(app::BattleObjectModuleAccessor *, const Vector2f*,const Vector2f*,const Vector2f*,Vector2f&,bool) asm("_ZN3app8lua_bind37GroundModule__line_segment_check_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_S6_RS4_b") LINKABLE;
        u64 test_ground(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30GroundModule__test_ground_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_ignore_friction(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38GroundModule__set_ignore_friction_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_correct_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34GroundModule__get_correct_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_correct_pos_local(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40GroundModule__get_correct_pos_local_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_update_shape(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind35GroundModule__set_update_shape_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_attach_cliff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34GroundModule__is_attach_cliff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 pass_floor(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29GroundModule__pass_floor_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void clear_pass_floor(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35GroundModule__clear_pass_floor_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_auto_detach(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind34GroundModule__set_auto_detach_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_no_cliff_stop_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43GroundModule__set_no_cliff_stop_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_gr_collision_mode(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40GroundModule__set_gr_collision_mode_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_shape_data_rhombus_modify_node_offset(app::BattleObjectModuleAccessor *, u64,const Vector3f*) asm("_ZN3app8lua_bind60GroundModule__set_shape_data_rhombus_modify_node_offset_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fE") LINKABLE;
        u64 set_keep_distant_cliff(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind41GroundModule__set_keep_distant_cliff_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_reverse_direction(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind40GroundModule__set_reverse_direction_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_rhombus_modify_air_lasso(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind47GroundModule__set_rhombus_modify_air_lasso_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_rhombus_modify(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37GroundModule__set_rhombus_modify_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
    }
}