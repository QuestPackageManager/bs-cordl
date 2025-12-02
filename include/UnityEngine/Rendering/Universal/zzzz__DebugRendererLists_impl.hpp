#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRendererLists.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRendererLists_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRenderSetup_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler*, ::UnityEngine::Rendering::FilteringSettings)>(&::UnityEngine::Rendering::Universal::DebugRendererLists::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x662ffe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateDebugRenderSetups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(::UnityEngine::Rendering::FilteringSettings)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateDebugRenderSetups)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x66311e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateDebugRenderSetups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.DisposeDebugRenderLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)()>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::DisposeDebugRenderLists)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6631348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(),
                                                                               "DisposeDebugRenderLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::CullingResults>, ::ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ::ByRef<::UnityEngine::Rendering::FilteringSettings>, ::ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6630114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateRendererListsWithDebugRenderState",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::CullingResults>, ::ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ::ByRef<::UnityEngine::Rendering::FilteringSettings>, ::ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6630578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateRendererListsWithDebugRenderState",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.PrepareRendererListForRasterPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*)>(&::UnityEngine::Rendering::Universal::DebugRendererLists::PrepareRendererListForRasterPass)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x663184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "PrepareRendererListForRasterPass",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugRendererLists.DrawWithRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugRendererLists::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DebugRendererLists::DrawWithRendererList)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x66319e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "DrawWithRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugHandler;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugRenderSetups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderSetups;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_DebugRenderSetups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderSetups;
}
constexpr void
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_DebugRenderSetups(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugRenderSetups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*& UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererList;
}
constexpr void
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_ActiveDebugRendererList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveDebugRendererList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererListHdl;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const&
UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_get_m_ActiveDebugRendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveDebugRendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::DebugRendererLists::__cordl_internal_set_m_ActiveDebugRendererListHdl(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveDebugRendererListHdl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                         ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugHandler, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateDebugRenderSetups(::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateDebugRenderSetups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FilteringSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filteringSettings);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::DisposeDebugRenderLists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(),
                                                                             "DisposeDebugRenderLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                           ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                           ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                           ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                           ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateRendererListsWithDebugRenderState",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, cullResults, drawingSettings, filteringSettings, renderStateBlock);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                           ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                           ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                           ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                           ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "CreateRendererListsWithDebugRenderState",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cullResults, drawingSettings, filteringSettings, renderStateBlock);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::PrepareRendererListForRasterPass(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "PrepareRendererListForRasterPass",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
inline void UnityEngine::Rendering::Universal::DebugRendererLists::DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugRendererLists*>::get(), "DrawWithRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DebugRendererLists* UnityEngine::Rendering::Universal::DebugRendererLists::New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                                                                ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugRendererLists*>(debugHandler, filteringSettings));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists::DebugRendererLists() {}
