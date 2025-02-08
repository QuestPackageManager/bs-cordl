#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_RSTOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_RSTOrder)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_RSTOrder);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_RSTOrder
struct CORDL_TYPE HAPI_RSTOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_RSTOrder_Unwrapped
  enum struct __HAPI_RSTOrder_Unwrapped : int32_t {
    __E_HAPI_TRS = static_cast<int32_t>(0x0),
    __E_HAPI_TSR = static_cast<int32_t>(0x1),
    __E_HAPI_RTS = static_cast<int32_t>(0x2),
    __E_HAPI_RST = static_cast<int32_t>(0x3),
    __E_HAPI_STR = static_cast<int32_t>(0x4),
    __E_HAPI_SRT = static_cast<int32_t>(0x5),
    __E_HAPI_RSTORDER_DEFAULT = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_RSTOrder_Unwrapped() const noexcept {
    return static_cast<__HAPI_RSTOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_RSTOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_RSTOrder(int32_t value__) noexcept;

  /// @brief Field HAPI_RST value: I32(3)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RST;

  /// @brief Field HAPI_RSTORDER_DEFAULT value: I32(5)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RSTORDER_DEFAULT;

  /// @brief Field HAPI_RTS value: I32(2)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RTS;

  /// @brief Field HAPI_SRT value: I32(5)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_SRT;

  /// @brief Field HAPI_STR value: I32(4)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_STR;

  /// @brief Field HAPI_TRS value: I32(0)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_TRS;

  /// @brief Field HAPI_TSR value: I32(1)
  static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_TSR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_RSTOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_RSTOrder, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_RSTOrder, "HoudiniEngineUnity", "HAPI_RSTOrder");
