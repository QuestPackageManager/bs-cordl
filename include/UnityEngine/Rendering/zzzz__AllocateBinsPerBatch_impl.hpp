#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AllocateBinsPerBatch.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AllocateBinsPerBatch_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.IsInstanceFlipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::AllocateBinsPerBatch::*)(int32_t)>(&::UnityEngine::Rendering::AllocateBinsPerBatch::IsInstanceFlipped)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c4931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(), { "IsInstanceFlipped", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.IsMeshLodVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::AllocateBinsPerBatch::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::AllocateBinsPerBatch::IsMeshLodVisible)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c493bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(),
                                                             { "IsMeshLodVisible", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.GetPrimitiveCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::MeshTopology, bool)>(&::UnityEngine::Rendering::AllocateBinsPerBatch::GetPrimitiveCount)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c49410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(),
                                                             { "GetPrimitiveCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AllocateBinsPerBatch::*)(int32_t)>(&::UnityEngine::Rendering::AllocateBinsPerBatch::Execute)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x6c494ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::AllocateBinsPerBatch::IsInstanceFlipped(int32_t rendererIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(), { "IsInstanceFlipped", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rendererIndex);
}
inline bool UnityEngine::Rendering::AllocateBinsPerBatch::IsMeshLodVisible(int32_t batchLodLevel, int32_t rendererIndex, bool supportsCrossFade) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(),
                                                           { "IsMeshLodVisible", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, batchLodLevel, rendererIndex, supportsCrossFade);
}
inline int32_t UnityEngine::Rendering::AllocateBinsPerBatch::GetPrimitiveCount(int32_t indexCount, ::UnityEngine::MeshTopology topology, bool nativeQuads) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(),
                                                           { "GetPrimitiveCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, indexCount, topology, nativeQuads);
}
inline void UnityEngine::Rendering::AllocateBinsPerBatch::Execute(int32_t batchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AllocateBinsPerBatch>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, batchIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::AllocateBinsPerBatch::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::AllocateBinsPerBatch::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawInstanceIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "rendererMeshLodSettings", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "batchBinAllocOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchBinCounts", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binAllocCounter", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "binConfigIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}"), comment: None
// }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "debugCounterIndexBase",
// ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitDebugCounters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::AllocateBinsPerBatch::AllocateBinsPerBatch(
    ::UnityEngine::Rendering::BinningConfig binningConfig, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
    ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
    ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererMeshLodSettings,
    ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets, ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts, ::Unity::Collections::NativeArray_1<int32_t> binAllocCounter,
    ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices, ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts, int32_t debugCounterIndexBase,
    ::Unity::Collections::NativeArray_1<int32_t> splitDebugCounters) noexcept {
  this->binningConfig = binningConfig;
  this->drawBatches = drawBatches;
  this->drawInstanceIndices = drawInstanceIndices;
  this->instanceData = instanceData;
  this->rendererVisibilityMasks = rendererVisibilityMasks;
  this->rendererMeshLodSettings = rendererMeshLodSettings;
  this->batchBinAllocOffsets = batchBinAllocOffsets;
  this->batchBinCounts = batchBinCounts;
  this->binAllocCounter = binAllocCounter;
  this->binConfigIndices = binConfigIndices;
  this->binVisibleInstanceCounts = binVisibleInstanceCounts;
  this->debugCounterIndexBase = debugCounterIndexBase;
  this->splitDebugCounters = splitDebugCounters;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AllocateBinsPerBatch::AllocateBinsPerBatch() {}
