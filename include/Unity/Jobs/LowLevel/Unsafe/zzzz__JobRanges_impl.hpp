#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobRanges.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
// Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StartEndIndex", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobRanges::JobRanges(int32_t  BatchSize, int32_t  NumJobs, int32_t  TotalIterationCount, ::System::IntPtr  StartEndIndex) noexcept  {
this->BatchSize = BatchSize;
this->NumJobs = NumJobs;
this->TotalIterationCount = TotalIterationCount;
this->StartEndIndex = StartEndIndex;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobRanges::JobRanges()   {
}
