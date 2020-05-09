#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterSpecializer_Inkling {
		u64 get_ink_max(app::Fighter *)	asm("_ZN3app26FighterSpecializer_Inkling11get_ink_maxERNS_7FighterE") LINKABLE;
		u64 request_paint(app::Fighter *, u64, const Vector3f*, const Vector2f*, float) asm("_ZN3app26FighterSpecializer_Inkling13request_paintERNS_7FighterEN3phx6Hash40ERNS3_8Vector3fERNS3_8Vector2fEf") LINKABLE;
		u64 get_ink_work(app::Fighter *, u64) asm("_ZN3app26FighterSpecializer_Inkling15get_ink_work_idEj") LINKABLE;
		bool is_body_visible(app::Fighter *) asm("_ZN3app26FighterSpecializer_Inkling15is_body_visibleERNS_7FighterE") LINKABLE;
		u64 generate_rollerink(app::Fighter *) asm("_ZN3app26FighterSpecializer_Inkling18generate_rollerinkERNS_7FighterE") LINKABLE;
		u64 check_roller_ground(app::Fighter *, const Vector2f*, Vector2f&, bool) asm("_ZN3app26FighterSpecializer_Inkling19check_roller_groundERNS_7FighterERKN3phx8Vector2fES6_RS4_S7_b") LINKABLE;
		u64 get_sub_ink_special_n(app::Fighter *) asm("_ZN3app26FighterSpecializer_Inkling21get_sub_ink_special_nERNS_7FighterE") LINKABLE;
		u64 get_sub_ink_special_lw(app::Fighter *) asm("_ZN3app26FighterSpecializer_Inkling22get_sub_ink_special_lwERNS_7FighterE") LINKABLE;
		bool is_paintable_rollerink(app::Fighter *)	asm("_ZN3app26FighterSpecializer_Inkling22is_paintable_rollerinkERNS_7FighterE") LINKABLE;
		u64 get_roller_check_velo_y(app::Fighter *)	asm("_ZN3app26FighterSpecializer_Inkling23get_roller_check_velo_yERNS_7FighterE") LINKABLE;
		u64 lack_ink(app::Fighter *) asm("_ZN3app26FighterSpecializer_Inkling8lack_inkERNS_7FighterE") LINKABLE;
    }
}
