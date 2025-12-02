#pragma once
// IWYU pragma private; include "Unity/Jobs/JobParallelIndexListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JobParallelIndexListExtensions)
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs {
class JobParallelIndexListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::JobParallelIndexListExtensions);
// Dependencies System.Object
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.JobParallelIndexListExtensions
class CORDL_TYPE JobParallelIndexListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ScheduleAppend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleAppend(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t arrayLength, int32_t innerloopBatchCount,
                                                        ::Unity::Jobs::JobHandle dependsOn);

  /// @brief Method ScheduleFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Jobs::JobHandle ScheduleFilter(T jobData, ::Unity::Collections::NativeList_1<int32_t> indices, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobParallelIndexListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobParallelIndexListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobParallelIndexListExtensions(JobParallelIndexListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobParallelIndexListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobParallelIndexListExtensions(JobParallelIndexListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Jobs::JobParallelIndexListExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Jobs
NEED_NO_BOX(::Unity::Jobs::JobParallelIndexListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::JobParallelIndexListExtensions*, "Unity.Jobs", "JobParallelIndexListExtensions");
