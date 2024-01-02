#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextVertex)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextVertex);
// Type: UnityEngine.TextCore.Text::TextVertex
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10250)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13698))
// CS Name: ::UnityEngine.TextCore.Text::TextVertex
struct CORDL_TYPE TextVertex {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None
  // }, CppParam { name: "uv2", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uv4", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
  constexpr TextVertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector2 uv2, ::UnityEngine::Vector2 uv4, ::UnityEngine::Color32 color) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextVertex();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field uv, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief Field uv2, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv2;

  /// @brief Field uv4, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv4;

  /// @brief Field color, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextVertex, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, uv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, uv2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, uv4) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextVertex, color) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextVertex, "UnityEngine.TextCore.Text", "TextVertex");
