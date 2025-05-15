#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType::SpriteLightWithId_MultiplyColorByAlphaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType::SpriteLightWithId_MultiplyColorByAlphaType() {}
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType::BeforeApplyingMinAlpha{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType::AfterApplyingMinAlpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SpriteLightWithId::*)()>(&::GlobalNamespace::SpriteLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39e4f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), "get_color",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::SpriteLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x39e4fb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteLightWithId::*)()>(&::GlobalNamespace::SpriteLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39e50f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideIfAlphaOutOfRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideIfAlphaOutOfRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__hideIfAlphaOutOfRange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideIfAlphaOutOfRange = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideAlphaRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideAlphaRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__hideAlphaRangeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMin = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideAlphaRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__hideAlphaRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__hideAlphaRangeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMax = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr ::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::SpriteLightWithId_MultiplyColorByAlphaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__cordl_internal_get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::SpriteLightWithId::__cordl_internal_set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setOnlyOnce = value;
}
inline ::UnityEngine::Color GlobalNamespace::SpriteLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), "get_color",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::SpriteLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpriteLightWithId* GlobalNamespace::SpriteLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpriteLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteLightWithId::SpriteLightWithId() {}
