#pragma once
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
// Type: UnityEngine.Rendering::VertexAttribute
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10331))
// CS Name: ::UnityEngine.Rendering::VertexAttribute
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VertexAttribute(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexAttribute();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Position value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::VertexAttribute const Position;

  /// @brief Field Normal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::VertexAttribute const Normal;

  /// @brief Field Tangent value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::VertexAttribute const Tangent;

  /// @brief Field Color value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::VertexAttribute const Color;

  /// @brief Field TexCoord0 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord0;

  /// @brief Field TexCoord1 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord1;

  /// @brief Field TexCoord2 value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord2;

  /// @brief Field TexCoord3 value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord3;

  /// @brief Field TexCoord4 value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord4;

  /// @brief Field TexCoord5 value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord5;

  /// @brief Field TexCoord6 value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord6;

  /// @brief Field TexCoord7 value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::VertexAttribute const TexCoord7;

  /// @brief Field BlendWeight value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::VertexAttribute const BlendWeight;

  /// @brief Field BlendIndices value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::VertexAttribute const BlendIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttribute, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VertexAttribute, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttribute, "UnityEngine.Rendering", "VertexAttribute");
