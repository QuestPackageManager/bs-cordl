#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcher_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUDrawInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullingBatcherDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderRequestBatcherContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersBatchersContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.get_batchMaterialHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> (
    ::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(&::UnityEngine::Rendering::InstanceCullingBatcher::get_batchMaterialHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6818ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_batchMaterialHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.get_packedMaterialHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> (
    ::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(&::UnityEngine::Rendering::InstanceCullingBatcher::get_packedMaterialHash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6818cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_packedMaterialHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(
    ::UnityEngine::Rendering::RenderersBatchersContext*, ::UnityEngine::Rendering::InstanceCullingBatcherDesc, ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6818ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderersBatchersContext*>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceCullingBatcherDesc>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.get_culler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::InstanceCuller> (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::get_culler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6816438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_culler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(&::UnityEngine::Rendering::InstanceCullingBatcher::Dispose)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6819238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.GetBatchID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchID (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::UnityEngine::Rendering::InstanceComponentGroup)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::GetBatchID)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6818ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                           { "GetBatchID", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.UpdateInstanceDataBufferLayoutVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::UpdateInstanceDataBufferLayoutVersion)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6819520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "UpdateInstanceDataBufferLayoutVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.GetDrawInstanceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CPUDrawInstanceData* (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::GetDrawInstanceData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6819788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "GetDrawInstanceData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.OnPerformCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceCullingBatcher::*)(
    ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::OnPerformCulling)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x6819790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "OnPerformCulling",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.OnFinishedCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::System::IntPtr)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::OnFinishedCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6819aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnFinishedCulling", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.DestroyDrawInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::DestroyDrawInstances)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6819af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "DestroyDrawInstances", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.DestroyMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::DestroyMaterials)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6819b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                           { "DestroyMaterials", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.DestroyMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::DestroyMeshes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6819dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                           { "DestroyMeshes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.PostCullBeginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::UnityEngine::Rendering::RenderRequestBatcherContext)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::PostCullBeginCameraRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6819f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "PostCullBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderRequestBatcherContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.RegisterBatchMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::Unity::Collections::NativeArray_1<int32_t>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::RegisterBatchMeshes)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x6819f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                           { "RegisterBatchMeshes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.RegisterBatchMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::RegisterBatchMaterials)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x681a410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "RegisterBatchMaterials", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.SchedulePackedMaterialCacheUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::InstanceCullingBatcher::*)(
    ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::SchedulePackedMaterialCacheUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x681a920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "SchedulePackedMaterialCacheUpdate",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.BuildBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<int32_t>,
    ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>, bool)>(&::UnityEngine::Rendering::InstanceCullingBatcher::BuildBatch)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x681aa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                             { "BuildBatch",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.InstanceOccludersUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::InstanceOccludersUpdated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x681ac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                           { "InstanceOccludersUpdated", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.UpdateFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(&::UnityEngine::Rendering::InstanceCullingBatcher::UpdateFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x681ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "UpdateFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.GetCompactedVisibilityMasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ParallelBitArray (::UnityEngine::Rendering::InstanceCullingBatcher::*)(bool)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::GetCompactedVisibilityMasks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x681ac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "GetCompactedVisibilityMasks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.OnEndContextRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)()>(&::UnityEngine::Rendering::InstanceCullingBatcher::OnEndContextRendering)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x681acac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnEndContextRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.OnBeginCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x681ad60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceCullingBatcher.OnEndCameraRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::InstanceCullingBatcher::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::InstanceCullingBatcher::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x681ad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnEndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderersBatchersContext*& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchersContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr ::UnityEngine::Rendering::RenderersBatchersContext* const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchersContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchersContext;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_BatchersContext(::UnityEngine::Rendering::RenderersBatchersContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BatchersContext = value;
}
constexpr ::UnityEngine::Rendering::CPUDrawInstanceData*& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_DrawInstanceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawInstanceData;
}
constexpr ::UnityEngine::Rendering::CPUDrawInstanceData* const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_DrawInstanceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawInstanceData;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_DrawInstanceData(::UnityEngine::Rendering::CPUDrawInstanceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawInstanceData = value;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup*& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BRG() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BRG;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup* const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BRG() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BRG;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_BRG(::UnityEngine::Rendering::BatchRendererGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BRG = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID>& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_GlobalBatchIDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalBatchIDs;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> const&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_GlobalBatchIDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalBatchIDs;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_GlobalBatchIDs(::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalBatchIDs = value;
}
constexpr ::UnityEngine::Rendering::InstanceCuller& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_Culler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Culler;
}
constexpr ::UnityEngine::Rendering::InstanceCuller const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_Culler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Culler;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_Culler(::UnityEngine::Rendering::InstanceCuller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Culler = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID>&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchMaterialHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchMaterialHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> const&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchMaterialHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchMaterialHash;
}
constexpr void
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_BatchMaterialHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BatchMaterialHash = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_PackedMaterialHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PackedMaterialHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> const&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_PackedMaterialHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PackedMaterialHash;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_PackedMaterialHash(
    ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PackedMaterialHash = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID>& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchMeshHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchMeshHash;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID> const&
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_BatchMeshHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BatchMeshHash;
}
constexpr void
UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_BatchMeshHash(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMeshID> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BatchMeshHash = value;
}
constexpr int32_t& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_CachedInstanceDataBufferLayoutVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInstanceDataBufferLayoutVersion;
}
constexpr int32_t const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_CachedInstanceDataBufferLayoutVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedInstanceDataBufferLayoutVersion;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_CachedInstanceDataBufferLayoutVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedInstanceDataBufferLayoutVersion = value;
}
constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback*& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_OnCompleteCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleteCallback;
}
constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback* const& UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_get_m_OnCompleteCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleteCallback;
}
constexpr void UnityEngine::Rendering::InstanceCullingBatcher::__cordl_internal_set_m_OnCompleteCallback(::UnityEngine::Rendering::OnCullingCompleteCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnCompleteCallback = value;
}
inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID> UnityEngine::Rendering::InstanceCullingBatcher::get_batchMaterialHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_batchMaterialHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::BatchMaterialID>>(this, ___internal_method);
}
inline ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> UnityEngine::Rendering::InstanceCullingBatcher::get_packedMaterialHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_packedMaterialHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext, ::UnityEngine::Rendering::InstanceCullingBatcherDesc desc,
                                                                  ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* onFinishedCulling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderersBatchersContext*>(), ::i2c::type_of<::UnityEngine::Rendering::InstanceCullingBatcherDesc>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, batcherContext, desc, onFinishedCulling);
}
inline ::by_ref<::UnityEngine::Rendering::InstanceCuller> UnityEngine::Rendering::InstanceCullingBatcher::get_culler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "get_culler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::InstanceCuller>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchID UnityEngine::Rendering::InstanceCullingBatcher::GetBatchID(::UnityEngine::Rendering::InstanceComponentGroup componentsOverriden) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                         { "GetBatchID", {}, { ::i2c::type_of<::UnityEngine::Rendering::InstanceComponentGroup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID>(this, ___internal_method, componentsOverriden);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::UpdateInstanceDataBufferLayoutVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "UpdateInstanceDataBufferLayoutVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::CPUDrawInstanceData* UnityEngine::Rendering::InstanceCullingBatcher::GetDrawInstanceData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "GetDrawInstanceData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CPUDrawInstanceData*>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::InstanceCullingBatcher::OnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup,
                                                                                                 ::UnityEngine::Rendering::BatchCullingContext cc,
                                                                                                 ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "OnPerformCulling",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, rendererGroup, cc, cullingOutput, userContext);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::OnFinishedCulling(::System::IntPtr customCullingResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnFinishedCulling", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customCullingResult);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::DestroyDrawInstances(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "DestroyDrawInstances", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::DestroyMaterials(::Unity::Collections::NativeArray_1<int32_t> destroyedMaterials) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                         { "DestroyMaterials", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyedMaterials);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::DestroyMeshes(::Unity::Collections::NativeArray_1<int32_t> destroyedMeshes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                         { "DestroyMeshes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destroyedMeshes);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::PostCullBeginCameraRendering(::UnityEngine::Rendering::RenderRequestBatcherContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "PostCullBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderRequestBatcherContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::RegisterBatchMeshes(::Unity::Collections::NativeArray_1<int32_t> meshIDs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                         { "RegisterBatchMeshes", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, meshIDs);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::RegisterBatchMaterials(::by_ref<::Unity::Collections::NativeArray_1<int32_t>> usedMaterialIDs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "RegisterBatchMaterials", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedMaterialIDs);
}
inline ::Unity::Jobs::JobHandle
UnityEngine::Rendering::InstanceCullingBatcher::SchedulePackedMaterialCacheUpdate(::Unity::Collections::NativeArray_1<int32_t> materialIDs,
                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "SchedulePackedMaterialCacheUpdate",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, materialIDs, packedMaterialDatas);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::BuildBatch(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                                                       ::Unity::Collections::NativeArray_1<int32_t> usedMaterialIDs, ::Unity::Collections::NativeArray_1<int32_t> usedMeshIDs,
                                                                       ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData> rendererData, bool registerMaterialsAndMeshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                           { "BuildBatch",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, usedMaterialIDs, usedMeshIDs, rendererData, registerMaterialsAndMeshes);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::InstanceOccludersUpdated(int32_t viewInstanceID, int32_t subviewMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(),
                                                                                         { "InstanceOccludersUpdated", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewInstanceID, subviewMask);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::UpdateFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "UpdateFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ParallelBitArray UnityEngine::Rendering::InstanceCullingBatcher::GetCompactedVisibilityMasks(bool syncCullingJobs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "GetCompactedVisibilityMasks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ParallelBitArray>(this, ___internal_method, syncCullingJobs);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::OnEndContextRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnEndContextRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::OnBeginCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnBeginCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::InstanceCullingBatcher::OnEndCameraRendering(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceCullingBatcher*>(), { "OnEndCameraRendering", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::InstanceCullingBatcher* UnityEngine::Rendering::InstanceCullingBatcher::New_ctor(::UnityEngine::Rendering::RenderersBatchersContext* batcherContext,
                                                                                                                  ::UnityEngine::Rendering::InstanceCullingBatcherDesc desc,
                                                                                                                  ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* onFinishedCulling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::InstanceCullingBatcher*>(batcherContext, desc, onFinishedCulling));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::InstanceCullingBatcher::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::InstanceCullingBatcher::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceCullingBatcher::InstanceCullingBatcher() {}
