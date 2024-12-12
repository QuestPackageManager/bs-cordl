#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BatchCullingOutput)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchCullingOutput);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.BatchCullingOutputDrawCommands
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchCullingOutput
struct CORDL_TYPE BatchCullingOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchCullingOutput();

  // Ctor Parameters [CppParam { name: "drawCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: None }]
  constexpr BatchCullingOutput(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field drawCommands, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutput, drawCommands) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingOutput, "UnityEngine.Rendering", "BatchCullingOutput");
