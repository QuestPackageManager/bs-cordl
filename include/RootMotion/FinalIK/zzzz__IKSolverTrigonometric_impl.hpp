#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12704c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "Initiate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1270d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "GetRotation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone.GetBendNormalFromCurrentRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(
    &::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x126ba9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                                                 "GetBendNormalFromCurrentRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::*)()>(
    &::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1270e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_targetToLocalSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetToLocalSpace;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_targetToLocalSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetToLocalSpace;
}
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__set_targetToLocalSpace(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetToLocalSpace = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_defaultLocalBendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalBendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__get_defaultLocalBendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalBendNormal;
}
constexpr void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__set_defaultLocalBendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLocalBendNormal = value;
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "Initiate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, childPosition, bendNormal);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), "GetRotation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method, direction, bendNormal);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(),
                                               "GetBendNormalFromCurrentRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>());
}
inline void RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone::__IKSolverTrigonometric__TrigonometricBone() {}
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendGoalPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Vector3, float_t)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x126f224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetBendGoalPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetBendPlaneToCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x126f3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "SetBendPlaneToCurrent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(::UnityEngine::Quaternion)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x126f538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotationWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)(float_t)>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x126f544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotationWeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x126f560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "GetIKRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotationWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x126f56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "GetIKRotationWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.GetPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (
    ::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::GetPoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x126f574;

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
  constexpr static std::size_t addrs = 0x126f660;

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
  constexpr static std::size_t addrs = 0x126f758;

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
  constexpr static std::size_t addrs = 0x126f798;

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
  constexpr static std::size_t addrs = 0x126f7e8;

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
  constexpr static std::size_t addrs = 0x126fb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetChain", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3,
                                                                                           ::UnityEngine::Vector3, float_t)>(&::RootMotion::FinalIK::IKSolverTrigonometric::Solve)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x126fbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "Solve", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
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
  constexpr static std::size_t addrs = 0x12700cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetDirectionToBendPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
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
  constexpr static std::size_t addrs = 0x1270224;

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
  constexpr static std::size_t addrs = 0x12703d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "IsDirectHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.InitiateBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(
    &::RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1270350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                               "InitiateBones", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x12705b0;

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
  constexpr static std::size_t addrs = 0x1270df8;

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
  constexpr static std::size_t addrs = 0x1270dfc;

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
  constexpr static std::size_t addrs = 0x1270e00;

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
  constexpr static std::size_t addrs = 0x1270ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetBendDirection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverTrigonometric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&::RootMotion::FinalIK::IKSolverTrigonometric::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x126cc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::IKSolverTrigonometric::__get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::IKSolverTrigonometric::__get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_target(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotationWeight;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotationWeight = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IKRotation;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IKRotation = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__get_bendNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__get_bendNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendNormal;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bendNormal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendNormal = value;
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone1;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone1(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone2;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone2(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone*> const& RootMotion::FinalIK::IKSolverTrigonometric::__get_bone3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bone3;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone3(::RootMotion::FinalIK::__IKSolverTrigonometric__TrigonometricBone* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bone3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::IKSolverTrigonometric::__get_weightIKPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightIKPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::IKSolverTrigonometric::__get_weightIKPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weightIKPosition;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_weightIKPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weightIKPosition = value;
}
constexpr bool& RootMotion::FinalIK::IKSolverTrigonometric::__get_directHierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directHierarchy;
}
constexpr bool const& RootMotion::FinalIK::IKSolverTrigonometric::__get_directHierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directHierarchy;
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_directHierarchy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directHierarchy = value;
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition(::UnityEngine::Vector3 goalPosition, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetBendGoalPosition", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goalPosition, weight);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "SetBendPlaneToCurrent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation(::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight(float_t weight) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetIKRotationWeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, weight);
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "GetIKRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline float_t RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "GetIKRotationWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverTrigonometric::GetPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetPoints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverTrigonometric::GetPoint(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(this, ___internal_method, transform);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "StoreDefaultLocalState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "FixTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsValid(ByRef<::StringW> message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "IsValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::SetChain(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* root) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "SetChain", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bone1, bone2, bone3, root);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::Solve(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Vector3 targetPosition,
                                                              ::UnityEngine::Vector3 bendNormal, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "Solve", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bone1, bone2, bone3, targetPosition, bendNormal, weight);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint(::UnityEngine::Vector3 direction, float_t directionMag, ::UnityEngine::Vector3 bendDirection,
                                                                                                  float_t sqrMag1, float_t sqrMag2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetDirectionToBendPoint", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "OnInitiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "IsDirectHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "InitiateBones", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "OnUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "OnInitiateVirtual", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "OnUpdateVirtual", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(),
                                                                             "OnPostSolveVirtual", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection(::UnityEngine::Vector3 IKPosition, ::UnityEngine::Vector3 bendNormal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), "GetBendDirection", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, IKPosition, bendNormal);
}
inline ::RootMotion::FinalIK::IKSolverTrigonometric* RootMotion::FinalIK::IKSolverTrigonometric::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverTrigonometric*>());
}
inline void RootMotion::FinalIK::IKSolverTrigonometric::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverTrigonometric*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverTrigonometric::IKSolverTrigonometric() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
