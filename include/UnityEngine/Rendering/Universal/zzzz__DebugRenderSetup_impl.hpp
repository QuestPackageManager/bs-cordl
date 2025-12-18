#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRenderSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRenderSetup_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsLighting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_MaterialSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* (
    ::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::get_MaterialSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6699948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                               "get_MaterialSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_RenderingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* (
    ::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::get_RenderingSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x669996c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                               "get_RenderingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.get_LightingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* (
    ::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::get_LightingSettings)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6699990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                               "get_LightingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.Begin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::Begin)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66997ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::End)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66998d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "End", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler*, int32_t, ::UnityEngine::Rendering::FilteringSettings)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6698ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::CullingResults>, ::ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ::ByRef<::UnityEngine::Rendering::FilteringSettings>, ::ByRef<::UnityEngine::Rendering::RenderStateBlock>, ::ByRef<::UnityEngine::Rendering::RendererList>)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x66999b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::CullingResults>, ::ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ::ByRef<::UnityEngine::Rendering::FilteringSettings>, ::ByRef<::UnityEngine::Rendering::RenderStateBlock>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6699ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.DrawWithRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::ByRef<::UnityEngine::Rendering::RendererList>)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::DrawWithRendererList)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x669981c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "DrawWithRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.CreateDrawingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DrawingSettings (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::DrawingSettings)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::CreateDrawingSettings)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6699060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateDrawingSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.GetRenderStateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderStateBlock (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)(
    ::UnityEngine::Rendering::RenderStateBlock)>(&::UnityEngine::Rendering::Universal::DebugRenderSetup::GetRenderStateBlock)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x66991c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "GetRenderStateBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.GetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::GetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6699be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                               "GetIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRenderSetup.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRenderSetup::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRenderSetup::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669905c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_DebugHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_DebugHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_get_m_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Index;
}
constexpr void UnityEngine::Rendering::Universal::DebugRenderSetup::__cordl_internal_set_m_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Index = value;
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* UnityEngine::Rendering::Universal::DebugRenderSetup::get_MaterialSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                             "get_MaterialSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugRenderSetup::get_RenderingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                             "get_RenderingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* UnityEngine::Rendering::Universal::DebugRenderSetup::get_LightingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                             "get_LightingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::Begin(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::End(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "End", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, int32_t index,
                                                                       ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugHandler, index, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                    ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                    ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                    ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock,
                                                                                    ::ByRef<::UnityEngine::Rendering::RendererList> rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cullResults, drawingSettings, filteringSettings, renderStateBlock, rendererList);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::CreateRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                    ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                    ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                    ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock,
                                                                                    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererListHdl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cullResults, drawingSettings, filteringSettings, renderStateBlock, rendererListHdl);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                      ::ByRef<::UnityEngine::Rendering::RendererList> rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "DrawWithRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererList>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, rendererList);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::DebugRenderSetup::CreateDrawingSettings(::UnityEngine::Rendering::DrawingSettings drawingSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "CreateDrawingSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawingSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings, false>(this, ___internal_method, drawingSettings);
}
inline ::UnityEngine::Rendering::RenderStateBlock UnityEngine::Rendering::Universal::DebugRenderSetup::GetRenderStateBlock(::UnityEngine::Rendering::RenderStateBlock renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(), "GetRenderStateBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateBlock, false>(this, ___internal_method, renderStateBlock);
}
inline int32_t UnityEngine::Rendering::Universal::DebugRenderSetup::GetIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                             "GetIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRenderSetup::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRenderSetup*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugRenderSetup* UnityEngine::Rendering::Universal::DebugRenderSetup::New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                                                            int32_t index,
                                                                                                                            ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugRenderSetup*>(debugHandler, index, filteringSettings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::DebugRenderSetup::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::DebugRenderSetup::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugRenderSetup::DebugRenderSetup() {}
