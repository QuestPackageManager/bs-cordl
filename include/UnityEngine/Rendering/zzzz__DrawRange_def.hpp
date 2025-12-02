#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawRange)
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawRange);
// Dependencies UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawRange
struct CORDL_TYPE DrawRange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawRange();

  // Ctor Parameters [CppParam { name: "key", ty: "::UnityEngine::Rendering::RangeKey", modifiers: "", def_value: None }, CppParam { name: "drawCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "drawOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawRange(::UnityEngine::Rendering::RangeKey key, int32_t drawCount, int32_t drawOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field key, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::Rendering::RangeKey key;

  /// @brief Field drawCount, offset: 0x1c, size: 0x4, def value: None
  int32_t drawCount;

  /// @brief Field drawOffset, offset: 0x20, size: 0x4, def value: None
  int32_t drawOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawRange, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawRange, drawCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawRange, drawOffset) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawRange, 0x24>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawRange, "UnityEngine.Rendering", "DrawRange");
