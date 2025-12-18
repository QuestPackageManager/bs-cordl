#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalForwardEmissivePass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalForwardEmissivePass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawFowardEmissiveSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalForwardEmissivePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669ec08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_get_drawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const& UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_get_drawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___drawSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData::DecalForwardEmissivePass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669f774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c._RecordRenderGraph_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::*)(
    ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::_RecordRenderGraph_b__10_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x669f778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get(), "<RecordRenderGraph>b__10_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::setStaticF___9__10_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::_RecordRenderGraph_b__10_0(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>::get(), "<RecordRenderGraph>b__10_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c::DecalForwardEmissivePass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(
    ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*)>(&::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x669e92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::Execute)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x669ec0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>)>(&::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::InitPassData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x669ee74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass.InitRendererListParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::InitRendererListParams)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x669ee90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "InitRendererListParams",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::ExecutePass)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x669efc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x669f024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void
UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShaderTagIdList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_DrawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_DrawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* const& UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::_ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, drawSystem);
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                 ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::InitPassData(::ByRef<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*> passData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::DecalForwardEmissivePass::InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "InitRendererListParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams, false>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                     ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* passData,
                                                                                     ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DecalForwardEmissivePass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*
UnityEngine::Rendering::Universal::DecalForwardEmissivePass::New_ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*>(drawSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass::DecalForwardEmissivePass() {}
