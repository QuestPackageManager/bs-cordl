#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
// Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumPhases", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "StartEndIndex", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PhaseData", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobRanges::JobRanges(int32_t BatchSize, int32_t NumJobs, int32_t TotalIterationCount, int32_t NumPhases, void* StartEndIndex, void* PhaseData) noexcept {
  this->BatchSize = BatchSize;
  this->NumJobs = NumJobs;
  this->TotalIterationCount = TotalIterationCount;
  this->NumPhases = NumPhases;
  this->StartEndIndex = StartEndIndex;
  this->PhaseData = PhaseData;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobRanges::JobRanges() {}
