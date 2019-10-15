#ifndef APP_SV_ANIMCMD_H
#define APP_SV_ANIMCMD_H

#include <switch_min.h>
#include "useful/useful.h"

namespace app::sv_animcmd {
    extern u64 ADD_SPEED_NO_LIMIT(u64) asm("_ZN3app10sv_animcmd18ADD_SPEED_NO_LIMITEP9lua_State") LINKABLE;
    extern u64 AFTER_IMAGE4_ON_WORK_arg29(u64) asm("_ZN3app10sv_animcmd26AFTER_IMAGE4_ON_WORK_arg29EP9lua_State") LINKABLE;
    extern u64 AFTER_IMAGE4_ON_arg29(u64) asm("_ZN3app10sv_animcmd21AFTER_IMAGE4_ON_arg29EP9lua_State") LINKABLE;
    extern u64 AFTER_IMAGE_OFF(u64) asm("_ZN3app10sv_animcmd15AFTER_IMAGE_OFFEP9lua_State") LINKABLE;
    extern u64 AREA_WIND_2ND(u64) asm("_ZN3app10sv_animcmd13AREA_WIND_2NDEP9lua_State") LINKABLE;
    extern u64 AREA_WIND_2ND_RAD(u64) asm("_ZN3app10sv_animcmd17AREA_WIND_2ND_RADEP9lua_State") LINKABLE;
    extern u64 AREA_WIND_2ND_RAD_arg9(u64) asm("_ZN3app10sv_animcmd22AREA_WIND_2ND_RAD_arg9EP9lua_State") LINKABLE;
    extern u64 AREA_WIND_2ND_arg10(u64) asm("_ZN3app10sv_animcmd19AREA_WIND_2ND_arg10EP9lua_State") LINKABLE;
    extern u64 ATK_HIT_ABS(u64) asm("_ZN3app10sv_animcmd11ATK_HIT_ABSEP9lua_State") LINKABLE;
    extern u64 ATK_LERP_RATIO(u64) asm("_ZN3app10sv_animcmd14ATK_LERP_RATIOEP9lua_State") LINKABLE;
    extern u64 ATK_NO_REACTION_SEARCH_WITCH_TIME(u64) asm("_ZN3app10sv_animcmd33ATK_NO_REACTION_SEARCH_WITCH_TIMEEP9lua_State") LINKABLE;
    extern u64 ATK_POWER(u64) asm("_ZN3app10sv_animcmd9ATK_POWEREP9lua_State") LINKABLE;
    extern u64 ATK_SET_SHIELD_SETOFF_MUL(u64) asm("_ZN3app10sv_animcmd25ATK_SET_SHIELD_SETOFF_MULEP9lua_State") LINKABLE;
    extern u64 ATK_SET_SHIELD_SETOFF_MUL_arg3(u64) asm("_ZN3app10sv_animcmd30ATK_SET_SHIELD_SETOFF_MUL_arg3EP9lua_State") LINKABLE;
    extern u64 ATK_SET_SHIELD_SETOFF_MUL_arg4(u64) asm("_ZN3app10sv_animcmd30ATK_SET_SHIELD_SETOFF_MUL_arg4EP9lua_State") LINKABLE;
    extern u64 ATK_SET_SHIELD_SETOFF_MUL_arg5(u64) asm("_ZN3app10sv_animcmd30ATK_SET_SHIELD_SETOFF_MUL_arg5EP9lua_State") LINKABLE;
    extern u64 ATTACK(u64) asm("_ZN3app10sv_animcmd6ATTACKEP9lua_State") LINKABLE;
    extern u64 ATTACK_ABS(u64) asm("_ZN3app10sv_animcmd10ATTACK_ABSEP9lua_State") LINKABLE;
    extern u64 ATTACK_IGNORE_THROW(u64) asm("_ZN3app10sv_animcmd19ATTACK_IGNORE_THROWEP9lua_State") LINKABLE;
    extern u64 BACK_GROUND_EFFECT_STAGE_SET_HIDING_FOR_DIRECTION(u64) asm("_ZN3app10sv_animcmd49BACK_GROUND_EFFECT_STAGE_SET_HIDING_FOR_DIRECTIONEP9lua_State") LINKABLE;
    extern u64 BURN_COLOR(u64) asm("_ZN3app10sv_animcmd10BURN_COLOREP9lua_State") LINKABLE;
    extern u64 BURN_COLOR_FRAME(u64) asm("_ZN3app10sv_animcmd16BURN_COLOR_FRAMEEP9lua_State") LINKABLE;
    extern u64 BURN_COLOR_NORMAL(u64) asm("_ZN3app10sv_animcmd17BURN_COLOR_NORMALEP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_IN_FINAL(u64) asm("_ZN3app10sv_animcmd17CAM_ZOOM_IN_FINALEP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_IN_FINAL_arg13(u64) asm("_ZN3app10sv_animcmd23CAM_ZOOM_IN_FINAL_arg13EP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_IN_arg5(u64) asm("_ZN3app10sv_animcmd16CAM_ZOOM_IN_arg5EP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_IN_arg6(u64) asm("_ZN3app10sv_animcmd16CAM_ZOOM_IN_arg6EP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_OUT(u64) asm("_ZN3app10sv_animcmd12CAM_ZOOM_OUTEP9lua_State") LINKABLE;
    extern u64 CAM_ZOOM_OUT_FINAL(u64) asm("_ZN3app10sv_animcmd18CAM_ZOOM_OUT_FINALEP9lua_State") LINKABLE;
    extern u64 CANCEL_FILL_SCREEN(u64) asm("_ZN3app10sv_animcmd18CANCEL_FILL_SCREENEP9lua_State") LINKABLE;
    extern u64 CATCH(u64) asm("_ZN3app10sv_animcmd5CATCHEP9lua_State") LINKABLE;
    extern u64 CHECK_FINISH_CAMERA(u64) asm("_ZN3app10sv_animcmd19CHECK_FINISH_CAMERAEP9lua_State") LINKABLE;
    extern u64 CHECK_FINISH_CAMERA_IF_NOT_HP_MODE(u64) asm("_ZN3app10sv_animcmd34CHECK_FINISH_CAMERA_IF_NOT_HP_MODEEP9lua_State") LINKABLE;
    extern u64 CHECK_VALID_FINAL_START_CAMERA(u64) asm("_ZN3app10sv_animcmd30CHECK_VALID_FINAL_START_CAMERAEP9lua_State") LINKABLE;
    extern u64 CLR_SPEED(u64) asm("_ZN3app10sv_animcmd9CLR_SPEEDEP9lua_State") LINKABLE;
    extern u64 COLOR_COLLECTION(u64) asm("_ZN3app10sv_animcmd16COLOR_COLLECTIONEP9lua_State") LINKABLE;
    extern u64 COL_NORMAL(u64) asm("_ZN3app10sv_animcmd10COL_NORMALEP9lua_State") LINKABLE;
    extern u64 COL_PRI(u64) asm("_ZN3app10sv_animcmd7COL_PRIEP9lua_State") LINKABLE;
    extern u64 CORRECT(u64) asm("_ZN3app10sv_animcmd7CORRECTEP9lua_State") LINKABLE;
    extern u64 DOWN_EFFECT(u64) asm("_ZN3app10sv_animcmd11DOWN_EFFECTEP9lua_State") LINKABLE;
    extern u64 EFFECT(u64) asm("_ZN3app10sv_animcmd6EFFECTEP9lua_State") LINKABLE;
    extern u64 EFFECT_ALPHA(u64) asm("_ZN3app10sv_animcmd12EFFECT_ALPHAEP9lua_State") LINKABLE;
    extern u64 EFFECT_ATTR(u64) asm("_ZN3app10sv_animcmd11EFFECT_ATTREP9lua_State") LINKABLE;
    extern u64 EFFECT_BRANCH_SITUATION(u64) asm("_ZN3app10sv_animcmd23EFFECT_BRANCH_SITUATIONEP9lua_State") LINKABLE;
    extern u64 EFFECT_COLOR(u64) asm("_ZN3app10sv_animcmd12EFFECT_COLOREP9lua_State") LINKABLE;
    extern u64 EFFECT_COLOR_WORK(u64) asm("_ZN3app10sv_animcmd17EFFECT_COLOR_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_DETACH_KIND(u64) asm("_ZN3app10sv_animcmd18EFFECT_DETACH_KINDEP9lua_State") LINKABLE;
    extern u64 EFFECT_DETACH_KIND_WORK(u64) asm("_ZN3app10sv_animcmd23EFFECT_DETACH_KIND_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLIP(u64) asm("_ZN3app10sv_animcmd11EFFECT_FLIPEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLIP_ALPHA(u64) asm("_ZN3app10sv_animcmd17EFFECT_FLIP_ALPHAEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLW_POS(u64) asm("_ZN3app10sv_animcmd14EFFECT_FLW_POSEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLW_POS_NO_STOP(u64) asm("_ZN3app10sv_animcmd22EFFECT_FLW_POS_NO_STOPEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLW_POS_UNSYNC_VIS(u64) asm("_ZN3app10sv_animcmd25EFFECT_FLW_POS_UNSYNC_VISEP9lua_State") LINKABLE;
    extern u64 EFFECT_FLW_UNSYNC_VIS(u64) asm("_ZN3app10sv_animcmd21EFFECT_FLW_UNSYNC_VISEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW(u64) asm("_ZN3app10sv_animcmd13EFFECT_FOLLOWEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_ALPHA(u64) asm("_ZN3app10sv_animcmd19EFFECT_FOLLOW_ALPHAEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_COLOR(u64) asm("_ZN3app10sv_animcmd19EFFECT_FOLLOW_COLOREP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP(u64) asm("_ZN3app10sv_animcmd18EFFECT_FOLLOW_FLIPEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP_ALPHA(u64) asm("_ZN3app10sv_animcmd24EFFECT_FOLLOW_FLIP_ALPHAEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP_COLOR(u64) asm("_ZN3app10sv_animcmd24EFFECT_FOLLOW_FLIP_COLOREP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP_RND(u64) asm("_ZN3app10sv_animcmd22EFFECT_FOLLOW_FLIP_RNDEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP_arg13(u64) asm("_ZN3app10sv_animcmd24EFFECT_FOLLOW_FLIP_arg13EP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_LIGHT(u64) asm("_ZN3app10sv_animcmd19EFFECT_FOLLOW_LIGHTEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_NO_SCALE(u64) asm("_ZN3app10sv_animcmd22EFFECT_FOLLOW_NO_SCALEEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_NO_STOP(u64) asm("_ZN3app10sv_animcmd21EFFECT_FOLLOW_NO_STOPEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_NO_STOP_FLIP(u64) asm("_ZN3app10sv_animcmd26EFFECT_FOLLOW_NO_STOP_FLIPEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_RND(u64) asm("_ZN3app10sv_animcmd17EFFECT_FOLLOW_RNDEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_RND_WORK(u64) asm("_ZN3app10sv_animcmd22EFFECT_FOLLOW_RND_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_UNSYNC_VIS_WHOLE(u64) asm("_ZN3app10sv_animcmd30EFFECT_FOLLOW_UNSYNC_VIS_WHOLEEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_VARIATION(u64) asm("_ZN3app10sv_animcmd23EFFECT_FOLLOW_VARIATIONEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_WORK(u64) asm("_ZN3app10sv_animcmd18EFFECT_FOLLOW_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_arg11(u64) asm("_ZN3app10sv_animcmd19EFFECT_FOLLOW_arg11EP9lua_State") LINKABLE;
    extern u64 EFFECT_FOLLOW_arg12(u64) asm("_ZN3app10sv_animcmd19EFFECT_FOLLOW_arg12EP9lua_State") LINKABLE;
    extern u64 EFFECT_GLOBAL(u64) asm("_ZN3app10sv_animcmd13EFFECT_GLOBALEP9lua_State") LINKABLE;
    extern u64 EFFECT_GLOBAL_BACK_GROUND(u64) asm("_ZN3app10sv_animcmd25EFFECT_GLOBAL_BACK_GROUNDEP9lua_State") LINKABLE;
    extern u64 EFFECT_GLOBAL_BACK_GROUND_CENTER_TOP_NODE(u64) asm("_ZN3app10sv_animcmd41EFFECT_GLOBAL_BACK_GROUND_CENTER_TOP_NODEEP9lua_State") LINKABLE;
    extern u64 EFFECT_GLOBAL_BACK_GROUND_CUT_IN_CENTER_POS(u64) asm("_ZN3app10sv_animcmd43EFFECT_GLOBAL_BACK_GROUND_CUT_IN_CENTER_POSEP9lua_State") LINKABLE;
    extern u64 EFFECT_LIGHT_END(u64) asm("_ZN3app10sv_animcmd16EFFECT_LIGHT_ENDEP9lua_State") LINKABLE;
    extern u64 EFFECT_OFF(u64) asm("_ZN3app10sv_animcmd10EFFECT_OFFEP9lua_State") LINKABLE;
    extern u64 EFFECT_OFF_HANDLE(u64) asm("_ZN3app10sv_animcmd17EFFECT_OFF_HANDLEEP9lua_State") LINKABLE;
    extern u64 EFFECT_OFF_KIND(u64) asm("_ZN3app10sv_animcmd15EFFECT_OFF_KINDEP9lua_State") LINKABLE;
    extern u64 EFFECT_OFF_KIND_WORK(u64) asm("_ZN3app10sv_animcmd20EFFECT_OFF_KIND_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_REMOVE_ATTR(u64) asm("_ZN3app10sv_animcmd18EFFECT_REMOVE_ATTREP9lua_State") LINKABLE;
    extern u64 EFFECT_STENCIL_OFF(u64) asm("_ZN3app10sv_animcmd18EFFECT_STENCIL_OFFEP9lua_State") LINKABLE;
    extern u64 EFFECT_STENCIL_ON(u64) asm("_ZN3app10sv_animcmd17EFFECT_STENCIL_ONEP9lua_State") LINKABLE;
    extern u64 EFFECT_VARIATION(u64) asm("_ZN3app10sv_animcmd16EFFECT_VARIATIONEP9lua_State") LINKABLE;
    extern u64 EFFECT_WORK(u64) asm("_ZN3app10sv_animcmd11EFFECT_WORKEP9lua_State") LINKABLE;
    extern u64 EFFECT_WORK_R(u64) asm("_ZN3app10sv_animcmd13EFFECT_WORK_REP9lua_State") LINKABLE;
    extern u64 ENABLE_AREA(u64) asm("_ZN3app10sv_animcmd11ENABLE_AREAEP9lua_State") LINKABLE;
    extern u64 FILL_SCREEN_LEGACY(u64) asm("_ZN3app10sv_animcmd18FILL_SCREEN_LEGACYEP9lua_State") LINKABLE;
    extern u64 FILL_SCREEN_MODEL_COLOR(u64) asm("_ZN3app10sv_animcmd23FILL_SCREEN_MODEL_COLOREP9lua_State") LINKABLE;
    extern u64 FILL_SCREEN_arg9(u64) asm("_ZN3app10sv_animcmd16FILL_SCREEN_arg9EP9lua_State") LINKABLE;
    extern u64 FLASH(u64) asm("_ZN3app10sv_animcmd5FLASHEP9lua_State") LINKABLE;
    extern u64 FLASH_FRM(u64) asm("_ZN3app10sv_animcmd9FLASH_FRMEP9lua_State") LINKABLE;
    extern u64 FLASH_NO_STOP(u64) asm("_ZN3app10sv_animcmd13FLASH_NO_STOPEP9lua_State") LINKABLE;
    extern u64 FLASH_SET_LAST_ATTACK_DIRECTION(u64) asm("_ZN3app10sv_animcmd31FLASH_SET_LAST_ATTACK_DIRECTIONEP9lua_State") LINKABLE;
    extern u64 FOOT_EFFECT(u64) asm("_ZN3app10sv_animcmd11FOOT_EFFECTEP9lua_State") LINKABLE;
    extern u64 FOOT_EFFECT_FLIP(u64) asm("_ZN3app10sv_animcmd16FOOT_EFFECT_FLIPEP9lua_State") LINKABLE;
    extern u64 FT_ADD_DAMAGE(u64) asm("_ZN3app10sv_animcmd13FT_ADD_DAMAGEEP9lua_State") LINKABLE;
    extern u64 FT_ATTACK_ABS_CAMERA_QUAKE(u64) asm("_ZN3app10sv_animcmd26FT_ATTACK_ABS_CAMERA_QUAKEEP9lua_State") LINKABLE;
    extern u64 FT_CATCH_STOP(u64) asm("_ZN3app10sv_animcmd13FT_CATCH_STOPEP9lua_State") LINKABLE;
    extern u64 FT_DISABLE_CURRY_FACE(u64) asm("_ZN3app10sv_animcmd21FT_DISABLE_CURRY_FACEEP9lua_State") LINKABLE;
    extern u64 FT_IS_SAME_FIGHTER_CATEGORY(u64) asm("_ZN3app10sv_animcmd27FT_IS_SAME_FIGHTER_CATEGORYEP9lua_State") LINKABLE;
    extern u64 FT_LEAVE_NEAR_OTTOTTO(u64) asm("_ZN3app10sv_animcmd21FT_LEAVE_NEAR_OTTOTTOEP9lua_State") LINKABLE;
    extern u64 FT_MOTION_CHANGE_HAVE_ITEM(u64) asm("_ZN3app10sv_animcmd26FT_MOTION_CHANGE_HAVE_ITEMEP9lua_State") LINKABLE;
    extern u64 FT_MOTION_INTP_TURN_END(u64) asm("_ZN3app10sv_animcmd23FT_MOTION_INTP_TURN_ENDEP9lua_State") LINKABLE;
    extern u64 FT_MOTION_INTP_WAIT(u64) asm("_ZN3app10sv_animcmd19FT_MOTION_INTP_WAITEP9lua_State") LINKABLE;
    extern u64 FT_MOTION_RATE(u64) asm("_ZN3app10sv_animcmd14FT_MOTION_RATEEP9lua_State") LINKABLE;
    extern u64 FT_REMOVE_FINAL_AURA(u64) asm("_ZN3app10sv_animcmd20FT_REMOVE_FINAL_AURAEP9lua_State") LINKABLE;
    extern u64 FT_SET_FINAL_FEAR_FACE(u64) asm("_ZN3app10sv_animcmd22FT_SET_FINAL_FEAR_FACEEP9lua_State") LINKABLE;
    extern u64 FT_SET_FINAL_SMASH_LIGHT(u64) asm("_ZN3app10sv_animcmd24FT_SET_FINAL_SMASH_LIGHTEP9lua_State") LINKABLE;
    extern u64 FT_SHOOTING_ATTACK_GROUND_CHECK_NEW(u64) asm("_ZN3app10sv_animcmd35FT_SHOOTING_ATTACK_GROUND_CHECK_NEWEP9lua_State") LINKABLE;
    extern u64 FT_SHOOTING_ATTACK_GROUND_CHECK_NEW_arg5(u64) asm("_ZN3app10sv_animcmd40FT_SHOOTING_ATTACK_GROUND_CHECK_NEW_arg5EP9lua_State") LINKABLE;
    extern u64 FT_START_ADJUST_MOTION_FRAME_arg1(u64) asm("_ZN3app10sv_animcmd33FT_START_ADJUST_MOTION_FRAME_arg1EP9lua_State") LINKABLE;
    extern u64 FT_START_CUTIN(u64) asm("_ZN3app10sv_animcmd14FT_START_CUTINEP9lua_State") LINKABLE;
    extern u64 FT_START_CUTIN_JACK_FINAL(u64) asm("_ZN3app10sv_animcmd25FT_START_CUTIN_JACK_FINALEP9lua_State") LINKABLE;
    extern u64 FT_START_CUTIN_arg1(u64) asm("_ZN3app10sv_animcmd19FT_START_CUTIN_arg1EP9lua_State") LINKABLE;
    extern u64 FT_UPDATE_FACE_MOTION(u64) asm("_ZN3app10sv_animcmd21FT_UPDATE_FACE_MOTIONEP9lua_State") LINKABLE;
    extern u64 GET_VOICE_REGION(u64) asm("_ZN3app10sv_animcmd16GET_VOICE_REGIONEP9lua_State") LINKABLE;
    extern u64 GET_VOICE_REGION_NEW(u64) asm("_ZN3app10sv_animcmd20GET_VOICE_REGION_NEWEP9lua_State") LINKABLE;
    extern u64 GET_VOICE_VARIATION(u64) asm("_ZN3app10sv_animcmd19GET_VOICE_VARIATIONEP9lua_State") LINKABLE;
    extern u64 HIT_NO(u64) asm("_ZN3app10sv_animcmd6HIT_NOEP9lua_State") LINKABLE;
    extern u64 HIT_NODE(u64) asm("_ZN3app10sv_animcmd8HIT_NODEEP9lua_State") LINKABLE;
    extern u64 HIT_RESET_ALL(u64) asm("_ZN3app10sv_animcmd13HIT_RESET_ALLEP9lua_State") LINKABLE;
    extern u64 IS_EXIST_ARTICLE(u64) asm("_ZN3app10sv_animcmd16IS_EXIST_ARTICLEEP9lua_State") LINKABLE;
    extern u64 IS_FIGHTER_STATUS_KIND(u64) asm("_ZN3app10sv_animcmd22IS_FIGHTER_STATUS_KINDEP9lua_State") LINKABLE;
    extern u64 IS_GENERATABLE_ARTICLE(u64) asm("_ZN3app10sv_animcmd22IS_GENERATABLE_ARTICLEEP9lua_State") LINKABLE;
    extern u64 IS_HAVE_ITEM_KIND(u64) asm("_ZN3app10sv_animcmd17IS_HAVE_ITEM_KINDEP9lua_State") LINKABLE;
    extern u64 IS_MENU(u64) asm("_ZN3app10sv_animcmd7IS_MENUEP9lua_State") LINKABLE;
    extern u64 IS_RANDOM(u64) asm("_ZN3app10sv_animcmd9IS_RANDOMEP9lua_State") LINKABLE;
    extern u64 IS_STATUS_KIND(u64) asm("_ZN3app10sv_animcmd14IS_STATUS_KINDEP9lua_State") LINKABLE;
    extern u64 LANDING_EFFECT(u64) asm("_ZN3app10sv_animcmd14LANDING_EFFECTEP9lua_State") LINKABLE;
    extern u64 LANDING_EFFECT_FLIP(u64) asm("_ZN3app10sv_animcmd19LANDING_EFFECT_FLIPEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_ALPHA(u64) asm("_ZN3app10sv_animcmd21LAST_EFFECT_SET_ALPHAEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_COLOR(u64) asm("_ZN3app10sv_animcmd21LAST_EFFECT_SET_COLOREP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_DISABLE_SYSTEM_SLOW(u64) asm("_ZN3app10sv_animcmd35LAST_EFFECT_SET_DISABLE_SYSTEM_SLOWEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_OFFSET_TO_CAMERA_FLAT(u64) asm("_ZN3app10sv_animcmd37LAST_EFFECT_SET_OFFSET_TO_CAMERA_FLATEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_RATE(u64) asm("_ZN3app10sv_animcmd20LAST_EFFECT_SET_RATEEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_RATE_WORK(u64) asm("_ZN3app10sv_animcmd25LAST_EFFECT_SET_RATE_WORKEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_SCALE_W(u64) asm("_ZN3app10sv_animcmd23LAST_EFFECT_SET_SCALE_WEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_TOP_OFFSET(u64) asm("_ZN3app10sv_animcmd26LAST_EFFECT_SET_TOP_OFFSETEP9lua_State") LINKABLE;
    extern u64 LAST_EFFECT_SET_WORK_INT(u64) asm("_ZN3app10sv_animcmd24LAST_EFFECT_SET_WORK_INTEP9lua_State") LINKABLE;
    extern u64 LAST_PARTICLE_SET_COLOR(u64) asm("_ZN3app10sv_animcmd23LAST_PARTICLE_SET_COLOREP9lua_State") LINKABLE;
    extern u64 PLAY_DAMAGESTOP(u64) asm("_ZN3app10sv_animcmd15PLAY_DAMAGESTOPEP9lua_State") LINKABLE;
    extern u64 PLAY_DOWN_SE(u64) asm("_ZN3app10sv_animcmd12PLAY_DOWN_SEEP9lua_State") LINKABLE;
    extern u64 PLAY_FLY_VOICE(u64) asm("_ZN3app10sv_animcmd14PLAY_FLY_VOICEEP9lua_State") LINKABLE;
    extern u64 PLAY_ITEM_EMPTY_SE(u64) asm("_ZN3app10sv_animcmd18PLAY_ITEM_EMPTY_SEEP9lua_State") LINKABLE;
    extern u64 PLAY_LANDING_SE(u64) asm("_ZN3app10sv_animcmd15PLAY_LANDING_SEEP9lua_State") LINKABLE;
    extern u64 PLAY_SE(u64) asm("_ZN3app10sv_animcmd7PLAY_SEEP9lua_State") LINKABLE;
    extern u64 PLAY_SEQUENCE(u64) asm("_ZN3app10sv_animcmd13PLAY_SEQUENCEEP9lua_State") LINKABLE;
    extern u64 PLAY_SEQUENCE_DAMAGESTOP(u64) asm("_ZN3app10sv_animcmd24PLAY_SEQUENCE_DAMAGESTOPEP9lua_State") LINKABLE;
    extern u64 PLAY_SE_NO_3D(u64) asm("_ZN3app10sv_animcmd13PLAY_SE_NO_3DEP9lua_State") LINKABLE;
    extern u64 PLAY_SE_NO_3D_FORCE_AUTO_PITCH(u64) asm("_ZN3app10sv_animcmd30PLAY_SE_NO_3D_FORCE_AUTO_PITCHEP9lua_State") LINKABLE;
    extern u64 PLAY_SE_REMAIN(u64) asm("_ZN3app10sv_animcmd14PLAY_SE_REMAINEP9lua_State") LINKABLE;
    extern u64 PLAY_SE_SET_HANDLE(u64) asm("_ZN3app10sv_animcmd18PLAY_SE_SET_HANDLEEP9lua_State") LINKABLE;
    extern u64 PLAY_STATUS(u64) asm("_ZN3app10sv_animcmd11PLAY_STATUSEP9lua_State") LINKABLE;
    extern u64 PLAY_STEP(u64) asm("_ZN3app10sv_animcmd9PLAY_STEPEP9lua_State") LINKABLE;
    extern u64 PLAY_STEP_FLIPPABLE(u64) asm("_ZN3app10sv_animcmd19PLAY_STEP_FLIPPABLEEP9lua_State") LINKABLE;
    extern u64 QUAKE(u64) asm("_ZN3app10sv_animcmd5QUAKEEP9lua_State") LINKABLE;
    extern u64 QUAKE_STOP(u64) asm("_ZN3app10sv_animcmd10QUAKE_STOPEP9lua_State") LINKABLE;
    extern u64 REG_LANDING_SE(u64) asm("_ZN3app10sv_animcmd14REG_LANDING_SEEP9lua_State") LINKABLE;
    extern u64 REMOVE_FINAL_SCREEN_EFFECT(u64) asm("_ZN3app10sv_animcmd26REMOVE_FINAL_SCREEN_EFFECTEP9lua_State") LINKABLE;
    extern u64 REQ_FINAL_START_CAMERA(u64) asm("_ZN3app10sv_animcmd22REQ_FINAL_START_CAMERAEP9lua_State") LINKABLE;
    extern u64 REQ_FINAL_START_CAMERA_arg3(u64) asm("_ZN3app10sv_animcmd27REQ_FINAL_START_CAMERA_arg3EP9lua_State") LINKABLE;
    extern u64 REVERSE_LR(u64) asm("_ZN3app10sv_animcmd10REVERSE_LREP9lua_State") LINKABLE;
    extern u64 RUMBLE_ALL(u64) asm("_ZN3app10sv_animcmd10RUMBLE_ALLEP9lua_State") LINKABLE;
    extern u64 RUMBLE_DUMMY(u64) asm("_ZN3app10sv_animcmd12RUMBLE_DUMMYEP9lua_State") LINKABLE;
    extern u64 RUMBLE_FINAL_OTHER(u64) asm("_ZN3app10sv_animcmd18RUMBLE_FINAL_OTHEREP9lua_State") LINKABLE;
    extern u64 RUMBLE_FINAL_TARGET(u64) asm("_ZN3app10sv_animcmd19RUMBLE_FINAL_TARGETEP9lua_State") LINKABLE;
    extern u64 RUMBLE_HIT(u64) asm("_ZN3app10sv_animcmd10RUMBLE_HITEP9lua_State") LINKABLE;
    extern u64 RUMBLE_HIT_STATUS(u64) asm("_ZN3app10sv_animcmd17RUMBLE_HIT_STATUSEP9lua_State") LINKABLE;
    extern u64 SA_SET(u64) asm("_ZN3app10sv_animcmd6SA_SETEP9lua_State") LINKABLE;
    extern u64 SCREEN_EFFECT_SLOW_WHOLE(u64) asm("_ZN3app10sv_animcmd24SCREEN_EFFECT_SLOW_WHOLEEP9lua_State") LINKABLE;
    extern u64 SEARCH(u64) asm("_ZN3app10sv_animcmd6SEARCHEP9lua_State") LINKABLE;
    extern u64 SET_AIR(u64) asm("_ZN3app10sv_animcmd7SET_AIREP9lua_State") LINKABLE;
    extern u64 SET_PLAY_INHIVIT(u64) asm("_ZN3app10sv_animcmd16SET_PLAY_INHIVITEP9lua_State") LINKABLE;
    extern u64 SET_RATE_ARTICLE(u64) asm("_ZN3app10sv_animcmd16SET_RATE_ARTICLEEP9lua_State") LINKABLE;
    extern u64 SET_RATE_ARTICLE_V(u64) asm("_ZN3app10sv_animcmd18SET_RATE_ARTICLE_VEP9lua_State") LINKABLE;
    extern u64 SET_SEARCH_SIZE_EXIST(u64) asm("_ZN3app10sv_animcmd21SET_SEARCH_SIZE_EXISTEP9lua_State") LINKABLE;
    extern u64 SET_SPEED(u64) asm("_ZN3app10sv_animcmd9SET_SPEEDEP9lua_State") LINKABLE;
    extern u64 SET_SPEED_EX(u64) asm("_ZN3app10sv_animcmd12SET_SPEED_EXEP9lua_State") LINKABLE;
    extern u64 SET_TAKEOUT_SE(u64) asm("_ZN3app10sv_animcmd14SET_TAKEOUT_SEEP9lua_State") LINKABLE;
    extern u64 SET_TAKEOUT_SE_STATUS(u64) asm("_ZN3app10sv_animcmd21SET_TAKEOUT_SE_STATUSEP9lua_State") LINKABLE;
    extern u64 SHOOT_ITEM_BULLET(u64) asm("_ZN3app10sv_animcmd17SHOOT_ITEM_BULLETEP9lua_State") LINKABLE;
    extern u64 SHOOT_ITEM_BULLET_CHARGE(u64) asm("_ZN3app10sv_animcmd24SHOOT_ITEM_BULLET_CHARGEEP9lua_State") LINKABLE;
    extern u64 SLOW_OPPONENT(u64) asm("_ZN3app10sv_animcmd13SLOW_OPPONENTEP9lua_State") LINKABLE;
    extern u64 START_INFO_FLASH_EYE(u64) asm("_ZN3app10sv_animcmd20START_INFO_FLASH_EYEEP9lua_State") LINKABLE;
    extern u64 STICK_LR(u64) asm("_ZN3app10sv_animcmd8STICK_LREP9lua_State") LINKABLE;
    extern u64 STOP_SE(u64) asm("_ZN3app10sv_animcmd7STOP_SEEP9lua_State") LINKABLE;
    extern u64 THROW_ITEM(u64) asm("_ZN3app10sv_animcmd10THROW_ITEMEP9lua_State") LINKABLE;
    extern u64 THROW_ITEM_OFFSET(u64) asm("_ZN3app10sv_animcmd17THROW_ITEM_OFFSETEP9lua_State") LINKABLE;
    extern u64 THROW_ITEM_OFFSET_arg4(u64) asm("_ZN3app10sv_animcmd22THROW_ITEM_OFFSET_arg4EP9lua_State") LINKABLE;
    extern u64 THROW_ITEM_REFLET(u64) asm("_ZN3app10sv_animcmd17THROW_ITEM_REFLETEP9lua_State") LINKABLE;
    extern u64 THROW_ITEM_arg3(u64) asm("_ZN3app10sv_animcmd15THROW_ITEM_arg3EP9lua_State") LINKABLE;
    extern u64 UNABLE_AREA(u64) asm("_ZN3app10sv_animcmd11UNABLE_AREAEP9lua_State") LINKABLE;
    extern u64 UPDATE_ROT(u64) asm("_ZN3app10sv_animcmd10UPDATE_ROTEP9lua_State") LINKABLE;
    extern u64 WHOLE_HIT(u64) asm("_ZN3app10sv_animcmd9WHOLE_HITEP9lua_State") LINKABLE;
    extern u64 execute(u64,float) asm("_ZN3app10sv_animcmd7executeEP9lua_Statef") LINKABLE;
    extern u64 frame(u64,float) asm("_ZN3app10sv_animcmd5frameEP9lua_Statef") LINKABLE;
    extern u64 frame_clear(u64) asm("_ZN3app10sv_animcmd11frame_clearEP9lua_State") LINKABLE;
    extern u64 get_value_float(u64,int) asm("_ZN3app10sv_animcmd15get_value_floatEP9lua_Statei") LINKABLE;
    extern u64 get_value_int(u64,int) asm("_ZN3app10sv_animcmd13get_value_intEP9lua_Statei") LINKABLE;
    extern u64 is_excute(u64) asm("_ZN3app10sv_animcmd9is_excuteEP9lua_State") LINKABLE;
    extern u64 stop(u64) asm("_ZN3app10sv_animcmd4stopEP9lua_State") LINKABLE;
    extern u64 wait(u64,float) asm("_ZN3app10sv_animcmd4waitEP9lua_Statef") LINKABLE;
    extern u64 wait_loop(u64) asm("_ZN3app10sv_animcmd9wait_loopEP9lua_State") LINKABLE;
    extern u64 wait_loop_clear(u64) asm("_ZN3app10sv_animcmd15wait_loop_clearEP9lua_State") LINKABLE;
    extern u64 wait_loop_sync_mot(u64) asm("_ZN3app10sv_animcmd18wait_loop_sync_motEP9lua_State") LINKABLE;
}

#endif // APP_SV_ANIMCMD_H
