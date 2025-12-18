#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AllocateBinsPerBatch.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AllocateBinsPerBatch_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.IsInstanceFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::AllocateBinsPerBatch::*)(int32_t)>(
    &::UnityEngine::Rendering::AllocateBinsPerBatch::IsInstanceFlipped)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x666044c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AllocateBinsPerBatch>::get(), "IsInstanceFlipped",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AllocateBinsPerBatch.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::AllocateBinsPerBatch::*)(int32_t)>(
    &::UnityEngine::Rendering::AllocateBinsPerBatch::Execute)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x66604ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AllocateBinsPerBatch>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::AllocateBinsPerBatch::IsInstanceFlipped(int32_t rendererIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AllocateBinsPerBatch>::get(), "IsInstanceFlipped",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rendererIndex);
}
inline void UnityEngine::Rendering::AllocateBinsPerBatch::Execute(int32_t batchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AllocateBinsPerBatch>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batchIndex);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::Rendering::AllocateBinsPerBatch::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::AllocateBinsPerBatch::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawBatches", ty:
// "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInstanceIndices", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "batchBinAllocOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchBinCounts", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "binAllocCounter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "binConfigIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "debugCounterIndexBase", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "splitDebugCounters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AllocateBinsPerBatch::AllocateBinsPerBatch(
    ::UnityEngine::Rendering::BinningConfig binningConfig, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
    ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
    ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets,
    ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts, ::Unity::Collections::NativeArray_1<int32_t> binAllocCounter, ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices,
    ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts, int32_t debugCounterIndexBase, ::Unity::Collections::NativeArray_1<int32_t> splitDebugCounters) noexcept {
  this->binningConfig = binningConfig;
  this->drawBatches = drawBatches;
  this->drawInstanceIndices = drawInstanceIndices;
  this->instanceData = instanceData;
  this->rendererVisibilityMasks = rendererVisibilityMasks;
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
