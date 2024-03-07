#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1374ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x137535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "GetRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetBendNormalFromCurrentRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(
    &::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1370090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                                                 "GetBendNormalFromCurrentRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(
    &::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13753f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_get_targetToLocalSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetToLocalSpace;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_get_targetToLocalSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetToLocalSpace;
}
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_set_targetToLocalSpace(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetToLocalSpace = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_get_defaultLocalBendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalBendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_get_defaultLocalBendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalBendNormal;
}
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__cordl_internal_set_defaultLocalBendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLocalBendNormal = value;
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "Initiate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, childPosition, bendNormal);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "GetRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, direction, bendNormal);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                                               "GetBendNormalFromCurrentRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>());
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__IKSolverTrigonometric__TrigonometricBone() {}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendGoalPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1373818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "SetBendGoalPosition", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendPlaneToCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x13739ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "SetBendPlaneToCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1373b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotationWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(float_t)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1373b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotationWeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1373b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "GetIKRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotationWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1373b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "GetIKRotationWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (
    ::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetPoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1373b68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::RootMotion::FinalIK::__IKSolver__Point* (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1373c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.StoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1373d4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1373d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)(ByRef<::StringW>)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::IsValid)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x1373ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::IKSolverTrigonometric::SetChain)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1374180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3,
                                                                                           ::UnityEngine::Vector3, float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::Solve)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x13741cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetDirectionToBendPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, float_t, float_t)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x13746c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetDirectionToBendPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1374818;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.IsDirectHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x13749c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "IsDirectHierarchy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.InitiateBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1374944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "InitiateBones", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x1374ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnInitiateVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x13753ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnUpdateVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x13753f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnPostSolveVirtual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x13753f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetBendDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::IKSolverTrigonometric::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x137519c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetBendDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1371238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_IKRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_IKRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationWeight;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_IKRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotationWeight = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_IKRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_IKRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_IKRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_bendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendNormal = value;
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const&
RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_bone1(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const&
RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_bone2(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const&
RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_bone3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_bone3(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_weightIKPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightIKPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_weightIKPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightIKPosition;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_weightIKPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weightIKPosition = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_directHierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directHierarchy;
}
constexpr bool const& RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_get_directHierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directHierarchy;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__cordl_internal_set_directHierarchy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directHierarchy = value;
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition(::UnityEngine::Vector3 goalPosition, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "SetBendGoalPosition", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goalPosition, weight);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "SetBendPlaneToCurrent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation(::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotationWeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weight);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "GetIKRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "GetIKRotationWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverTrigonometric::GetPoints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverTrigonometric::GetPoint(::UnityEngine::Transform* transform) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsValid(ByRef<::StringW> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::SetChain(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* root) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bone1, bone2, bone3, root);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::Solve(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Vector3 targetPosition,
                                                              ::UnityEngine::Vector3 bendNormal, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bone1, bone2, bone3, targetPosition, bendNormal, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection,
                                                                                                  float_t sqrMag1, float_t sqrMag2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetDirectionToBendPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "IsDirectHierarchy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "InitiateBones", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection(::UnityEngine::Vector3 IKPosition, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetBendDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, IKPosition, bendNormal);
}
inline ::RootMotion::FinalIK::IKSolverTrigonometric* RootMotion::FinalIK::IKSolverTrigonometric::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::IKSolverTrigonometric*>());
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverTrigonometric::IKSolverTrigonometric() {}
