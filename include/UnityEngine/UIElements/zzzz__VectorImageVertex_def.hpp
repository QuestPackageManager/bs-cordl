#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VectorImageVertex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VectorImageVertex)
// Forward declare root types
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VectorImageVertex);
// Dependencies UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VectorImageVertex
struct CORDL_TYPE VectorImageVertex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageVertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "::UnityEngine::Color32", modifiers: "", def_value: None
  // }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "settingIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "flags", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "circle", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr VectorImageVertex(::UnityEngine::Vector3 position, ::UnityEngine::Color32 tint, ::UnityEngine::Vector2 uv, uint32_t settingIndex, ::UnityEngine::Color32 flags,
                              ::UnityEngine::Vector4 circle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6301 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field tint, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Color32 tint;

  /// @brief Field uv, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 uv;

  /// @brief Field settingIndex, offset: 0x18, size: 0x4, def value: None
  uint32_t settingIndex;

  /// @brief Field flags, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Color32 flags;

  /// @brief Field circle, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 circle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, tint) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, settingIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, flags) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VectorImageVertex, circle) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VectorImageVertex, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VectorImageVertex, "UnityEngine.UIElements", "VectorImageVertex");
