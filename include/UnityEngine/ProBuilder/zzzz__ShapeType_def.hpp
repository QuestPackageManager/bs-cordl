#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ShapeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeType)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ShapeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::ShapeType);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ShapeType
struct CORDL_TYPE ShapeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShapeType_Unwrapped
  enum struct __ShapeType_Unwrapped : int32_t {
    __E_Cube = static_cast<int32_t>(0x0),
    __E_Stair = static_cast<int32_t>(0x1),
    __E_CurvedStair = static_cast<int32_t>(0x2),
    __E_Prism = static_cast<int32_t>(0x3),
    __E_Cylinder = static_cast<int32_t>(0x4),
    __E_Plane = static_cast<int32_t>(0x5),
    __E_Door = static_cast<int32_t>(0x6),
    __E_Pipe = static_cast<int32_t>(0x7),
    __E_Cone = static_cast<int32_t>(0x8),
    __E_Sprite = static_cast<int32_t>(0x9),
    __E_Arch = static_cast<int32_t>(0xa),
    __E_Sphere = static_cast<int32_t>(0xb),
    __E_Torus = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShapeType_Unwrapped() const noexcept {
    return static_cast<__ShapeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShapeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShapeType(int32_t value__) noexcept;

  /// @brief Field Arch value: I32(10)
  static ::UnityEngine::ProBuilder::ShapeType const Arch;

  /// @brief Field Cone value: I32(8)
  static ::UnityEngine::ProBuilder::ShapeType const Cone;

  /// @brief Field Cube value: I32(0)
  static ::UnityEngine::ProBuilder::ShapeType const Cube;

  /// @brief Field CurvedStair value: I32(2)
  static ::UnityEngine::ProBuilder::ShapeType const CurvedStair;

  /// @brief Field Cylinder value: I32(4)
  static ::UnityEngine::ProBuilder::ShapeType const Cylinder;

  /// @brief Field Door value: I32(6)
  static ::UnityEngine::ProBuilder::ShapeType const Door;

  /// @brief Field Pipe value: I32(7)
  static ::UnityEngine::ProBuilder::ShapeType const Pipe;

  /// @brief Field Plane value: I32(5)
  static ::UnityEngine::ProBuilder::ShapeType const Plane;

  /// @brief Field Prism value: I32(3)
  static ::UnityEngine::ProBuilder::ShapeType const Prism;

  /// @brief Field Sphere value: I32(11)
  static ::UnityEngine::ProBuilder::ShapeType const Sphere;

  /// @brief Field Sprite value: I32(9)
  static ::UnityEngine::ProBuilder::ShapeType const Sprite;

  /// @brief Field Stair value: I32(1)
  static ::UnityEngine::ProBuilder::ShapeType const Stair;

  /// @brief Field Torus value: I32(12)
  static ::UnityEngine::ProBuilder::ShapeType const Torus;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14315 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::ShapeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ShapeType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeType, "UnityEngine.ProBuilder", "ShapeType");
