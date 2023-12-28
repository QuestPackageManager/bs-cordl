#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetPose__EffectorLink.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetPose__EffectorLink::*)(
    ::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::__OffsetPose__EffectorLink::Apply)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1298680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetPose__EffectorLink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetPose__EffectorLink::*)()>(
    &::RootMotion::FinalIK::__OffsetPose__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12989cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr void RootMotion::FinalIK::__OffsetPose__EffectorLink::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effector = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::__OffsetPose__EffectorLink::__set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_pin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pin;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_pin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pin;
}
constexpr void RootMotion::FinalIK::__OffsetPose__EffectorLink::__set_pin(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pin = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_pinWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pinWeight;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__OffsetPose__EffectorLink::__get_pinWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pinWeight;
}
constexpr void RootMotion::FinalIK::__OffsetPose__EffectorLink::__set_pinWeight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pinWeight = value;
}
inline void RootMotion::FinalIK::__OffsetPose__EffectorLink::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, weight, rotation);
}
inline ::RootMotion::FinalIK::__OffsetPose__EffectorLink* RootMotion::FinalIK::__OffsetPose__EffectorLink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>());
}
inline void RootMotion::FinalIK::__OffsetPose__EffectorLink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__OffsetPose__EffectorLink::__OffsetPose__EffectorLink() {}
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetPose.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetPose::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t)>(
    &::RootMotion::FinalIK::OffsetPose::Apply)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1294c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetPose.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::OffsetPose::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float_t, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::OffsetPose::Apply)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x12988d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetPose._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetPose::*)()>(&::RootMotion::FinalIK::OffsetPose::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1298974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*>& RootMotion::FinalIK::OffsetPose::__get_effectorLinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> const&
RootMotion::FinalIK::OffsetPose::__get_effectorLinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorLinks;
}
constexpr void RootMotion::FinalIK::OffsetPose::__set_effectorLinks(::ArrayW<::RootMotion::FinalIK::__OffsetPose__EffectorLink*, ::Array<::RootMotion::FinalIK::__OffsetPose__EffectorLink*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectorLinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::OffsetPose::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, weight);
}
inline void RootMotion::FinalIK::OffsetPose::Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolverFullBodyBiped*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, solver, weight, rotation);
}
inline ::RootMotion::FinalIK::OffsetPose* RootMotion::FinalIK::OffsetPose::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::OffsetPose*>());
}
inline void RootMotion::FinalIK::OffsetPose::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetPose*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::OffsetPose::OffsetPose() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
