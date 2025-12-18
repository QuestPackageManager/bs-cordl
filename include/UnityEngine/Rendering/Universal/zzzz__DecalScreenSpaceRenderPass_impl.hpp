#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalScreenSpaceRenderPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawScreenSpaceSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66aa748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_drawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_drawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___drawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___drawSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_isGLDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGLDevice;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_isGLDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGLDevice;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_isGLDevice(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isGLDevice = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_colorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_colorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorTarget = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData::DecalScreenSpaceRenderPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ab794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c._RecordRenderGraph_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::*)(
    ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_RecordRenderGraph_b__12_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x66ab798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get(), "<RecordRenderGraph>b__12_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::setStaticF___9__12_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::_RecordRenderGraph_b__12_0(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* data,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>::get(), "<RecordRenderGraph>b__12_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c::DecalScreenSpaceRenderPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*, bool)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x66aa4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.CreateRenderListParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::CreateRenderListParams)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x66aa74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "CreateRenderListParams",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::Execute)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x66aa878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::ByRef<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::InitPassData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66aab50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*, ::UnityEngine::Rendering::RendererList)>(
        &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x66aac04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x66aad7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x66ab654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShaderTagIdList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DrawSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DrawSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSystem;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DrawSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DecalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_DecalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_DecalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* const& UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                 ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, drawSystem, decalLayers);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::CreateRenderListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "CreateRenderListParams",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams, false>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                   ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                        ::ByRef<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*> passData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, passData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                       ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* passData,
                                                                                       ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RendererList>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*
UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                        ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*>(settings, drawSystem, decalLayers));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass::DecalScreenSpaceRenderPass() {}
