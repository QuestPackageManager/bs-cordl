#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalPreviewPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalPreviewPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalPreviewPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669fbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData::DecalPreviewPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DecalPreviewPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66a0824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass___c._RecordRenderGraph_b__8_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass___c::*)(
    ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DecalPreviewPass___c::_RecordRenderGraph_b__8_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66a0828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get(), "<RecordRenderGraph>b__8_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalPreviewPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DecalPreviewPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalPreviewPass___c* UnityEngine::Rendering::Universal::DecalPreviewPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass___c::setStaticF___9__8_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DecalPreviewPass___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass___c::_RecordRenderGraph_b__8_0(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* data,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>::get(), "<RecordRenderGraph>b__8_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DecalPreviewPass___c* UnityEngine::Rendering::Universal::DecalPreviewPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalPreviewPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass___c::DecalPreviewPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass::*)()>(
    &::UnityEngine::Rendering::Universal::DecalPreviewPass::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x669f9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DecalPreviewPass::Execute)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x669fbfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DecalPreviewPass::ExecutePass)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x669ff70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalPreviewPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalPreviewPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DecalPreviewPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x669ffa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShaderTagIdList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* const& UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DecalPreviewPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                         ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                             ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* passData,
                                                                             ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DecalPreviewPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                   ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalPreviewPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::DecalPreviewPass* UnityEngine::Rendering::Universal::DecalPreviewPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalPreviewPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass::DecalPreviewPass() {}
