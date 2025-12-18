#pragma once
// IWYU pragma private; include "Unity/Collections/NativeRingQueueDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeRingQueueDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeRingQueueDisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeRingQueueDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeRingQueueDisposeJob);
// Dependencies Unity.Collections.NativeRingQueueDispose
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeRingQueueDisposeJob
struct CORDL_TYPE NativeRingQueueDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x630cc5c, size 0x4, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRingQueueDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeRingQueueDispose", modifiers: "", def_value: None }]
  constexpr NativeRingQueueDisposeJob(::Unity::Collections::NativeRingQueueDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeRingQueueDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeRingQueueDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeRingQueueDisposeJob, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeRingQueueDisposeJob, "Unity.Collections", "NativeRingQueueDisposeJob");
