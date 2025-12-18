#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCoreVertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextCoreVertex)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextCoreVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextCoreVertex);
// Dependencies UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextCoreVertex
struct CORDL_TYPE TextCoreVertex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextCoreVertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr TextCoreVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0, ::UnityEngine::Vector2 uv2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field color, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field uv0, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv0;

  /// @brief Field uv2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextCoreVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextCoreVertex, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextCoreVertex, uv0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextCoreVertex, uv2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextCoreVertex, 0x20>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextCoreVertex, "UnityEngine.TextCore.Text", "TextCoreVertex");
