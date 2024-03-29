#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_def.hpp"
#include "RootMotion/FinalIK/zzzz__AimIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::*)()>(
    &::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x139d968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effector = value;
}
constexpr float_t& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
inline ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink* GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>());
}
inline void GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink::__Recoil__RecoilOffset__EffectorLink() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)()>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::Start)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x139c7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Quaternion, float_t, float_t, float_t)>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::Apply)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x139d314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__Recoil__RecoilOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__Recoil__RecoilOffset::*)()>(&::RootMotion::FinalIK::__Recoil__RecoilOffset::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x139d954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr float_t& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_additivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additivity;
}
constexpr float_t const& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_additivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additivity;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_additivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additivity = value;
}
constexpr float_t& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_maxAdditiveOffsetMag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAdditiveOffsetMag;
}
constexpr float_t const& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_maxAdditiveOffsetMag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAdditiveOffsetMag;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_maxAdditiveOffsetMag(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAdditiveOffsetMag = value;
}
constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>&
RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_effectorLinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> const&
RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_effectorLinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_effectorLinks(
    ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectorLinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_additiveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additiveOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_additiveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additiveOffset;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_additiveOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additiveOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_lastOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_get_lastOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastOffset;
}
constexpr void RootMotion::FinalIK::__Recoil__RecoilOffset::__cordl_internal_set_lastOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastOffset = value;
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion rotation, float_t masterWeight, float_t length,
                                                               float_t timeLeft) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, rotation, masterWeight, length, timeLeft);
}
inline ::RootMotion::FinalIK::__Recoil__RecoilOffset* RootMotion::FinalIK::__Recoil__RecoilOffset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__Recoil__RecoilOffset*>());
}
inline void RootMotion::FinalIK::__Recoil__RecoilOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__Recoil__RecoilOffset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Recoil__RecoilOffset::__Recoil__RecoilOffset() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::__Recoil__Handedness::__Recoil__Handedness(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__Recoil__Handedness::__Recoil__Handedness() {}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness RootMotion::FinalIK::__Recoil__Handedness::Right{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::FinalIK::__Recoil__Handedness RootMotion::FinalIK::__Recoil__Handedness::Left{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_isFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::get_isFinished)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x139c61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_isFinished",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.SetHandRotations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::Recoil::SetHandRotations)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x139c640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "SetHandRotations", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)(float_t)>(&::RootMotion::FinalIK::Recoil::Fire)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x139c66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::OnModifyOffset)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x139c88c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.AfterFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::AfterFBBIK)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x139d590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "AfterFBBIK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.AfterAimIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::AfterAimIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x139d6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "AfterAimIK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_primaryHandEffector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (::RootMotion::FinalIK::Recoil::*)()>(
    &::RootMotion::FinalIK::Recoil::get_primaryHandEffector)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x139d518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_primaryHandEffector",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_secondaryHandEffector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (::RootMotion::FinalIK::Recoil::*)()>(
    &::RootMotion::FinalIK::Recoil::get_secondaryHandEffector)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x139d554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                                                               "get_secondaryHandEffector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_primaryHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::RootMotion::FinalIK::Recoil::*)()>(
    &::RootMotion::FinalIK::Recoil::get_primaryHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x139d4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_primaryHand",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.get_secondaryHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::RootMotion::FinalIK::Recoil::*)()>(
    &::RootMotion::FinalIK::Recoil::get_secondaryHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x139d4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_secondaryHand",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::OnDestroy)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x139d6f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Recoil._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Recoil::*)()>(&::RootMotion::FinalIK::Recoil::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x139d8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::RootMotion::FinalIK::AimIK>& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIK;
}
constexpr ::UnityW<::RootMotion::FinalIK::AimIK> const& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIK;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_aimIK(::UnityW<::RootMotion::FinalIK::AimIK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aimIK)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIKSolvedLast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIKSolvedLast;
}
constexpr bool const& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIKSolvedLast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIKSolvedLast;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_aimIKSolvedLast(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aimIKSolvedLast = value;
}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness& RootMotion::FinalIK::Recoil::__cordl_internal_get_handedness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handedness;
}
constexpr ::RootMotion::FinalIK::__Recoil__Handedness const& RootMotion::FinalIK::Recoil::__cordl_internal_get_handedness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handedness;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_handedness(::RootMotion::FinalIK::__Recoil__Handedness value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handedness = value;
}
constexpr bool& RootMotion::FinalIK::Recoil::__cordl_internal_get_twoHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___twoHanded;
}
constexpr bool const& RootMotion::FinalIK::Recoil::__cordl_internal_get_twoHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___twoHanded;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_twoHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___twoHanded = value;
}
constexpr ::UnityEngine::AnimationCurve*& RootMotion::FinalIK::Recoil::__cordl_internal_get_recoilWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoilWeight;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& RootMotion::FinalIK::Recoil::__cordl_internal_get_recoilWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recoilWeight;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_recoilWeight(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recoilWeight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_magnitudeRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitudeRandom;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_magnitudeRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitudeRandom;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_magnitudeRandom(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___magnitudeRandom = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__cordl_internal_get_rotationRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationRandom;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__cordl_internal_get_rotationRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationRandom;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_rotationRandom(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationRandom = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotationOffset;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_handRotationOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handRotationOffset = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_blendTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTime;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_blendTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTime;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_blendTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendTime = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>& RootMotion::FinalIK::Recoil::__cordl_internal_get_offsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> const& RootMotion::FinalIK::Recoil::__cordl_internal_get_offsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_offsets(::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offsets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__cordl_internal_get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__cordl_internal_get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationOffset = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_magnitudeMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitudeMlp;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_magnitudeMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___magnitudeMlp;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_magnitudeMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___magnitudeMlp = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_endTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_endTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_endTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endTime = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotation;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_handRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__cordl_internal_get_secondaryHandRelativeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondaryHandRelativeRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__cordl_internal_get_secondaryHandRelativeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondaryHandRelativeRotation;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_secondaryHandRelativeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secondaryHandRelativeRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__cordl_internal_get_randomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__cordl_internal_get_randomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomRotation;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_randomRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomRotation = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr bool& RootMotion::FinalIK::Recoil::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::Recoil::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_blendWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendWeight;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_blendWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendWeight;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_blendWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendWeight = value;
}
constexpr float_t& RootMotion::FinalIK::Recoil::__cordl_internal_get_w() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr float_t const& RootMotion::FinalIK::Recoil::__cordl_internal_get_w() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_w(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::Recoil::__cordl_internal_get_primaryHandRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___primaryHandRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::Recoil::__cordl_internal_get_primaryHandRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___primaryHandRotation;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_primaryHandRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___primaryHandRotation = value;
}
constexpr bool& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotationsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotationsSet;
}
constexpr bool const& RootMotion::FinalIK::Recoil::__cordl_internal_get_handRotationsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handRotationsSet;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_handRotationsSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handRotationsSet = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIKAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIKAxis;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::Recoil::__cordl_internal_get_aimIKAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aimIKAxis;
}
constexpr void RootMotion::FinalIK::Recoil::__cordl_internal_set_aimIKAxis(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aimIKAxis = value;
}
inline bool RootMotion::FinalIK::Recoil::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_isFinished",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::SetHandRotations(::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "SetHandRotations", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leftHandRotation, rightHandRotation);
}
inline void RootMotion::FinalIK::Recoil::Fire(float_t magnitude) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, magnitude);
}
inline void RootMotion::FinalIK::Recoil::OnModifyOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::AfterFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "AfterFBBIK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::AfterAimIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "AfterAimIK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::Recoil::get_primaryHandEffector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_primaryHandEffector",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKEffector*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::Recoil::get_secondaryHandEffector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_secondaryHandEffector",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKEffector*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::FinalIK::Recoil::get_primaryHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_primaryHand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::FinalIK::Recoil::get_secondaryHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), "get_secondaryHand",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::Recoil::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::Recoil* RootMotion::FinalIK::Recoil::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::Recoil*>());
}
inline void RootMotion::FinalIK::Recoil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Recoil*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::Recoil::Recoil() {}
