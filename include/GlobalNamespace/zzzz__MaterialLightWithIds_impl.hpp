#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialLightWithIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x39e96bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MaterialLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x39e9740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x39e9884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__alphaIntoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__alphaIntoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaIntoColor;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__alphaIntoColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaIntoColor = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__colorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__colorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProperty;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__colorProperty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithIds::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialLightWithIds::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialLightWithIds::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>();
}
inline void GlobalNamespace::MaterialLightWithIds::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::MaterialLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialLightWithIds* GlobalNamespace::MaterialLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MaterialLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialLightWithIds::MaterialLightWithIds() {}
