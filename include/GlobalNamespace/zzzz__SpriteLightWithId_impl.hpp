#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__SpriteLightWithId__MultiplyColorByAlphaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::__SpriteLightWithId__MultiplyColorByAlphaType() {}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::BeforeApplyingMinAlpha{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType::AfterApplyingMinAlpha{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SpriteLightWithId::*)()>(&::GlobalNamespace::SpriteLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2113eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), "get_color",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpriteLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::SpriteLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2113ed0;

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
  constexpr static std::size_t addrs = 0x2114014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::SpriteLightWithId::__get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::SpriteLightWithId::__get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__spriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__hideIfAlphaOutOfRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__hideIfAlphaOutOfRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideIfAlphaOutOfRange;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideIfAlphaOutOfRange(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hideIfAlphaOutOfRange = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hideAlphaRangeMin = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hideAlphaRangeMax = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::SpriteLightWithId::__get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::SpriteLightWithId::__get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType& GlobalNamespace::SpriteLightWithId::__get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const& GlobalNamespace::SpriteLightWithId::__get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__multiplyColorByAlpha(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setColorOnly = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::SpriteLightWithId::__get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::SpriteLightWithId::__get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setOnlyOnce = value;
}
inline ::UnityEngine::Color GlobalNamespace::SpriteLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), "get_color",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteLightWithId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::SpriteLightWithId* GlobalNamespace::SpriteLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SpriteLightWithId*>());
}
inline void GlobalNamespace::SpriteLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpriteLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteLightWithId::SpriteLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
