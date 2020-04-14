#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace KineticEnergy {
        u64 get_speed(app::KineticEnergy *) asm("_ZN3app8lua_bind29KineticEnergy__get_speed_implEPNS_13KineticEnergyE");
        u64 get_speed_x(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__get_speed_x_implEPNS_13KineticEnergyE");
        u64 get_speed_y(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__get_speed_y_implEPNS_13KineticEnergyE");
        u64 get_speed3f(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__get_speed3f_implEPNS_13KineticEnergyE");
        u64 get_rotation(app::KineticEnergy *) asm("_ZN3app8lua_bind32KineticEnergy__get_rotation_implEPNS_13KineticEnergyE");
        u64 reset_energy(app::KineticEnergy *,int,phx::Vector2f const&,phx::Vector3f const&,app::BattleObjectModuleAccessor &) asm("_ZN3app8lua_bind32KineticEnergy__reset_energy_implEPNS_13KineticEnergyEiRKN3phx8Vector2fERKNS3_8Vector3fERNS_26BattleObjectModuleAccessorE");
        u64 clear_speed(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__clear_speed_implEPNS_13KineticEnergyE");
        u64 clear_rot_speed(app::KineticEnergy *) asm("_ZN3app8lua_bind35KineticEnergy__clear_rot_speed_implEPNS_13KineticEnergyE");
        u64 mul_speed(app::KineticEnergy *,phx::Vector3f const&) asm("_ZN3app8lua_bind29KineticEnergy__mul_speed_implEPNS_13KineticEnergyERKN3phx8Vector3fE");
        u64 mul_accel(app::KineticEnergy *,phx::Vector3f const&) asm("_ZN3app8lua_bind29KineticEnergy__mul_accel_implEPNS_13KineticEnergyERKN3phx8Vector3fE");
        u64 reflect_speed(app::KineticEnergy *,phx::Vector3f const&) asm("_ZN3app8lua_bind33KineticEnergy__reflect_speed_implEPNS_13KineticEnergyERKN3phx8Vector3fE");
        u64 reflect_accel(app::KineticEnergy *,phx::Vector3f const&) asm("_ZN3app8lua_bind33KineticEnergy__reflect_accel_implEPNS_13KineticEnergyERKN3phx8Vector3fE");
        u64 on_consider_ground_friction(app::KineticEnergy *) asm("_ZN3app8lua_bind47KineticEnergy__on_consider_ground_friction_implEPNS_13KineticEnergyE");
        u64 off_consider_ground_friction(app::KineticEnergy *) asm("_ZN3app8lua_bind48KineticEnergy__off_consider_ground_friction_implEPNS_13KineticEnergyE");
        u64 enable(app::KineticEnergy *) asm("_ZN3app8lua_bind26KineticEnergy__enable_implEPNS_13KineticEnergyE");
        u64 unable(app::KineticEnergy *) asm("_ZN3app8lua_bind26KineticEnergy__unable_implEPNS_13KineticEnergyE");
        bool is_enable(app::KineticEnergy *) asm("_ZN3app8lua_bind29KineticEnergy__is_enable_implEPNS_13KineticEnergyE");
    }
}
