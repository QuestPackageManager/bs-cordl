#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientFromColorSchemeColors.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientFromColorSchemeColors_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientFromColorSchemeColors_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientFromColorSchemeColors_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentColorProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor() {}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor
    GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::Color0{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor
    GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::Color1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor
    GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::Color0Boost{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor
    GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor::Color1Boost{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::*)()>(
    &::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aa9a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_loadFromColorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadFromColorScheme;
}
constexpr bool const& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_loadFromColorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadFromColorScheme;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_set_loadFromColorScheme(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadFromColorScheme = value;
}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor&
GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_environmentColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor;
}
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor const&
GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_environmentColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_set_environmentColor(
    ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__EnvironmentColor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor = value;
}
constexpr float_t& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element* GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>());
}
inline void GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x3aa9790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3aa9a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3aa9b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(),
                                                 "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors.HandleColorProviderDidChangeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::HandleColorProviderDidChangeColor)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3aa9c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(),
                                                 "HandleColorProviderDidChangeColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>&
GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_set__bloomPrePassBackgroundColorsGradient(
    ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassBackgroundColorsGradient)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                   ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>&
GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
                   ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_set__elements(
    ::ArrayW<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*,
             ::Array<::GlobalNamespace::__BloomPrePassBackgroundColorsGradientFromColorSchemeColors__Element*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IEnvironmentColorProvider*& GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__colorProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentColorProvider*> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_get__colorProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorProvider;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::__cordl_internal_set__colorProvider(::GlobalNamespace::IEnvironmentColorProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors* GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(),
                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::HandleColorProviderDidChangeColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors*>::get(),
                                               "HandleColorProviderDidChangeColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::BloomPrePassBackgroundColorsGradientFromColorSchemeColors() {}
