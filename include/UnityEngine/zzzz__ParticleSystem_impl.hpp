#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCustomData_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemScalingMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemSimulationSpace_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_MainModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_duration)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b617f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_loop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b615dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_loop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(bool)>(&::UnityEngine::ParticleSystem_MainModule::set_loop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startDelayMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startDelayMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b614c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startDelayMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startDelayMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startDelayMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b6154c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startDelayMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxCurve)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startLifetime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b65c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startLifetime", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startLifetimeBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxCurveBlittable)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startLifetimeBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                             { "set_startLifetimeBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startLifetimeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startLifetimeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startLifetimeMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startLifetimeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startLifetimeMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startLifetimeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxCurve)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b65da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startSpeedBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxCurveBlittable)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startSpeedBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeedBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startSpeedMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startSpeedMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startSpeedMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startSpeedMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startSpeedMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b61c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeedMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startSizeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startSizeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startSizeMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startSizeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startSizeMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b61d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSizeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startRotationMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startRotationMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startRotationMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startRotationMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startRotationXMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startRotationXMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationXMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startRotationXMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startRotationXMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationXMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startRotationYMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startRotationYMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationYMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startRotationYMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startRotationYMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b622b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationYMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startRotationZMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_startRotationZMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationZMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startRotationZMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_startRotationZMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationZMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradient (::UnityEngine::ParticleSystem_MainModule::*)()>(
    &::UnityEngine::ParticleSystem_MainModule::get_startColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b61dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxGradient)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startColor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b61ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradient>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startColorBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradientBlittable (::UnityEngine::ParticleSystem_MainModule::*)()>(
    &::UnityEngine::ParticleSystem_MainModule::get_startColorBlittable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b65e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startColorBlittable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startColorBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystem_MinMaxGradientBlittable)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startColorBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                             { "set_startColorBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_gravityModifierMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_gravityModifierMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6249c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_gravityModifierMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_gravityModifierMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_gravityModifierMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_gravityModifierMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_simulationSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (::UnityEngine::ParticleSystem_MainModule::*)()>(
    &::UnityEngine::ParticleSystem_MainModule::get_simulationSpace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b626b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_simulationSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_simulationSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystemSimulationSpace)>(
    &::UnityEngine::ParticleSystem_MainModule::set_simulationSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b62738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                                                           { "set_simulationSpace", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_simulationSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_simulationSpeed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_simulationSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_simulationSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(float_t)>(&::UnityEngine::ParticleSystem_MainModule::set_simulationSpeed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b618f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_simulationSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_scalingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemScalingMode (::UnityEngine::ParticleSystem_MainModule::*)()>(
    &::UnityEngine::ParticleSystem_MainModule::get_scalingMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b627bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_scalingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_scalingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(::UnityEngine::ParticleSystemScalingMode)>(
    &::UnityEngine::ParticleSystem_MainModule::set_scalingMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b62840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_scalingMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_playOnAwake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b616e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_playOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(bool)>(&::UnityEngine::ParticleSystem_MainModule::set_playOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6176c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_maxParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem_MainModule::*)()>(&::UnityEngine::ParticleSystem_MainModule::get_maxParticles)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b625ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_maxParticles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_maxParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MainModule::*)(int32_t)>(&::UnityEngine::ParticleSystem_MainModule::set_maxParticles)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b62630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_maxParticles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startLifetimeBlittable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_MainModule>, ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startLifetimeBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startLifetimeBlittable_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startSpeedBlittable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_MainModule>, ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startSpeedBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeedBlittable_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.get_startColorBlittable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_MainModule>, ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>)>(
    &::UnityEngine::ParticleSystem_MainModule::get_startColorBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                            { "get_startColorBlittable_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MainModule.set_startColorBlittable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_MainModule>, ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>)>(
    &::UnityEngine::ParticleSystem_MainModule::set_startColorBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                            { "set_startColorBlittable_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_MainModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem_MainModule::get_loop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_loop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_loop(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startDelayMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startDelayMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startDelayMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startDelayMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startLifetime(::UnityEngine::ParticleSystem_MinMaxCurve value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startLifetime", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startLifetimeBlittable(::UnityEngine::ParticleSystem_MinMaxCurveBlittable value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                           { "set_startLifetimeBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startLifetimeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startLifetimeMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startLifetimeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startLifetimeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startSpeedBlittable(::UnityEngine::ParticleSystem_MinMaxCurveBlittable value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                                                         { "set_startSpeedBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startSpeedMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startSpeedMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startSpeedMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSpeedMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startSizeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startSizeMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startSizeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startSizeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startRotationMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startRotationMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startRotationXMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationXMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startRotationXMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationXMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startRotationYMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationYMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startRotationYMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationYMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_startRotationZMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startRotationZMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startRotationZMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startRotationZMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradient UnityEngine::ParticleSystem_MainModule::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradient>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradient>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable UnityEngine::ParticleSystem_MainModule::get_startColorBlittable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startColorBlittable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startColorBlittable(::UnityEngine::ParticleSystem_MinMaxGradientBlittable value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                           { "set_startColorBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_gravityModifierMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_gravityModifierMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_gravityModifierMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_gravityModifierMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::ParticleSystem_MainModule::get_simulationSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_simulationSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                                                                         { "set_simulationSpace", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_MainModule::get_simulationSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_simulationSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_simulationSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_simulationSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystem_MainModule::get_scalingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_scalingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_scalingMode(::UnityEngine::ParticleSystemScalingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_scalingMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem_MainModule::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_playOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystem_MainModule::get_maxParticles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_maxParticles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_MainModule::set_maxParticles(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_maxParticles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startLifetimeBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule> _unity_self,
                                                                                        ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                       { "set_startLifetimeBlittable_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startSpeedBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule> _unity_self,
                                                                                     ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(),
                                       { "set_startSpeedBlittable_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystem_MainModule::get_startColorBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule> _unity_self,
                                                                                     ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "get_startColorBlittable_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(),
                                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystem_MainModule::set_startColorBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule> _unity_self,
                                                                                     ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MainModule>(), { "set_startColorBlittable_Injected",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MainModule>>(),
                                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_MainModule::ParticleSystem_MainModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_MainModule::ParticleSystem_MainModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmissionModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_EmissionModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem_EmissionModule::*)()>(&::UnityEngine::ParticleSystem_EmissionModule::get_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmissionModule::*)(bool)>(&::UnityEngine::ParticleSystem_EmissionModule::set_enabled)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.set_rateOverTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmissionModule::*)(::UnityEngine::ParticleSystem_MinMaxCurve)>(
    &::UnityEngine::ParticleSystem_EmissionModule::set_rateOverTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b61b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(),
                                                                                           { "set_rateOverTime", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.set_rateOverTimeBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmissionModule::*)(::UnityEngine::ParticleSystem_MinMaxCurveBlittable)>(
    &::UnityEngine::ParticleSystem_EmissionModule::set_rateOverTimeBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b66060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(),
                                                             { "set_rateOverTimeBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.get_rateOverTimeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem_EmissionModule::*)()>(&::UnityEngine::ParticleSystem_EmissionModule::get_rateOverTimeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "get_rateOverTimeMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmissionModule.set_rateOverTimeBlittable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_EmissionModule>, ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>)>(
    &::UnityEngine::ParticleSystem_EmissionModule::set_rateOverTimeBlittable_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b660a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(),
                            { "set_rateOverTimeBlittable_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_EmissionModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_EmissionModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline bool UnityEngine::ParticleSystem_EmissionModule::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_EmissionModule::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_EmissionModule::set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "set_rateOverTime", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_EmissionModule::set_rateOverTimeBlittable(::UnityEngine::ParticleSystem_MinMaxCurveBlittable value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(),
                                                           { "set_rateOverTimeBlittable", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem_EmissionModule::get_rateOverTimeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(), { "get_rateOverTimeMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_EmissionModule::set_rateOverTimeBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_EmissionModule> _unity_self,
                                                                                           ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmissionModule>(),
                          { "set_rateOverTimeBlittable_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_EmissionModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_EmissionModule::ParticleSystem_EmissionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_EmissionModule::ParticleSystem_EmissionModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ShapeModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_ShapeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.get_meshRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::UnityEngine::ParticleSystem_ShapeModule::*)()>(
    &::UnityEngine::ParticleSystem_ShapeModule::get_meshRenderer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6b660e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "get_meshRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.set_meshRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ShapeModule::*)(::UnityEngine::MeshRenderer*)>(
    &::UnityEngine::ParticleSystem_ShapeModule::set_meshRenderer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b66244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "set_meshRenderer", {}, { ::i2c::type_of<::UnityEngine::MeshRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ShapeModule::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_ShapeModule::set_rotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b66318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.get_meshRenderer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::ParticleSystem_ShapeModule>)>(
    &::UnityEngine::ParticleSystem_ShapeModule::get_meshRenderer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b66208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                                                             { "get_meshRenderer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.set_meshRenderer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_ShapeModule>, ::System::IntPtr)>(
    &::UnityEngine::ParticleSystem_ShapeModule::set_meshRenderer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b662d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                                                { "set_meshRenderer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ShapeModule.set_rotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::ParticleSystem_ShapeModule>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystem_ShapeModule::set_rotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6636c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                            { "set_rotation_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_ShapeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline ::UnityW<::UnityEngine::MeshRenderer> UnityEngine::ParticleSystem_ShapeModule::get_meshRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "get_meshRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>>(*this, ___internal_method);
}
inline void UnityEngine::ParticleSystem_ShapeModule::set_meshRenderer(::UnityEngine::MeshRenderer* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "set_meshRenderer", {}, { ::i2c::type_of<::UnityEngine::MeshRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_ShapeModule::set_rotation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(), { "set_rotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::ParticleSystem_ShapeModule::get_meshRenderer_Injected(::by_ref<::UnityEngine::ParticleSystem_ShapeModule> _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                                                           { "get_meshRenderer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem_ShapeModule::set_meshRenderer_Injected(::by_ref<::UnityEngine::ParticleSystem_ShapeModule> _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                                              { "set_meshRenderer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ParticleSystem_ShapeModule::set_rotation_Injected(::by_ref<::UnityEngine::ParticleSystem_ShapeModule> _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ShapeModule>(),
                          { "set_rotation_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_ShapeModule>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_ShapeModule::ParticleSystem_ShapeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_ShapeModule::ParticleSystem_ShapeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_CollisionModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_CollisionModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_CollisionModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_CollisionModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_CollisionModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_CollisionModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_CollisionModule::ParticleSystem_CollisionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_CollisionModule::ParticleSystem_CollisionModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_TriggerModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_TriggerModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_TriggerModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TriggerModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_TriggerModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TriggerModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_TriggerModule::ParticleSystem_TriggerModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_TriggerModule::ParticleSystem_TriggerModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SubEmittersModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_SubEmittersModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_SubEmittersModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SubEmittersModule.get_subEmittersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem_SubEmittersModule::*)()>(&::UnityEngine::ParticleSystem_SubEmittersModule::get_subEmittersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b663b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { "get_subEmittersCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SubEmittersModule.GetSubEmitterSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (::UnityEngine::ParticleSystem_SubEmittersModule::*)(int32_t)>(
    &::UnityEngine::ParticleSystem_SubEmittersModule::GetSubEmitterSystem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b663ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { "GetSubEmitterSystem", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SubEmittersModule.GetSubEmitterSystem_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::ParticleSystem_SubEmittersModule>, int32_t)>(
    &::UnityEngine::ParticleSystem_SubEmittersModule::GetSubEmitterSystem_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b66514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(),
                                                { "GetSubEmitterSystem_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_SubEmittersModule>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_SubEmittersModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
inline int32_t UnityEngine::ParticleSystem_SubEmittersModule::get_subEmittersCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { "get_subEmittersCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ParticleSystem> UnityEngine::ParticleSystem_SubEmittersModule::GetSubEmitterSystem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(), { "GetSubEmitterSystem", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>>(*this, ___internal_method, index);
}
inline ::System::IntPtr UnityEngine::ParticleSystem_SubEmittersModule::GetSubEmitterSystem_Injected(::by_ref<::UnityEngine::ParticleSystem_SubEmittersModule> _unity_self, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SubEmittersModule>(),
                                              { "GetSubEmitterSystem_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_SubEmittersModule>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_SubEmittersModule::ParticleSystem_SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_SubEmittersModule::ParticleSystem_SubEmittersModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_TextureSheetAnimationModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_TextureSheetAnimationModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_TextureSheetAnimationModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TextureSheetAnimationModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_TextureSheetAnimationModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TextureSheetAnimationModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_TextureSheetAnimationModule::ParticleSystem_TextureSheetAnimationModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_TextureSheetAnimationModule::ParticleSystem_TextureSheetAnimationModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_lifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(float_t)>(&::UnityEngine::ParticleSystem_Particle::set_lifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_lifetime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_Particle::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b6133c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_velocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_Particle::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b61348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_remainingLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(float_t)>(&::UnityEngine::ParticleSystem_Particle::set_remainingLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b66558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_remainingLifetime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_startLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(float_t)>(&::UnityEngine::ParticleSystem_Particle::set_startLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startLifetime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(::UnityEngine::Color32)>(&::UnityEngine::ParticleSystem_Particle::set_startColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b613e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_randomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(uint32_t)>(&::UnityEngine::ParticleSystem_Particle::set_randomSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b613e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_randomSeed", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_startSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(float_t)>(&::UnityEngine::ParticleSystem_Particle::set_startSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b61364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_rotation3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_Particle::set_rotation3D)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b61370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_rotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Particle.set_angularVelocity3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Particle::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_Particle::set_angularVelocity3D)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b613a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_angularVelocity3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_Particle::set_lifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_lifetime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_velocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_velocity", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_remainingLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_remainingLifetime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_startLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startLifetime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_startColor(::UnityEngine::Color32 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_randomSeed(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_randomSeed", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_startSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_startSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_rotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_rotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_Particle::set_angularVelocity3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Particle>(), { "set_angularVelocity3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InitialVelocity", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_Particle::ParticleSystem_Particle(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AnimatedVelocity,
                                                                          ::UnityEngine::Vector3 m_InitialVelocity, ::UnityEngine::Vector3 m_AxisOfRotation, ::UnityEngine::Vector3 m_Rotation,
                                                                          ::UnityEngine::Vector3 m_AngularVelocity, ::UnityEngine::Vector3 m_StartSize, ::UnityEngine::Color32 m_StartColor,
                                                                          uint32_t m_RandomSeed, uint32_t m_ParentRandomSeed, float_t m_Lifetime, float_t m_StartLifetime, int32_t m_MeshIndex,
                                                                          float_t m_EmitAccumulator0, float_t m_EmitAccumulator1, uint32_t m_Flags) noexcept {
  this->m_Position = m_Position;
  this->m_Velocity = m_Velocity;
  this->m_AnimatedVelocity = m_AnimatedVelocity;
  this->m_InitialVelocity = m_InitialVelocity;
  this->m_AxisOfRotation = m_AxisOfRotation;
  this->m_Rotation = m_Rotation;
  this->m_AngularVelocity = m_AngularVelocity;
  this->m_StartSize = m_StartSize;
  this->m_StartColor = m_StartColor;
  this->m_RandomSeed = m_RandomSeed;
  this->m_ParentRandomSeed = m_ParentRandomSeed;
  this->m_Lifetime = m_Lifetime;
  this->m_StartLifetime = m_StartLifetime;
  this->m_MeshIndex = m_MeshIndex;
  this->m_EmitAccumulator0 = m_EmitAccumulator0;
  this->m_EmitAccumulator1 = m_EmitAccumulator1;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_Particle::ParticleSystem_Particle() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MinMaxCurve::*)(float_t)>(&::UnityEngine::ParticleSystem_MinMaxCurve::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b66560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MinMaxCurve::*)(float_t, float_t)>(&::UnityEngine::ParticleSystem_MinMaxCurve::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b66574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurve.set_constantMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MinMaxCurve::*)(float_t)>(&::UnityEngine::ParticleSystem_MinMaxCurve::set_constantMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b66590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "set_constantMax", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurve.set_constantMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MinMaxCurve::*)(float_t)>(&::UnityEngine::ParticleSystem_MinMaxCurve::set_constantMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b66598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "set_constantMin", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurve.op_Implicit___UnityEngine__ParticleSystem_MinMaxCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxCurve (*)(float_t)>(
    &::UnityEngine::ParticleSystem_MinMaxCurve::op_Implicit___UnityEngine__ParticleSystem_MinMaxCurve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b61af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_MinMaxCurve::_ctor(float_t constant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, constant);
}
inline void UnityEngine::ParticleSystem_MinMaxCurve::_ctor(float_t min, float_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void UnityEngine::ParticleSystem_MinMaxCurve::set_constantMax(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "set_constantMax", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_MinMaxCurve::set_constantMin(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "set_constantMin", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystem_MinMaxCurve UnityEngine::ParticleSystem_MinMaxCurve::op_Implicit___UnityEngine__ParticleSystem_MinMaxCurve(float_t constant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurve>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxCurve>(nullptr, ___internal_method, constant);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveMax", ty:
// "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConstantMax",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_MinMaxCurve::ParticleSystem_MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::UnityEngine::AnimationCurve* m_CurveMin,
                                                                                ::UnityEngine::AnimationCurve* m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_CurveMultiplier = m_CurveMultiplier;
  this->m_CurveMin = m_CurveMin;
  this->m_CurveMax = m_CurveMax;
  this->m_ConstantMin = m_ConstantMin;
  this->m_ConstantMax = m_ConstantMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_MinMaxCurve::ParticleSystem_MinMaxCurve() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurveBlittable.op_Implicit___UnityEngine__ParticleSystem_MinMaxCurveBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxCurveBlittable (*)(::UnityEngine::ParticleSystem_MinMaxCurve)>(
    &::UnityEngine::ParticleSystem_MinMaxCurveBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxCurveBlittable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b65cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxCurveBlittable.FromMixMaxCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxCurveBlittable (*)(::by_ref<::UnityEngine::ParticleSystem_MinMaxCurve>)>(
    &::UnityEngine::ParticleSystem_MinMaxCurveBlittable::FromMixMaxCurve)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b665a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(),
                                                                                           { "FromMixMaxCurve", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurve>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ParticleSystem_MinMaxCurveBlittable
UnityEngine::ParticleSystem_MinMaxCurveBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxCurveBlittable(::UnityEngine::ParticleSystem_MinMaxCurve minMaxCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxCurve>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(nullptr, ___internal_method, minMaxCurve);
}
inline ::UnityEngine::ParticleSystem_MinMaxCurveBlittable UnityEngine::ParticleSystem_MinMaxCurveBlittable::FromMixMaxCurve(::by_ref<::UnityEngine::ParticleSystem_MinMaxCurve> minMaxCurve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(),
                                                                                         { "FromMixMaxCurve", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxCurve>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>(nullptr, ___internal_method, minMaxCurve);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_CurveMin", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveMax", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_MinMaxCurveBlittable::ParticleSystem_MinMaxCurveBlittable(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier, ::System::IntPtr m_CurveMin,
                                                                                                  ::System::IntPtr m_CurveMax, float_t m_ConstantMin, float_t m_ConstantMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_CurveMultiplier = m_CurveMultiplier;
  this->m_CurveMin = m_CurveMin;
  this->m_CurveMax = m_CurveMax;
  this->m_ConstantMin = m_ConstantMin;
  this->m_ConstantMax = m_ConstantMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_MinMaxCurveBlittable::ParticleSystem_MinMaxCurveBlittable() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_MinMaxGradient::*)(::UnityEngine::Color)>(&::UnityEngine::ParticleSystem_MinMaxGradient::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b665c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradient.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ParticleSystem_MinMaxGradient::*)()>(&::UnityEngine::ParticleSystem_MinMaxGradient::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b61e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradient.op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradient (*)(::UnityEngine::Color)>(
    &::UnityEngine::ParticleSystem_MinMaxGradient::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b61ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_MinMaxGradient::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline ::UnityEngine::Color UnityEngine::ParticleSystem_MinMaxGradient::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradient UnityEngine::ParticleSystem_MinMaxGradient::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradient>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradient>(nullptr, ___internal_method, color);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GradientMin", ty:
// "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_MinMaxGradient::ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode m_Mode, ::UnityEngine::Gradient* m_GradientMin,
                                                                                      ::UnityEngine::Gradient* m_GradientMax, ::UnityEngine::Color m_ColorMin,
                                                                                      ::UnityEngine::Color m_ColorMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_GradientMin = m_GradientMin;
  this->m_GradientMax = m_GradientMax;
  this->m_ColorMin = m_ColorMin;
  this->m_ColorMax = m_ColorMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_MinMaxGradient::ParticleSystem_MinMaxGradient() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradientBlittable.op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradient (*)(::UnityEngine::ParticleSystem_MinMaxGradientBlittable)>(
    &::UnityEngine::ParticleSystem_MinMaxGradientBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b65f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradientBlittable.op_Implicit___UnityEngine__ParticleSystem_MinMaxGradientBlittable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradientBlittable (*)(::UnityEngine::ParticleSystem_MinMaxGradient)>(
    &::UnityEngine::ParticleSystem_MinMaxGradientBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradientBlittable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradient>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradientBlittable.FromMixMaxGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradientBlittable (*)(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradient>)>(
    &::UnityEngine::ParticleSystem_MinMaxGradientBlittable::FromMixMaxGradient)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6669c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                             { "FromMixMaxGradient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradient>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_MinMaxGradientBlittable.ToMinMaxGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MinMaxGradient (*)(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>)>(
    &::UnityEngine::ParticleSystem_MinMaxGradientBlittable::ToMinMaxGradient)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b665e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                             { "ToMinMaxGradient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ParticleSystem_MinMaxGradient
UnityEngine::ParticleSystem_MinMaxGradientBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystem_MinMaxGradientBlittable minMaxGradientBlittable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradient>(nullptr, ___internal_method, minMaxGradientBlittable);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable
UnityEngine::ParticleSystem_MinMaxGradientBlittable::op_Implicit___UnityEngine__ParticleSystem_MinMaxGradientBlittable(::UnityEngine::ParticleSystem_MinMaxGradient minMaxGradient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_MinMaxGradient>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(nullptr, ___internal_method, minMaxGradient);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable
UnityEngine::ParticleSystem_MinMaxGradientBlittable::FromMixMaxGradient(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradient> minMaxGradient) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                                                         { "FromMixMaxGradient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradient>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(nullptr, ___internal_method, minMaxGradient);
}
inline ::UnityEngine::ParticleSystem_MinMaxGradient
UnityEngine::ParticleSystem_MinMaxGradientBlittable::ToMinMaxGradient(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable> minMaxGradientBlittable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>(),
                                                           { "ToMinMaxGradient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MinMaxGradient>(nullptr, ___internal_method, minMaxGradientBlittable);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GradientMin", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GradientMax", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_MinMaxGradientBlittable::ParticleSystem_MinMaxGradientBlittable(::UnityEngine::ParticleSystemGradientMode m_Mode, ::System::IntPtr m_GradientMin,
                                                                                                        ::System::IntPtr m_GradientMax, ::UnityEngine::Color m_ColorMin,
                                                                                                        ::UnityEngine::Color m_ColorMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_GradientMin = m_GradientMin;
  this->m_GradientMax = m_GradientMax;
  this->m_ColorMin = m_ColorMin;
  this->m_ColorMax = m_ColorMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_MinMaxGradientBlittable::ParticleSystem_MinMaxGradientBlittable() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmitParams.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmitParams::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_EmitParams::set_position)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b666e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmitParams.set_applyShapeToPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmitParams::*)(bool)>(&::UnityEngine::ParticleSystem_EmitParams::set_applyShapeToPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b666f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_applyShapeToPosition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmitParams.set_rotation3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmitParams::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem_EmitParams::set_rotation3D)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b666fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_rotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem_EmitParams.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_EmitParams::*)(::UnityEngine::Color32)>(&::UnityEngine::ParticleSystem_EmitParams::set_startColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b6673c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_EmitParams::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_EmitParams::set_applyShapeToPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_applyShapeToPosition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_EmitParams::set_rotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_rotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::ParticleSystem_EmitParams::set_startColor(::UnityEngine::Color32 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_EmitParams>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::ParticleSystem_Particle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MeshIndexSet",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_EmitParams::ParticleSystem_EmitParams(::UnityEngine::ParticleSystem_Particle m_Particle, bool m_PositionSet, bool m_VelocitySet, bool m_AxisOfRotationSet,
                                                                              bool m_RotationSet, bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet, bool m_RandomSeedSet,
                                                                              bool m_StartLifetimeSet, bool m_MeshIndexSet, bool m_ApplyShapeToPosition) noexcept {
  this->m_Particle = m_Particle;
  this->m_PositionSet = m_PositionSet;
  this->m_VelocitySet = m_VelocitySet;
  this->m_AxisOfRotationSet = m_AxisOfRotationSet;
  this->m_RotationSet = m_RotationSet;
  this->m_AngularVelocitySet = m_AngularVelocitySet;
  this->m_StartSizeSet = m_StartSizeSet;
  this->m_StartColorSet = m_StartColorSet;
  this->m_RandomSeedSet = m_RandomSeedSet;
  this->m_StartLifetimeSet = m_StartLifetimeSet;
  this->m_MeshIndexSet = m_MeshIndexSet;
  this->m_ApplyShapeToPosition = m_ApplyShapeToPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_EmitParams::ParticleSystem_EmitParams() {}
// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Seed::PlaybackState_ParticleSystem_Seed(uint32_t x, uint32_t y, uint32_t z, uint32_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Seed::PlaybackState_ParticleSystem_Seed() {}
// Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty:
// "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "w", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Seed4::PlaybackState_ParticleSystem_Seed4(::UnityEngine::PlaybackState_ParticleSystem_Seed x, ::UnityEngine::PlaybackState_ParticleSystem_Seed y,
                                                                                                ::UnityEngine::PlaybackState_ParticleSystem_Seed z,
                                                                                                ::UnityEngine::PlaybackState_ParticleSystem_Seed w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Seed4::PlaybackState_ParticleSystem_Seed4() {}
// Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Emission::PlaybackState_ParticleSystem_Emission(float_t m_ParticleSpacing, float_t m_ToEmitAccumulator,
                                                                                                      ::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random) noexcept {
  this->m_ParticleSpacing = m_ParticleSpacing;
  this->m_ToEmitAccumulator = m_ToEmitAccumulator;
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Emission::PlaybackState_ParticleSystem_Emission() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Initial::PlaybackState_ParticleSystem_Initial(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Initial::PlaybackState_ParticleSystem_Initial() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RadiusTimer", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RadiusTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArcTimer", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ArcTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MeshSpawnTimer", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_MeshSpawnTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OrderedMeshVertexIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Shape::PlaybackState_ParticleSystem_Shape(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random, float_t m_RadiusTimer,
                                                                                                float_t m_RadiusTimerPrev, float_t m_ArcTimer, float_t m_ArcTimerPrev, float_t m_MeshSpawnTimer,
                                                                                                float_t m_MeshSpawnTimerPrev, int32_t m_OrderedMeshVertexIndex) noexcept {
  this->m_Random = m_Random;
  this->m_RadiusTimer = m_RadiusTimer;
  this->m_RadiusTimerPrev = m_RadiusTimerPrev;
  this->m_ArcTimer = m_ArcTimer;
  this->m_ArcTimerPrev = m_ArcTimerPrev;
  this->m_MeshSpawnTimer = m_MeshSpawnTimer;
  this->m_MeshSpawnTimerPrev = m_MeshSpawnTimerPrev;
  this->m_OrderedMeshVertexIndex = m_OrderedMeshVertexIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Shape::PlaybackState_ParticleSystem_Shape() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Force::PlaybackState_ParticleSystem_Force(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Force::PlaybackState_ParticleSystem_Force() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Collision::PlaybackState_ParticleSystem_Collision(::UnityEngine::PlaybackState_ParticleSystem_Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Collision::PlaybackState_ParticleSystem_Collision() {}
// Ctor Parameters [CppParam { name: "m_ScrollOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Noise::PlaybackState_ParticleSystem_Noise(float_t m_ScrollOffset) noexcept {
  this->m_ScrollOffset = m_ScrollOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Noise::PlaybackState_ParticleSystem_Noise() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::UnityEngine::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticleEmissionCounter", ty:
// "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Lights::PlaybackState_ParticleSystem_Lights(::UnityEngine::PlaybackState_ParticleSystem_Seed m_Random,
                                                                                                  float_t m_ParticleEmissionCounter) noexcept {
  this->m_Random = m_Random;
  this->m_ParticleEmissionCounter = m_ParticleEmissionCounter;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Lights::PlaybackState_ParticleSystem_Lights() {}
// Ctor Parameters [CppParam { name: "m_Timer", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Trail::PlaybackState_ParticleSystem_Trail(float_t m_Timer) noexcept {
  this->m_Timer = m_Timer;
}
// Ctor Parameters []
constexpr ::UnityEngine::PlaybackState_ParticleSystem_Trail::PlaybackState_ParticleSystem_Trail() {}
// Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Emission", ty: "::UnityEngine::PlaybackState_ParticleSystem_Emission", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Initial", ty:
// "::UnityEngine::PlaybackState_ParticleSystem_Initial", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Shape", ty: "::UnityEngine::PlaybackState_ParticleSystem_Shape", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Force", ty: "::UnityEngine::PlaybackState_ParticleSystem_Force", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Collision", ty:
// "::UnityEngine::PlaybackState_ParticleSystem_Collision", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Noise", ty: "::UnityEngine::PlaybackState_ParticleSystem_Noise", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Lights", ty: "::UnityEngine::PlaybackState_ParticleSystem_Lights", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Trail", ty:
// "::UnityEngine::PlaybackState_ParticleSystem_Trail", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_PlaybackState::ParticleSystem_PlaybackState(
    float_t m_AccumulatedDt, float_t m_StartDelay, float_t m_PlaybackTime, int32_t m_RingBufferIndex, ::UnityEngine::PlaybackState_ParticleSystem_Emission m_Emission,
    ::UnityEngine::PlaybackState_ParticleSystem_Initial m_Initial, ::UnityEngine::PlaybackState_ParticleSystem_Shape m_Shape, ::UnityEngine::PlaybackState_ParticleSystem_Force m_Force,
    ::UnityEngine::PlaybackState_ParticleSystem_Collision m_Collision, ::UnityEngine::PlaybackState_ParticleSystem_Noise m_Noise, ::UnityEngine::PlaybackState_ParticleSystem_Lights m_Lights,
    ::UnityEngine::PlaybackState_ParticleSystem_Trail m_Trail) noexcept {
  this->m_AccumulatedDt = m_AccumulatedDt;
  this->m_StartDelay = m_StartDelay;
  this->m_PlaybackTime = m_PlaybackTime;
  this->m_RingBufferIndex = m_RingBufferIndex;
  this->m_Emission = m_Emission;
  this->m_Initial = m_Initial;
  this->m_Shape = m_Shape;
  this->m_Force = m_Force;
  this->m_Collision = m_Collision;
  this->m_Noise = m_Noise;
  this->m_Lights = m_Lights;
  this->m_Trail = m_Trail;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_PlaybackState::ParticleSystem_PlaybackState() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_Trails.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_Trails::*)()>(&::UnityEngine::ParticleSystem_Trails::Allocate)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6b64504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Trails>(), { "Allocate", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_Trails::Allocate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_Trails>(), { "Allocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "frontPositions", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureOffsets", ty:
// "::System::Collections::Generic::List_1<float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_Trails::ParticleSystem_Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions,
                                                                      ::System::Collections::Generic::List_1<int32_t>* frontPositions, ::System::Collections::Generic::List_1<int32_t>* backPositions,
                                                                      ::System::Collections::Generic::List_1<int32_t>* positionCounts, ::System::Collections::Generic::List_1<float_t>* textureOffsets,
                                                                      int32_t maxTrailCount, int32_t maxPositionsPerTrailCount) noexcept {
  this->positions = positions;
  this->frontPositions = frontPositions;
  this->backPositions = backPositions;
  this->positionCounts = positionCounts;
  this->textureOffsets = textureOffsets;
  this->maxTrailCount = maxTrailCount;
  this->maxPositionsPerTrailCount = maxPositionsPerTrailCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_Trails::ParticleSystem_Trails() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_VelocityOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_VelocityOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_VelocityOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::ParticleSystem_VelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule::ParticleSystem_VelocityOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule::ParticleSystem_LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule::ParticleSystem_LimitVelocityOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_InheritVelocityModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_InheritVelocityModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_InheritVelocityModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_InheritVelocityModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_InheritVelocityModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_InheritVelocityModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_InheritVelocityModule::ParticleSystem_InheritVelocityModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_InheritVelocityModule::ParticleSystem_InheritVelocityModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule::ParticleSystem_LifetimeByEmitterSpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule::ParticleSystem_LifetimeByEmitterSpeedModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ForceOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ForceOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_ForceOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ForceOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_ForceOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ForceOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_ForceOverLifetimeModule::ParticleSystem_ForceOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_ForceOverLifetimeModule::ParticleSystem_ForceOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ColorOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ColorOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_ColorOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ColorOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_ColorOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ColorOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_ColorOverLifetimeModule::ParticleSystem_ColorOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_ColorOverLifetimeModule::ParticleSystem_ColorOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ColorBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ColorBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_ColorBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ColorBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_ColorBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ColorBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_ColorBySpeedModule::ParticleSystem_ColorBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_ColorBySpeedModule::ParticleSystem_ColorBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SizeOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_SizeOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_SizeOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SizeOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_SizeOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SizeOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_SizeOverLifetimeModule::ParticleSystem_SizeOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_SizeOverLifetimeModule::ParticleSystem_SizeOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_SizeBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_SizeBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_SizeBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SizeBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_SizeBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_SizeBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_SizeBySpeedModule::ParticleSystem_SizeBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_SizeBySpeedModule::ParticleSystem_SizeBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_RotationOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_RotationOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_RotationOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_RotationOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_RotationOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_RotationOverLifetimeModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_RotationOverLifetimeModule::ParticleSystem_RotationOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_RotationOverLifetimeModule::ParticleSystem_RotationOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_RotationBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_RotationBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_RotationBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_RotationBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_RotationBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_RotationBySpeedModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_RotationBySpeedModule::ParticleSystem_RotationBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_RotationBySpeedModule::ParticleSystem_RotationBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_ExternalForcesModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_ExternalForcesModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_ExternalForcesModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ExternalForcesModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_ExternalForcesModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_ExternalForcesModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_ExternalForcesModule::ParticleSystem_ExternalForcesModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_ExternalForcesModule::ParticleSystem_ExternalForcesModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_NoiseModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_NoiseModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_NoiseModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_NoiseModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_NoiseModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_NoiseModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_NoiseModule::ParticleSystem_NoiseModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_NoiseModule::ParticleSystem_NoiseModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_LightsModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_LightsModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_LightsModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LightsModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_LightsModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_LightsModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_LightsModule::ParticleSystem_LightsModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_LightsModule::ParticleSystem_LightsModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_TrailModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_TrailModule::*)(::UnityEngine::ParticleSystem*)>(&::UnityEngine::ParticleSystem_TrailModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TrailModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_TrailModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_TrailModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_TrailModule::ParticleSystem_TrailModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_TrailModule::ParticleSystem_TrailModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem_CustomDataModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem_CustomDataModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::ParticleSystem_CustomDataModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_CustomDataModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem_CustomDataModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem_CustomDataModule>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystem_CustomDataModule::ParticleSystem_CustomDataModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem_CustomDataModule::ParticleSystem_CustomDataModule() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Color32)>(
    &::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b61254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem_Particle)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b61480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_Particle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b61484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startDelay)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startDelay", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_loop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_loop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_loop)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b616a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_playOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_playOnAwake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_duration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b617b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playbackSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playbackSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b6182c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_playbackSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playbackSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b618a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_playbackSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_enableEmission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_enableEmission)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6193c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_enableEmission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_enableEmission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_enableEmission)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b619c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_enableEmission", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emissionRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_emissionRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b61a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_emissionRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_emissionRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_emissionRate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b61ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_emissionRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b61b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b61c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b61d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Color)>(&::UnityEngine::ParticleSystem::set_startColor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b61e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b61f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startRotation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b61fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation3D)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b62050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startRotation3D", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3)>(&::UnityEngine::ParticleSystem::set_startRotation3D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b621b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startRotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startLifetime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b6234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startLifetime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b623c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startLifetime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_gravityModifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_gravityModifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b6245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_gravityModifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_gravityModifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_gravityModifier)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b624d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_gravityModifier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_maxParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_maxParticles)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b6256c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_maxParticles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_maxParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::set_maxParticles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b625e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_maxParticles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_simulationSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_simulationSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b62674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_simulationSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_simulationSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemSimulationSpace)>(&::UnityEngine::ParticleSystem::set_simulationSpace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b626f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_simulationSpace", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_scalingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystemScalingMode (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_scalingMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b6277c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_scalingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_scalingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemScalingMode)>(&::UnityEngine::ParticleSystem::set_scalingMode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b627f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_scalingMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_automaticCullingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_automaticCullingEnabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b62884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_automaticCullingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPlaying)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isEmitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isEmitting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b629c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isEmitting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isStopped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isStopped)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isStopped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPaused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPaused)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPaused", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_particleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_particleCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_particleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b62d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_totalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_totalTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_totalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_randomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_randomSeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_randomSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_randomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(uint32_t)>(&::UnityEngine::ParticleSystem::set_randomSeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b62fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_randomSeed", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_useAutoRandomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b63098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_useAutoRandomSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_useAutoRandomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_useAutoRandomSeed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_proceduralSimulationSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_proceduralSimulationSupported)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b62888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_proceduralSimulationSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleCurrentSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize3D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b63338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleCurrentSize3D", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b6343c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                                                           { "GetParticleCurrentColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleMeshIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleMeshIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b63530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleMeshIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6b63604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b637d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>)>(
    &::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b637e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesWithNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b637ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "SetParticlesWithNativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>, int32_t,
                                                                                               int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b63908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "SetParticles",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "SetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>)>(
    &::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b63984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "SetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6b63990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b63b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>)>(
    &::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b63b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticlesWithNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::System::IntPtr, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b63ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticlesWithNativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>, int32_t,
                                                                                                  int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b63cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticles",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b63d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>)>(
    &::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b63d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "GetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetCustomParticleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
                                                                                               ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::SetCustomParticleData)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6b63d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
            { "SetCustomParticleData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetCustomParticleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
                                                                                                  ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::GetCustomParticleData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6b63fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
            { "GetCustomParticleData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_PlaybackState (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetPlaybackState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b64208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetPlaybackState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem_PlaybackState)>(&::UnityEngine::ParticleSystem::SetPlaybackState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetPlaybackState", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_PlaybackState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrailDataInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrailDataInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b643dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrailDataInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_Trails (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b644b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b64670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrails", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem_Trails)>(&::UnityEngine::ParticleSystem::SetTrails)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b646e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetTrails", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_Trails>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b647b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b648d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b648e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b648ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b648fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b649d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b649d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b64aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool, ::UnityEngine::ParticleSystemStopBehavior)>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b64ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b64ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b64ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b64c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b64d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b64d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit_Internal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem_EmitParams, int32_t)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b64e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                                                           { "Emit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_EmitParams>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.EmitOld_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::by_ref<::UnityEngine::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::EmitOld_Internal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b613f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "EmitOld_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b64f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b650e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::UnityEngine::ParticleSystem_Particle)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b6504c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "TriggerSubEmitterForParticle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ParticleSystem_Particle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticles)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6b650f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                         { "TriggerSubEmitterForParticles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForAllParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b64f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "TriggerSubEmitterForAllParticles", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ResetPreMappedBufferMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ParticleSystem::ResetPreMappedBufferMemory)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b653b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "ResetPreMappedBufferMemory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetMaximumPreMappedBufferCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b653dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetMaximumPreMappedBufferCounts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateAxisOfRotationAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b65420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateAxisOfRotationAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateMeshIndexAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateMeshIndexAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b654dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateMeshIndexAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateCustomDataAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::AllocateCustomDataAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b65598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateCustomDataAttribute", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_has3DParticleRotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_has3DParticleRotations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6566c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_has3DParticleRotations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_hasNonUniformParticleSizes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b65728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_hasNonUniformParticleSizes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetManagedJobData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b657e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetManagedJobHandle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6b658a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::ParticleSystem::SetManagedJobHandle)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b6597c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetManagedJobHandle", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*)>(
    &::UnityEngine::ParticleSystem::ScheduleManagedJob)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b65a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                         { "ScheduleManagedJob", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.CopyManagedJobData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>)>(&::UnityEngine::ParticleSystem::CopyManagedJobData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "CopyManagedJobData", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.UserJobCanBeScheduled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::ParticleSystem::UserJobCanBeScheduled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b65b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "UserJobCanBeScheduled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_main
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_MainModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_main)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b614c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_main", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_EmissionModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_emission)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b61980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_emission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_shape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_ShapeModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_shape)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_shape", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_velocityOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_VelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_velocityOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_velocityOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_limitVelocityOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_limitVelocityOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_limitVelocityOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_inheritVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_InheritVelocityModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_inheritVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_inheritVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lifetimeByEmitterSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_lifetimeByEmitterSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_forceOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_ForceOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_forceOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_forceOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_ColorOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_colorOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_colorOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorBySpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_ColorBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_colorBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_colorBySpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_SizeOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_sizeOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_sizeOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeBySpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_SizeBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_sizeBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_sizeBySpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationOverLifetime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_RotationOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_rotationOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_rotationOverLifetime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationBySpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_RotationBySpeedModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_rotationBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_rotationBySpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_externalForces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_ExternalForcesModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_externalForces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_externalForces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_noise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_NoiseModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_noise)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_noise", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_collision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_CollisionModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_collision)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_collision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trigger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_TriggerModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_trigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_trigger", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_subEmitters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_SubEmittersModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_subEmitters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_subEmitters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_textureSheetAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_TextureSheetAnimationModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_textureSheetAnimation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_textureSheetAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_LightsModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_lights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_lights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_TrailModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_trails)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_trails", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_customData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ParticleSystem_CustomDataModule (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_customData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b65c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_customData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b65c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPlaying_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isEmitting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isEmitting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isEmitting_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isStopped_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isStopped_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isStopped_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPaused_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_isPaused_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPaused_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_particleCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_particleCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_particleCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ParticleSystem::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_totalTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_totalTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_totalTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_randomSeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_randomSeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_randomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_randomSeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::ParticleSystem::set_randomSeed_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b63054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_randomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_useAutoRandomSeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_useAutoRandomSeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_useAutoRandomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_useAutoRandomSeed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::set_useAutoRandomSeed_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b631e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_useAutoRandomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_proceduralSimulationSupported_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_proceduralSimulationSupported_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b63228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_proceduralSimulationSupported_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b632f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                         { "GetParticleCurrentSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Particle>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b633e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticleCurrentSize3D_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Particle>, ::by_ref<::UnityEngine::Color32>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b634dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "GetParticleCurrentColor_Injected",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleMeshIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleMeshIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b635c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "GetParticleMeshIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticles_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b6377c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticles_Injected",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesWithNativeArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticlesWithNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b6389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticlesWithNativeArray_Injected",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticles_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b63b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticles_Injected",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                   ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticlesWithNativeArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticlesWithNativeArray_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b63c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticlesWithNativeArray_Injected",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetCustomParticleData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>, ::UnityEngine::ParticleSystemCustomData)>(
    &::UnityEngine::ParticleSystem::SetCustomParticleData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b63f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetCustomParticleData_Injected",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(),
                                                                                   ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetCustomParticleData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>, ::UnityEngine::ParticleSystemCustomData)>(
    &::UnityEngine::ParticleSystem::GetCustomParticleData_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b641b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetCustomParticleData_Injected",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(),
                                                                                   ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_PlaybackState>)>(&::UnityEngine::ParticleSystem::GetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b642c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "GetPlaybackState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_PlaybackState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_PlaybackState>)>(&::UnityEngine::ParticleSystem::SetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "SetPlaybackState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_PlaybackState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrailDataInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::GetTrailDataInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "GetTrailDataInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Trails>)>(&::UnityEngine::ParticleSystem::SetTrails_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "SetTrails_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, bool, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b6486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "Simulate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Play_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6498c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Pause_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, ::UnityEngine::ParticleSystemStopBehavior)>(&::UnityEngine::ParticleSystem::Stop_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b64b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::Clear_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, bool)>(&::UnityEngine::ParticleSystem::IsAlive_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ParticleSystem::Emit_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_EmitParams>, int32_t)>(&::UnityEngine::ParticleSystem::Emit_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b64edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                            { "Emit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_EmitParams>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.EmitOld_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::ParticleSystem_Particle>)>(&::UnityEngine::ParticleSystem::EmitOld_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b64f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "EmitOld_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::ParticleSystem_Particle>)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b652c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
            { "TriggerSubEmitterForParticle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticles_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b6531c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "TriggerSubEmitterForParticles_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForAllParticles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "TriggerSubEmitterForAllParticles_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateAxisOfRotationAttribute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b654a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateAxisOfRotationAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateMeshIndexAttribute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::AllocateMeshIndexAttribute_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6555c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateMeshIndexAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateCustomDataAttribute_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::AllocateCustomDataAttribute_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                { "AllocateCustomDataAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_has3DParticleRotations_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_has3DParticleRotations_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b656ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_has3DParticleRotations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_hasNonUniformParticleSizes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b657a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_hasNonUniformParticleSizes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr)>(&::UnityEngine::ParticleSystem::GetManagedJobData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b65864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::GetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "GetManagedJobHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::SetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b65a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                             { "SetManagedJobHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::ParticleSystem::ScheduleManagedJob_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b65ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "ScheduleManagedJob_Injected",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                                       ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity, size, lifetime, color);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::ParticleSystem_Particle particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_Particle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline float_t UnityEngine::ParticleSystem::get_startDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startDelay(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startDelay", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_loop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_loop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_loop(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_playOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playOnAwake(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_playbackSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_playbackSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playbackSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_playbackSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_enableEmission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_enableEmission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_enableEmission(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_enableEmission", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_emissionRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_emissionRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_emissionRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_emissionRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSpeed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSize(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::ParticleSystem::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::get_startRotation3D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startRotation3D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startRotation3D", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_startLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_startLifetime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_gravityModifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_gravityModifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_gravityModifier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_gravityModifier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystem::get_maxParticles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_maxParticles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_maxParticles(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_maxParticles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::ParticleSystem::get_simulationSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_simulationSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_simulationSpace", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemSimulationSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystem::get_scalingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_scalingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_scalingMode(::UnityEngine::ParticleSystemScalingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_scalingMode", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemScalingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_automaticCullingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_automaticCullingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isEmitting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isEmitting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isStopped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isStopped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPaused", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::get_particleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_particleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_totalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_totalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::ParticleSystem::get_randomSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_randomSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_randomSeed(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_randomSeed", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_useAutoRandomSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_useAutoRandomSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_useAutoRandomSeed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_useAutoRandomSeed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_proceduralSimulationSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_proceduralSimulationSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::GetParticleCurrentSize(::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleCurrentSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, particle);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::GetParticleCurrentSize3D(::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleCurrentSize3D", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, particle);
}
inline ::UnityEngine::Color32 UnityEngine::ParticleSystem::GetParticleCurrentColor(::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleCurrentColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, particle);
}
inline int32_t UnityEngine::ParticleSystem::GetParticleMeshIndex(::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticleMeshIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetParticlesWithNativeArray(::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "SetParticlesWithNativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
          { "SetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "SetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "SetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>> particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticles", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticlesWithNativeArray(::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "GetParticlesWithNativeArray", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
          { "GetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "GetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>> particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "GetParticles", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
          { "SetCustomParticleData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customData, streamIndex);
}
inline int32_t UnityEngine::ParticleSystem::GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
          { "GetCustomParticleData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, customData, streamIndex);
}
inline ::UnityEngine::ParticleSystem_PlaybackState UnityEngine::ParticleSystem::GetPlaybackState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetPlaybackState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_PlaybackState>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState(::UnityEngine::ParticleSystem_PlaybackState playbackState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetPlaybackState", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_PlaybackState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playbackState);
}
inline void UnityEngine::ParticleSystem::GetTrailDataInternal(::by_ref<::UnityEngine::ParticleSystem_Trails> trailData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrailDataInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailData);
}
inline ::UnityEngine::ParticleSystem_Trails UnityEngine::ParticleSystem::GetTrails() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_Trails>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::GetTrails(::by_ref<::UnityEngine::ParticleSystem_Trails> trailData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetTrails", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::SetTrails(::UnityEngine::ParticleSystem_Trails trailData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetTrails", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_Trails>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren, restart, fixedTimeStep);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren, bool restart) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren, restart);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, withChildren);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Simulate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ParticleSystem::Play(bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Pause(bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren, stopBehavior);
}
inline void UnityEngine::ParticleSystem::Stop(bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Clear(bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::IsAlive(bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, withChildren);
}
inline bool UnityEngine::ParticleSystem::IsAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Emit(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit_Internal(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit_Internal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::ParticleSystem_EmitParams emitParams, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem_EmitParams>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitParams, count);
}
inline void UnityEngine::ParticleSystem::EmitOld_Internal(::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "EmitOld_Internal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                       { "TriggerSubEmitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle(int32_t subEmitterIndex, ::UnityEngine::ParticleSystem_Particle particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "TriggerSubEmitterForParticle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ParticleSystem_Particle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticles(int32_t subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "TriggerSubEmitterForParticles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles(int32_t subEmitterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "TriggerSubEmitterForAllParticles", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::ResetPreMappedBufferMemory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "ResetPreMappedBufferMemory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts(int32_t vertexBuffersCount, int32_t indexBuffersCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetMaximumPreMappedBufferCounts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexBuffersCount, indexBuffersCount);
}
inline void UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateAxisOfRotationAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateMeshIndexAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateMeshIndexAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateCustomDataAttribute", {}, { ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool UnityEngine::ParticleSystem::get_has3DParticleRotations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_has3DParticleRotations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_hasNonUniformParticleSizes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void* UnityEngine::ParticleSystem::GetManagedJobData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::GetManagedJobHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle(::Unity::Jobs::JobHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetManagedJobHandle", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::ScheduleManagedJob(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* additionalData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                       { "ScheduleManagedJob", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, additionalData);
}
inline void UnityEngine::ParticleSystem::CopyManagedJobData(void* systemPtr, ::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData> particleData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "CopyManagedJobData", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystemJobs::NativeParticleData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, systemPtr, particleData);
}
inline bool UnityEngine::ParticleSystem::UserJobCanBeScheduled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "UserJobCanBeScheduled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_MainModule UnityEngine::ParticleSystem::get_main() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_main", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_MainModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_EmissionModule UnityEngine::ParticleSystem::get_emission() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_emission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_EmissionModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_ShapeModule UnityEngine::ParticleSystem::get_shape() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_shape", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_ShapeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_VelocityOverLifetimeModule UnityEngine::ParticleSystem::get_velocityOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_velocityOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_VelocityOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule UnityEngine::ParticleSystem::get_limitVelocityOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_limitVelocityOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_InheritVelocityModule UnityEngine::ParticleSystem::get_inheritVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_inheritVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_InheritVelocityModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_lifetimeByEmitterSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_LifetimeByEmitterSpeedModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_ForceOverLifetimeModule UnityEngine::ParticleSystem::get_forceOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_forceOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_ForceOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_ColorOverLifetimeModule UnityEngine::ParticleSystem::get_colorOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_colorOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_ColorOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_ColorBySpeedModule UnityEngine::ParticleSystem::get_colorBySpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_colorBySpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_ColorBySpeedModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_SizeOverLifetimeModule UnityEngine::ParticleSystem::get_sizeOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_sizeOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_SizeOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_SizeBySpeedModule UnityEngine::ParticleSystem::get_sizeBySpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_sizeBySpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_SizeBySpeedModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_RotationOverLifetimeModule UnityEngine::ParticleSystem::get_rotationOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_rotationOverLifetime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_RotationOverLifetimeModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_RotationBySpeedModule UnityEngine::ParticleSystem::get_rotationBySpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_rotationBySpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_RotationBySpeedModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_ExternalForcesModule UnityEngine::ParticleSystem::get_externalForces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_externalForces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_ExternalForcesModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_NoiseModule UnityEngine::ParticleSystem::get_noise() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_noise", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_NoiseModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_CollisionModule UnityEngine::ParticleSystem::get_collision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_collision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_CollisionModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_TriggerModule UnityEngine::ParticleSystem::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_trigger", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_TriggerModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_SubEmittersModule UnityEngine::ParticleSystem::get_subEmitters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_subEmitters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_SubEmittersModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_TextureSheetAnimationModule UnityEngine::ParticleSystem::get_textureSheetAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_textureSheetAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_TextureSheetAnimationModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_LightsModule UnityEngine::ParticleSystem::get_lights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_lights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_LightsModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_TrailModule UnityEngine::ParticleSystem::get_trails() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_trails", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_TrailModule>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem_CustomDataModule UnityEngine::ParticleSystem::get_customData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_customData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystem_CustomDataModule>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPlaying_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPlaying_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isEmitting_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isEmitting_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isStopped_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isStopped_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_isPaused_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_isPaused_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::ParticleSystem::get_particleCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_particleCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::ParticleSystem::get_time_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_time_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ParticleSystem::get_totalTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_totalTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::ParticleSystem::get_randomSeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_randomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_randomSeed_Injected(::System::IntPtr _unity_self, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_randomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystem::get_useAutoRandomSeed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_useAutoRandomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::set_useAutoRandomSeed_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "set_useAutoRandomSeed_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ParticleSystem::get_proceduralSimulationSupported_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_proceduralSimulationSupported_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::ParticleSystem::GetParticleCurrentSize_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "GetParticleCurrentSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle,
                                                                           ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "GetParticleCurrentSize3D_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle, ret);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle,
                                                                          ::by_ref<::UnityEngine::Color32> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "GetParticleCurrentColor_Injected",
                            {},
                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color32>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle, ret);
}
inline int32_t UnityEngine::ParticleSystem::GetParticleMeshIndex_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "GetParticleMeshIndex_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::SetParticles_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticles_Injected",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticlesWithNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetParticlesWithNativeArray_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particles, particlesLength, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticles_Injected",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(),
                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticlesWithNativeArray_Injected(::System::IntPtr _unity_self, ::System::IntPtr particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetParticlesWithNativeArray_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, particles, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetCustomParticleData_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> customData,
                                                                        ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "SetCustomParticleData_Injected",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(),
                                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, customData, streamIndex);
}
inline int32_t UnityEngine::ParticleSystem::GetCustomParticleData_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> customData,
                                                                           ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetCustomParticleData_Injected",
                                                                               {},
                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>(),
                                                                                 ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, customData, streamIndex);
}
inline void UnityEngine::ParticleSystem::GetPlaybackState_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_PlaybackState> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "GetPlaybackState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_PlaybackState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_PlaybackState> playbackState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "SetPlaybackState_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_PlaybackState>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, playbackState);
}
inline void UnityEngine::ParticleSystem::GetTrailDataInternal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Trails> trailData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "GetTrailDataInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trailData);
}
inline void UnityEngine::ParticleSystem::SetTrails_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Trails> trailData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "SetTrails_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Trails>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trailData);
}
inline void UnityEngine::ParticleSystem::Simulate_Injected(::System::IntPtr _unity_self, float_t t, bool withChildren, bool restart, bool fixedTimeStep) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "Simulate_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, t, withChildren, restart, fixedTimeStep);
}
inline void UnityEngine::ParticleSystem::Play_Injected(::System::IntPtr _unity_self, bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Pause_Injected(::System::IntPtr _unity_self, bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Stop_Injected(::System::IntPtr _unity_self, bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::ParticleSystemStopBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren, stopBehavior);
}
inline void UnityEngine::ParticleSystem::Clear_Injected(::System::IntPtr _unity_self, bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Clear_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline bool UnityEngine::ParticleSystem::IsAlive_Injected(::System::IntPtr _unity_self, bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "IsAlive_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, withChildren);
}
inline void UnityEngine::ParticleSystem::Emit_Internal_Injected(::System::IntPtr _unity_self, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "Emit_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, count);
}
inline void UnityEngine::ParticleSystem::Emit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_EmitParams> emitParams, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                          { "Emit_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_EmitParams>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, emitParams, count);
}
inline void UnityEngine::ParticleSystem::EmitOld_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "EmitOld_Internal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected(::System::IntPtr _unity_self, int32_t subEmitterIndex, ::by_ref<::UnityEngine::ParticleSystem_Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ParticleSystem*>(),
          { "TriggerSubEmitterForParticle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::ParticleSystem_Particle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticles_Injected(::System::IntPtr _unity_self, int32_t subEmitterIndex,
                                                                                ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> particles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "TriggerSubEmitterForParticles_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForAllParticles_Injected(::System::IntPtr _unity_self, int32_t subEmitterIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "TriggerSubEmitterForAllParticles_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateAxisOfRotationAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::AllocateMeshIndexAttribute_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "AllocateMeshIndexAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::AllocateCustomDataAttribute_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemCustomData stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                              { "AllocateCustomDataAttribute_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::ParticleSystemCustomData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, stream);
}
inline bool UnityEngine::ParticleSystem::get_has3DParticleRotations_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_has3DParticleRotations_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ParticleSystem::get_hasNonUniformParticleSizes_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "get_hasNonUniformParticleSizes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void* UnityEngine::ParticleSystem::GetManagedJobData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "GetManagedJobData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ParticleSystem::GetManagedJobHandle_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "GetManagedJobHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle_Injected(::System::IntPtr _unity_self, ::by_ref<::Unity::Jobs::JobHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(),
                                                           { "SetManagedJobHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, handle);
}
inline void UnityEngine::ParticleSystem::ScheduleManagedJob_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters> parameters, void* additionalData,
                                                                     ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ParticleSystem*>(), { "ScheduleManagedJob_Injected",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(),
                                                                                                     ::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, additionalData, ret);
}
inline ::UnityEngine::ParticleSystem* UnityEngine::ParticleSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ParticleSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem::ParticleSystem() {}
