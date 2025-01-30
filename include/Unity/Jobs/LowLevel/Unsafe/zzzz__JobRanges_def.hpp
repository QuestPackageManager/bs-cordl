#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobRanges.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobRanges)
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
// Write type traits
MARK_VAL_T(::Unity::Jobs::LowLevel::Unsafe::JobRanges);
// Dependencies System.IntPtr
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobRanges
struct CORDL_TYPE JobRanges {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobRanges();

  // Ctor Parameters [CppParam { name: "BatchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NumJobs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "TotalIterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "StartEndIndex", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr JobRanges(int32_t BatchSize, int32_t NumJobs, int32_t TotalIterationCount, ::System::IntPtr StartEndIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10553 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field BatchSize, offset: 0x0, size: 0x4, def value: None
  int32_t BatchSize;

  /// @brief Field NumJobs, offset: 0x4, size: 0x4, def value: None
  int32_t NumJobs;

  /// @brief Field TotalIterationCount, offset: 0x8, size: 0x4, def value: None
  int32_t TotalIterationCount;

  /// @brief Field StartEndIndex, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr StartEndIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobRanges, BatchSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobRanges, NumJobs) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobRanges, TotalIterationCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobRanges, StartEndIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobRanges, 0x18>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobRanges, "Unity.Jobs.LowLevel.Unsafe", "JobRanges");
