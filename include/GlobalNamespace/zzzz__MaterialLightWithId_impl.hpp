#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MaterialLightWithId::*)()>(
    &::GlobalNamespace::MaterialLightWithId::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39e6be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "get_color",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x39e6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x39e6c6c;

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
  constexpr static std::size_t addrs = 0x39e6df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alphaIntoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alphaIntoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__alphaIntoColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaIntoColor = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__colorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__colorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__colorProperty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alphaIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntensity;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alphaIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntensity;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__alphaIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaIntensity = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__multiplyColorWithAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorWithAlpha;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__multiplyColorWithAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorWithAlpha;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__multiplyColorWithAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorWithAlpha = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__multiplyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__multiplyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColor;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__multiplyColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColor = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__colorMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__colorMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorMultiplier;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__colorMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorMultiplier = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithId::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialLightWithId::__cordl_internal_set__propertyId(int32_t value) {
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
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::MaterialLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialLightWithId* GlobalNamespace::MaterialLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MaterialLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialLightWithId::MaterialLightWithId() {}
