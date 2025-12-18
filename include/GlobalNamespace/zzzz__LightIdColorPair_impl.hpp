#pragma once
// IWYU pragma private; include "GlobalNamespace/LightIdColorPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightIdColorPair_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.get_lightColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightIdColorPair::*)()>(
    &::GlobalNamespace::LightIdColorPair::get_lightColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x588109c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), "get_lightColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.get_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LightIdColorPair::*)()>(
    &::GlobalNamespace::LightIdColorPair::get_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58810dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(),
                                                                               "get_useScriptableObjectColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair.set_useScriptableObjectColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightIdColorPair::*)(bool)>(
    &::GlobalNamespace::LightIdColorPair::set_useScriptableObjectColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58810e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), "set_useScriptableObjectColor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightIdColorPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightIdColorPair::*)()>(&::GlobalNamespace::LightIdColorPair::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58810ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightIdColorPair::__cordl_internal_get_lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightId = value;
}
constexpr bool& GlobalNamespace::LightIdColorPair::__cordl_internal_get__useScriptableObjectColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr bool const& GlobalNamespace::LightIdColorPair::__cordl_internal_get__useScriptableObjectColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColor;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set__useScriptableObjectColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightIdColorPair::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::LightIdColorPair::__cordl_internal_get_baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_baseColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::LightIdColorPair::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::LightIdColorPair::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::LightIdColorPair::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
inline ::UnityEngine::Color GlobalNamespace::LightIdColorPair::get_lightColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), "get_lightColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LightIdColorPair::get_useScriptableObjectColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(),
                                                                             "get_useScriptableObjectColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightIdColorPair::set_useScriptableObjectColor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), "set_useScriptableObjectColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightIdColorPair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightIdColorPair*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightIdColorPair* GlobalNamespace::LightIdColorPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightIdColorPair*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightIdColorPair::LightIdColorPair() {}
