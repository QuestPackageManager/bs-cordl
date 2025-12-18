#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawBatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshProceduralInfo_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBatch)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawBatch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawBatch);
// Dependencies UnityEngine.Rendering.DrawKey, UnityEngine.Rendering.MeshProceduralInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawBatch
struct CORDL_TYPE DrawBatch {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawBatch();

  // Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::DrawKey", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "instanceOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "procInfo", ty: "::UnityEngine::Rendering::MeshProceduralInfo", modifiers: "", def_value:
  // None }]
  constexpr DrawBatch(::UnityEngine::Rendering::DrawKey key, int32_t instanceCount, int32_t instanceOffset, ::UnityEngine::Rendering::MeshProceduralInfo procInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field key, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::Rendering::DrawKey key;

  /// @brief Field instanceCount, offset: 0x38, size: 0x4, def value: None
  int32_t instanceCount;

  /// @brief Field instanceOffset, offset: 0x3c, size: 0x4, def value: None
  int32_t instanceOffset;

  /// @brief Field procInfo, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::MeshProceduralInfo procInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawBatch, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawBatch, instanceCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawBatch, instanceOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawBatch, procInfo) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawBatch, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawBatch, "UnityEngine.Rendering", "DrawBatch");
