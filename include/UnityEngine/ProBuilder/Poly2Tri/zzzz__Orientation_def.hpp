#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Orientation)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::Orientation);
// Type: UnityEngine.ProBuilder.Poly2Tri::Orientation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15336))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::Orientation
struct CORDL_TYPE Orientation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Orientation_Unwrapped
  enum struct __Orientation_Unwrapped : int32_t {
    __E_CW = static_cast<int32_t>(0x0),
    __E_CCW = static_cast<int32_t>(0x1),
    __E_Collinear = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Orientation_Unwrapped() const noexcept {
    return static_cast<__Orientation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Orientation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Orientation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CW value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::Poly2Tri::Orientation const CW;

  /// @brief Field CCW value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::Poly2Tri::Orientation const CCW;

  /// @brief Field Collinear value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::Poly2Tri::Orientation const Collinear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::Orientation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::Orientation, "UnityEngine.ProBuilder.Poly2Tri", "Orientation");
