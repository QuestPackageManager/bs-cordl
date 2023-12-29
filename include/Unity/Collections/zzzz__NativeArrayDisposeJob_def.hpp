#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArrayDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeArrayDisposeJob)
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Collections {
struct NativeArrayDispose;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeArrayDisposeJob;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeArrayDisposeJob);
// Type: Unity.Collections::NativeArrayDisposeJob
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9928))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9929))
// CS Name: ::Unity.Collections::NativeArrayDisposeJob
struct CORDL_TYPE NativeArrayDisposeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute addr 0x2b39348 size 0x44 virtual true final true
  inline void Execute();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeArrayDispose", modifiers: "", def_value: None }]
  constexpr NativeArrayDisposeJob(::Unity::Collections::NativeArrayDispose Data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeArrayDisposeJob();

  /// @brief Field Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArrayDispose Data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeArrayDisposeJob, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Collections::NativeArrayDisposeJob, Data) == 0x0, "Offset mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeArrayDisposeJob, "Unity.Collections", "NativeArrayDisposeJob");
