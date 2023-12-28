#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithId_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MaterialLightWithId::*)()>(
    &::GlobalNamespace::MaterialLightWithId::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21119d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "get_color",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21119e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2111a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2111bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::MaterialLightWithId::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::MaterialLightWithId::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__alphaIntoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__alphaIntoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alphaIntoColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaIntoColor = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithId::__get__colorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithId::__get__colorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__colorProperty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__alphaIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntensity;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__alphaIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntensity;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alphaIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaIntensity = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__multiplyColorWithAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorWithAlpha;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__multiplyColorWithAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorWithAlpha;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__multiplyColorWithAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorWithAlpha = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__get__multiplyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__get__multiplyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColor;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__multiplyColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColor = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__colorMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__colorMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMultiplier;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__colorMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMultiplier = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithId::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithId::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::MaterialLightWithId::__get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithId::__get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialLightWithId::__set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialLightWithId::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialLightWithId::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get>();
}
inline ::UnityEngine::Color GlobalNamespace::MaterialLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "get_color",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::MaterialLightWithId* GlobalNamespace::MaterialLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialLightWithId*>());
}
inline void GlobalNamespace::MaterialLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialLightWithId::MaterialLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
