#pragma once
// IWYU pragma private; include "TMPro/VertexGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VertexGradient)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
struct VertexGradient;
}
// Write type traits
MARK_VAL_T(::TMPro::VertexGradient);
// Dependencies UnityEngine.Color
namespace TMPro {
// Is value type: true
// CS Name: TMPro.VertexGradient
struct CORDL_TYPE VertexGradient {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x47c08b4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color);

  /// @brief Method .ctor, addr 0x47c08d8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexGradient();

  // Ctor Parameters [CppParam { name: "topLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "::UnityEngine::Color", modifiers: "", def_value: None
  // }, CppParam { name: "bottomLeft", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr VertexGradient(::UnityEngine::Color topLeft, ::UnityEngine::Color topRight, ::UnityEngine::Color bottomLeft, ::UnityEngine::Color bottomRight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field topLeft, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color topLeft;

  /// @brief Field topRight, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color topRight;

  /// @brief Field bottomLeft, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color bottomLeft;

  /// @brief Field bottomRight, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color bottomRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::VertexGradient, topLeft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::VertexGradient, topRight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::VertexGradient, bottomLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::VertexGradient, bottomRight) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::VertexGradient, 0x40>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VertexGradient, "TMPro", "VertexGradient");
