#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair.get_lightColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::*)()>(
    &::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::get_lightColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22044a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>::get(), "get_lightColor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::*)()>(
    &::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22044d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr void GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__set_lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightId = value;
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseColor;
}
constexpr void GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__set_baseColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
inline ::UnityEngine::Color GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::get_lightColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>::get(),
                                                                             "get_lightColor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair* GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>());
}
inline void GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair::__MenuLightsPresetSO__LightIdColorPair() {}
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.get_playersPlaceNeonsColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSO* (::GlobalNamespace::MenuLightsPresetSO::*)()>(
    &::GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                               "get_playersPlaceNeonsColor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.get_playersPlaceNeonsIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MenuLightsPresetSO::*)()>(
    &::GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                               "get_playersPlaceNeonsIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO.get_lightIdColorPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> (::GlobalNamespace::MenuLightsPresetSO::*)()>(
    &::GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                               "get_lightIdColorPairs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuLightsPresetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuLightsPresetSO::*)()>(&::GlobalNamespace::MenuLightsPresetSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2204498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::MenuLightsPresetSO::__get__playersPlaceNeonsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPlaceNeonsColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::MenuLightsPresetSO::__get__playersPlaceNeonsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPlaceNeonsColor;
}
constexpr void GlobalNamespace::MenuLightsPresetSO::__set__playersPlaceNeonsColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersPlaceNeonsColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MenuLightsPresetSO::__get__playersPlaceNeonsIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPlaceNeonsIntensity;
}
constexpr float_t const& GlobalNamespace::MenuLightsPresetSO::__get__playersPlaceNeonsIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersPlaceNeonsIntensity;
}
constexpr void GlobalNamespace::MenuLightsPresetSO::__set__playersPlaceNeonsIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersPlaceNeonsIntensity = value;
}
constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*>&
GlobalNamespace::MenuLightsPresetSO::__get__lightIdColorPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> const&
GlobalNamespace::MenuLightsPresetSO::__get__lightIdColorPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIdColorPairs;
}
constexpr void GlobalNamespace::MenuLightsPresetSO::__set__lightIdColorPairs(
    ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIdColorPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ColorSO* GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                             "get_playersPlaceNeonsColor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSO*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::MenuLightsPresetSO::get_playersPlaceNeonsIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                             "get_playersPlaceNeonsIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*>
GlobalNamespace::MenuLightsPresetSO::get_lightIdColorPairs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(),
                                                                             "get_lightIdColorPairs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*, ::Array<::GlobalNamespace::__MenuLightsPresetSO__LightIdColorPair*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::MenuLightsPresetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuLightsPresetSO*>());
}
inline void GlobalNamespace::MenuLightsPresetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuLightsPresetSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuLightsPresetSO::MenuLightsPresetSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
