#pragma once
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__NativeParticleData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCustomData_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemScalingMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemSimulationSpace_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__MainModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_duration)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_loop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::__ParticleSystem__MainModule::*)()>(&::UnityEngine::__ParticleSystem__MainModule::get_loop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_loop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_loop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(bool)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_loop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_loop",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startDelayMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startDelayMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startDelayMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startDelayMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startDelayMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32499cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startDelayMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::__ParticleSystem__MinMaxCurve)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startLifetime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324ae78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startLifetimeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startLifetimeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startLifetimeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startLifetimeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startLifetimeMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetimeMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::__ParticleSystem__MinMaxCurve)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSpeed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324af88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startSpeedMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startSpeedMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startSpeedMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSpeedMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSpeedMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeedMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startSizeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startSizeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startSizeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSizeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSizeMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSizeMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startRotationMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationXMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationXMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startRotationXMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationXMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationXMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationXMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationYMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationYMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startRotationYMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationYMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationYMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationYMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationZMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationZMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startRotationZMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationZMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationZMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationZMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__MinMaxGradient (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startColor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x324a26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_startColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::__ParticleSystem__MinMaxGradient)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324a368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxGradient>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_gravityModifierMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_gravityModifierMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324a908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_gravityModifierMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_gravityModifierMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_gravityModifierMultiplier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324a98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_gravityModifierMultiplier",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_simulationSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_simulationSpace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324ab20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_simulationSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_simulationSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::ParticleSystemSimulationSpace)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_simulationSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324aba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_simulationSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_simulationSpeed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_simulationSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_simulationSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_simulationSpeed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3249d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpeed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_scalingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemScalingMode (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_scalingMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324ac28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_scalingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_scalingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(::UnityEngine::ParticleSystemScalingMode)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_scalingMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324acac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_scalingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_playOnAwake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_playOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(bool)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_playOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_playOnAwake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_maxParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::__ParticleSystem__MainModule::*)()>(
    &::UnityEngine::__ParticleSystem__MainModule::get_maxParticles)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324aa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                               "get_maxParticles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_maxParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MainModule::*)(int32_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_maxParticles)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324aa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_maxParticles",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_duration_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_duration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324ad34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_duration_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_loop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_loop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324ad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_loop_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_loop_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, bool)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_loop_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324adac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_loop_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startDelayMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startDelayMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324adf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startDelayMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startDelayMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startDelayMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324ae2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startDelayMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startLifetime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startLifetime_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324aebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetime_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startLifetimeMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startLifetimeMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324af00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startLifetimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startLifetimeMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startLifetimeMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324af3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSpeed_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324afcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startSpeedMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startSpeedMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startSpeedMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSpeedMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSpeedMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeedMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startSizeMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startSizeMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startSizeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startSizeMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startSizeMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSizeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationXMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationXMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationXMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationXMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationXMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationXMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationYMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationYMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationYMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationYMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationYMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationYMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startRotationZMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startRotationZMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationZMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startRotationZMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startRotationZMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationZMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_startColor_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_startColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startColor_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_startColor_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_startColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startColor_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_gravityModifierMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_gravityModifierMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_gravityModifierMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_gravityModifierMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_gravityModifierMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_gravityModifierMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_simulationSpace_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_simulationSpace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_simulationSpace_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_simulationSpace_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ::UnityEngine::ParticleSystemSimulationSpace)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_simulationSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpace_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_simulationSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_simulationSpeed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_simulationSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_simulationSpeed_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, float_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_simulationSpeed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x324b50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_scalingMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemScalingMode (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_scalingMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_scalingMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_scalingMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, ::UnityEngine::ParticleSystemScalingMode)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_scalingMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_scalingMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_playOnAwake_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, bool)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_playOnAwake_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.get_maxParticles_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>)>(
    &::UnityEngine::__ParticleSystem__MainModule::get_maxParticles_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_maxParticles_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MainModule.set_maxParticles_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__MainModule>, int32_t)>(
    &::UnityEngine::__ParticleSystem__MainModule::set_maxParticles_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_maxParticles_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__MainModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::__ParticleSystem__MainModule::get_loop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_loop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_loop(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_loop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startDelayMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startDelayMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startDelayMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startDelayMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startLifetime(::UnityEngine::__ParticleSystem__MinMaxCurve value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startLifetimeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startLifetimeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startLifetimeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetimeMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSpeed(::UnityEngine::__ParticleSystem__MinMaxCurve value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeed", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startSpeedMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startSpeedMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSpeedMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeedMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startSizeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startSizeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSizeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSizeMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startRotationMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationXMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startRotationXMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationXMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationXMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationYMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startRotationYMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationYMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationYMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationZMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startRotationZMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationZMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationZMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::__ParticleSystem__MinMaxGradient UnityEngine::__ParticleSystem__MainModule::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_startColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__MinMaxGradient, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startColor(::UnityEngine::__ParticleSystem__MinMaxGradient value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxGradient>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_gravityModifierMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_gravityModifierMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_gravityModifierMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_gravityModifierMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::__ParticleSystem__MainModule::get_simulationSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_simulationSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_simulationSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_simulationSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_simulationSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::__ParticleSystem__MainModule::get_scalingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_scalingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_scalingMode(::UnityEngine::ParticleSystemScalingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_scalingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::__ParticleSystem__MainModule::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_playOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_playOnAwake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::__ParticleSystem__MainModule::get_maxParticles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(),
                                                                             "get_maxParticles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_maxParticles(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_maxParticles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_duration_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_duration_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::__ParticleSystem__MainModule::get_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_loop_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_loop_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startDelayMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startDelayMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startDelayMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startDelayMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self,
                                                                                  ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetime_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startLifetimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startLifetimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startLifetimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startLifetimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self,
                                                                               ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startSpeedMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSpeedMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startSizeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startSizeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startSizeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startSizeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationXMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationXMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationXMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationXMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationYMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationYMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationYMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationYMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_startRotationZMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startRotationZMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startRotationZMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startRotationZMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::__ParticleSystem__MainModule::get_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self,
                                                                               ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_startColor_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self,
                                                                               ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_startColor_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_gravityModifierMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_gravityModifierMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_gravityModifierMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_gravityModifierMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::__ParticleSystem__MainModule::get_simulationSpace_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_simulationSpace_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_simulationSpace_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self,
                                                                                    ::UnityEngine::ParticleSystemSimulationSpace value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpace_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__MainModule::get_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_simulationSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_simulationSpeed_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::__ParticleSystem__MainModule::get_scalingMode_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_scalingMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_scalingMode_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, ::UnityEngine::ParticleSystemScalingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_scalingMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::__ParticleSystem__MainModule::get_playOnAwake_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_playOnAwake_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_playOnAwake_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::__ParticleSystem__MainModule::get_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "get_maxParticles_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__MainModule::set_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule> _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MainModule>::get(), "set_maxParticles_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MainModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__MainModule::__ParticleSystem__MainModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__MainModule::__ParticleSystem__MainModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmissionModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::__ParticleSystem__EmissionModule::*)()>(
    &::UnityEngine::__ParticleSystem__EmissionModule::get_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmissionModule::*)(bool)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::set_enabled)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.set_rateOverTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmissionModule::*)(::UnityEngine::__ParticleSystem__MinMaxCurve)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::set_rateOverTime)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_rateOverTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.get_rateOverTimeMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::__ParticleSystem__EmissionModule::*)()>(
    &::UnityEngine::__ParticleSystem__EmissionModule::get_rateOverTimeMultiplier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(),
                                                                               "get_rateOverTimeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.get_enabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::__ParticleSystem__EmissionModule>)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::get_enabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "get_enabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.set_enabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__EmissionModule>, bool)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::set_enabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_enabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.set_rateOverTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::UnityEngine::__ParticleSystem__EmissionModule>, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>)>(&::UnityEngine::__ParticleSystem__EmissionModule::set_rateOverTime_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_rateOverTime_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmissionModule.get_rateOverTimeMultiplier_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::UnityEngine::__ParticleSystem__EmissionModule>)>(
    &::UnityEngine::__ParticleSystem__EmissionModule::get_rateOverTimeMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "get_rateOverTimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__EmissionModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
inline bool UnityEngine::__ParticleSystem__EmissionModule::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(),
                                                                             "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__EmissionModule::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__EmissionModule::set_rateOverTime(::UnityEngine::__ParticleSystem__MinMaxCurve value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_rateOverTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__MinMaxCurve>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::__ParticleSystem__EmissionModule::get_rateOverTimeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(),
                                                                             "get_rateOverTimeMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::__ParticleSystem__EmissionModule::get_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "get_enabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__EmissionModule::set_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_enabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::__ParticleSystem__EmissionModule::set_rateOverTime_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self,
                                                                                     ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "set_rateOverTime_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::__ParticleSystem__EmissionModule::get_rateOverTimeMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmissionModule>::get(), "get_rateOverTimeMultiplier_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmissionModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__EmissionModule::__ParticleSystem__EmissionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__EmissionModule::__ParticleSystem__EmissionModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ShapeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324962c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.get_meshRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::UnityEngine::__ParticleSystem__ShapeModule::*)()>(
    &::UnityEngine::__ParticleSystem__ShapeModule::get_meshRenderer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(),
                                                                               "get_meshRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.set_meshRenderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ShapeModule::*)(::UnityEngine::MeshRenderer*)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::set_meshRenderer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_meshRenderer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshRenderer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.set_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ShapeModule::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::set_rotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x324b8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_rotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.get_meshRenderer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (*)(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::get_meshRenderer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "get_meshRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.set_meshRenderer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>, ::UnityEngine::MeshRenderer*)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::set_meshRenderer_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_meshRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshRenderer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ShapeModule.set_rotation_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>, ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::__ParticleSystem__ShapeModule::set_rotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_rotation_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__ShapeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
inline ::UnityW<::UnityEngine::MeshRenderer> UnityEngine::__ParticleSystem__ShapeModule::get_meshRenderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(),
                                                                             "get_meshRenderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>, false>(this, ___internal_method);
}
inline void UnityEngine::__ParticleSystem__ShapeModule::set_meshRenderer(::UnityEngine::MeshRenderer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_meshRenderer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshRenderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__ShapeModule::set_rotation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_rotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshRenderer> UnityEngine::__ParticleSystem__ShapeModule::get_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "get_meshRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::__ParticleSystem__ShapeModule::set_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ::UnityEngine::MeshRenderer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_meshRenderer_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MeshRenderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::__ParticleSystem__ShapeModule::set_rotation_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule> _unity_self, ByRef<::UnityEngine::Vector3> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ShapeModule>::get(), "set_rotation_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__ShapeModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__ShapeModule::__ParticleSystem__ShapeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__ShapeModule::__ParticleSystem__ShapeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__VelocityOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule::__ParticleSystem__VelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule::__ParticleSystem__VelocityOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule::__ParticleSystem__LimitVelocityOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule::__ParticleSystem__LimitVelocityOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__InheritVelocityModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__InheritVelocityModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__InheritVelocityModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__InheritVelocityModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__InheritVelocityModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__InheritVelocityModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__InheritVelocityModule::__ParticleSystem__InheritVelocityModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__InheritVelocityModule::__ParticleSystem__InheritVelocityModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule::__ParticleSystem__LifetimeByEmitterSpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule::__ParticleSystem__LifetimeByEmitterSpeedModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ForceOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__ForceOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ForceOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__ForceOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ForceOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule::__ParticleSystem__ForceOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule::__ParticleSystem__ForceOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ColorOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__ColorOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ColorOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__ColorOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ColorOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule::__ParticleSystem__ColorOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule::__ParticleSystem__ColorOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ColorBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ColorBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__ColorBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ColorBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__ColorBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ColorBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__ColorBySpeedModule::__ParticleSystem__ColorBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__ColorBySpeedModule::__ParticleSystem__ColorBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__SizeOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__SizeOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324968c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SizeOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__SizeOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SizeOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule::__ParticleSystem__SizeOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule::__ParticleSystem__SizeOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SizeBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__SizeBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__SizeBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SizeBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__SizeBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SizeBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__SizeBySpeedModule::__ParticleSystem__SizeBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__SizeBySpeedModule::__ParticleSystem__SizeBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__RotationOverLifetimeModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__RotationOverLifetimeModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__RotationOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__RotationOverLifetimeModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__RotationOverLifetimeModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule::__ParticleSystem__RotationOverLifetimeModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule::__ParticleSystem__RotationOverLifetimeModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__RotationBySpeedModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__RotationBySpeedModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__RotationBySpeedModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__RotationBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__RotationBySpeedModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__RotationBySpeedModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__RotationBySpeedModule::__ParticleSystem__RotationBySpeedModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__RotationBySpeedModule::__ParticleSystem__RotationBySpeedModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__ExternalForcesModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__ExternalForcesModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__ExternalForcesModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ExternalForcesModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__ExternalForcesModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__ExternalForcesModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__ExternalForcesModule::__ParticleSystem__ExternalForcesModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__ExternalForcesModule::__ParticleSystem__ExternalForcesModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__NoiseModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__NoiseModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__NoiseModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__NoiseModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__NoiseModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__NoiseModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__NoiseModule::__ParticleSystem__NoiseModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__NoiseModule::__ParticleSystem__NoiseModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__CollisionModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__CollisionModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__CollisionModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__CollisionModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__CollisionModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__CollisionModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__CollisionModule::__ParticleSystem__CollisionModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__CollisionModule::__ParticleSystem__CollisionModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__TriggerModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__TriggerModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__TriggerModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TriggerModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__TriggerModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TriggerModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__TriggerModule::__ParticleSystem__TriggerModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__TriggerModule::__ParticleSystem__TriggerModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SubEmittersModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__SubEmittersModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__SubEmittersModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SubEmittersModule.get_subEmittersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::__ParticleSystem__SubEmittersModule::*)()>(
    &::UnityEngine::__ParticleSystem__SubEmittersModule::get_subEmittersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(),
                                                                               "get_subEmittersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SubEmittersModule.GetSubEmitterSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (::UnityEngine::__ParticleSystem__SubEmittersModule::*)(int32_t)>(
    &::UnityEngine::__ParticleSystem__SubEmittersModule::GetSubEmitterSystem)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "GetSubEmitterSystem",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SubEmittersModule.get_subEmittersCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>)>(
    &::UnityEngine::__ParticleSystem__SubEmittersModule::get_subEmittersCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324b9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "get_subEmittersCount_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__SubEmittersModule.GetSubEmitterSystem_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (*)(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>, int32_t)>(
    &::UnityEngine::__ParticleSystem__SubEmittersModule::GetSubEmitterSystem_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "GetSubEmitterSystem_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__SubEmittersModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
inline int32_t UnityEngine::__ParticleSystem__SubEmittersModule::get_subEmittersCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(),
                                                                             "get_subEmittersCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ParticleSystem> UnityEngine::__ParticleSystem__SubEmittersModule::GetSubEmitterSystem(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "GetSubEmitterSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::__ParticleSystem__SubEmittersModule::get_subEmittersCount_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "get_subEmittersCount_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityW<::UnityEngine::ParticleSystem> UnityEngine::__ParticleSystem__SubEmittersModule::GetSubEmitterSystem_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule> _unity_self,
                                                                                                                              int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__SubEmittersModule>::get(), "GetSubEmitterSystem_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>, false>(nullptr, ___internal_method, _unity_self, index);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__SubEmittersModule::__ParticleSystem__SubEmittersModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__SubEmittersModule::__ParticleSystem__SubEmittersModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__TextureSheetAnimationModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__TextureSheetAnimationModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32496f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TextureSheetAnimationModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__TextureSheetAnimationModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TextureSheetAnimationModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule::__ParticleSystem__TextureSheetAnimationModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule::__ParticleSystem__TextureSheetAnimationModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__LightsModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__LightsModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__LightsModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LightsModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__LightsModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__LightsModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__LightsModule::__ParticleSystem__LightsModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__LightsModule::__ParticleSystem__LightsModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__TrailModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__TrailModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__TrailModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TrailModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__TrailModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__TrailModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__TrailModule::__ParticleSystem__TrailModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__TrailModule::__ParticleSystem__TrailModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__CustomDataModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__CustomDataModule::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::__ParticleSystem__CustomDataModule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324971c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__CustomDataModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__CustomDataModule::_ctor(::UnityEngine::ParticleSystem* particleSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__CustomDataModule>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particleSystem);
}
// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::__ParticleSystem__CustomDataModule::__ParticleSystem__CustomDataModule(::UnityW<::UnityEngine::ParticleSystem> m_ParticleSystem) noexcept {
  this->m_ParticleSystem = m_ParticleSystem;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__CustomDataModule::__ParticleSystem__CustomDataModule() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MinMaxCurve::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MinMaxCurve::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x324ba70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MinMaxCurve::*)(float_t, float_t)>(
    &::UnityEngine::__ParticleSystem__MinMaxCurve::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x324ba84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxCurve.set_constantMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MinMaxCurve::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MinMaxCurve::set_constantMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324baa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "set_constantMax",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxCurve.set_constantMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MinMaxCurve::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MinMaxCurve::set_constantMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324baa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "set_constantMin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxCurve.op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__MinMaxCurve (*)(float_t)>(
    &::UnityEngine::__ParticleSystem__MinMaxCurve::op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3249f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__MinMaxCurve::_ctor(float_t constant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constant);
}
inline void UnityEngine::__ParticleSystem__MinMaxCurve::_ctor(float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
inline void UnityEngine::__ParticleSystem__MinMaxCurve::set_constantMax(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "set_constantMax",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__MinMaxCurve::set_constantMin(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "set_constantMin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::__ParticleSystem__MinMaxCurve UnityEngine::__ParticleSystem__MinMaxCurve::op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve(float_t constant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxCurve>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__MinMaxCurve, false>(nullptr, ___internal_method, constant);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_CurveMax", ty:
// "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ConstantMax", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve::__ParticleSystem__MinMaxCurve(::UnityEngine::ParticleSystemCurveMode m_Mode, float_t m_CurveMultiplier,
                                                                                      ::UnityEngine::AnimationCurve* m_CurveMin, ::UnityEngine::AnimationCurve* m_CurveMax, float_t m_ConstantMin,
                                                                                      float_t m_ConstantMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_CurveMultiplier = m_CurveMultiplier;
  this->m_CurveMin = m_CurveMin;
  this->m_CurveMax = m_CurveMax;
  this->m_ConstantMin = m_ConstantMin;
  this->m_ConstantMax = m_ConstantMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve::__ParticleSystem__MinMaxCurve() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__MinMaxGradient::*)(::UnityEngine::Color)>(
    &::UnityEngine::__ParticleSystem__MinMaxGradient::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x324bab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxGradient.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::__ParticleSystem__MinMaxGradient::*)()>(
    &::UnityEngine::__ParticleSystem__MinMaxGradient::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x324a2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(),
                                                                               "get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__MinMaxGradient.op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__MinMaxGradient (*)(::UnityEngine::Color)>(
    &::UnityEngine::__ParticleSystem__MinMaxGradient::op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x324a34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__MinMaxGradient::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Color UnityEngine::__ParticleSystem__MinMaxGradient::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(),
                                                                             "get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__MinMaxGradient UnityEngine::__ParticleSystem__MinMaxGradient::op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__MinMaxGradient>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__MinMaxGradient, false>(nullptr, ___internal_method, color);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GradientMin", ty:
// "::UnityEngine::Gradient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ParticleSystem__MinMaxGradient::__ParticleSystem__MinMaxGradient(::UnityEngine::ParticleSystemGradientMode m_Mode, ::UnityEngine::Gradient* m_GradientMin,
                                                                                            ::UnityEngine::Gradient* m_GradientMax, ::UnityEngine::Color m_ColorMin,
                                                                                            ::UnityEngine::Color m_ColorMax) noexcept {
  this->m_Mode = m_Mode;
  this->m_GradientMin = m_GradientMin;
  this->m_GradientMax = m_GradientMax;
  this->m_ColorMin = m_ColorMin;
  this->m_ColorMax = m_ColorMax;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__MinMaxGradient::__ParticleSystem__MinMaxGradient() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__Particle::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3249828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__Particle::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3249834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_remainingLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__Particle::set_remainingLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324bacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_remainingLifetime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_startLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__Particle::set_startLifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startLifetime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(::UnityEngine::Color32)>(
    &::UnityEngine::__ParticleSystem__Particle::set_startColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32498b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_randomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(uint32_t)>(
    &::UnityEngine::__ParticleSystem__Particle::set_randomSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32498bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_randomSeed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_startSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__Particle::set_startSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3249850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_rotation3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__Particle::set_rotation3D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x324985c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_rotation3D", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_angularVelocity3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__Particle::set_angularVelocity3D)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3249888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_angularVelocity3D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Particle.set_lifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Particle::*)(float_t)>(
    &::UnityEngine::__ParticleSystem__Particle::set_lifetime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3249840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_lifetime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__Particle::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_velocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_remainingLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_remainingLifetime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_startLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startLifetime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_startColor(::UnityEngine::Color32 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_randomSeed(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_randomSeed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_startSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_startSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_rotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_rotation3D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_angularVelocity3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_angularVelocity3D", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__Particle::set_lifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Particle>::get(), "set_lifetime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
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
constexpr ::UnityEngine::__ParticleSystem__Particle::__ParticleSystem__Particle(::UnityEngine::Vector3 m_Position, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AnimatedVelocity,
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
constexpr ::UnityEngine::__ParticleSystem__Particle::__ParticleSystem__Particle() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmitParams.set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmitParams::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__EmitParams::set_position)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x324bad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmitParams.set_applyShapeToPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmitParams::*)(bool)>(
    &::UnityEngine::__ParticleSystem__EmitParams::set_applyShapeToPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x324bae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_applyShapeToPosition",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmitParams.set_rotation3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmitParams::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::__ParticleSystem__EmitParams::set_rotation3D)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x324baf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_rotation3D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__EmitParams.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__EmitParams::*)(::UnityEngine::Color32)>(
    &::UnityEngine::__ParticleSystem__EmitParams::set_startColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x324bb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__EmitParams::set_position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_position", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__EmitParams::set_applyShapeToPosition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_applyShapeToPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__EmitParams::set_rotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_rotation3D", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::__ParticleSystem__EmitParams::set_startColor(::UnityEngine::Color32 value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__EmitParams>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::__ParticleSystem__Particle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MeshIndexSet",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ParticleSystem__EmitParams::__ParticleSystem__EmitParams(::UnityEngine::__ParticleSystem__Particle m_Particle, bool m_PositionSet, bool m_VelocitySet,
                                                                                    bool m_AxisOfRotationSet, bool m_RotationSet, bool m_AngularVelocitySet, bool m_StartSizeSet, bool m_StartColorSet,
                                                                                    bool m_RandomSeedSet, bool m_StartLifetimeSet, bool m_MeshIndexSet, bool m_ApplyShapeToPosition) noexcept {
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
constexpr ::UnityEngine::__ParticleSystem__EmitParams::__ParticleSystem__EmitParams() {}
// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "z",
// ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed::__ParticleSystem__PlaybackState__Seed(uint32_t x, uint32_t y, uint32_t z, uint32_t w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed::__ParticleSystem__PlaybackState__Seed() {}
// Ctor Parameters [CppParam { name: "x", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty:
// "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "z", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "w", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4::__ParticleSystem__PlaybackState__Seed4(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed x,
                                                                                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed y,
                                                                                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed z,
                                                                                                            ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed w) noexcept {
  this->x = x;
  this->y = y;
  this->z = z;
  this->w = w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4::__ParticleSystem__PlaybackState__Seed4() {}
// Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission::__ParticleSystem__PlaybackState__Emission(float_t m_ParticleSpacing, float_t m_ToEmitAccumulator,
                                                                                                                  ::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random) noexcept {
  this->m_ParticleSpacing = m_ParticleSpacing;
  this->m_ToEmitAccumulator = m_ToEmitAccumulator;
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission::__ParticleSystem__PlaybackState__Emission() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial::__ParticleSystem__PlaybackState__Initial(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial::__ParticleSystem__PlaybackState__Initial() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RadiusTimer", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RadiusTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArcTimer", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ArcTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MeshSpawnTimer", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_MeshSpawnTimerPrev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OrderedMeshVertexIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape::__ParticleSystem__PlaybackState__Shape(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random, float_t m_RadiusTimer,
                                                                                                            float_t m_RadiusTimerPrev, float_t m_ArcTimer, float_t m_ArcTimerPrev,
                                                                                                            float_t m_MeshSpawnTimer, float_t m_MeshSpawnTimerPrev,
                                                                                                            int32_t m_OrderedMeshVertexIndex) noexcept {
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
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape::__ParticleSystem__PlaybackState__Shape() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Force::__ParticleSystem__PlaybackState__Force(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Force::__ParticleSystem__PlaybackState__Force() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision::__ParticleSystem__PlaybackState__Collision(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed4 m_Random) noexcept {
  this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision::__ParticleSystem__PlaybackState__Collision() {}
// Ctor Parameters [CppParam { name: "m_ScrollOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise::__ParticleSystem__PlaybackState__Noise(float_t m_ScrollOffset) noexcept {
  this->m_ScrollOffset = m_ScrollOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise::__ParticleSystem__PlaybackState__Noise() {}
// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Seed", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParticleEmissionCounter",
// ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights::__ParticleSystem__PlaybackState__Lights(::GlobalNamespace::__ParticleSystem__PlaybackState__Seed m_Random,
                                                                                                              float_t m_ParticleEmissionCounter) noexcept {
  this->m_Random = m_Random;
  this->m_ParticleEmissionCounter = m_ParticleEmissionCounter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights::__ParticleSystem__PlaybackState__Lights() {}
// Ctor Parameters [CppParam { name: "m_Timer", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail::__ParticleSystem__PlaybackState__Trail(float_t m_Timer) noexcept {
  this->m_Timer = m_Timer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail::__ParticleSystem__PlaybackState__Trail() {}
// Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Emission", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Emission", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Initial", ty:
// "::GlobalNamespace::__ParticleSystem__PlaybackState__Initial", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Shape", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Shape",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Force", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Force", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Collision", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Collision", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Noise", ty:
// "::GlobalNamespace::__ParticleSystem__PlaybackState__Noise", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Lights", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Lights",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Trail", ty: "::GlobalNamespace::__ParticleSystem__PlaybackState__Trail", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ParticleSystem__PlaybackState::__ParticleSystem__PlaybackState(
    float_t m_AccumulatedDt, float_t m_StartDelay, float_t m_PlaybackTime, int32_t m_RingBufferIndex, ::GlobalNamespace::__ParticleSystem__PlaybackState__Emission m_Emission,
    ::GlobalNamespace::__ParticleSystem__PlaybackState__Initial m_Initial, ::GlobalNamespace::__ParticleSystem__PlaybackState__Shape m_Shape,
    ::GlobalNamespace::__ParticleSystem__PlaybackState__Force m_Force, ::GlobalNamespace::__ParticleSystem__PlaybackState__Collision m_Collision,
    ::GlobalNamespace::__ParticleSystem__PlaybackState__Noise m_Noise, ::GlobalNamespace::__ParticleSystem__PlaybackState__Lights m_Lights,
    ::GlobalNamespace::__ParticleSystem__PlaybackState__Trail m_Trail) noexcept {
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
constexpr ::UnityEngine::__ParticleSystem__PlaybackState::__ParticleSystem__PlaybackState() {}
//  Writing Method size for method: ::UnityEngine::__ParticleSystem__Trails.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ParticleSystem__Trails::*)()>(&::UnityEngine::__ParticleSystem__Trails::Allocate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32488d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Trails>::get(), "Allocate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::__ParticleSystem__Trails::Allocate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ParticleSystem__Trails>::get(), "Allocate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "positions", ty: "::System::Collections::Generic::List_1<::UnityEngine::Vector4>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "frontPositions",
// ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "backPositions", ty: "::System::Collections::Generic::List_1<int32_t>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "positionCounts", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "maxTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxPositionsPerTrailCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ParticleSystem__Trails::__ParticleSystem__Trails(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions,
                                                                            ::System::Collections::Generic::List_1<int32_t>* frontPositions,
                                                                            ::System::Collections::Generic::List_1<int32_t>* backPositions,
                                                                            ::System::Collections::Generic::List_1<int32_t>* positionCounts, int32_t maxTrailCount,
                                                                            int32_t maxPositionsPerTrailCount) noexcept {
  this->positions = positions;
  this->frontPositions = frontPositions;
  this->backPositions = backPositions;
  this->positionCounts = positionCounts;
  this->maxTrailCount = maxTrailCount;
  this->maxPositionsPerTrailCount = maxPositionsPerTrailCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::__ParticleSystem__Trails::__ParticleSystem__Trails() {}
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPlaying
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPlaying)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isPlaying",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isEmitting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isEmitting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isEmitting",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isStopped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isStopped)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isStopped",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_isPaused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_isPaused)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isPaused",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_particleCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_particleCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_particleCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_time)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_time)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3247e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_randomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_randomSeed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_randomSeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_randomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(uint32_t)>(&::UnityEngine::ParticleSystem::set_randomSeed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3247ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_randomSeed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_useAutoRandomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_useAutoRandomSeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_useAutoRandomSeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_useAutoRandomSeed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3247f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_useAutoRandomSeed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_proceduralSimulationSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_proceduralSimulationSupported)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3247fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_proceduralSimulationSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3247fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentSize3D)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3248024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize3D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleCurrentColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32480dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleMeshIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::GetParticleMeshIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324818c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleMeshIndex", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32481d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x324822c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3248284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticlesWithNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(void*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::SetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32482d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticlesWithNativeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x324833c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32483ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>)>(&::UnityEngine::ParticleSystem::SetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32483f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3248400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x324845c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32484b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticlesWithNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(void*, int32_t, int32_t, int32_t)>(
    &::UnityEngine::ParticleSystem::GetParticlesWithNativeArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3248500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticlesWithNativeArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>, int32_t, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x324856c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>, int32_t)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::ParticleSystem::*)(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>)>(&::UnityEngine::ParticleSystem::GetParticles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3248624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetCustomParticleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::SetCustomParticleData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetCustomParticleData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetCustomParticleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData)>(&::UnityEngine::ParticleSystem::GetCustomParticleData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetCustomParticleData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__PlaybackState (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::GetPlaybackState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32486d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetPlaybackState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::__ParticleSystem__PlaybackState)>(
    &::UnityEngine::ParticleSystem::SetPlaybackState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetPlaybackState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__PlaybackState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrailDataInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Trails>)>(
    &::UnityEngine::ParticleSystem::GetTrailDataInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324881c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrailDataInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__Trails (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3248860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrails",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetTrails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Trails>)>(
    &::UnityEngine::ParticleSystem::GetTrails)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32489ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrails", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::__ParticleSystem__Trails)>(
    &::UnityEngine::ParticleSystem::SetTrails)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetTrails", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Trails>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3248af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3248b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t, bool)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3248bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Simulate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::Simulate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3248c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Play)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3248cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Play",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Pause", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Pause)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3248d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool, ::UnityEngine::ParticleSystemStopBehavior)>(
    &::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemStopBehavior>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3248dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Stop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3248ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "IsAlive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.IsAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::IsAlive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3248f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "IsAlive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::Emit_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit_Internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::__ParticleSystem__EmitParams, int32_t)>(
    &::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__EmitParams>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.EmitOld_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::EmitOld_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x324909c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "EmitOld_Internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32490e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x324917c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ::UnityEngine::__ParticleSystem__Particle)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32491e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitterForParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Particle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::__ParticleSystem__Particle>*)>(&::UnityEngine::ParticleSystem::TriggerSubEmitter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3249128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__ParticleSystem__Particle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ResetPreMappedBufferMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ParticleSystem::ResetPreMappedBufferMemory)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x324928c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "ResetPreMappedBufferMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetMaximumPreMappedBufferCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32492b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetMaximumPreMappedBufferCounts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateAxisOfRotationAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32492f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "AllocateAxisOfRotationAttribute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateMeshIndexAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::AllocateMeshIndexAttribute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3249334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "AllocateMeshIndexAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.AllocateCustomDataAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemCustomData)>(
    &::UnityEngine::ParticleSystem::AllocateCustomDataAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "AllocateCustomDataAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::GetManagedJobData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32493b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::GetManagedJobHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32493f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobHandle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::ParticleSystem::SetManagedJobHandle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3249488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetManagedJobHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>,
                                                                                                               ::cordl_internals::Ptr<void>)>(&::UnityEngine::ParticleSystem::ScheduleManagedJob)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x324951c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "ScheduleManagedJob", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.CopyManagedJobData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData>)>(
    &::UnityEngine::ParticleSystem::CopyManagedJobData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32495cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "CopyManagedJobData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_main
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__MainModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_main)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_main",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__EmissionModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_emission)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324961c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_emission",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_shape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__ShapeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_shape)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_shape",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_velocityOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_velocityOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_velocityOverLifetime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_limitVelocityOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_limitVelocityOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_limitVelocityOverLifetime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_inheritVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__InheritVelocityModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_inheritVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324964c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_inheritVelocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lifetimeByEmitterSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_lifetimeByEmitterSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_forceOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__ForceOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_forceOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_forceOverLifetime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__ColorOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_colorOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_colorOverLifetime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_colorBySpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__ColorBySpeedModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_colorBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_colorBySpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__SizeOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_sizeOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_sizeOverLifetime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_sizeBySpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__SizeBySpeedModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_sizeBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_sizeBySpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationOverLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__RotationOverLifetimeModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_rotationOverLifetime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_rotationOverLifetime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_rotationBySpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__RotationBySpeedModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_rotationBySpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_rotationBySpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_externalForces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__ExternalForcesModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_externalForces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_externalForces",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_noise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__NoiseModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_noise)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_noise",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_collision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__CollisionModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_collision)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_collision",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__TriggerModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_trigger)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_trigger",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_subEmitters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__SubEmittersModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_subEmitters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_subEmitters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_textureSheetAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__TextureSheetAnimationModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_textureSheetAnimation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32496f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_textureSheetAnimation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_lights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__LightsModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_lights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_lights",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_trails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__TrailModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_trails)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x324970c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_trails",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_customData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::__ParticleSystem__CustomDataModule (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_customData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3249718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_customData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Color32)>(&::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3249724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::__ParticleSystem__Particle)>(
    &::UnityEngine::ParticleSystem::Emit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32498c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Particle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3249908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startDelay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startDelay)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3249984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startDelay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_loop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_loop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_loop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_loop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_loop)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3249a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_loop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_playOnAwake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_playOnAwake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3249ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_playOnAwake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_duration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3249c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_duration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_playbackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_playbackSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3249cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_playbackSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_playbackSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_playbackSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3249d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_playbackSpeed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_enableEmission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_enableEmission)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_enableEmission",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_enableEmission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(bool)>(&::UnityEngine::ParticleSystem::set_enableEmission)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3249e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_enableEmission",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_emissionRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_emissionRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3249ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_emissionRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_emissionRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_emissionRate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3249f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_emissionRate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3249ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startSpeed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSpeed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324a06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startSpeed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324a100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324a17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x324a210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Color)>(&::UnityEngine::ParticleSystem::set_startColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x324a2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324a3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startRotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startRotation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324a428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startRotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startRotation3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startRotation3D)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x324a4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startRotation3D",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startRotation3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ParticleSystem::set_startRotation3D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x324a624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startRotation3D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_startLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_startLifetime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startLifetime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_startLifetime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_startLifetime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324a834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startLifetime", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_gravityModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_gravityModifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324a8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_gravityModifier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_gravityModifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(float_t)>(&::UnityEngine::ParticleSystem::set_gravityModifier)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324a944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_gravityModifier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_maxParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_maxParticles)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324a9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_maxParticles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_maxParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t)>(&::UnityEngine::ParticleSystem::set_maxParticles)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324aa54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_maxParticles", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_simulationSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemSimulationSpace (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_simulationSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324aae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_simulationSpace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_simulationSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemSimulationSpace)>(
    &::UnityEngine::ParticleSystem::set_simulationSpace)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324ab5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_simulationSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_scalingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystemScalingMode (::UnityEngine::ParticleSystem::*)()>(
    &::UnityEngine::ParticleSystem::get_scalingMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x324abe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_scalingMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.set_scalingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystemScalingMode)>(
    &::UnityEngine::ParticleSystem::set_scalingMode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x324ac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_scalingMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.get_automaticCullingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::get_automaticCullingEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x324acf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                               "get_automaticCullingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)()>(&::UnityEngine::ParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x324ad2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentSize3D_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::UnityEngine::__ParticleSystem__Particle>, ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize3D_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetParticleCurrentColor_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(
    ByRef<::UnityEngine::__ParticleSystem__Particle>, ByRef<::UnityEngine::Color32>)>(&::UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3248138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentColor_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color32>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetPlaybackState_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__PlaybackState>)>(
    &::UnityEngine::ParticleSystem::GetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetPlaybackState_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__PlaybackState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetPlaybackState_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__PlaybackState>)>(
    &::UnityEngine::ParticleSystem::SetPlaybackState_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32487d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetPlaybackState_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__PlaybackState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetTrails_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__Trails>)>(
    &::UnityEngine::ParticleSystem::SetTrails_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3248ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetTrails_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.Emit_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::__ParticleSystem__EmitParams>, int32_t)>(
    &::UnityEngine::ParticleSystem::Emit_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3249048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmitParams>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.TriggerSubEmitterForParticle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(int32_t, ByRef<::UnityEngine::__ParticleSystem__Particle>)>(
    &::UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3249238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitterForParticle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.GetManagedJobHandle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::ParticleSystem::GetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3249444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.SetManagedJobHandle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ParticleSystem::*)(ByRef<::Unity::Jobs::JobHandle>)>(
    &::UnityEngine::ParticleSystem::SetManagedJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32494d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetManagedJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ParticleSystem.ScheduleManagedJob_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>, ::cordl_internals::Ptr<void>,
                                                                                           ByRef<::Unity::Jobs::JobHandle>)>(&::UnityEngine::ParticleSystem::ScheduleManagedJob_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3249578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "ScheduleManagedJob_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::ParticleSystem::get_isPlaying() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isPlaying",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isEmitting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isEmitting",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isStopped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isStopped",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::get_isPaused() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_isPaused",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::get_particleCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_particleCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_time(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::ParticleSystem::get_randomSeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_randomSeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_randomSeed(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_randomSeed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_useAutoRandomSeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_useAutoRandomSeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_useAutoRandomSeed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_useAutoRandomSeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_proceduralSimulationSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_proceduralSimulationSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::GetParticleCurrentSize(ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, particle);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::GetParticleCurrentSize3D(ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize3D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, particle);
}
inline ::UnityEngine::Color32 UnityEngine::ParticleSystem::GetParticleCurrentColor(ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(this, ___internal_method, particle);
}
inline int32_t UnityEngine::ParticleSystem::GetParticleMeshIndex(ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleMeshIndex", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size,
                                                      int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetParticlesWithNativeArray(void* particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticlesWithNativeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles, size, offset);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles, size);
}
inline void UnityEngine::ParticleSystem::SetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size,
                                                         int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>> particles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles);
}
inline int32_t UnityEngine::ParticleSystem::GetParticlesWithNativeArray(void* particles, int32_t particlesLength, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticlesWithNativeArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles, particlesLength, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles, size, offset);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles, size);
}
inline int32_t UnityEngine::ParticleSystem::GetParticles(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>> particles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::__ParticleSystem__Particle>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particles);
}
inline void UnityEngine::ParticleSystem::SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetCustomParticleData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customData, streamIndex);
}
inline int32_t UnityEngine::ParticleSystem::GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetCustomParticleData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, customData, streamIndex);
}
inline ::UnityEngine::__ParticleSystem__PlaybackState UnityEngine::ParticleSystem::GetPlaybackState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetPlaybackState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__PlaybackState, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState(::UnityEngine::__ParticleSystem__PlaybackState playbackState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetPlaybackState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__PlaybackState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playbackState);
}
inline void UnityEngine::ParticleSystem::GetTrailDataInternal(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrailDataInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trailData);
}
inline ::UnityEngine::__ParticleSystem__Trails UnityEngine::ParticleSystem::GetTrails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrails",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__Trails, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ParticleSystem::GetTrails(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetTrails", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::SetTrails(::UnityEngine::__ParticleSystem__Trails trailData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetTrails", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Trails>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren, bool restart, bool fixedTimeStep) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, withChildren, restart, fixedTimeStep);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren, bool restart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, withChildren, restart);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t, bool withChildren) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, withChildren);
}
inline void UnityEngine::ParticleSystem::Simulate(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Simulate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void UnityEngine::ParticleSystem::Play(bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Play() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Play",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Pause(bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Pause", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Stop(bool withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemStopBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, withChildren, stopBehavior);
}
inline void UnityEngine::ParticleSystem::Stop(bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Clear(bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, withChildren);
}
inline void UnityEngine::ParticleSystem::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ParticleSystem::IsAlive(bool withChildren) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "IsAlive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, withChildren);
}
inline bool UnityEngine::ParticleSystem::IsAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "IsAlive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Emit(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit_Internal(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit_Internal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::__ParticleSystem__EmitParams emitParams, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__EmitParams>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emitParams, count);
}
inline void UnityEngine::ParticleSystem::EmitOld_Internal(ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "EmitOld_Internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subEmitterIndex);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex, ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle(int32_t subEmitterIndex, ::UnityEngine::__ParticleSystem__Particle particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitterForParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Particle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitter(int32_t subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::__ParticleSystem__Particle>* particles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::__ParticleSystem__Particle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subEmitterIndex, particles);
}
inline void UnityEngine::ParticleSystem::ResetPreMappedBufferMemory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "ResetPreMappedBufferMemory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetMaximumPreMappedBufferCounts(int32_t vertexBuffersCount, int32_t indexBuffersCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetMaximumPreMappedBufferCounts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexBuffersCount, indexBuffersCount);
}
inline void UnityEngine::ParticleSystem::AllocateAxisOfRotationAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "AllocateAxisOfRotationAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateMeshIndexAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "AllocateMeshIndexAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "AllocateCustomDataAttribute", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemCustomData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline ::cordl_internals::Ptr<void> UnityEngine::ParticleSystem::GetManagedJobData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::GetManagedJobHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle(::Unity::Jobs::JobHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetManagedJobHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle UnityEngine::ParticleSystem::ScheduleManagedJob(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters,
                                                                                ::cordl_internals::Ptr<void> additionalData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "ScheduleManagedJob", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters, additionalData);
}
inline void UnityEngine::ParticleSystem::CopyManagedJobData(::cordl_internals::Ptr<void> systemPtr, ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData> particleData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "CopyManagedJobData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ParticleSystemJobs::NativeParticleData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, systemPtr, particleData);
}
inline ::UnityEngine::__ParticleSystem__MainModule UnityEngine::ParticleSystem::get_main() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_main",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__MainModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__EmissionModule UnityEngine::ParticleSystem::get_emission() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_emission",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__EmissionModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__ShapeModule UnityEngine::ParticleSystem::get_shape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_shape",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__ShapeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule UnityEngine::ParticleSystem::get_velocityOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_velocityOverLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__VelocityOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule UnityEngine::ParticleSystem::get_limitVelocityOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "get_limitVelocityOverLifetime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__LimitVelocityOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__InheritVelocityModule UnityEngine::ParticleSystem::get_inheritVelocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_inheritVelocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__InheritVelocityModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule UnityEngine::ParticleSystem::get_lifetimeByEmitterSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "get_lifetimeByEmitterSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__LifetimeByEmitterSpeedModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__ForceOverLifetimeModule UnityEngine::ParticleSystem::get_forceOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_forceOverLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__ForceOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__ColorOverLifetimeModule UnityEngine::ParticleSystem::get_colorOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_colorOverLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__ColorOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__ColorBySpeedModule UnityEngine::ParticleSystem::get_colorBySpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_colorBySpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__ColorBySpeedModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__SizeOverLifetimeModule UnityEngine::ParticleSystem::get_sizeOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_sizeOverLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__SizeOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__SizeBySpeedModule UnityEngine::ParticleSystem::get_sizeBySpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_sizeBySpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__SizeBySpeedModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__RotationOverLifetimeModule UnityEngine::ParticleSystem::get_rotationOverLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_rotationOverLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__RotationOverLifetimeModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__RotationBySpeedModule UnityEngine::ParticleSystem::get_rotationBySpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_rotationBySpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__RotationBySpeedModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__ExternalForcesModule UnityEngine::ParticleSystem::get_externalForces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_externalForces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__ExternalForcesModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__NoiseModule UnityEngine::ParticleSystem::get_noise() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_noise",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__NoiseModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__CollisionModule UnityEngine::ParticleSystem::get_collision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_collision",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__CollisionModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__TriggerModule UnityEngine::ParticleSystem::get_trigger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_trigger",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__TriggerModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__SubEmittersModule UnityEngine::ParticleSystem::get_subEmitters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_subEmitters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__SubEmittersModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__TextureSheetAnimationModule UnityEngine::ParticleSystem::get_textureSheetAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_textureSheetAnimation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__TextureSheetAnimationModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__LightsModule UnityEngine::ParticleSystem::get_lights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_lights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__LightsModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__TrailModule UnityEngine::ParticleSystem::get_trails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_trails",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__TrailModule, false>(this, ___internal_method);
}
inline ::UnityEngine::__ParticleSystem__CustomDataModule UnityEngine::ParticleSystem::get_customData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_customData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::__ParticleSystem__CustomDataModule, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float_t size, float_t lifetime, ::UnityEngine::Color32 color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, velocity, size, lifetime, color);
}
inline void UnityEngine::ParticleSystem::Emit(::UnityEngine::__ParticleSystem__Particle particle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__ParticleSystem__Particle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline float_t UnityEngine::ParticleSystem::get_startDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startDelay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startDelay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_loop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_loop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_loop(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_loop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_playOnAwake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_playOnAwake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::ParticleSystem::get_playbackSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_playbackSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_playbackSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_playbackSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_enableEmission() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_enableEmission",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_enableEmission(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_enableEmission",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_emissionRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_emissionRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_emissionRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_emissionRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startSpeed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startSize(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::ParticleSystem::get_startColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startColor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startRotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ParticleSystem::get_startRotation3D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startRotation3D",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startRotation3D(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startRotation3D", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_startLifetime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_startLifetime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_startLifetime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_startLifetime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::ParticleSystem::get_gravityModifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_gravityModifier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_gravityModifier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_gravityModifier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ParticleSystem::get_maxParticles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_maxParticles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_maxParticles(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_maxParticles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemSimulationSpace UnityEngine::ParticleSystem::get_simulationSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_simulationSpace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemSimulationSpace, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_simulationSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemSimulationSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ParticleSystemScalingMode UnityEngine::ParticleSystem::get_scalingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "get_scalingMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ParticleSystemScalingMode, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::set_scalingMode(::UnityEngine::ParticleSystemScalingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "set_scalingMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ParticleSystemScalingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::ParticleSystem::get_automaticCullingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(),
                                                                             "get_automaticCullingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::ParticleSystem* UnityEngine::ParticleSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ParticleSystem*>());
}
inline void UnityEngine::ParticleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentSize3D_Injected(ByRef<::UnityEngine::__ParticleSystem__Particle> particle, ByRef<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentSize3D_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, ret);
}
inline void UnityEngine::ParticleSystem::GetParticleCurrentColor_Injected(ByRef<::UnityEngine::__ParticleSystem__Particle> particle, ByRef<::UnityEngine::Color32> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetParticleCurrentColor_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color32>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, ret);
}
inline void UnityEngine::ParticleSystem::GetPlaybackState_Injected(ByRef<::UnityEngine::__ParticleSystem__PlaybackState> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetPlaybackState_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__PlaybackState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::ParticleSystem::SetPlaybackState_Injected(ByRef<::UnityEngine::__ParticleSystem__PlaybackState> playbackState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetPlaybackState_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__PlaybackState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playbackState);
}
inline void UnityEngine::ParticleSystem::SetTrails_Injected(ByRef<::UnityEngine::__ParticleSystem__Trails> trailData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetTrails_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Trails>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trailData);
}
inline void UnityEngine::ParticleSystem::Emit_Injected(ByRef<::UnityEngine::__ParticleSystem__EmitParams> emitParams, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "Emit_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__EmitParams>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, emitParams, count);
}
inline void UnityEngine::ParticleSystem::TriggerSubEmitterForParticle_Injected(int32_t subEmitterIndex, ByRef<::UnityEngine::__ParticleSystem__Particle> particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "TriggerSubEmitterForParticle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::__ParticleSystem__Particle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subEmitterIndex, particle);
}
inline void UnityEngine::ParticleSystem::GetManagedJobHandle_Injected(ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "GetManagedJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::ParticleSystem::SetManagedJobHandle_Injected(ByRef<::Unity::Jobs::JobHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "SetManagedJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void UnityEngine::ParticleSystem::ScheduleManagedJob_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters> parameters,
                                                                     ::cordl_internals::Ptr<void> additionalData, ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ParticleSystem*>::get(), "ScheduleManagedJob_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, additionalData, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystem::ParticleSystem() {}
