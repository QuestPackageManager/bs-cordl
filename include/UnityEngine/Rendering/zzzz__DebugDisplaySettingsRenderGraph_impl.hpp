#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugDisplaySettingsRenderGraph.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsRenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsRenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67a2d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::*)(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*)>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x67a28fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::get_PanelName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::_ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*
UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(_));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::DebugDisplaySettingsRenderGraph_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x67a2728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67a28a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67a2bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { "get_AreAnySettingsActive", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>(), { "get_AreAnySettingsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::DebugDisplaySettingsRenderGraph() {}
