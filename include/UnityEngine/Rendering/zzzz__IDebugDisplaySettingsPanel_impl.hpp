#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\IDebugDisplaySettingsPanel.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettingsPanel.get_Widgets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> (::UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Widgets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDebugDisplaySettingsPanel.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::UnityEngine::Rendering::IDebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Flags)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_PanelName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Widgets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::IDebugDisplaySettingsPanel::get_Flags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
