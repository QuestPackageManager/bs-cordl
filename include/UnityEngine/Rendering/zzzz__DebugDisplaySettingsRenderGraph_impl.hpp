#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsRenderGraph.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsRenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsRenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x658405c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::*)(
    ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*)>(&::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6583c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::get_PanelName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::_ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*
UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*>(_));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel::DebugDisplaySettingsRenderGraph_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6583a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (
    ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(&::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6583bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(),
                                                 "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::*)()>(
    &::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6583ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(), "get_AreAnySettingsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(),
                                               "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::get_AreAnySettingsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>::get(),
                                                                             "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* UnityEngine::Rendering::DebugDisplaySettingsRenderGraph::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*>());
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
