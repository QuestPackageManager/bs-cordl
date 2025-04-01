#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteArrayLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteArrayLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__SpriteArrayLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType::SpriteArrayLightWithId_MultiplyColorByAlphaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType::SpriteArrayLightWithId_MultiplyColorByAlphaType() {}
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType::BeforeApplyingMinAlpha{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType::AfterApplyingMinAlpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SpriteArrayLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SpriteArrayLightWithId::*)()>(
    &::GlobalNamespace::SpriteArrayLightWithId::get_color)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x39dfe3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), "get_color",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteArrayLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteArrayLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::SpriteArrayLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x39dfe6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteArrayLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteArrayLightWithId::*)()>(&::GlobalNamespace::SpriteArrayLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39e0004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*>& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__spriteRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*> const&
GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__spriteRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderers;
}
constexpr void
GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__spriteRenderers(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>, ::Array<::UnityW<::UnityEngine::SpriteRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideIfAlphaOutOfRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr bool const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideIfAlphaOutOfRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__hideIfAlphaOutOfRange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideIfAlphaOutOfRange = value;
}
constexpr float_t& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideAlphaRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr float_t const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideAlphaRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__hideAlphaRangeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMin = value;
}
constexpr float_t& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideAlphaRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr float_t const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__hideAlphaRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__hideAlphaRangeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMax = value;
}
constexpr float_t& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr ::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::SpriteArrayLightWithId_MultiplyColorByAlphaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr bool& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr bool& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::SpriteArrayLightWithId::__cordl_internal_set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setOnlyOnce = value;
}
inline ::UnityEngine::Color GlobalNamespace::SpriteArrayLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), "get_color",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteArrayLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::SpriteArrayLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteArrayLightWithId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpriteArrayLightWithId* GlobalNamespace::SpriteArrayLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpriteArrayLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteArrayLightWithId::SpriteArrayLightWithId() {}
