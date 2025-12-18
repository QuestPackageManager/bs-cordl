#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PrefixSumDrawsAndInstances.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PrefixSumDrawsAndInstances_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PrefixSumDrawsAndInstances.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PrefixSumDrawsAndInstances::*)()>(
    &::UnityEngine::Rendering::PrefixSumDrawsAndInstances::Execute)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x6660a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PrefixSumDrawsAndInstances>::get(),
                                                                               "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PrefixSumDrawsAndInstances::Execute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PrefixSumDrawsAndInstances>::get(),
                                                                             "Execute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr UnityEngine::Rendering::PrefixSumDrawsAndInstances::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* UnityEngine::Rendering::PrefixSumDrawsAndInstances::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "drawRanges", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "drawBatchIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchBinAllocOffsets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchBinCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "batchDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "binVisibleInstanceOffsets", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingOutput", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectBufferLimits", ty:
// "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectBufferAllocInfo", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indirectAllocationCounters", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PrefixSumDrawsAndInstances::PrefixSumDrawsAndInstances(
    ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges, ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices,
    ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets, ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts,
    ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets,
    ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput,
    ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo,
    ::Unity::Collections::NativeArray_1<int32_t> indirectAllocationCounters) noexcept {
  this->drawRanges = drawRanges;
  this->drawBatchIndices = drawBatchIndices;
  this->batchBinAllocOffsets = batchBinAllocOffsets;
  this->batchBinCounts = batchBinCounts;
  this->binVisibleInstanceCounts = binVisibleInstanceCounts;
  this->batchDrawCommandOffsets = batchDrawCommandOffsets;
  this->binVisibleInstanceOffsets = binVisibleInstanceOffsets;
  this->cullingOutput = cullingOutput;
  this->indirectBufferLimits = indirectBufferLimits;
  this->indirectBufferAllocInfo = indirectBufferAllocInfo;
  this->indirectAllocationCounters = indirectAllocationCounters;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PrefixSumDrawsAndInstances::PrefixSumDrawsAndInstances() {}
