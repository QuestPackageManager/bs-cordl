#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapDataDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapDataDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapDataDisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapDataDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDisposeJob);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataDispose
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataDisposeJob
struct CORDL_TYPE UnsafeParallelHashMapDataDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x62b0d5c, size 0x10, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapDataDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDispose", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashMapDataDisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDisposeJob, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataDisposeJob, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapDataDisposeJob");
