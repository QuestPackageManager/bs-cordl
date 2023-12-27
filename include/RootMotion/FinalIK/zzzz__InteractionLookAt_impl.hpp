#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtIK_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt.Look
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)(::UnityEngine::Transform*, float_t)>(
    &::RootMotion::FinalIK::InteractionLookAt::Look)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1286268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "Look", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt.OnFixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)()>(&::RootMotion::FinalIK::InteractionLookAt::OnFixTransforms)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1286378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(),
                                                                               "OnFixTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)()>(&::RootMotion::FinalIK::InteractionLookAt::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1286410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt.SolveSpine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)()>(&::RootMotion::FinalIK::InteractionLookAt::SolveSpine)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1286600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "SolveSpine",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt.SolveHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)()>(&::RootMotion::FinalIK::InteractionLookAt::SolveHead)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x12866a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "SolveHead",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionLookAt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionLookAt::*)()>(&::RootMotion::FinalIK::InteractionLookAt::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1286754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::LookAtIK*& RootMotion::FinalIK::InteractionLookAt::__get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ik;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::LookAtIK*> const& RootMotion::FinalIK::InteractionLookAt::__get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_ik(::RootMotion::FinalIK::LookAtIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::InteractionLookAt::__get_lerpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lerpSpeed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionLookAt::__get_lerpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lerpSpeed;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_lerpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lerpSpeed = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionLookAt::__get_weightSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightSpeed;
}
constexpr float_t const& RootMotion::FinalIK::InteractionLookAt::__get_weightSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weightSpeed;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_weightSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weightSpeed = value;
}
constexpr bool& RootMotion::FinalIK::InteractionLookAt::__get_isPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isPaused;
}
constexpr bool const& RootMotion::FinalIK::InteractionLookAt::__get_isPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isPaused;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_isPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isPaused = value;
}
constexpr ::UnityEngine::Transform*& RootMotion::FinalIK::InteractionLookAt::__get_lookAtTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookAtTarget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::FinalIK::InteractionLookAt::__get_lookAtTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookAtTarget;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_lookAtTarget(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookAtTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::InteractionLookAt::__get_stopLookTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stopLookTime;
}
constexpr float_t const& RootMotion::FinalIK::InteractionLookAt::__get_stopLookTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stopLookTime;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_stopLookTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___stopLookTime = value;
}
constexpr float_t& RootMotion::FinalIK::InteractionLookAt::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::InteractionLookAt::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___weight = value;
}
constexpr bool& RootMotion::FinalIK::InteractionLookAt::__get_firstFBBIKSolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstFBBIKSolve;
}
constexpr bool const& RootMotion::FinalIK::InteractionLookAt::__get_firstFBBIKSolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstFBBIKSolve;
}
constexpr void RootMotion::FinalIK::InteractionLookAt::__set_firstFBBIKSolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___firstFBBIKSolve = value;
}
inline void RootMotion::FinalIK::InteractionLookAt::Look(::UnityEngine::Transform* target, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "Look", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, time);
}
inline void RootMotion::FinalIK::InteractionLookAt::OnFixTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(),
                                                                             "OnFixTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionLookAt::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionLookAt::SolveSpine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "SolveSpine",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionLookAt::SolveHead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), "SolveHead",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::InteractionLookAt* RootMotion::FinalIK::InteractionLookAt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::InteractionLookAt*>());
}
inline void RootMotion::FinalIK::InteractionLookAt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionLookAt*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::InteractionLookAt::InteractionLookAt() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
