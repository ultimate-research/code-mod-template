#pragma once

#include <switch_min.h>

namespace app {
    namespace SoundModule {
        struct enSEType {};
    }
	struct BattleObjectModuleAccessor {};
	struct Fighter {};
    struct LinkEventLassoHang {};
    struct AreaContactLog  {};
    struct FighterRidleyLinkEventMotion {};
    struct LinkEventCapturePulled {};
    struct DamageInfo {};
    struct DamageNoReactionMode {};
    struct BattleObjectSlow {};
    struct GimmickEventPipe {};
    struct CameraStatus {};
    struct FighterManager {};
    struct stWaterAreaInfo {};
    struct GimmickEventDrumCheckNeedHide {};
    struct LinkEventCaptureItem {};
    struct GimmickEventCatch {};
    struct WeaponRobotHominglaserLinkEventBurst {};
    struct FighterInformation {};
    struct LinkEventPos {};
    struct LuaScriptStatusFuncID {};
    struct KineticEnergyNormal {};
    struct FighterPikminLinkEventWeaponPikminSetInt {};
    struct OnCalcParamEvent {};
    struct GimmickEventTornadoEscape {};
    struct MaterialAnimeKind {};
    struct GroundTouchFlag {};
    struct WeaponShizueFishingrodLinkEventShoot {};
    struct Rhombus2 {};
    struct VisibilityMode {};
    struct ShieldStatus {};
    struct FighterPikminLinkEventWeaponPikminOnFlag {};
    struct LinkEventCaptureDriver {};
    struct GroundCollisionLineHandle {};
    struct ArticleOperationTarget {};
    struct GimmickEventPos {};
    struct GimmickEvent {};
    struct ShieldFront {};
    struct WeaponRobotHominglaserLinkEventSearch {};
    struct FighterRyuLinkEventFinalMoveTarget {};
    struct BossManager {};
    struct GimmickEventSpring {};
    struct AttackHeight {};
    struct LinkEventMask {};
    struct LinkEventThrow {};
    struct FighterKineticEnergyGravity {};
    struct ItemParamAccessor {};
    struct GimmickEventTornadoMoveInfo {};
    struct GimmickEventBarrel {};
    struct LinkEventStarShot {};
    struct ItemSpecializedParamFloat {};
    struct LinkEventCaptureFishingrodDamage {};
    struct FighterEntryID {};
    struct AttackSetOffKind {};
    struct FighterSpiritsSupportSkill {};
    struct FighterInklingLinkEventPaint {};
    struct StageManager {};
    struct FighterKineticEnergyMotion {};
    struct GimmickEventDrumRelease {};
    struct GimmickEventLadder {};
    struct AttackData {
		/*float offset_x_, //x
		float offset_y_, //y
		float offset_z_, //z
		float offset2_x_, //x2
		float offset2_y_, //y2
		float offset2_z_, //z2
		float power_, //damage
		float size_, //size
		int vector_, //angle
		int r_eff_, //kbg
		int r_fix_, //fkb
		int r_add_, //bkb
		float slip_, //trip chance
		float stop_frame_, //hitlag multiplier
		float stop_delay_, //sdi multiplier
		u64 node_, //bone
		u64 target_situation_, //ground/air
		u64 target_lr_, //opponent's facing (for shulk back slash?)
		u64 target_part_, //collision part
		u64 attr_, //collision attribute
		u64 sound_level_, //SFX level
		u64 sound_attr_, //SFX type
		u64 set_off_, //clang/rebound
		u64 no_scale_, //ignore model scaling
		u64 shield_, //does it hit shields
		u64 reflector_, //reflectable
		u64 absorber_, //absorbable
		u64 direct_, //direct/indirect
		u64 no_invincible_, //ignore invincibility
		u64 no_xlu_, //ignore intangibility
		u64 lr_check_, //facing restrict
		u64 catch_, //is it a grab
		u64 no_team_, //friendly fire
		u64 no_stop_, //disable hitlag
		u64 no_effect_, //flinchless
		u64 region_, //type (ex: ATTACK_REGION_KICK)
		u64 ignore_down_, //ignore downed opponents
		u64 check_type_, //hitbits
		u64 sub_shield_, //shield damage
		u64 camera_quake_, //camera quake
		u64 serial_hit_frame_, //rehit rate
		u64 force_reaction_, //launch no matter what
		u64 no_attacker_log_, //ignore staling?
		u64 no_weight_reaction_, //set weight
		u64 no_reaction_search_, //search hitbox
		u64 keep_rumble_, //keep rumble
		u64 composition_speed_, //no idea
		u64 target_pos_node_, //which of opponent's bones is moved into position specified by target_pos_offset (used in autolink angles such as 368)
		float target_pos_offset_x_, //where opponent is moved to (used in autolink angles such as 368)
		float target_pos_offset_y_,
		float target_pos_offset_z_,
		u64 target_pos_frame_, //how long it takes opponent to move into the position specified by target pos_offset (used in autolink angles such as 368)
		u64 r_fix_damage_speed_up_ //whether or not to undergo balloon knockback during set knockback*/
	};
    struct GimmickEventDrumPos {};
    struct GimmickEventDrumShake {};
    struct GimmickEventDrumCheckNeedLock {};
    struct ItemSize {};
    struct FighterBayonettaFinalModule {};
    struct CutInTransactor {};
    struct FighterRyuLinkEventFinalDeadDamage {};
    struct ItemCommonParamFloat {};
    struct GroundCollisionLine {};
    struct FighterAvailableFinal {};
    struct Weapon {};
    struct Article {};
    struct FighterPikminLinkEventWeaponPikminSyncPos {};
    struct FighterPitBFinalModule {};
    struct QuickItemTreatType {};
    struct Item {};
    struct ItemSpecializedParamInt {};
    struct WeaponSnakeMissileKineticEnergyNormal {};
    struct SituationKind {};
    struct LinkEventYoshiTamagoDamageEffect {};
    struct LuaScriptLineID {};
    struct GroundCorrectKind {};
    struct FighterPokemonLinkEventChange {};
    struct BattleObjectWorld {};
    struct GimmickEventSlashEscape {};
    struct AttackAbsoluteData {};
    struct MotionNodeRotateCompose {};
    struct GimmickEventWarp {};
    struct LinkEvent {};
    struct ItemStatusParamFloat {};
    struct HitStatus {};
    struct HitStopMulTarget {};
    struct FighterPikminLinkEventWeaponPikminSetPowerMulStatus {};
    struct CutInType {};
    struct CutInData {};
    struct StopOtherKind {};
    struct WeaponShizueFishingrodLinkEventCliff {};
    struct ItemStatusParamInt {};
    struct MODEL_COLOR_TYPE {};
    struct LinkEventFinal {};
    struct ItemAiType {};
    struct CutInPriority {};
    struct ShadowDrawFlag {};
    struct GimmickEventNotify {};
    struct KineticEnergyRotNormal {};
    struct GimmickEventPresenter {};
    struct BattleObjectManager {};
    struct WeaponShizueFishingrodLinkEventReel {};
    struct AttackDirectionAxis {};
    struct SpecialPaintKind {};
    struct ItemPickupSearchMode {};
    struct FighterCutInManager {};
    struct ItemKind {};
    struct WeaponSnakeNikitaMissileKineticEnergyNormal {};
    struct MotionNodeRotateOrder {};
    struct FighterPikminLinkEventWeaponPikminConstraint {};
    struct Circle {};
    struct FighterPikminLinkEventWeaponPikminChangeStatus {};
    struct LinkAttribute {};
    struct ItemManager {};
    struct WorkKind {};
    struct FighterParamAccessor2 {};
    struct LinkEventCaptureMimikkyu {};
    struct MaterialAnimeLoopFlag {};
    struct WeaponKineticEnergyGravity {};
    struct EffectScreenBlendType {};
    struct DamageLog {};
    struct GimmickEventDrumEscape {};
    struct GimmickEventTornadoShootInfo {};
    struct FighterKind {};
    struct FighterKineticEnergyController {};
    struct FighterPikminLinkEventWeaponPikminSetFloat {};
    struct GimmickEventSlashLockInfo {};
    struct FighterCloudLinkEventFinal {};
    struct FighterPikminLinkEventWeaponPikminChangeMotion {};
    struct ItemSlopeType {};
    struct KineticEnergy {};
    struct ItemStatusParamBool {};
    struct FighterPikminLinkEventWeaponPikminSyncLR {};
    struct GroundTouchID {};
    struct EffectScreenLayer {};
    struct BossCommonParamInt {};
    struct AttackerAttribute {};
    struct ItemCommonParamInt {};
    struct LinkEventCapture {};
    struct ItemManagerItemKind {};
    struct WeaponShizueFishingrodLinkEventCut {};
    struct FighterEntry {};
    struct ItemKineticFlag {};
    struct ShieldType {};
    struct GroundCliffCheckKind {};
    struct enStatusBGMType {};
    struct LinkEventTouchItem {};
}
