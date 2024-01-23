#pragma once
#include "RootMotion/FinalIK/zzzz__Grounding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__Grounding__Quality::__Grounding__Quality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Grounding__Quality::__Grounding__Quality() {}
constexpr ::RootMotion::FinalIK::__Grounding__Quality RootMotion::FinalIK::__Grounding__Quality::Fastest{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__Grounding__Quality RootMotion::FinalIK::__Grounding__Quality::Simple{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::FinalIK::__Grounding__Quality RootMotion::FinalIK::__Grounding__Quality::Best{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_isGrounded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_isGrounded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_isGrounded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::__Grounding__Leg::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_isGrounded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_IKPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_IKPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_IKPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_IKPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_initiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_initiated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_initiated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::__Grounding__Leg::set_initiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_initiated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_heightFromGround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_heightFromGround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_heightFromGround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(float_t)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_heightFromGround",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_velocity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_velocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124d1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_transform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_transform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_IKOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_IKOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_IKOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(float_t)>(&::RootMotion::FinalIK::__Grounding__Leg::set_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124d220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_IKOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_heelHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_heelHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124d228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_heelHit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_heelHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_heelHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124d240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_heelHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_capsuleHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_capsuleHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124d260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_capsuleHit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.set_capsuleHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(
    &::RootMotion::FinalIK::__Grounding__Leg::set_capsuleHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124d278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_capsuleHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_GetHitPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_GetHitPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x124d298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_GetHitPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::SetFootPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x124d2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootPosition", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::RootMotion::FinalIK::Grounding*, ::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::__Grounding__Leg::Initiate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x124c308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x124d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x124ce10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::Process)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x124c3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Process",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_stepHeightFromGround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::get_stepHeightFromGround)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x124db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_stepHeightFromGround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetCapsuleHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::GetCapsuleHit)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x124d794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetCapsuleHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetRaycastHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::GetRaycastHit)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x124d334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetRaycastHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.RotateNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::RotateNormal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x124dc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "RotateNormal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootToPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::SetFootToPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x124d5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootToPoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.SetFootToPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__Grounding__Leg::SetFootToPlane)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x124d67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootToPlane", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetHeightFromGround
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Leg::GetHeightFromGround)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x124dc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetHeightFromGround", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.RotateFoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::RotateFoot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x124dbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "RotateFoot",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.GetRotationOffsetTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__Grounding__Leg::*)()>(
    &::RootMotion::FinalIK::__Grounding__Leg::GetRotationOffsetTarget)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x124dd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "GetRotationOffsetTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg.get_rootYOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::get_rootYOffset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x124dcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                               "get_rootYOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Leg._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Leg::*)()>(&::RootMotion::FinalIK::__Grounding__Leg::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x124c268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__isGrounded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGrounded_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__isGrounded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGrounded_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__isGrounded_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isGrounded_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__IKPosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__IKPosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKPosition_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__IKPosition_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IKPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationOffset = value;
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__initiated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initiated_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__initiated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initiated_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__initiated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initiated_k__BackingField = value;
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__heightFromGround_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightFromGround_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__heightFromGround_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightFromGround_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__heightFromGround_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightFromGround_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__velocity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__velocity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____velocity_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__velocity_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____velocity_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__transform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__transform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__transform_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__IKOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKOffset_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__IKOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKOffset_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__IKOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IKOffset_k__BackingField = value;
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_invertFootCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertFootCenter;
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_invertFootCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invertFootCenter;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_invertFootCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invertFootCenter = value;
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__heelHit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heelHit_k__BackingField;
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__heelHit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heelHit_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__heelHit_k__BackingField(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heelHit_k__BackingField = value;
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__capsuleHit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleHit_k__BackingField;
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get__capsuleHit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleHit_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set__capsuleHit_k__BackingField(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsuleHit_k__BackingField = value;
}
constexpr ::RootMotion::FinalIK::Grounding*& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_grounding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grounding;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_grounding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grounding;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_grounding(::RootMotion::FinalIK::Grounding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___grounding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_lastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_lastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_lastTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTime = value;
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_deltaTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaTime;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_deltaTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaTime;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_deltaTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaTime = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_lastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_toHitNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toHitNormal;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_toHitNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toHitNormal;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_toHitNormal(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toHitNormal = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_r(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_up() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___up;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_up() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___up;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_up(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___up = value;
}
constexpr bool& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_doOverrideFootPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doOverrideFootPosition;
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_doOverrideFootPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doOverrideFootPosition;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_doOverrideFootPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___doOverrideFootPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_overrideFootPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideFootPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_overrideFootPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideFootPosition;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_overrideFootPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideFootPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_transformPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_get_transformPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transformPosition;
}
constexpr void RootMotion::FinalIK::__Grounding__Leg::__cordl_internal_set_transformPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transformPosition = value;
}
inline bool RootMotion::FinalIK::__Grounding__Leg::get_isGrounded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_isGrounded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_isGrounded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_isGrounded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::get_IKPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_IKPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_IKPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_IKPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::__Grounding__Leg::get_initiated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_initiated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_initiated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_initiated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_heightFromGround() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                             "get_heightFromGround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_heightFromGround(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_heightFromGround",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::get_velocity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_velocity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_velocity(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_velocity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::FinalIK::__Grounding__Leg::get_transform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_transform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_transform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_transform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_IKOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_IKOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_IKOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_IKOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_heelHit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_heelHit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_heelHit(::UnityEngine::RaycastHit value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_heelHit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_capsuleHit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_capsuleHit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::set_capsuleHit(::UnityEngine::RaycastHit value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "set_capsuleHit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::get_GetHitPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_GetHitPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Initiate(::RootMotion::FinalIK::Grounding* grounding, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grounding, transform);
}
inline void RootMotion::FinalIK::__Grounding__Leg::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Leg::Process() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "Process",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_stepHeightFromGround() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                             "get_stepHeightFromGround", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::GetCapsuleHit(::UnityEngine::Vector3 offsetFromHeel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetCapsuleHit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method, offsetFromHeel);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::__Grounding__Leg::GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetRaycastHit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method, offsetFromHeel);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Leg::RotateNormal(::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "RotateNormal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, normal);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootToPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normal, point);
}
inline void RootMotion::FinalIK::__Grounding__Leg::SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "SetFootToPlane", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, planeNormal, planePoint, heelHitPoint);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::GetHeightFromGround(::UnityEngine::Vector3 hitPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "GetHeightFromGround", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, hitPoint);
}
inline void RootMotion::FinalIK::__Grounding__Leg::RotateFoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "RotateFoot",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__Grounding__Leg::GetRotationOffsetTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(),
                                                                             "GetRotationOffsetTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::__Grounding__Leg::get_rootYOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), "get_rootYOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__Grounding__Leg* RootMotion::FinalIK::__Grounding__Leg::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__Grounding__Leg*>());
}
inline void RootMotion::FinalIK::__Grounding__Leg::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Leg*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Grounding__Leg::__Grounding__Leg() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.get_IKOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::get_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124df0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                                                                               "get_IKOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.set_IKOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::set_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124df18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "set_IKOffset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.get_heightOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::get_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124df24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                                                                               "get_heightOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.set_heightOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(float_t)>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::set_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "set_heightOffset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(::RootMotion::FinalIK::Grounding*)>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::Initiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x124c3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x124cd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x124df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)(float_t, float_t, bool)>(
    &::RootMotion::FinalIK::__Grounding__Pelvis::Process)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x124cb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Grounding__Pelvis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::__Grounding__Pelvis::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124c300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get__IKOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKOffset_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get__IKOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IKOffset_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set__IKOffset_k__BackingField(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IKOffset_k__BackingField = value;
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get__heightOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightOffset_k__BackingField;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get__heightOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____heightOffset_k__BackingField;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set__heightOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____heightOffset_k__BackingField = value;
}
constexpr ::RootMotion::FinalIK::Grounding*& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_grounding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grounding;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_grounding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grounding;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set_grounding(::RootMotion::FinalIK::Grounding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___grounding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_lastRootPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRootPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_lastRootPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRootPosition;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set_lastRootPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRootPosition = value;
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_damperF() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damperF;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_damperF() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damperF;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set_damperF(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___damperF = value;
}
constexpr bool& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr float_t& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_lastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr float_t const& RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_get_lastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr void RootMotion::FinalIK::__Grounding__Pelvis::__cordl_internal_set_lastTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTime = value;
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__Grounding__Pelvis::get_IKOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "get_IKOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::set_IKOffset(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "set_IKOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t RootMotion::FinalIK::__Grounding__Pelvis::get_heightOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(),
                                                                             "get_heightOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::set_heightOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "set_heightOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Initiate(::RootMotion::FinalIK::Grounding* grounding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grounding);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::Process(float_t lowestOffset, float_t highestOffset, bool isGrounded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), "Process", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lowestOffset, highestOffset, isGrounded);
}
inline ::RootMotion::FinalIK::__Grounding__Pelvis* RootMotion::FinalIK::__Grounding__Pelvis::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__Grounding__Pelvis*>());
}
inline void RootMotion::FinalIK::__Grounding__Pelvis::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Grounding__Pelvis*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Grounding__Pelvis::__Grounding__Pelvis() {}
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_legs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> (
    ::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_legs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_legs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(
    ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>)>(&::RootMotion::FinalIK::Grounding::set_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_legs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_pelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__Grounding__Pelvis* (::RootMotion::FinalIK::Grounding::*)()>(
    &::RootMotion::FinalIK::Grounding::get_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_pelvis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_pelvis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::RootMotion::FinalIK::__Grounding__Pelvis*)>(
    &::RootMotion::FinalIK::Grounding::set_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124bdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_pelvis", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Pelvis*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_isGrounded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_isGrounded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_isGrounded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(bool)>(&::RootMotion::FinalIK::Grounding::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x124be08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_isGrounded",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_root
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::RootMotion::FinalIK::Grounding::*)()>(
    &::RootMotion::FinalIK::Grounding::get_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_root",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_root
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::Grounding::set_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124be1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_root", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124be24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_rootHit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_rootHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::RaycastHit)>(
    &::RootMotion::FinalIK::Grounding::set_rootHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x124be3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_rootHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootGrounded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootGrounded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x124be5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_rootGrounded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetRootHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)(float_t)>(
    &::RootMotion::FinalIK::Grounding::GetRootHit)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x124bea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetRootHit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::Grounding::IsValid)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x124c16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(
    ::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::FinalIK::Grounding::Initiate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1246bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x12471a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetLegsPlaneNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(
    &::RootMotion::FinalIK::Grounding::GetLegsPlaneNormal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1248140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetLegsPlaneNormal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1246834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::StringW)>(&::RootMotion::FinalIK::Grounding::LogWarning)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x124c3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_up
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_up)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x124c104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_up",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetVerticalOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::Grounding::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x124cf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetVerticalOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Flatten
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3)>(
    &::RootMotion::FinalIK::Grounding::Flatten)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x124cfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Flatten", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_useRootRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_useRootRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x124cea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_useRootRotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetFootCenterOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(
    &::RootMotion::FinalIK::Grounding::GetFootCenterOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x124d130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetFootCenterOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x124b15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& RootMotion::FinalIK::Grounding::__cordl_internal_get_layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layers;
}
constexpr ::UnityEngine::LayerMask const& RootMotion::FinalIK::Grounding::__cordl_internal_get_layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layers;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_layers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layers = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_maxStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStep;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_maxStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStep;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_maxStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxStep = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_heightOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightOffset;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_heightOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightOffset;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_heightOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heightOffset = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_footSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footSpeed;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_footSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footSpeed;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_footSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRadius;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRadius;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_footRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRadius = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_footCenterOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footCenterOffset;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_footCenterOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footCenterOffset;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_footCenterOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footCenterOffset = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_prediction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prediction;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_prediction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prediction;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_prediction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prediction = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationWeight;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_footRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRotationSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationSpeed;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_footRotationSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___footRotationSpeed;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_footRotationSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___footRotationSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_maxFootRotationAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxFootRotationAngle;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_maxFootRotationAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxFootRotationAngle;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_maxFootRotationAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxFootRotationAngle = value;
}
constexpr bool& RootMotion::FinalIK::Grounding::__cordl_internal_get_rotateSolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateSolver;
}
constexpr bool const& RootMotion::FinalIK::Grounding::__cordl_internal_get_rotateSolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotateSolver;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_rotateSolver(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotateSolver = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_pelvisSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisSpeed;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_pelvisSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisSpeed;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_pelvisSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_pelvisDamper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisDamper;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_pelvisDamper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvisDamper;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_pelvisDamper(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pelvisDamper = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_lowerPelvisWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerPelvisWeight;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_lowerPelvisWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerPelvisWeight;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_lowerPelvisWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lowerPelvisWeight = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_liftPelvisWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___liftPelvisWeight;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_liftPelvisWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___liftPelvisWeight;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_liftPelvisWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___liftPelvisWeight = value;
}
constexpr float_t& RootMotion::FinalIK::Grounding::__cordl_internal_get_rootSphereCastRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSphereCastRadius;
}
constexpr float_t const& RootMotion::FinalIK::Grounding::__cordl_internal_get_rootSphereCastRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSphereCastRadius;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_rootSphereCastRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootSphereCastRadius = value;
}
constexpr bool& RootMotion::FinalIK::Grounding::__cordl_internal_get_overstepFallsDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overstepFallsDown;
}
constexpr bool const& RootMotion::FinalIK::Grounding::__cordl_internal_get_overstepFallsDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overstepFallsDown;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_overstepFallsDown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overstepFallsDown = value;
}
constexpr ::RootMotion::FinalIK::__Grounding__Quality& RootMotion::FinalIK::Grounding::__cordl_internal_get_quality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quality;
}
constexpr ::RootMotion::FinalIK::__Grounding__Quality const& RootMotion::FinalIK::Grounding::__cordl_internal_get_quality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quality;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_quality(::RootMotion::FinalIK::__Grounding__Quality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quality = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>& RootMotion::FinalIK::Grounding::__cordl_internal_get__legs_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legs_k__BackingField;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> const&
RootMotion::FinalIK::Grounding::__cordl_internal_get__legs_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legs_k__BackingField;
}
constexpr void
RootMotion::FinalIK::Grounding::__cordl_internal_set__legs_k__BackingField(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____legs_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__Grounding__Pelvis*& RootMotion::FinalIK::Grounding::__cordl_internal_get__pelvis_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pelvis_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__Grounding__Pelvis*> const& RootMotion::FinalIK::Grounding::__cordl_internal_get__pelvis_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pelvis_k__BackingField;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set__pelvis_k__BackingField(::RootMotion::FinalIK::__Grounding__Pelvis* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pelvis_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::Grounding::__cordl_internal_get__isGrounded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGrounded_k__BackingField;
}
constexpr bool const& RootMotion::FinalIK::Grounding::__cordl_internal_get__isGrounded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGrounded_k__BackingField;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set__isGrounded_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isGrounded_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::Grounding::__cordl_internal_get__root_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::Grounding::__cordl_internal_get__root_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____root_k__BackingField;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set__root_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____root_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RaycastHit& RootMotion::FinalIK::Grounding::__cordl_internal_get__rootHit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootHit_k__BackingField;
}
constexpr ::UnityEngine::RaycastHit const& RootMotion::FinalIK::Grounding::__cordl_internal_get__rootHit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootHit_k__BackingField;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set__rootHit_k__BackingField(::UnityEngine::RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootHit_k__BackingField = value;
}
constexpr bool& RootMotion::FinalIK::Grounding::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::Grounding::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::Grounding::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
inline ::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> RootMotion::FinalIK::Grounding::get_legs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_legs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_legs(::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_legs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::__Grounding__Leg*, ::Array<::RootMotion::FinalIK::__Grounding__Leg*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RootMotion::FinalIK::__Grounding__Pelvis* RootMotion::FinalIK::Grounding::get_pelvis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_pelvis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__Grounding__Pelvis*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_pelvis(::RootMotion::FinalIK::__Grounding__Pelvis* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_pelvis", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Pelvis*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::Grounding::get_isGrounded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_isGrounded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_isGrounded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_isGrounded",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::FinalIK::Grounding::get_root() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_root",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_root(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_root", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::Grounding::get_rootHit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_rootHit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::set_rootHit(::UnityEngine::RaycastHit value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "set_rootHit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool RootMotion::FinalIK::Grounding::get_rootGrounded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_rootGrounded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param maxDistanceMlp: float_t (default: 10.0)
inline ::UnityEngine::RaycastHit RootMotion::FinalIK::Grounding::GetRootHit(float_t maxDistanceMlp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetRootHit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(this, ___internal_method, maxDistanceMlp);
}
inline bool RootMotion::FinalIK::Grounding::IsValid(ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, errorMessage);
}
inline void RootMotion::FinalIK::Grounding::Initiate(::UnityEngine::Transform* root, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> feet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root, feet);
}
inline void RootMotion::FinalIK::Grounding::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::GetLegsPlaneNormal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetLegsPlaneNormal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Grounding::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::get_up() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_up",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::Grounding::GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetVerticalOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, p1, p2);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::Flatten(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "Flatten", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, v);
}
inline bool RootMotion::FinalIK::Grounding::get_useRootRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "get_useRootRotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::Grounding::GetFootCenterOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), "GetFootCenterOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::Grounding* RootMotion::FinalIK::Grounding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::Grounding*>());
}
inline void RootMotion::FinalIK::Grounding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Grounding::Grounding() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
