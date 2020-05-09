#pragma once


#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace AttackModule {
        void clear_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28AttackModule__clear_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void clear(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind24AttackModule__clear_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 sleep_partialy(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind33AttackModule__sleep_partialy_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_attack(app::BattleObjectModuleAccessor *, int,int,app::AttackData const&) asm("_ZN3app8lua_bind29AttackModule__set_attack_implEPNS_26BattleObjectModuleAccessorEiiRKNS_10AttackDataE") LINKABLE;
        u64 set_attack_2(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind31AttackModule__set_attack_2_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 set_absolute(app::BattleObjectModuleAccessor *, int,int,app::AttackAbsoluteData const&) asm("_ZN3app8lua_bind31AttackModule__set_absolute_implEPNS_26BattleObjectModuleAccessorEiiRKNS_18AttackAbsoluteDataE") LINKABLE;
        u64 hit_absolute(app::BattleObjectModuleAccessor *, int,unsigned int,const Vector3f*,int,int) asm("_ZN3app8lua_bind31AttackModule__hit_absolute_implEPNS_26BattleObjectModuleAccessorEijRKN3phx8Vector3fEii") LINKABLE;
        u64 hit_absolute_joint(app::BattleObjectModuleAccessor *, int,unsigned int,u64,int,int) asm("_ZN3app8lua_bind37AttackModule__hit_absolute_joint_implEPNS_26BattleObjectModuleAccessorEijN3phx6Hash40Eii") LINKABLE;
        u64 set_absolute_lr(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind34AttackModule__set_absolute_lr_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_whole(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind28AttackModule__set_whole_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind24AttackModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_attack(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind28AttackModule__is_attack_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_invalid_invincible(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind41AttackModule__set_invalid_invincible_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        bool is_invalid_invincible(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind40AttackModule__is_invalid_invincible_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_invalid_xlu(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind34AttackModule__set_invalid_xlu_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        bool is_invalid_xlu(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind33AttackModule__is_invalid_xlu_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        bool is_hit_abs(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29AttackModule__is_hit_abs_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power(app::BattleObjectModuleAccessor *, int,float,bool) asm("_ZN3app8lua_bind28AttackModule__set_power_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 add_power(app::BattleObjectModuleAccessor *, int,float,bool) asm("_ZN3app8lua_bind28AttackModule__add_power_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 set_vector(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind29AttackModule__set_vector_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 size(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind23AttackModule__size_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_size(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind27AttackModule__set_size_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_target_category(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind38AttackModule__set_target_category_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 off_target_kind(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind34AttackModule__off_target_kind_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 set_offset(app::BattleObjectModuleAccessor *, int,const Vector3f*) asm("_ZN3app8lua_bind29AttackModule__set_offset_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 set_offset2(app::BattleObjectModuleAccessor *, int,const Vector3f*) asm("_ZN3app8lua_bind30AttackModule__set_offset2_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 get_offset2(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind30AttackModule__get_offset2_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_node(app::BattleObjectModuleAccessor *, int,u64) asm("_ZN3app8lua_bind27AttackModule__set_node_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40E") LINKABLE;
        u64 set_serial_hit_frame(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind39AttackModule__set_serial_hit_frame_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 get_power(app::BattleObjectModuleAccessor *, int,bool,float,bool) asm("_ZN3app8lua_bind28AttackModule__get_power_implEPNS_26BattleObjectModuleAccessorEibfb") LINKABLE;
        u64 group(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind24AttackModule__group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 reaction_effect(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind34AttackModule__reaction_effect_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_reaction_effect(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind38AttackModule__set_reaction_effect_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 reaction_fix(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind31AttackModule__reaction_fix_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_reaction_fix(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind35AttackModule__set_reaction_fix_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 reaction_add(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind31AttackModule__reaction_add_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_reaction_add(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind35AttackModule__set_reaction_add_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 reaction_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31AttackModule__reaction_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_pos_x(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind28AttackModule__set_pos_x_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 pos_x(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind24AttackModule__pos_x_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 pos_x_2(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26AttackModule__pos_x_2_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 pos_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24AttackModule__pos_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 center_pos(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind29AttackModule__center_pos_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 speed_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26AttackModule__speed_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 speed(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24AttackModule__speed_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_speed(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind28AttackModule__set_speed_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 attack_data(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind30AttackModule__attack_data_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_power_mul_status(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_power_mul_status_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__power_mul_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_add_status(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_power_add_status_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_add_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__power_add_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_speed_status(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind41AttackModule__set_power_speed_status_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_speed_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37AttackModule__power_speed_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_speed_limit(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind40AttackModule__set_power_speed_limit_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_speed_limit(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36AttackModule__power_speed_limit_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind32AttackModule__set_power_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28AttackModule__power_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_mul_2nd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36AttackModule__set_power_mul_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul_2nd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32AttackModule__power_mul_2nd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_mul_3rd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36AttackModule__set_power_mul_3rd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul_3rd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32AttackModule__power_mul_3rd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_mul_4th(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36AttackModule__set_power_mul_4th_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul_4th(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32AttackModule__power_mul_4th_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_mul_5th(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36AttackModule__set_power_mul_5th_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 power_mul_5th(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32AttackModule__power_mul_5th_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_customize_attack_ratio(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind45AttackModule__set_customize_attack_ratio_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 customize_attack_ratio(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41AttackModule__customize_attack_ratio_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_reaction_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35AttackModule__set_reaction_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_reaction_mul_2nd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_reaction_mul_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 reaction_mul_2nd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__reaction_mul_2nd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_reaction_mul_3rd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_reaction_mul_3rd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 reaction_mul_3rd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__reaction_mul_3rd_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_reaction_mul_4th(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_reaction_mul_4th_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 reaction_mul_4th(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__reaction_mul_4th_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_damage_reaction_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind42AttackModule__set_damage_reaction_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_damage_reaction_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42AttackModule__get_damage_reaction_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_shield_stiff_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_shield_stiff_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 shield_stiff_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__shield_stiff_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_ignore_just_shield(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind41AttackModule__set_ignore_just_shield_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_lr(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind25AttackModule__get_lr_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 part_size(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28AttackModule__part_size_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 ref_log_group(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind32AttackModule__ref_log_group_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 un_ref_log_group(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35AttackModule__un_ref_log_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_inflict(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30AttackModule__get_inflict_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_infliction(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind32AttackModule__is_infliction_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_inflict_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37AttackModule__get_inflict_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_infliction_status(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind39AttackModule__is_infliction_status_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 set_indirect_info(app::BattleObjectModuleAccessor *, unsigned int,int,bool,bool) asm("_ZN3app8lua_bind36AttackModule__set_indirect_info_implEPNS_26BattleObjectModuleAccessorEjibb") LINKABLE;
        u64 indirect_object_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37AttackModule__indirect_object_id_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 indirect_team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__indirect_team_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_restrict(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31AttackModule__set_restrict_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_no_attacker_log(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind38AttackModule__set_no_attacker_log_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_catch_only(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind33AttackModule__set_catch_only_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_catch_only_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind37AttackModule__set_catch_only_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_attack_keep_rumble(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind41AttackModule__set_attack_keep_rumble_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 get_power_up(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31AttackModule__get_power_up_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_up(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind31AttackModule__set_power_up_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_power_up_attr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36AttackModule__get_power_up_attr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_up_attr(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36AttackModule__set_power_up_attr_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_attacker_attribute(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41AttackModule__get_attacker_attribute_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attacker_attribute(app::BattleObjectModuleAccessor *, app::AttackerAttribute) asm("_ZN3app8lua_bind41AttackModule__set_attacker_attribute_implEPNS_26BattleObjectModuleAccessorENS_17AttackerAttributeE") LINKABLE;
        u64 get_power_apply_defense(app::BattleObjectModuleAccessor *, float,float,const u64*) asm("_ZN3app8lua_bind42AttackModule__get_power_apply_defense_implEPNS_26BattleObjectModuleAccessorEffRKS1_") LINKABLE;
        u64 attack_part_speed(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36AttackModule__attack_part_speed_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 attack_reference_pos(app::BattleObjectModuleAccessor *, Vector3f &) asm("_ZN3app8lua_bind39AttackModule__attack_reference_pos_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector3fE") LINKABLE;
        u64 attack_direction(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__attack_direction_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attack_reference_joint_id(app::BattleObjectModuleAccessor *, u64,app::AttackDirectionAxis,app::AttackDirectionAxis,app::AttackDirectionAxis) asm("_ZN3app8lua_bind48AttackModule__set_attack_reference_joint_id_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ENS_19AttackDirectionAxisES5_S5_") LINKABLE;
        u64 set_overlap_hit(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind34AttackModule__set_overlap_hit_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_no_team(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind30AttackModule__set_no_team_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 disable_tip(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30AttackModule__disable_tip_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 relocate(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind27AttackModule__relocate_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 set_lerp(app::BattleObjectModuleAccessor *, int,int,int) asm("_ZN3app8lua_bind27AttackModule__set_lerp_implEPNS_26BattleObjectModuleAccessorEiii") LINKABLE;
        void clear_lerp(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind29AttackModule__clear_lerp_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_lerp_ratio(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind33AttackModule__set_lerp_ratio_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 set_attack_power_mul_pattern(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind47AttackModule__set_attack_power_mul_pattern_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_attack_power_mul_pattern(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind47AttackModule__get_attack_power_mul_pattern_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attack_power_mul_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind45AttackModule__set_attack_power_mul_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_attack_power_mul_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45AttackModule__get_attack_power_mul_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_lr_check_default(app::BattleObjectModuleAccessor *, unsigned char) asm("_ZN3app8lua_bind39AttackModule__set_lr_check_default_implEPNS_26BattleObjectModuleAccessorEh") LINKABLE;
        u64 lr_check_default(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AttackModule__lr_check_default_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_lr_check_front(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37AttackModule__set_lr_check_front_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_lr_check_back(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36AttackModule__set_lr_check_back_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_lr_check_front_lr(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40AttackModule__set_lr_check_front_lr_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_disable_power_add_status_zero(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind52AttackModule__set_disable_power_add_status_zero_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 reset_status_attack(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind38AttackModule__reset_status_attack_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 damage_shake_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37AttackModule__damage_shake_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_damage_shake_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind41AttackModule__set_damage_shake_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_latest_no(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32AttackModule__set_latest_no_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_latest_absolute(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38AttackModule__set_latest_absolute_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_reflect_attack(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37AttackModule__set_reflect_attack_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_power_up_reaction(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39AttackModule__is_power_up_reaction_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_power_up_reaction(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40AttackModule__set_power_up_reaction_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_attack_scale(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind35AttackModule__set_attack_scale_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_attack_scale_2nd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39AttackModule__set_attack_scale_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_base_offset(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind34AttackModule__set_base_offset_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        bool is_attack_occur(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34AttackModule__is_attack_occur_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_constraint_pos(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37AttackModule__set_constraint_pos_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_constraint_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36AttackModule__is_constraint_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_no_dead_damage_fly_effect(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind48AttackModule__set_no_dead_damage_fly_effect_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_no_dead_damage_fly_effect(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind47AttackModule__is_no_dead_damage_fly_effect_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_damage_effect_mul_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind46AttackModule__set_damage_effect_mul_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 damage_effect_mul_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42AttackModule__damage_effect_mul_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attack_level(app::BattleObjectModuleAccessor *, int,unsigned char) asm("_ZN3app8lua_bind35AttackModule__set_attack_level_implEPNS_26BattleObjectModuleAccessorEih") LINKABLE;
        u64 set_ink_value(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind32AttackModule__set_ink_value_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_special_paint(app::BattleObjectModuleAccessor *, int,app::SpecialPaintKind) asm("_ZN3app8lua_bind36AttackModule__set_special_paint_implEPNS_26BattleObjectModuleAccessorEiNS_16SpecialPaintKindE") LINKABLE;
        u64 set_paralyze_frame(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind37AttackModule__set_paralyze_frame_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 set_poison_param(app::BattleObjectModuleAccessor *, int,int,int,float,bool) asm("_ZN3app8lua_bind35AttackModule__set_poison_param_implEPNS_26BattleObjectModuleAccessorEiiifb") LINKABLE;
        u64 set_optional_hit_effect(app::BattleObjectModuleAccessor *, int,u64) asm("_ZN3app8lua_bind42AttackModule__set_optional_hit_effect_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40E") LINKABLE;
        u64 set_optional_hit_sound(app::BattleObjectModuleAccessor *, int,u64) asm("_ZN3app8lua_bind41AttackModule__set_optional_hit_sound_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40E") LINKABLE;
        u64 set_no_comp_damage_motion(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind44AttackModule__set_no_comp_damage_motion_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_no_finish_camera(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind39AttackModule__set_no_finish_camera_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_no_finish_camera_ex(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind42AttackModule__set_no_finish_camera_ex_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_final_finish_cut_in(app::BattleObjectModuleAccessor *, int,bool,bool,float,bool) asm("_ZN3app8lua_bind42AttackModule__set_final_finish_cut_in_implEPNS_26BattleObjectModuleAccessorEibbfb") LINKABLE;
        u64 set_no_dead_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind34AttackModule__set_no_dead_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_no_damage_orbit_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind42AttackModule__set_no_damage_orbit_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_captured_same_time_attack(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind48AttackModule__set_captured_same_time_attack_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_captured_same_time_attack_damage_mul(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind59AttackModule__set_captured_same_time_attack_damage_mul_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_attack_composition_speed(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind47AttackModule__set_attack_composition_speed_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_attack_camera_quake(app::BattleObjectModuleAccessor *, int,int,bool) asm("_ZN3app8lua_bind42AttackModule__set_attack_camera_quake_implEPNS_26BattleObjectModuleAccessorEiib") LINKABLE;
        u64 set_attack_no_weight_reaction(app::BattleObjectModuleAccessor *, int,unsigned char,bool) asm("_ZN3app8lua_bind48AttackModule__set_attack_no_weight_reaction_implEPNS_26BattleObjectModuleAccessorEihb") LINKABLE;
        u64 set_attack_no_weight_reaction_all(app::BattleObjectModuleAccessor *, unsigned char,bool) asm("_ZN3app8lua_bind52AttackModule__set_attack_no_weight_reaction_all_implEPNS_26BattleObjectModuleAccessorEhb") LINKABLE;
        u64 set_attack_no_reaction_search(app::BattleObjectModuleAccessor *, int,unsigned char,bool) asm("_ZN3app8lua_bind48AttackModule__set_attack_no_reaction_search_implEPNS_26BattleObjectModuleAccessorEihb") LINKABLE;
        void clear_inflict_kind_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44AttackModule__clear_inflict_kind_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_force_reaction(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind37AttackModule__set_force_reaction_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_accept_no_lr(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind35AttackModule__set_accept_no_lr_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_nearest(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind30AttackModule__set_nearest_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_vec_target_pos(app::BattleObjectModuleAccessor *, int,u64,const Vector2f*,unsigned int,bool) asm("_ZN3app8lua_bind37AttackModule__set_vec_target_pos_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ERKNS3_8Vector2fEjb") LINKABLE;
        u64 enable_safe_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34AttackModule__enable_safe_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_critical_attack(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37AttackModule__is_critical_attack_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_critical_attack_damage_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49AttackModule__get_critical_attack_damage_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_critical_attack_reaction_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind51AttackModule__get_critical_attack_reaction_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_is_critical_attack(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind41AttackModule__set_is_critical_attack_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_critical_attack_damage_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind49AttackModule__set_critical_attack_damage_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_critical_attack_reaction_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind51AttackModule__set_critical_attack_reaction_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 enable_attack_r_fix_damage_speed_up_all(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind58AttackModule__enable_attack_r_fix_damage_speed_up_all_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_add_reaction_frame(app::BattleObjectModuleAccessor *, int,float,bool) asm("_ZN3app8lua_bind41AttackModule__set_add_reaction_frame_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 set_set_off(app::BattleObjectModuleAccessor *, int,app::AttackSetOffKind) asm("_ZN3app8lua_bind30AttackModule__set_set_off_implEPNS_26BattleObjectModuleAccessorEiNS_16AttackSetOffKindE") LINKABLE;
        u64 set_no_squat_damage_reaction_mul(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind51AttackModule__set_no_squat_damage_reaction_mul_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_no_damage_fly_smoke_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind46AttackModule__set_no_damage_fly_smoke_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_no_uniq_effect_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind41AttackModule__set_no_uniq_effect_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_no_world_scale(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37AttackModule__set_no_world_scale_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_attack_height(app::BattleObjectModuleAccessor *, int,int attackHeight,bool) asm("_ZN3app8lua_bind36AttackModule__set_attack_height_implEPNS_26BattleObjectModuleAccessorEiNS_12AttackHeightEb") LINKABLE;
        u64 set_attack_height_all(app::BattleObjectModuleAccessor *, int attackHeight,bool) asm("_ZN3app8lua_bind40AttackModule__set_attack_height_all_implEPNS_26BattleObjectModuleAccessorENS_12AttackHeightEb") LINKABLE;
        u64 set_no_hop_opponent(app::BattleObjectModuleAccessor *, int,bool,bool) asm("_ZN3app8lua_bind38AttackModule__set_no_hop_opponent_implEPNS_26BattleObjectModuleAccessorEibb") LINKABLE;
        u64 set_no_hop_opponent_all(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind42AttackModule__set_no_hop_opponent_all_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 set_ice_frame_mul(app::BattleObjectModuleAccessor *, int,float,bool) asm("_ZN3app8lua_bind36AttackModule__set_ice_frame_mul_implEPNS_26BattleObjectModuleAccessorEifb") LINKABLE;
        u64 init_attack_pos(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind34AttackModule__init_attack_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
    }
}