#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraph.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassAttachment_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__NativePassCompiler_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IComputeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRasterRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ImportResourceParams_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphBuilders_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDebugParams_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphParameters_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTargetInfo_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowDrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__UISubset_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x67d55a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "consumers", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "imported", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo::RenderGraph_CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>* producers,
                                                                                                                          ::System::Collections::Generic::List_1<int32_t>* consumers, int32_t refCount,
                                                                                                                          bool imported) noexcept {
  this->producers = producers;
  this->consumers = consumers;
  this->refCount = refCount;
  this->imported = imported;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo::RenderGraph_CompiledResourceInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo::Reset)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67d5688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>(),
                                                             { "Reset", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo::Reset(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>(),
                                                           { "Reset", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pass, index);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "resourceReleaseList", ty:
// "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fence", ty: "::UnityEngine::Rendering::GraphicsFence", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "allowPassCulling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "culled",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "culledByRendererList", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasSideEffect", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "enableFoveatedRasterization", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo::RenderGraph_CompiledPassInfo(
    ::StringW name, int32_t index, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceCreateList, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceReleaseList,
    ::UnityEngine::Rendering::GraphicsFence fence, int32_t refCount, int32_t syncToPassIndex, int32_t syncFromPassIndex, bool enableAsyncCompute, bool allowPassCulling, bool needGraphicsFence,
    bool culled, bool culledByRendererList, bool hasSideEffect, bool enableFoveatedRasterization) noexcept {
  this->name = name;
  this->index = index;
  this->resourceCreateList = resourceCreateList;
  this->resourceReleaseList = resourceReleaseList;
  this->fence = fence;
  this->refCount = refCount;
  this->syncToPassIndex = syncToPassIndex;
  this->syncFromPassIndex = syncFromPassIndex;
  this->enableAsyncCompute = enableAsyncCompute;
  this->allowPassCulling = allowPassCulling;
  this->needGraphicsFence = needGraphicsFence;
  this->culled = culled;
  this->culledByRendererList = culledByRendererList;
  this->hasSideEffect = hasSideEffect;
  this->enableFoveatedRasterization = enableFoveatedRasterization;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo::RenderGraph_CompiledPassInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x67d589c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::Clear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67d59e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph.InitResourceInfosData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::*)(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::InitResourceInfosData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x67d5a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(),
                                                { "InitResourceInfosData",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>(),
                                                    ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph.InitializeCompilationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::InitializeCompilationData)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x67d5b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(),
                                                             { "InitializeCompilationData",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_compiledResourcesInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledResourcesInfos;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_compiledResourcesInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledResourcesInfos;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_set_compiledResourcesInfos(
    ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compiledResourcesInfos = value;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_compiledPassInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledPassInfos;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_compiledPassInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compiledPassInfos;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_set_compiledPassInfos(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compiledPassInfos = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_lastExecutionFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastExecutionFrame;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_get_lastExecutionFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastExecutionFrame;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::__cordl_internal_set_lastExecutionFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastExecutionFrame = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::InitResourceInfosData(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>* resourceInfos, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(),
                       { "InitResourceInfosData",
                         {},
                         { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceInfos, count);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::InitializeCompilationData(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* passes,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(),
                                                           { "InitializeCompilationData",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passes, resources);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
constexpr UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::operator ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph"
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*
UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::i___UnityEngine__Rendering__RenderGraphModule__RenderGraph_ICompiledGraph() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ICompiledGraph*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph::RenderGraph_CompiledGraph() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d5d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::__cordl_internal_get_sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::__cordl_internal_get_sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::__cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampler = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData::RenderGraph_ProfilingScopePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x67d5d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67d5e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67d5ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67d5ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::Invoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, graph, callback, object);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*
UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate::RenderGraph_OnGraphRegisteredDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x67d5ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::StringW)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67d601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                                    ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67d6030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67d6058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::Invoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, executionName);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::BeginInvoke(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                                                                 ::StringW executionName, ::System::AsyncCallback* callback,
                                                                                                                                 ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, graph, executionName, callback, object);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*
UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate::RenderGraph_OnExecutionRegisteredDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d63f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_resourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceName;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_resourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceName;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_resourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceName = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_loadReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadReason;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_loadReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadReason;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_loadReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadReason = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_storeReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeReason;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_storeReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeReason;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_storeReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storeReason = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_storeMsaaReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeMsaaReason;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_storeMsaaReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storeMsaaReason;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_storeMsaaReason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storeMsaaReason = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_attachmentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachmentIndex;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_attachmentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachmentIndex;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_attachmentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attachmentIndex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_attachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachment;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment const&
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_get_attachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachment;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::__cordl_internal_set_attachment(
    ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassAttachment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attachment = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*
UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo::
    NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo() {}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCompatible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo::
    NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo(::StringW message, bool isCompatible) noexcept {
  this->message = message;
  this->isCompatible = isCompatible;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo::
    NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d63ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_passBreakReasoning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passBreakReasoning;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_passBreakReasoning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passBreakReasoning;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_set_passBreakReasoning(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passBreakReasoning = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>*&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_attachmentInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachmentInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* const&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_attachmentInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attachmentInfos;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_set_attachmentInfos(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_AttachmentInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attachmentInfos = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>*&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_passCompatibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passCompatibility;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* const&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_passCompatibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passCompatibility;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_set_passCompatibility(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassInfo_NRPInfo_PassData_DebugData_RenderGraph_PassCompatibilityInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passCompatibility = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_mergedPassIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergedPassIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const&
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_get_mergedPassIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mergedPassIds;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::__cordl_internal_set_mergedPassIds(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mergedPassIds = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*
UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x67d6358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo*&
UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_nativePassInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativePassInfo;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* const&
UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_nativePassInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativePassInfo;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_nativePassInfo(
    ::UnityEngine::Rendering::RenderGraphModule::NRPInfo_PassData_DebugData_RenderGraph_NativeRenderPassInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativePassInfo = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_textureFBFetchList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFBFetchList;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_textureFBFetchList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFBFetchList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_textureFBFetchList(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureFBFetchList = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_setGlobals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGlobals;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_setGlobals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGlobals;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_setGlobals(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setGlobals = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_volumeDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeDepth;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_volumeDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumeDepth;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_volumeDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumeDepth = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_samples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samples = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_hasDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDepth;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_get_hasDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDepth;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::__cordl_internal_set_hasDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDepth = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo::PassData_DebugData_RenderGraph_NRPInfo() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "resourceReadLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "resourceWriteLists", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "culled", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeSubPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "generateDebugData", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nrpInfo", ty:
// "::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "scriptInfo", ty:
// "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData::DebugData_RenderGraph_PassData(
    ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type, ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceReadLists,
    ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> resourceWriteLists, bool culled, bool async, int32_t nativeSubPassIndex, int32_t syncToPassIndex, int32_t syncFromPassIndex,
    bool generateDebugData, ::UnityEngine::Rendering::RenderGraphModule::PassData_DebugData_RenderGraph_NRPInfo* nrpInfo,
    ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo* scriptInfo) noexcept {
  this->name = name;
  this->type = type;
  this->resourceReadLists = resourceReadLists;
  this->resourceWriteLists = resourceWriteLists;
  this->culled = culled;
  this->async = async;
  this->nativeSubPassIndex = nativeSubPassIndex;
  this->syncToPassIndex = syncToPassIndex;
  this->syncFromPassIndex = syncFromPassIndex;
  this->generateDebugData = generateDebugData;
  this->nrpInfo = nrpInfo;
  this->scriptInfo = scriptInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData::DebugData_RenderGraph_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d63f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_stride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stride;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_stride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stride;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_set_stride(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stride = value;
}
constexpr ::UnityEngine::GraphicsBuffer_Target& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityEngine::GraphicsBuffer_Target const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_set_target(::UnityEngine::GraphicsBuffer_Target value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_usage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr ::UnityEngine::GraphicsBuffer_UsageFlags const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_get_usage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usage;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::__cordl_internal_set_usage(::UnityEngine::GraphicsBuffer_UsageFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usage = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData::DebugData_RenderGraph_BufferResourceData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d63f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_bindMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindMS;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_bindMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindMS;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_bindMS(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bindMS = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_samples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samples = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_format(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_clearBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearBuffer;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_get_clearBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearBuffer;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::__cordl_internal_set_clearBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearBuffer = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData::DebugData_RenderGraph_TextureResourceData() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "imported", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "creationPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "releasePassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "consumerList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "producerList", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "memoryless", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "textureData", ty: "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferData", ty:
// "::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData::DebugData_RenderGraph_ResourceData(
    ::StringW name, bool imported, int32_t creationPassIndex, int32_t releasePassIndex, ::System::Collections::Generic::List_1<int32_t>* consumerList,
    ::System::Collections::Generic::List_1<int32_t>* producerList, bool memoryless, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_TextureResourceData* textureData,
    ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_BufferResourceData* bufferData) noexcept {
  this->name = name;
  this->imported = imported;
  this->creationPassIndex = creationPassIndex;
  this->releasePassIndex = releasePassIndex;
  this->consumerList = consumerList;
  this->producerList = producerList;
  this->memoryless = memoryless;
  this->textureData = textureData;
  this->bufferData = bufferData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData::DebugData_RenderGraph_ResourceData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d63fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_get_filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filePath;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_get_filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filePath;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_set_filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filePath = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo* UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo::DebugData_RenderGraph_PassScriptInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x67d6064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::Clear)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x67d61c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_passList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_passList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_set_passList(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passList = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_resourceLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_resourceLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_set_resourceLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceLists = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_isNRPCompiler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNRPCompiler;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_get_isNRPCompiler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNRPCompiler;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::__cordl_internal_set_isNRPCompiler(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNRPCompiler = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::setStaticF_s_PassScriptMetadata(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>*,
                                    "s_PassScriptMetadata", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>*
UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::getStaticF_s_PassScriptMetadata() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_PassScriptInfo*>*,
                                           "s_PassScriptMetadata", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData::RenderGraph_DebugData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67d6454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c._BeginProfilingSampler_b__110_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_BeginProfilingSampler_b__110_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67d6458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(),
                                                                                           { "<BeginProfilingSampler>b__110_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c._EndProfilingSampler_b__111_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_EndProfilingSampler_b__111_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67d6498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(),
                                                                                           { "<EndProfilingSampler>b__111_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*, "<>9", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*, "<>9", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::setStaticF___9__110_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                    "<>9__110_0", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::getStaticF___9__110_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                           "<>9__110_0", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::setStaticF___9__111_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                    "<>9__111_0", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::getStaticF___9__111_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*,
                                           "<>9__111_0", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_BeginProfilingSampler_b__110_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(),
                                                                                         { "<BeginProfilingSampler>b__110_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::_EndProfilingSampler_b__111_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>(),
                                                                                         { "<EndProfilingSampler>b__111_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_ProfilingScopePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c* UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph___c::RenderGraph___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CompileNativeRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompileNativeRenderGraph)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x67cb930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CompileNativeRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ExecuteNativeRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteNativeRenderGraph)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x67cbc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ExecuteNativeRenderGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_nativeRenderPassesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_nativeRenderPassesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_nativeRenderPassesEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.set_nativeRenderPassesEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_nativeRenderPassesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_nativeRenderPassesEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.RequestCaptureDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::RequestCaptureDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "RequestCaptureDebugData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_isRenderGraphViewerActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_isRenderGraphViewerActive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67cbd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_isRenderGraphViewerActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.set_isRenderGraphViewerActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_isRenderGraphViewerActive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67cbdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_isRenderGraphViewerActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_enableValidityChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_enableValidityChecks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67cbe18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_enableValidityChecks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.set_enableValidityChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_enableValidityChecks)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67cbe74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_enableValidityChecks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_defaultResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_defaultResources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cbed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_defaultResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x67cbee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::Cleanup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67cc664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_debugParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_debugParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67cc774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_debugParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetWidgetList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetWidgetList)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67cc77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetWidgetList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.get_areAnySettingsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_areAnySettingsActive)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67cc798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_areAnySettingsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.RegisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::DebugUI_Panel*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::RegisterDebug)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67cc7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "RegisterDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UnRegisterDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UnRegisterDebug)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67cc800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UnRegisterDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetRegisteredRenderGraphs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetRegisteredRenderGraphs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67cc814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetRegisteredRenderGraphs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetDebugData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67cc870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetDebugData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.EndFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndFrame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67cc8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "EndFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67cc9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67cc9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                            { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67cca18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "ImportTexture",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RTHandle*, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67cca58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo, ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67cca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "ImportBackbuffer",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67ccad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "ImportBackbuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67ccb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateSharedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSharedTexture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67ccb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "CreateSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.RefreshSharedTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
                                                                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::RefreshSharedTextureDesc)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67ccbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "RefreshSharedTextureDesc",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ReleaseSharedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ReleaseSharedTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67ccbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "ReleaseSharedTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTexture)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67ccc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "CreateTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateTextureIfInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>,
                                                                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTextureIfInvalid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x67cccd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "CreateTextureIfInvalid",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetTextureDesc)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67cce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "GetTextureDesc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetRenderTargetInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetRenderTargetInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67cce60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "GetRenderTargetInfo", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67cceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RendererListParams>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67cced4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateShadowRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateShadowRendererList)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67ccef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateShadowRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateGizmoRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>, ::by_ref<::UnityEngine::Rendering::GizmoSubset>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateGizmoRendererList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67ccf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                            { "CreateGizmoRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GizmoSubset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67ccf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateUIOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>, ::by_ref<::UnityEngine::Rendering::UISubset>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateUIOverlayRendererList)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67ccfa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                            { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UISubset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateWireOverlayRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateWireOverlayRendererList)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67ccfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67cd010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67cd044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
            { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateSkyboxRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Camera*>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67cd0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "CreateSkyboxRendererList",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                    ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::GraphicsBuffer*, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67cd13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "ImportBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67be200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67cd164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetBufferDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferDesc (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetBufferDesc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67cd1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "GetBufferDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ImportRayTracingAccelerationStructure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>, ::StringW)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportRayTracingAccelerationStructure)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67cd1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                            { "ImportRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.BeginRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::BeginRecording)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x67cd220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "BeginRecording", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.EndRecordingAndExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndRecordingAndExecute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67cd718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "EndRecordingAndExecute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::Execute)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x67cd71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.BeginProfilingSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::ProfilingSampler*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::BeginProfilingSampler)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x67cde90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                         { "BeginProfilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.EndProfilingSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::ProfilingSampler*, ::StringW, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndProfilingSampler)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x67ce0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                         { "EndProfilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetCompiledPassInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetCompiledPassInfos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67ce2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetCompiledPassInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ClearCompiledGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67ce2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearCompiledGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ClearCompiledGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*, bool)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x67ce2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "ClearCompiledGraph", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.InvalidateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::InvalidateContext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67ce504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "InvalidateContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.OnPassAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::OnPassAdded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67ce520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "OnPassAdded", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.add_onGraphRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onGraphRegistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ce574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "add_onGraphRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.remove_onGraphRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onGraphRegistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ce664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "remove_onGraphRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.add_onGraphUnregistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onGraphUnregistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ce754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "add_onGraphUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.remove_onGraphUnregistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onGraphUnregistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ce844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "remove_onGraphUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.add_onExecutionRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onExecutionRegistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ce934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "add_onExecutionRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.remove_onExecutionRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionRegistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67cea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                         { "remove_onExecutionRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.add_onExecutionUnregistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onExecutionUnregistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67ceb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "add_onExecutionUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.remove_onExecutionUnregistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionUnregistered)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67cec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                         { "remove_onExecutionUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.add_onDebugDataCaptured
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onDebugDataCaptured)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67cecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "add_onDebugDataCaptured", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.remove_onDebugDataCaptured
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onDebugDataCaptured)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67cede4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "remove_onDebugDataCaptured", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ComputeGraphHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ComputeGraphHash)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67cd960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ComputeGraphHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CountReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CountReferences)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x67ceed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CountReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CullUnusedPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CullUnusedPasses)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x67cf588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CullUnusedPasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdatePassSynchronization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>, int32_t, int32_t,
    ::by_ref<int32_t>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdatePassSynchronization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x67cff7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "UpdatePassSynchronization",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdateResourceSynchronization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<int32_t>, ::by_ref<int32_t>, int32_t, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateResourceSynchronization)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x67cffa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "UpdateResourceSynchronization",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetFirstValidConsumerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    int32_t, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetFirstValidConsumerIndex)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67d0250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
            { "GetFirstValidConsumerIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.FindTextureProducer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    int32_t, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>, ::by_ref<int32_t>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::FindTextureProducer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x67d03ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "FindTextureProducer",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetLatestProducerIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    int32_t, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestProducerIndex)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x67d00e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                         { "GetLatestProducerIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetLatestValidReadIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestValidReadIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67d04d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "GetLatestValidReadIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetFirstValidWriteIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetFirstValidWriteIndex)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x67d05c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "GetFirstValidWriteIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetLatestValidWriteIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestValidWriteIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67d06cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "GetLatestValidWriteIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CreateRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererLists)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x67d07bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CreateRendererLists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetImportedFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::TextureDesc,
                                                                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetImportedFallback)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x67d0904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "GetImportedFallback",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.AllocateCulledPassResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::AllocateCulledPassResources)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x67d0c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "AllocateCulledPassResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdateResourceAllocationAndSynchronization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateResourceAllocationAndSynchronization)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x67d0f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UpdateResourceAllocationAndSynchronization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdateAllSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateAllSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x67d1784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UpdateAllSharedResourceLastFrameIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.AreRendererListsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::AreRendererListsEmpty)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x67d18b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                            { "AreRendererListsEmpty", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.TryCullPassAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::TryCullPassAtIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67d1a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "TryCullPassAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CullRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CullRendererLists)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67d1b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CullRendererLists", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdateCurrentCompiledGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateCurrentCompiledGraph)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67cd4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "UpdateCurrentCompiledGraph", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CompileRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompileRenderGraph)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x67cda78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CompileRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CompilePassImmediatly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompilePassImmediatly)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x67d1d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "CompilePassImmediatly", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ExecutePassImmediately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecutePassImmediately)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67ce558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "ExecutePassImmediately", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ExecuteCompiledPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteCompiledPass)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x67d2598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "ExecuteCompiledPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ExecuteRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteRenderGraph)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x67cdba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ExecuteRenderGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.PreRenderPassSetRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*,
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::PreRenderPassSetRenderTargets)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x67d330c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "PreRenderPassSetRenderTargets",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.PreRenderPassExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*,
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::PreRenderPassExecute)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x67d2c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "PreRenderPassExecute",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.PostRenderPassExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*,
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::PostRenderPassExecute)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x67d2f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                           { "PostRenderPassExecute",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ClearRenderPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearRenderPasses)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x67ce3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearRenderPasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ReleaseImmediateModeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ReleaseImmediateModeResources)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x67d38b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ReleaseImmediateModeResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.LogFrameInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogFrameInformation)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x67cd524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogFrameInformation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.LogRendererListsCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogRendererListsCreation)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x67d1c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogRendererListsCreation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.LogRenderPassBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogRenderPassBegin)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x67d290c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "LogRenderPassBegin", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.LogCulledPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogCulledPasses)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x67cfb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogCulledPasses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetDefaultProfilingSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetDefaultProfilingSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67d3a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetDefaultProfilingSampler", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.UpdateImportedResourceLifeTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateImportedResourceLifeTime)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x67d3a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "UpdateImportedResourceLifeTime",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GenerateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GenerateDebugData)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x67d3b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GenerateDebugData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GenerateCompilerDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GenerateCompilerDebugData)> {
  constexpr static std::size_t size = 0x10f8;
  constexpr static std::size_t addrs = 0x67d3f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                { "GenerateCompilerDebugData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.CleanupDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::CleanupDebugData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x67d3dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CleanupDebugData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.SetGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::SetGlobal)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x67d503c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                             { "SetGlobal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.IsGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::IsGlobal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d51e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "IsGlobal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.AllGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2_ValueCollection<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::AllGlobals)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x67d5264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "AllGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.GetGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetGlobal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67d52b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetGlobal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ClearGlobalBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearGlobalBindings)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x67cdcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearGlobalBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.AddPassDebugMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, ::StringW, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddPassDebugMetadata)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x67d5334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                         { "AddPassDebugMetadata", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraph.ClearPassDebugMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearPassDebugMetadata)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67d5480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearPassDebugMetadata", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_nativeCompiler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCompiler;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_nativeCompiler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCompiler;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_nativeCompiler(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeCompiler = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__nativeRenderPassesEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nativeRenderPassesEnabled_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__nativeRenderPassesEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nativeRenderPassesEnabled_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set__nativeRenderPassesEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nativeRenderPassesEnabled_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_Resources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Resources = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphPool;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphPool;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderGraphPool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderGraphPool = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_builderInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_builderInstance;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_builderInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_builderInstance;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_builderInstance(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_builderInstance = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPasses;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPasses;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderPasses(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderPasses = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererLists;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererLists = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugParameters;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugParameters;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DebugParameters(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugParameters = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_FrameInformationLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_FrameInformationLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameInformationLogger = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultResources;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultResources;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DefaultResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultResources = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultProfilingSamplers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultProfilingSamplers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultProfilingSamplers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultProfilingSamplers;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DefaultProfilingSamplers(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultProfilingSamplers = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphContext;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphContext;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderGraphContext = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_PreviousCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_PreviousCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCommandBuffer;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_PreviousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousCommandBuffer = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ImmediateModeResourceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImmediateModeResourceList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ImmediateModeResourceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImmediateModeResourceList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ImmediateModeResourceList(::ArrayW<::System::Collections::Generic::List_1<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImmediateModeResourceList = value;
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompilationCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompilationCache;
}
constexpr ::GlobalNamespace::RenderGraphCompilationCache* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompilationCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompilationCache;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CompilationCache(::GlobalNamespace::RenderGraphCompilationCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CompilationCache = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_TempMRTArrays() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMRTArrays;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_TempMRTArrays() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempMRTArrays;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_TempMRTArrays(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempMRTArrays = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CullingStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingStack;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CullingStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingStack;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CullingStack(::System::Collections::Generic::Stack_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CullingStack = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentExecutionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentExecutionName;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentExecutionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentExecutionName;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentExecutionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentExecutionName = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ExecutionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionCount = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentImmediatePassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentImmediatePassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentImmediatePassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentImmediatePassIndex;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentImmediatePassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentImmediatePassIndex = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionExceptionWasRaised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionExceptionWasRaised;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionExceptionWasRaised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionExceptionWasRaised;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ExecutionExceptionWasRaised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionExceptionWasRaised = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_HasRenderGraphBegun() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderGraphBegun;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_HasRenderGraphBegun() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderGraphBegun;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_HasRenderGraphBegun(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasRenderGraphBegun = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererListCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListCulling;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererListCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListCulling;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RendererListCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererListCulling = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_EnableCompilationCaching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableCompilationCaching;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_EnableCompilationCaching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableCompilationCaching;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_EnableCompilationCaching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableCompilationCaching = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultCompiledGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultCompiledGraph;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultCompiledGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultCompiledGraph;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DefaultCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultCompiledGraph = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentCompiledGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentCompiledGraph;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentCompiledGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentCompiledGraph;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentCompiledGraph = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CaptureDebugDataForExecution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptureDebugDataForExecution;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CaptureDebugDataForExecution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CaptureDebugDataForExecution;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CaptureDebugDataForExecution(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CaptureDebugDataForExecution = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugData;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DebugData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugData = value;
}
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_registeredGlobals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredGlobals;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_registeredGlobals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredGlobals;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_registeredGlobals(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___registeredGlobals = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_k_PassNameDebugIgnoreList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_PassNameDebugIgnoreList;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_k_PassNameDebugIgnoreList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_PassNameDebugIgnoreList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_k_PassNameDebugIgnoreList(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_PassNameDebugIgnoreList = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_kMaxMRTCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kMaxMRTCount", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_kMaxMRTCount() {
  return ::cordl_internals::getStaticField<int32_t, "kMaxMRTCount", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_s_RegisteredGraphs(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>*, "s_RegisteredGraphs",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_s_RegisteredGraphs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>*, "s_RegisteredGraphs",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF__isRenderGraphViewerActive_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<isRenderGraphViewerActive>k__BackingField", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF__isRenderGraphViewerActive_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<isRenderGraphViewerActive>k__BackingField", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF__enableValidityChecks_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<enableValidityChecks>k__BackingField", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF__enableValidityChecks_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<enableValidityChecks>k__BackingField", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "onGraphRegistered",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_onGraphRegistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "onGraphRegistered",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "onGraphUnregistered",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_onGraphUnregistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*, "onGraphUnregistered",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "onExecutionRegistered",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_onExecutionRegistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "onExecutionRegistered",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "onExecutionUnregistered",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_onExecutionUnregistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*, "onExecutionUnregistered",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::setStaticF_onDebugDataCaptured(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "onDebugDataCaptured", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Rendering::RenderGraphModule::RenderGraph::getStaticF_onDebugDataCaptured() {
  return ::cordl_internals::getStaticField<::System::Action*, "onDebugDataCaptured", ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler* UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompileNativeRenderGraph(int32_t graphHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CompileNativeRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassCompiler*>(this, ___internal_method, graphHash);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteNativeRenderGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ExecuteNativeRenderGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_nativeRenderPassesEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_nativeRenderPassesEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_nativeRenderPassesEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_nativeRenderPassesEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::RequestCaptureDebugData(::StringW executionName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "RequestCaptureDebugData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, executionName);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_isRenderGraphViewerActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_isRenderGraphViewerActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_isRenderGraphViewerActive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_isRenderGraphViewerActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_enableValidityChecks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_enableValidityChecks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::set_enableValidityChecks(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "set_enableValidityChecks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_defaultResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams* UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_debugParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_debugParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphDebugParams*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetWidgetList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetWidgetList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::get_areAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "get_areAnySettingsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::RegisterDebug(::UnityEngine::Rendering::DebugUI_Panel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "RegisterDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UnRegisterDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UnRegisterDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>* UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetRegisteredRenderGraphs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetRegisteredRenderGraphs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData* UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetDebugData(::StringW executionName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetDebugData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>(this, ___internal_method, executionName);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "EndFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture(::UnityEngine::Rendering::RTHandle* rt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture(::UnityEngine::Rendering::RTHandle* rt, ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, importParams);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture(::UnityEngine::Rendering::RTHandle* rt, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "ImportTexture",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, info, importParams);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportTexture(::UnityEngine::Rendering::RTHandle* rt, bool isBuiltin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "ImportTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, isBuiltin);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo info,
                                                                         ::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams importParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "ImportBackbuffer",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ImportResourceParams>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt, info, importParams);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "ImportBackbuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, rt);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CreateTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSharedTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "CreateSharedTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc, explicitRelease);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::RefreshSharedTextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureHandle handle,
                                                                                             ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "RefreshSharedTextureDesc",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, desc);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ReleaseSharedTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "ReleaseSharedTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateTextureIfInvalid(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateTextureIfInvalid",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desc, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetTextureDesc(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "GetTextureDesc", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo
UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetRenderTargetInfo(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "GetRenderTargetInfo", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderTargetInfo>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateShadowRendererList(::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> shadowDrawingSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CreateShadowRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, shadowDrawingSettings);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateGizmoRendererList(::by_ref<::UnityEngine::Camera*> camera, ::by_ref<::UnityEngine::Rendering::GizmoSubset> gizmoSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                       { "CreateGizmoRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GizmoSubset>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera, gizmoSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateUIOverlayRendererList(::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateUIOverlayRendererList(::by_ref<::UnityEngine::Camera*> camera, ::by_ref<::UnityEngine::Rendering::UISubset> uiSubset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                       { "CreateUIOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::UISubset>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera, uiSubset);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateWireOverlayRendererList(::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateWireOverlayRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList(::by_ref<::UnityEngine::Camera*> camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList(::by_ref<::UnityEngine::Camera*> camera,
                                                                                                                                                        ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "CreateSkyboxRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera, projectionMatrix, viewMatrix);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateSkyboxRendererList(::by_ref<::UnityEngine::Camera*> camera,
                                                                                                                                                        ::UnityEngine::Matrix4x4 projectionMatrixL,
                                                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                                                                                                        ::UnityEngine::Matrix4x4 projectionMatrixR,
                                                                                                                                                        ::UnityEngine::Matrix4x4 viewMatrixR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "CreateSkyboxRendererList",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Camera*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                  ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(this, ___internal_method, camera, projectionMatrixL, viewMatrixL, projectionMatrixR,
                                                                                                              viewMatrixR);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportBuffer(::UnityEngine::GraphicsBuffer* graphicsBuffer,
                                                                                                                                      bool forceRelease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "ImportBuffer", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, graphicsBuffer, forceRelease);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CreateBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, graphicsBuffer);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferDesc
UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetBufferDesc(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> graphicsBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "GetBufferDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(this, ___internal_method, graphicsBuffer);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle
UnityEngine::Rendering::RenderGraphModule::RenderGraph::ImportRayTracingAccelerationStructure(::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*> accelStruct, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "ImportRayTracingAccelerationStructure", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(this, ___internal_method, accelStruct, name);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddRasterRenderPass(::StringW passName, ::by_ref<PassData> passData, ::StringW file, int32_t line) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "AddRasterRenderPass", { ::i2c::class_of<PassData>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(this, ___internal_method, passName, passData, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddRasterRenderPass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file,
                                                                            int32_t line) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "AddRasterRenderPass",
                                                             { ::i2c::class_of<PassData>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*>(this, ___internal_method, passName, passData, sampler, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddComputePass(::StringW passName, ::by_ref<PassData> passData,
                                                                                                                                                       ::StringW file, int32_t line) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "AddComputePass", { ::i2c::class_of<PassData>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>(this, ___internal_method, passName, passData, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddComputePass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file,
                                                                       int32_t line) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "AddComputePass",
                                                             { ::i2c::class_of<PassData>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>(this, ___internal_method, passName, passData, sampler, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddUnsafePass(::StringW passName, ::by_ref<PassData> passData,
                                                                                                                                                     ::StringW file, int32_t line) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "AddUnsafePass", { ::i2c::class_of<PassData>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(this, ___internal_method, passName, passData, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddUnsafePass(::StringW passName, ::by_ref<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file,
                                                                      int32_t line) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "AddUnsafePass",
                                                             { ::i2c::class_of<PassData>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(this, ___internal_method, passName, passData, sampler, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddRenderPass(::StringW passName, ::by_ref<PassData> passData,
                                                                                                                                             ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                                                                             ::StringW file, int32_t line) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "AddRenderPass",
                                                             { ::i2c::class_of<PassData>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(this, ___internal_method, passName, passData, sampler, file, line);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddRenderPass(::StringW passName, ::by_ref<PassData> passData,
                                                                                                                                             ::StringW file, int32_t line) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "AddRenderPass", { ::i2c::class_of<PassData>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<PassData>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder>(this, ___internal_method, passName, passData, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::BeginRecording(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "BeginRecording", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndRecordingAndExecute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "EndRecordingAndExecute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file, int32_t line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                       { "BeginProfilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler, ::StringW file, int32_t line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                       { "EndProfilingSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampler, file, line);
}
inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetCompiledPassInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetCompiledPassInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearCompiledGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph* compiledGraph,
                                                                                       bool useCompilationCaching) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "ClearCompiledGraph", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, compiledGraph, useCompilationCaching);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::InvalidateContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "InvalidateContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::OnPassAdded(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "OnPassAdded", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "add_onGraphRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onGraphRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "remove_onGraphRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "add_onGraphUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onGraphUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "remove_onGraphUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "add_onExecutionRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionRegistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "remove_onExecutionRegistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "add_onExecutionUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionUnregistered(::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                       { "remove_onExecutionUnregistered", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_OnExecutionRegisteredDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::add_onDebugDataCaptured(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "add_onDebugDataCaptured", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::remove_onDebugDataCaptured(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "remove_onDebugDataCaptured", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::ComputeGraphHash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ComputeGraphHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CountReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CountReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CullUnusedPasses() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CullUnusedPasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdatePassSynchronization(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> currentPassInfo,
                                                                                              ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> producerPassInfo,
                                                                                              int32_t currentPassIndex, int32_t lastProducer, ::by_ref<int32_t> intLastSyncIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "UpdatePassSynchronization",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPassInfo, producerPassInfo, currentPassIndex, lastProducer, intLastSyncIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateResourceSynchronization(::by_ref<int32_t> lastGraphicsPipeSync, ::by_ref<int32_t> lastComputePipeSync,
                                                                                                  int32_t currentPassIndex,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> resource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "UpdateResourceSynchronization",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lastGraphicsPipeSync, lastComputePipeSync, currentPassIndex, resource);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetFirstValidConsumerIndex(int32_t passIndex,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
          { "GetFirstValidConsumerIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, passIndex, info);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::FindTextureProducer(int32_t consumerPass,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info,
                                                                                           ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "FindTextureProducer",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, consumerPass, info, index);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestProducerIndex(int32_t passIndex,
                                                                                              ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "GetLatestProducerIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, passIndex, info);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestValidReadIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "GetLatestValidReadIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, info);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetFirstValidWriteIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "GetFirstValidWriteIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, info);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetLatestValidWriteIndex(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "GetLatestValidWriteIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, info);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CreateRendererLists() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CreateRendererLists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetImportedFallback(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc,
                                                                                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "GetImportedFallback",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desc, fallback);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::AllocateCulledPassResources(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                              { "AllocateCulledPassResources", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateResourceAllocationAndSynchronization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UpdateResourceAllocationAndSynchronization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateAllSharedResourceLastFrameIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "UpdateAllSharedResourceLastFrameIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AreRendererListsEmpty(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* rendererLists) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                          { "AreRendererListsEmpty", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rendererLists);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::TryCullPassAtIndex(int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "TryCullPassAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passIndex);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CullRendererLists() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CullRendererLists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateCurrentCompiledGraph(int32_t graphHash, bool forceNoCaching) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "UpdateCurrentCompiledGraph", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, graphHash, forceNoCaching);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompileRenderGraph(int32_t graphHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CompileRenderGraph", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphHash);
}
inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>
UnityEngine::Rendering::RenderGraphModule::RenderGraph::CompilePassImmediatly(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "CompilePassImmediatly", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(this, ___internal_method, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecutePassImmediately(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "ExecutePassImmediately", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteCompiledPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "ExecuteCompiledPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ExecuteRenderGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ExecuteRenderGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::PreRenderPassSetRenderTargets(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "PreRenderPassSetRenderTargets",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo, pass, rgContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::PreRenderPassExecute(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "PreRenderPassExecute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo, pass, rgContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::PostRenderPassExecute(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                         { "PostRenderPassExecute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo, pass, rgContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearRenderPasses() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearRenderPasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ReleaseImmediateModeResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ReleaseImmediateModeResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogFrameInformation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogFrameInformation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogRendererListsCreation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogRendererListsCreation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogRenderPassBegin(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo> passInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "LogRenderPassBegin", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passInfo);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::LogCulledPasses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "LogCulledPasses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetDefaultProfilingSampler(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetDefaultProfilingSampler", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::UpdateImportedResourceLifeTime(::by_ref<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData> data,
                                                                                                   ::System::Collections::Generic::List_1<int32_t>* passList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "UpdateImportedResourceLifeTime",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::DebugData_RenderGraph_ResourceData>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, passList);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::GenerateDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GenerateDebugData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::GenerateCompilerDebugData(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*> debugData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "GenerateCompilerDebugData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_DebugData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, debugData);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::CleanupDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "CleanupDebugData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::SetGlobal(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h, int32_t globalPropertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                           { "SetGlobal", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h, globalPropertyId);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraph::IsGlobal(int32_t globalPropertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "IsGlobal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, globalPropertyId);
}
inline ::System::Collections::Generic::Dictionary_2_ValueCollection<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*
UnityEngine::Rendering::RenderGraphModule::RenderGraph::AllGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "AllGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_ValueCollection<int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>(this,
                                                                                                                                                                                 ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::RenderGraph::GetGlobal(int32_t globalPropertyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "GetGlobal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, globalPropertyId);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearGlobalBindings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearGlobalBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::AddPassDebugMetadata(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::StringW file, int32_t line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                       { "AddPassDebugMetadata", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPass, file, line);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraph::ClearPassDebugMetadata() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), { "ClearPassDebugMetadata", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* UnityEngine::Rendering::RenderGraphModule::RenderGraph::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(name));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph::RenderGraph() {}
