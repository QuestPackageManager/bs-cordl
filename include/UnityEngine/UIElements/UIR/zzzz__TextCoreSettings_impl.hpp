#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\TextCoreSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::TextCoreSettings::*)(::System::Object*)>(&::UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6cf2158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), { ::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::TextCoreSettings::*)(::UnityEngine::UIElements::UIR::TextCoreSettings)>(
    &::UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cf21ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextCoreSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::TextCoreSettings::*)()>(&::UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6cf22e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), { ::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(::UnityEngine::UIElements::UIR::TextCoreSettings other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::TextCoreSettings>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
constexpr UnityEngine::UIElements::UIR::TextCoreSettings::operator ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*
UnityEngine::UIElements::UIR::TextCoreSettings::i___System__IEquatable_1___UnityEngine__UIElements__UIR__TextCoreSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "faceColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "outlineColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlayColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "underlayOffset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::TextCoreSettings::TextCoreSettings(::UnityEngine::Color faceColor, ::UnityEngine::Color outlineColor, float_t outlineWidth,
                                                                             ::UnityEngine::Color underlayColor, ::UnityEngine::Vector2 underlayOffset, float_t underlaySoftness) noexcept {
  this->faceColor = faceColor;
  this->outlineColor = outlineColor;
  this->outlineWidth = outlineWidth;
  this->underlayColor = underlayColor;
  this->underlayOffset = underlayOffset;
  this->underlaySoftness = underlaySoftness;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TextCoreSettings::TextCoreSettings() {}
