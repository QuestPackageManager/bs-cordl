#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__FBBIKHeadEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__FBBIKHeadEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::*)()>(
    &::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1254a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::*)(::UnityEngine::Transform*, float_t)>(
    &::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1254aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone.StoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::*)()>(
    &::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12521a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                               "StoreDefaultLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::*)()>(
    &::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::FixTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1252578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                               "FixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_defaultLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_get_defaultLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotation;
}
constexpr void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLocalRotation = value;
}
inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>());
}
inline void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::New_ctor(::UnityEngine::Transform* transform, float_t weight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>(transform, weight));
}
inline void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::_ctor(::UnityEngine::Transform* transform, float_t weight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, weight);
}
inline void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::StoreDefaultLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                             "StoreDefaultLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::FixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>::get(),
                                                                             "FixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone::__FBBIKHeadEffector__BendBone() {}
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::Start)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x1251948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnStoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(
    &::RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x1251d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                               "OnStoreDefaultLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnFixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x12521d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                               "OnFixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnPreRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x12525a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnPreRead",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.SpineBend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::SpineBend)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x1252e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "SpineBend",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.CCDPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::CCDPass)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1253294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "CCDPass",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Iterate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(int32_t)>(&::RootMotion::FinalIK::FBBIKHeadEffector::Iterate)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x12536a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Iterate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnPostUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1254024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnPostUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.ChestDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x1252be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                               "ChestDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.PostStretching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::PostStretching)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x1254260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                               "PostStretching", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.LerpSolverPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(
    ::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1253f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "LerpSolverPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float_t)>(&::RootMotion::FinalIK::FBBIKHeadEffector::Solve)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1253e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x1254564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x125489c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_positionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_positionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_positionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bodyWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bodyWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_bodyWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_thighWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thighWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_thighWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thighWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_thighWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thighWeight = value;
}
constexpr bool& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_handsPullBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handsPullBody;
}
constexpr bool const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_handsPullBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handsPullBody;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_handsPullBody(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handsPullBody = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_rotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bodyClampWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyClampWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bodyClampWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bodyClampWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_bodyClampWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bodyClampWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headClampWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headClampWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headClampWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headClampWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headClampWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headClampWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_bendWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendWeight = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*>&
RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendBones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendBones;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> const&
RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendBones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendBones;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_bendBones(
    ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bendBones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_CCDWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CCDWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_CCDWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CCDWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_CCDWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CCDWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_roll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roll;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_roll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roll;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_roll(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roll = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_damper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damper;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_damper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___damper;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_damper(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___damper = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_CCDBones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CCDBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_CCDBones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CCDBones;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_CCDBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CCDBones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_postStretchWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postStretchWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_postStretchWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postStretchWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_postStretchWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postStretchWeight = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_maxStretch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStretch;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_maxStretch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxStretch;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_maxStretch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxStretch = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchDamper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchDamper;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchDamper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchDamper;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_stretchDamper(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stretchDamper = value;
}
constexpr bool& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_fixHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixHead;
}
constexpr bool const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_fixHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixHead;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_fixHead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixHead = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchBones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchBones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchBones;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_stretchBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stretchBones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestDirection;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestDirection;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestDirection = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestDirectionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestDirectionWeight;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestDirectionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestDirectionWeight;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestDirectionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestDirectionWeight = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestBones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestBones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestBones;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chestBones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_OnPostHeadEffectorFK() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostHeadEffectorFK;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_OnPostHeadEffectorFK() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostHeadEffectorFK;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_OnPostHeadEffectorFK(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPostHeadEffectorFK)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToBody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToBody;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToBody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToBody;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headToBody(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headToBody = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_shoulderCenterToHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderCenterToHead;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_shoulderCenterToHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderCenterToHead;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_shoulderCenterToHead(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shoulderCenterToHead = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToLeftThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToLeftThigh;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToLeftThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToLeftThigh;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headToLeftThigh(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headToLeftThigh = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToRightThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToRightThigh;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headToRightThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headToRightThigh;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headToRightThigh(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headToRightThigh = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_leftShoulderPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulderPos;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_leftShoulderPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulderPos;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_leftShoulderPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftShoulderPos = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rightShoulderPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulderPos;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rightShoulderPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulderPos;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_rightShoulderPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightShoulderPos = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_shoulderDist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderDist;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_shoulderDist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shoulderDist;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_shoulderDist(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shoulderDist = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_leftShoulderDist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulderDist;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_leftShoulderDist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftShoulderDist;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_leftShoulderDist(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftShoulderDist = value;
}
constexpr float_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rightShoulderDist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulderDist;
}
constexpr float_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_rightShoulderDist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightShoulderDist;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_rightShoulderDist(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightShoulderDist = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestRotation;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headRotationRelativeToRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationRelativeToRoot;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headRotationRelativeToRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headRotationRelativeToRoot;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headRotationRelativeToRoot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headRotationRelativeToRoot = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ccdDefaultLocalRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ccdDefaultLocalRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ccdDefaultLocalRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ccdDefaultLocalRotations;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_ccdDefaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ccdDefaultLocalRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLocalPosition;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_headLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headLocalRotation;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_headLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headLocalRotation = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchLocalPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchLocalPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchLocalPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchLocalPositions;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_stretchLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stretchLocalPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchLocalRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchLocalRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchLocalRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchLocalRotations;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_stretchLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stretchLocalRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestLocalPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestLocalPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestLocalPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestLocalPositions;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chestLocalPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestLocalRotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestLocalRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestLocalRotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestLocalRotations;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chestLocalRotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendBonesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendBonesCount;
}
constexpr int32_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_bendBonesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendBonesCount;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_bendBonesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendBonesCount = value;
}
constexpr int32_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ccdBonesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ccdBonesCount;
}
constexpr int32_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_ccdBonesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ccdBonesCount;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_ccdBonesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ccdBonesCount = value;
}
constexpr int32_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchBonesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchBonesCount;
}
constexpr int32_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_stretchBonesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stretchBonesCount;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_stretchBonesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stretchBonesCount = value;
}
constexpr int32_t& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestBonesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestBonesCount;
}
constexpr int32_t const& RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_get_chestBonesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chestBonesCount;
}
constexpr void RootMotion::FinalIK::FBBIKHeadEffector::__cordl_internal_set_chestBonesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chestBonesCount = value;
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                             "OnStoreDefaultLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(),
                                                                             "OnFixTransforms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnPreRead",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::SpineBend() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "SpineBend",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::CCDPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "CCDPass",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::Iterate(int32_t iteration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Iterate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iteration);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnPostUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "ChestDirection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::PostStretching() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "PostStretching",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition(::RootMotion::FinalIK::IKEffector* effector, ::UnityEngine::Vector3 position, float_t weight, ::UnityEngine::Vector3 offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "LerpSolverPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, position, weight, offset);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::Solve(ByRef<::UnityEngine::Vector3> pos1, ByRef<::UnityEngine::Vector3> pos2, float_t nominalDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos1, pos2, nominalDistance);
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::FBBIKHeadEffector* RootMotion::FinalIK::FBBIKHeadEffector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::FBBIKHeadEffector*>());
}
inline void RootMotion::FinalIK::FBBIKHeadEffector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::FBBIKHeadEffector::FBBIKHeadEffector() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
