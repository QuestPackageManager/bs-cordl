#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugDisplaySettingsUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsUI_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675c148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0._RegisterDebug_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::*)(::UnityEngine::Rendering::IDebugDisplaySettingsData*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::_RegisterDebug_b__0)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x675c524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*>(),
                                                                                           { "<RegisterDebug>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugDisplaySettingsData*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugManager*& UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_get_debugManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugManager;
}
constexpr ::UnityEngine::Rendering::DebugManager* const& UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_get_debugManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugManager;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_set_debugManager(::UnityEngine::Rendering::DebugManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>*&
UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_get_panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panels;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* const&
UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_get_panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panels;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::__cordl_internal_set_panels(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panels = value;
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::_RegisterDebug_b__0(::UnityEngine::Rendering::IDebugDisplaySettingsData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*>(),
                                                                                         { "<RegisterDebug>b__0", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugDisplaySettingsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0* UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI___c__DisplayClass3_0::DebugDisplaySettingsUI___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsUI::Reset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x675b888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI.RegisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI::*)(::UnityEngine::Rendering::IDebugDisplaySettings*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsUI::RegisterDebug)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x675be40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(),
                                                                                           { "RegisterDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugDisplaySettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI.UnregisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsUI::UnregisterDebug)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x675b97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "UnregisterDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI.GetReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::Rendering::DebugDisplaySettingsUI::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsUI::GetReset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x675c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "GetReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsUI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsUI::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsUI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675c520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>*&
UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_get_m_DisposablePanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposablePanels;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* const&
UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_get_m_DisposablePanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposablePanels;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_set_m_DisposablePanels(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisposablePanels = value;
}
constexpr ::UnityEngine::Rendering::IDebugDisplaySettings*& UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::IDebugDisplaySettings* const& UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::DebugDisplaySettingsUI::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::IDebugDisplaySettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI::RegisterDebug(::UnityEngine::Rendering::IDebugDisplaySettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(),
                                                                                         { "RegisterDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::IDebugDisplaySettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI::UnregisterDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "UnregisterDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::Rendering::DebugDisplaySettingsUI::GetReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { "GetReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsUI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsUI* UnityEngine::Rendering::DebugDisplaySettingsUI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsUI*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugData"
constexpr UnityEngine::Rendering::DebugDisplaySettingsUI::operator ::UnityEngine::Rendering::IDebugData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugData"
constexpr ::UnityEngine::Rendering::IDebugData* UnityEngine::Rendering::DebugDisplaySettingsUI::i___UnityEngine__Rendering__IDebugData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI::DebugDisplaySettingsUI() {}
