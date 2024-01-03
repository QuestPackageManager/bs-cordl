#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImageVertex)
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
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VectorImageVertex);
// Type: UnityEngine.UIElements::VectorImageVertex
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10250)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6804))
// CS Name: ::UnityEngine.UIElements::VectorImageVertex
struct CORDL_TYPE VectorImageVertex {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None
  // }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VectorImageVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 tint, ::UnityEngine::Vector2 uv, uint32_t settingIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageVertex();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field tint, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 tint;

  /// @brief Field uv, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief Field settingIndex, offset: 0x18, size: 0x4, def value: None
  uint32_t settingIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VectorImageVertex, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, tint) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, settingIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VectorImageVertex, "UnityEngine.UIElements", "VectorImageVertex");
