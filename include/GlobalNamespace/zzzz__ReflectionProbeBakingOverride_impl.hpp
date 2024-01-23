#pragma once
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeBakingOverride_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__ReflectionProbeBakingOverride__ActiveStateHandling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::__ReflectionProbeBakingOverride__ActiveStateHandling() {}
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::LeaveAsIs{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::Enable{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling::Disable{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeBakingOverride.UpdateForProbeBaking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReflectionProbeBakingOverride::*)()>(
    &::GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22f82f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                                                                               "UpdateForProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeBakingOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReflectionProbeBakingOverride::*)()>(
    &::GlobalNamespace::ReflectionProbeBakingOverride::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22f83e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__stateHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateHandling;
}
constexpr ::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__stateHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stateHandling;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__stateHandling(::GlobalNamespace::__ReflectionProbeBakingOverride__ActiveStateHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stateHandling = value;
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setPosition;
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setPosition;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__setPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPosition;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__localPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPosition = value;
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setRotation;
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setRotation;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__setRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localRotation;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__localRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localRotation = value;
}
constexpr bool& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setScale;
}
constexpr bool const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__setScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setScale;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__setScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_get__localScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localScale;
}
constexpr void GlobalNamespace::ReflectionProbeBakingOverride::__cordl_internal_set__localScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localScale = value;
}
inline void GlobalNamespace::ReflectionProbeBakingOverride::UpdateForProbeBaking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(),
                                                                             "UpdateForProbeBaking", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ReflectionProbeBakingOverride* GlobalNamespace::ReflectionProbeBakingOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ReflectionProbeBakingOverride*>());
}
inline void GlobalNamespace::ReflectionProbeBakingOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReflectionProbeBakingOverride*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReflectionProbeBakingOverride::ReflectionProbeBakingOverride() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
