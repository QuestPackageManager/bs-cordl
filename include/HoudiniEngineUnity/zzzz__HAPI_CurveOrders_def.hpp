#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_CurveOrders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CurveOrders)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveOrders;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CurveOrders);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_CurveOrders
struct CORDL_TYPE HAPI_CurveOrders {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_CurveOrders_Unwrapped
  enum struct __HAPI_CurveOrders_Unwrapped : int32_t {
    __E_HAPI_CURVE_ORDER_VARYING = static_cast<int32_t>(0x0),
    __E_HAPI_CURVE_ORDER_INVALID = static_cast<int32_t>(0x1),
    __E_HAPI_CURVE_ORDER_LINEAR = static_cast<int32_t>(0x2),
    __E_HAPI_CURVE_ORDER_QUADRATIC = static_cast<int32_t>(0x3),
    __E_HAPI_CURVE_ORDER_CUBIC = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_CurveOrders_Unwrapped() const noexcept {
    return static_cast<__HAPI_CurveOrders_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_CurveOrders();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_CurveOrders(int32_t value__) noexcept;

  /// @brief Field HAPI_CURVE_ORDER_CUBIC value: I32(4)
  static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_CUBIC;

  /// @brief Field HAPI_CURVE_ORDER_INVALID value: I32(1)
  static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_INVALID;

  /// @brief Field HAPI_CURVE_ORDER_LINEAR value: I32(2)
  static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_LINEAR;

  /// @brief Field HAPI_CURVE_ORDER_QUADRATIC value: I32(3)
  static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_QUADRATIC;

  /// @brief Field HAPI_CURVE_ORDER_VARYING value: I32(0)
  static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_VARYING;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11694 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveOrders, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CurveOrders, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveOrders, "HoudiniEngineUnity", "HAPI_CurveOrders");
