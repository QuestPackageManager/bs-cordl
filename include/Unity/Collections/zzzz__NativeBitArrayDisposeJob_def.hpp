#pragma once
// IWYU pragma private; include "Unity/Collections/NativeBitArrayDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeBitArrayDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeBitArrayDisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeBitArrayDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeBitArrayDisposeJob);
// Dependencies Unity.Collections.NativeBitArrayDispose
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeBitArrayDisposeJob
struct CORDL_TYPE NativeBitArrayDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x62a4f34, size 0x10, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeBitArrayDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeBitArrayDispose", modifiers: "", def_value: None }]
  constexpr NativeBitArrayDisposeJob(::Unity::Collections::NativeBitArrayDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeBitArrayDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeBitArrayDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeBitArrayDisposeJob, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeBitArrayDisposeJob, "Unity.Collections", "NativeBitArrayDisposeJob");
