#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextVertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextVertex)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextVertex);
// Dependencies UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextVertex
struct CORDL_TYPE TextVertex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextVertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None
  // }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr TextVertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector4 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Color32 color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field uv, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Vector4 uv;

  /// @brief Field uv2, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv2;

  /// @brief Field color, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, uv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, uv2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, color) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextVertex, 0x28>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextVertex, "UnityEngine.TextCore.Text", "TextVertex");
