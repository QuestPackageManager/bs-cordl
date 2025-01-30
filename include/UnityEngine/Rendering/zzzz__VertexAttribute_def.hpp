#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VertexAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexAttribute)
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VertexAttribute);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VertexAttribute
struct CORDL_TYPE VertexAttribute {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VertexAttribute_Unwrapped
  enum struct __VertexAttribute_Unwrapped : int32_t {
    __E_Position = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
    __E_Tangent = static_cast<int32_t>(0x2),
    __E_Color = static_cast<int32_t>(0x3),
    __E_TexCoord0 = static_cast<int32_t>(0x4),
    __E_TexCoord1 = static_cast<int32_t>(0x5),
    __E_TexCoord2 = static_cast<int32_t>(0x6),
    __E_TexCoord3 = static_cast<int32_t>(0x7),
    __E_TexCoord4 = static_cast<int32_t>(0x8),
    __E_TexCoord5 = static_cast<int32_t>(0x9),
    __E_TexCoord6 = static_cast<int32_t>(0xa),
    __E_TexCoord7 = static_cast<int32_t>(0xb),
    __E_BlendWeight = static_cast<int32_t>(0xc),
    __E_BlendIndices = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VertexAttribute_Unwrapped() const noexcept {
    return static_cast<__VertexAttribute_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexAttribute();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexAttribute(int32_t value__) noexcept;

  /// @brief Field BlendIndices value: I32(13)
  static ::UnityEngine::Rendering::VertexAttribute const BlendIndices;

  /// @brief Field BlendWeight value: I32(12)
  static ::UnityEngine::Rendering::VertexAttribute const BlendWeight;

  /// @brief Field Color value: I32(3)
  static ::UnityEngine::Rendering::VertexAttribute const Color;

  /// @brief Field Normal value: I32(1)
  static ::UnityEngine::Rendering::VertexAttribute const Normal;

  /// @brief Field Position value: I32(0)
  static ::UnityEngine::Rendering::VertexAttribute const Position;

  /// @brief Field Tangent value: I32(2)
  static ::UnityEngine::Rendering::VertexAttribute const Tangent;

  /// @brief Field TexCoord0 value: I32(4)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord0;

  /// @brief Field TexCoord1 value: I32(5)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord1;

  /// @brief Field TexCoord2 value: I32(6)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord2;

  /// @brief Field TexCoord3 value: I32(7)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord3;

  /// @brief Field TexCoord4 value: I32(8)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord4;

  /// @brief Field TexCoord5 value: I32(9)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord5;

  /// @brief Field TexCoord6 value: I32(10)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord6;

  /// @brief Field TexCoord7 value: I32(11)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord7;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11181 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VertexAttribute, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttribute, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttribute, "UnityEngine.Rendering", "VertexAttribute");
