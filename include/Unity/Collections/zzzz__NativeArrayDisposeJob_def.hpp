#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayDisposeJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDisposeJob)
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDisposeJob);
// Dependencies Unity.Collections.NativeArrayDispose, Unity.Jobs.IJob
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeArrayDisposeJob
struct CORDL_TYPE NativeArrayDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x4861854, size 0x44, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method RegisterNativeArrayDisposeJobReflectionData, addr 0x4861898, size 0x40, virtual false, abstract: false, final false
  static inline void RegisterNativeArrayDisposeJobReflectionData();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayDisposeJob();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeArrayDispose", modifiers: "", def_value: None }]
  constexpr NativeArrayDisposeJob(::Unity::Collections::NativeArrayDispose Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArrayDispose Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeArrayDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDisposeJob, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDisposeJob, "Unity.Collections", "NativeArrayDisposeJob");
