#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsPanel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__DisplayInfoAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6755cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Order)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6755d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.get_Widgets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Widgets)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6755d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { "get_Widgets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Flags (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6755d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.AddWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)(::UnityEngine::Rendering::DebugUI_Widget*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsPanel::AddWidget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6755d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(),
                                                                                           { "AddWidget", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsPanel::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6755e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsPanel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6755f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6755f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*& UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_get_m_Widgets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Widgets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* const& UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_get_m_Widgets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Widgets;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_set_m_Widgets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Widgets = value;
}
constexpr ::UnityEngine::Rendering::DisplayInfoAttribute*& UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_get_m_DisplayInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayInfo;
}
constexpr ::UnityEngine::Rendering::DisplayInfoAttribute* const& UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_get_m_DisplayInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayInfo;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsPanel::__cordl_internal_set_m_DisplayInfo(::UnityEngine::Rendering::DisplayInfoAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayInfo = value;
}
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsPanel::get_PanelName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Order() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*> UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Widgets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { "get_Widgets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugUI_Flags UnityEngine::Rendering::DebugDisplaySettingsPanel::get_Flags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Flags>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsPanel::AddWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { "AddWidget", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Widget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsPanel::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsPanel::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsPanel* UnityEngine::Rendering::DebugDisplaySettingsPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsPanel*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable"
constexpr UnityEngine::Rendering::DebugDisplaySettingsPanel::operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*
UnityEngine::Rendering::DebugDisplaySettingsPanel::i___UnityEngine__Rendering__IDebugDisplaySettingsPanelDisposable() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
constexpr UnityEngine::Rendering::DebugDisplaySettingsPanel::operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanel*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanel* UnityEngine::Rendering::DebugDisplaySettingsPanel::i___UnityEngine__Rendering__IDebugDisplaySettingsPanel() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::DebugDisplaySettingsPanel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::DebugDisplaySettingsPanel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsPanel::DebugDisplaySettingsPanel() {}
