#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapDisposeJob)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDisposeJob
struct CORDL_TYPE UnsafeParallelHashMapDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x631896c, size 0x10, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashMapDisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* Data, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* Data;

  /// @brief Field Allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob, Allocator) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDisposeJob, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapDisposeJob");
