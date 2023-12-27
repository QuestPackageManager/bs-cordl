#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
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
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TextVertex);
// Type: UnityEngine.UIElements::TextVertex
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10250))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15377))
// CS Name: ::UnityEngine.UIElements::TextVertex
struct CORDL_TYPE TextVertex {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value:
  // None }, CppParam { name: "uv0", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr TextVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 color, ::UnityEngine::Vector2 uv0) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextVertex();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field color, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field uv0, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv0;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextVertex, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextVertex, "UnityEngine.UIElements", "TextVertex");
