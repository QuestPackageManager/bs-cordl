#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStreamDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeStreamDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeStreamDisposeJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeStreamDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeStreamDisposeJob);
// Dependencies Unity.Collections.NativeStreamDispose
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeStreamDisposeJob
struct CORDL_TYPE NativeStreamDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x630d618, size 0x10, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeStreamDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeStreamDispose", modifiers: "", def_value: None }]
  constexpr NativeStreamDisposeJob(::Unity::Collections::NativeStreamDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15674 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Data, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::NativeStreamDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeStreamDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeStreamDisposeJob, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStreamDisposeJob, "Unity.Collections", "NativeStreamDisposeJob");
