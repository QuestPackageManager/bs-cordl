#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawCommandOutputPerBatch.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawCommandOutputPerBatch_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DrawCommandOutputPerBatch.EncodeGPUInstanceIndexAndCrossFade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::DrawCommandOutputPerBatch::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::DrawCommandOutputPerBatch::EncodeGPUInstanceIndexAndCrossFade)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6660ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "EncodeGPUInstanceIndexAndCrossFade",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawCommandOutputPerBatch.IsInstanceFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DrawCommandOutputPerBatch::*)(int32_t)>(
    &::UnityEngine::Rendering::DrawCommandOutputPerBatch::IsInstanceFlipped)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6660fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "IsInstanceFlipped",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawCommandOutputPerBatch.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DrawCommandOutputPerBatch::*)(int32_t)>(
    &::UnityEngine::Rendering::DrawCommandOutputPerBatch::Execute)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x6661040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::DrawCommandOutputPerBatch::EncodeGPUInstanceIndexAndCrossFade(int32_t rendererIndex, bool negateCrossFade) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "EncodeGPUInstanceIndexAndCrossFade",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, rendererIndex, negateCrossFade);
}
inline bool UnityEngine::Rendering::DrawCommandOutputPerBatch::IsInstanceFlipped(int32_t rendererIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "IsInstanceFlipped",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rendererIndex);
}
inline void UnityEngine::Rendering::DrawCommandOutputPerBatch::Execute(int32_t batchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawCommandOutputPerBatch>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batchIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::DrawCommandOutputPerBatch::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::DrawCommandOutputPerBatch::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchIDs", ty:
// "::Unity::Collections::NativeParallelHashMap_2<uint32_t,::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceDataBuffer", ty:
// "::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstanceIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererCrossFadeValues", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchBinAllocOffsets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchBinCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "batchDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "binConfigIndices",
// ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "binVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingOutput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "indirectBufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleInstancesBufferHandle", ty:
// "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectArgsBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "indirectBufferAllocInfo", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "indirectDrawInfoGlobalArray", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "indirectInstanceInfoGlobalArray", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawCommandOutputPerBatch::DrawCommandOutputPerBatch(
    ::UnityEngine::Rendering::BinningConfig binningConfig, ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs,
    ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly instanceDataBuffer, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
    ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
    ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues,
    ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets, ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts,
    ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices,
    ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput, ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits,
    ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle, ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> indirectDrawInfoGlobalArray,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> indirectInstanceInfoGlobalArray) noexcept {
  this->binningConfig = binningConfig;
  this->batchIDs = batchIDs;
  this->instanceDataBuffer = instanceDataBuffer;
  this->drawBatches = drawBatches;
  this->drawInstanceIndices = drawInstanceIndices;
  this->instanceData = instanceData;
  this->rendererVisibilityMasks = rendererVisibilityMasks;
  this->rendererCrossFadeValues = rendererCrossFadeValues;
  this->batchBinAllocOffsets = batchBinAllocOffsets;
  this->batchBinCounts = batchBinCounts;
  this->batchDrawCommandOffsets = batchDrawCommandOffsets;
  this->binConfigIndices = binConfigIndices;
  this->binVisibleInstanceOffsets = binVisibleInstanceOffsets;
  this->binVisibleInstanceCounts = binVisibleInstanceCounts;
  this->cullingOutput = cullingOutput;
  this->indirectBufferLimits = indirectBufferLimits;
  this->visibleInstancesBufferHandle = visibleInstancesBufferHandle;
  this->indirectArgsBufferHandle = indirectArgsBufferHandle;
  this->indirectBufferAllocInfo = indirectBufferAllocInfo;
  this->indirectDrawInfoGlobalArray = indirectDrawInfoGlobalArray;
  this->indirectInstanceInfoGlobalArray = indirectInstanceInfoGlobalArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawCommandOutputPerBatch::DrawCommandOutputPerBatch() {}
