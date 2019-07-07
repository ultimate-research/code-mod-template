#pragma once

#include "useful/useful.h"

namespace app::lua_bind {
    namespace MotionModule {
        u64 add_motion_2nd(u64,u64,float,float,bool,float) asm("_ZN3app8lua_bind33MotionModule__add_motion_2nd_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Effbf") LINKABLE;
        u64 add_motion_partial(u64,int,u64,float,float,bool,bool,float,bool,bool,bool) asm("_ZN3app8lua_bind37MotionModule__add_motion_partial_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Effbbfbbb") LINKABLE;
        u64 animcmd_name_hash(u64,u64) asm("_ZN3app8lua_bind36MotionModule__animcmd_name_hash_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 calc_joint(u64,u64,u64,Vector3f &) asm("_ZN3app8lua_bind29MotionModule__calc_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RNS3_8Vector3fE") LINKABLE;
        u64 change_motion(u64,u64,float,float,bool,float,bool,bool) asm("_ZN3app8lua_bind32MotionModule__change_motion_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Effbfbb") LINKABLE;
        u64 change_motion_force_inherit_frame(u64,u64,float,float,float) asm("_ZN3app8lua_bind52MotionModule__change_motion_force_inherit_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efff") LINKABLE;
        u64 change_motion_inherit_frame(u64,u64,float,float,float,bool,bool) asm("_ZN3app8lua_bind46MotionModule__change_motion_inherit_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efffbb") LINKABLE;
        u64 change_motion_inherit_frame_keep_rate(u64,u64,float,float,float) asm("_ZN3app8lua_bind56MotionModule__change_motion_inherit_frame_keep_rate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efff") LINKABLE;
        u64 change_motion_kind(u64,u64) asm("_ZN3app8lua_bind37MotionModule__change_motion_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 clear_joint_srt(u64,u64) asm("_ZN3app8lua_bind34MotionModule__clear_joint_srt_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 enable_shift_material_animation(u64,bool) asm("_ZN3app8lua_bind50MotionModule__enable_shift_material_animation_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 end_frame(u64) asm("_ZN3app8lua_bind28MotionModule__end_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 end_frame_from_hash(u64,u64) asm("_ZN3app8lua_bind38MotionModule__end_frame_from_hash_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 end_frame_partial(u64,int) asm("_ZN3app8lua_bind36MotionModule__end_frame_partial_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float frame(u64) asm("_ZN3app8lua_bind24MotionModule__frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float frame_2nd(u64) asm("_ZN3app8lua_bind28MotionModule__frame_2nd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float frame_partial(u64,int) asm("_ZN3app8lua_bind32MotionModule__frame_partial_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_frame_material(u64,int materialAnimeKind) asm("_ZN3app8lua_bind37MotionModule__get_frame_material_implEPNS_26BattleObjectModuleAccessorENS_17MaterialAnimeKindE") LINKABLE;
        bool is_anim_resource(u64,u64) asm("_ZN3app8lua_bind35MotionModule__is_anim_resource_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_blend(u64) asm("_ZN3app8lua_bind27MotionModule__is_blend_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_end(u64) asm("_ZN3app8lua_bind25MotionModule__is_end_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_end_2nd(u64) asm("_ZN3app8lua_bind29MotionModule__is_end_2nd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_end_partial(u64,int) asm("_ZN3app8lua_bind33MotionModule__is_end_partial_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_flag_link(u64,u64) asm("_ZN3app8lua_bind31MotionModule__is_flag_link_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_flag_start_1_frame(u64) asm("_ZN3app8lua_bind40MotionModule__is_flag_start_1_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_flag_start_1_frame_from_motion_kind(u64,u64) asm("_ZN3app8lua_bind57MotionModule__is_flag_start_1_frame_from_motion_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_flip(u64) asm("_ZN3app8lua_bind26MotionModule__is_flip_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_flip_resource(u64) asm("_ZN3app8lua_bind35MotionModule__is_flip_resource_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_loop_flag(u64) asm("_ZN3app8lua_bind31MotionModule__is_loop_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_looped(u64) asm("_ZN3app8lua_bind28MotionModule__is_looped_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_no_comp(u64) asm("_ZN3app8lua_bind29MotionModule__is_no_comp_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 joint_local_rotation(u64,u64,Vector3f &) asm("_ZN3app8lua_bind39MotionModule__joint_local_rotation_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE") LINKABLE;
        u64 joint_local_tra(u64,u64,bool,Vector3f &) asm("_ZN3app8lua_bind34MotionModule__joint_local_tra_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40EbRNS3_8Vector3fE") LINKABLE;
        u64 motion_kind(u64) asm("_ZN3app8lua_bind30MotionModule__motion_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 motion_kind_2nd(u64) asm("_ZN3app8lua_bind34MotionModule__motion_kind_2nd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 motion_kind_partial(u64,int) asm("_ZN3app8lua_bind38MotionModule__motion_kind_partial_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 prev_frame(u64) asm("_ZN3app8lua_bind29MotionModule__prev_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 prev_weight(u64) asm("_ZN3app8lua_bind30MotionModule__prev_weight_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 rate(u64) asm("_ZN3app8lua_bind23MotionModule__rate_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 rate_partial(u64,int) asm("_ZN3app8lua_bind31MotionModule__rate_partial_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 remove_motion_partial(u64,int,bool) asm("_ZN3app8lua_bind40MotionModule__remove_motion_partial_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 remove_motion_partial_comp(u64,int) asm("_ZN3app8lua_bind45MotionModule__remove_motion_partial_comp_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 resource_id(u64,u64) asm("_ZN3app8lua_bind30MotionModule__resource_id_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 set_flip(u64,bool,bool,bool) asm("_ZN3app8lua_bind27MotionModule__set_flip_implEPNS_26BattleObjectModuleAccessorEbbb") LINKABLE;
        u64 set_force_progress_2nd_weight(u64,bool) asm("_ZN3app8lua_bind48MotionModule__set_force_progress_2nd_weight_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_frame(u64,float,bool) asm("_ZN3app8lua_bind28MotionModule__set_frame_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_frame_2nd(u64,float,bool) asm("_ZN3app8lua_bind32MotionModule__set_frame_2nd_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_frame_material(u64,float,int materialAnimeKind) asm("_ZN3app8lua_bind37MotionModule__set_frame_material_implEPNS_26BattleObjectModuleAccessorEfNS_17MaterialAnimeKindE") LINKABLE;
        u64 set_frame_partial(u64,int,float,bool) asm("_ZN3app8lua_bind36MotionModule__set_frame_partial_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 set_frame_partial_sync_anim_cmd(u64,int,float,bool) asm("_ZN3app8lua_bind50MotionModule__set_frame_partial_sync_anim_cmd_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 set_frame_sync_anim_cmd(u64,float,bool,bool,bool) asm("_ZN3app8lua_bind42MotionModule__set_frame_sync_anim_cmd_implEPNS_26BattleObjectModuleAccessorEfbbb") LINKABLE;
        u64 set_helper_calculation(u64,bool) asm("_ZN3app8lua_bind41MotionModule__set_helper_calculation_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_kind_offset(u64,int) asm("_ZN3app8lua_bind34MotionModule__set_kind_offset_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_link_flip_target_joint(u64,bool) asm("_ZN3app8lua_bind45MotionModule__set_link_flip_target_joint_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_no_comp(u64,bool) asm("_ZN3app8lua_bind30MotionModule__set_no_comp_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_rate(u64,float) asm("_ZN3app8lua_bind27MotionModule__set_rate_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_rate_2nd(u64,float) asm("_ZN3app8lua_bind31MotionModule__set_rate_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_rate_material(u64,float,int materialAnimeKind) asm("_ZN3app8lua_bind36MotionModule__set_rate_material_implEPNS_26BattleObjectModuleAccessorEfNS_17MaterialAnimeKindE") LINKABLE;
        u64 set_rate_partial(u64,int,float) asm("_ZN3app8lua_bind35MotionModule__set_rate_partial_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_recalc_ik(u64,bool) asm("_ZN3app8lua_bind32MotionModule__set_recalc_ik_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_reverse(u64,bool) asm("_ZN3app8lua_bind30MotionModule__set_reverse_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_skip_rate(u64,float,bool) asm("_ZN3app8lua_bind32MotionModule__set_skip_rate_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_stop_interpolation(u64,float,bool) asm("_ZN3app8lua_bind41MotionModule__set_stop_interpolation_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_trans_joint_id(u64,u64) asm("_ZN3app8lua_bind37MotionModule__set_trans_joint_id_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 set_trans_move_speed_no_scale(u64,bool) asm("_ZN3app8lua_bind48MotionModule__set_trans_move_speed_no_scale_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_weight(u64,float,bool) asm("_ZN3app8lua_bind29MotionModule__set_weight_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_weight_rate(u64,float) asm("_ZN3app8lua_bind34MotionModule__set_weight_rate_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_whole_rate(u64,float) asm("_ZN3app8lua_bind33MotionModule__set_whole_rate_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 trans_joint_scale(u64) asm("_ZN3app8lua_bind36MotionModule__trans_joint_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 trans_move_speed(u64) asm("_ZN3app8lua_bind35MotionModule__trans_move_speed_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 trans_tra(u64,Vector3f &,bool,bool) asm("_ZN3app8lua_bind28MotionModule__trans_tra_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector3fEbb") LINKABLE;
        u64 trans_tra_end_frame(u64,u64,Vector3f &) asm("_ZN3app8lua_bind38MotionModule__trans_tra_end_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE") LINKABLE;
        u64 update_dynamic_skeleton_without_complete_matrix(u64) asm("_ZN3app8lua_bind66MotionModule__update_dynamic_skeleton_without_complete_matrix_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 update_rate(u64) asm("_ZN3app8lua_bind30MotionModule__update_rate_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 weight(u64) asm("_ZN3app8lua_bind25MotionModule__weight_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 whole_rate(u64) asm("_ZN3app8lua_bind29MotionModule__whole_rate_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}