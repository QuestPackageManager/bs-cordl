#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x210f27c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.AddNecessaryComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(
    &::GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x210f2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                               "AddNecessaryComponents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(
    &::GlobalNamespace::InstancedMaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210f400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& GlobalNamespace::InstancedMaterialLightWithId::__get__materialPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const&
GlobalNamespace::InstancedMaterialLightWithId::__get__materialPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__materialPropertyBlockColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockColorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setColorOnly = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minAlpha = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hdr;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hdr;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____hdr = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____color = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__get__startColorWasSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startColorWasSet;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__get__startColorWasSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startColorWasSet;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__set__startColorWasSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startColorWasSet = value;
}
inline void GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), "ColorWasSet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                             "AddNecessaryComponents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InstancedMaterialLightWithId* GlobalNamespace::InstancedMaterialLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::InstancedMaterialLightWithId*>());
}
inline void GlobalNamespace::InstancedMaterialLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstancedMaterialLightWithId::InstancedMaterialLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
