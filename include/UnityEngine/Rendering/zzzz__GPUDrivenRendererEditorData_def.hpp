#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererEditorData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenRendererEditorData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenRendererEditorData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenRendererEditorData);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenRendererEditorData
struct CORDL_TYPE GPUDrivenRendererEditorData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererEditorData();

  // Ctor Parameters [CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr GPUDrivenRendererEditorData(uint64_t sceneCullingMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10859 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field sceneCullingMask, offset: 0x0, size: 0x8, def value: None
  uint64_t sceneCullingMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererEditorData, sceneCullingMask) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenRendererEditorData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenRendererEditorData, "UnityEngine.Rendering", "GPUDrivenRendererEditorData");
