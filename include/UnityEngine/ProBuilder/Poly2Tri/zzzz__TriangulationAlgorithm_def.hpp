#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationAlgorithm)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationAlgorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15339))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationAlgorithm
struct CORDL_TYPE TriangulationAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TriangulationAlgorithm_Unwrapped
  enum struct __TriangulationAlgorithm_Unwrapped : int32_t {
    __E_DTSweep = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TriangulationAlgorithm_Unwrapped() const noexcept {
    return static_cast<__TriangulationAlgorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TriangulationAlgorithm(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TriangulationAlgorithm();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DTSweep value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm const DTSweep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationAlgorithm");
