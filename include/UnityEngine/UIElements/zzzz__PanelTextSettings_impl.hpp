#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PanelTextSettings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelTextSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.get_defaultPanelTextSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::PanelTextSettings> (*)()>(&::UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ca3d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { "get_defaultPanelTextSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings.InitializeDefaultPanelTextSettingsIfNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::PanelTextSettings::InitializeDefaultPanelTextSettingsIfNull)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ca3d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { "InitializeDefaultPanelTextSettingsIfNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelTextSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PanelTextSettings::*)()>(&::UnityEngine::UIElements::PanelTextSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PanelTextSettings::setStaticF_s_DefaultPanelTextSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, "s_DefaultPanelTextSettings", ::UnityEngine::UIElements::PanelTextSettings*>(
      std::forward<::UnityW<::UnityEngine::UIElements::PanelTextSettings>>(value));
}
inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> UnityEngine::UIElements::PanelTextSettings::getStaticF_s_DefaultPanelTextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::UIElements::PanelTextSettings>, "s_DefaultPanelTextSettings", ::UnityEngine::UIElements::PanelTextSettings*>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> UnityEngine::UIElements::PanelTextSettings::get_defaultPanelTextSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { "get_defaultPanelTextSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelTextSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelTextSettings::InitializeDefaultPanelTextSettingsIfNull() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { "InitializeDefaultPanelTextSettingsIfNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::PanelTextSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PanelTextSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PanelTextSettings* UnityEngine::UIElements::PanelTextSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PanelTextSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PanelTextSettings::PanelTextSettings() {}
