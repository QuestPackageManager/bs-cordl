#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationMode)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationMode
struct CORDL_TYPE TriangulationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TriangulationMode_Unwrapped
  enum struct __TriangulationMode_Unwrapped : int32_t {
    __E_Unconstrained = static_cast<int32_t>(0x0),
    __E_Constrained = static_cast<int32_t>(0x1),
    __E_Polygon = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TriangulationMode_Unwrapped() const noexcept {
    return static_cast<__TriangulationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TriangulationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Constrained value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Constrained;

  /// @brief Field Polygon value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Polygon;

  /// @brief Field Unconstrained value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode const Unconstrained;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationMode");
