#pragma once
// IWYU pragma private; include "GlobalNamespace/InstancedMaterialLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::InstancedMaterialLightWithId_MultiplyColorByAlphaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::InstancedMaterialLightWithId_MultiplyColorByAlphaType() {}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::BeforeApplyingMinAlpha{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::AfterApplyingMinAlpha{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(
    &::GlobalNamespace::InstancedMaterialLightWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5658ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                               "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(float_t)>(
    &::GlobalNamespace::InstancedMaterialLightWithId::set_intensity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5658cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), "set_intensity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5658d08;

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
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5658ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                               "AddNecessaryComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(
    &::GlobalNamespace::InstancedMaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5658eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__materialPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__materialPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__materialPropertyBlockColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockColorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__saturateIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturateIntensity;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__saturateIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturateIntensity;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__saturateIntensity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saturateIntensity = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hdr;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hdr;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hdr = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__originalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__originalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__originalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__startColorWasSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColorWasSet;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__startColorWasSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColorWasSet;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__startColorWasSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startColorWasSet = value;
}
inline float_t GlobalNamespace::InstancedMaterialLightWithId::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                             "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), "set_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(),
                                                                             "AddNecessaryComponents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InstancedMaterialLightWithId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InstancedMaterialLightWithId* GlobalNamespace::InstancedMaterialLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InstancedMaterialLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstancedMaterialLightWithId::InstancedMaterialLightWithId() {}
