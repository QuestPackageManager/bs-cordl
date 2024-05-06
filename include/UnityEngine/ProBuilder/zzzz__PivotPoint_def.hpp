#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PivotPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PivotPoint)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct PivotPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::PivotPoint);
// Type: UnityEngine.ProBuilder::PivotPoint
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder::PivotPoint
struct CORDL_TYPE PivotPoint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PivotPoint_Unwrapped
  enum struct __PivotPoint_Unwrapped : int32_t {
    __E_Center = static_cast<int32_t>(0x0),
    __E_IndividualOrigins = static_cast<int32_t>(0x1),
    __E_ActiveElement = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PivotPoint_Unwrapped() const noexcept {
    return static_cast<__PivotPoint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PivotPoint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PivotPoint(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ActiveElement value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ProBuilder::PivotPoint const ActiveElement;

  /// @brief Field Center value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ProBuilder::PivotPoint const Center;

  /// @brief Field IndividualOrigins value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ProBuilder::PivotPoint const IndividualOrigins;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PivotPoint, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::PivotPoint, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PivotPoint, "UnityEngine.ProBuilder", "PivotPoint");
