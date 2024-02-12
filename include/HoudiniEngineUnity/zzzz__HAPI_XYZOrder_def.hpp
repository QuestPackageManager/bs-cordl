#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_XYZOrder)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_XYZOrder);
// Type: HoudiniEngineUnity::HAPI_XYZOrder
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9507))
// CS Name: ::HoudiniEngineUnity::HAPI_XYZOrder
struct CORDL_TYPE HAPI_XYZOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_XYZOrder_Unwrapped
  enum struct __HAPI_XYZOrder_Unwrapped : int32_t {
    __E_HAPI_XYZ = static_cast<int32_t>(0x0),
    __E_HAPI_XZY = static_cast<int32_t>(0x1),
    __E_HAPI_YXZ = static_cast<int32_t>(0x2),
    __E_HAPI_YZX = static_cast<int32_t>(0x3),
    __E_HAPI_ZXY = static_cast<int32_t>(0x4),
    __E_HAPI_ZYX = static_cast<int32_t>(0x5),
    __E_HAPI_XYZORDER_DEFAULT = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_XYZOrder_Unwrapped() const noexcept {
    return static_cast<__HAPI_XYZOrder_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_XYZOrder(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_XYZOrder();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_XYZ value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZ;

  /// @brief Field HAPI_XZY value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XZY;

  /// @brief Field HAPI_YXZ value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YXZ;

  /// @brief Field HAPI_YZX value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_YZX;

  /// @brief Field HAPI_ZXY value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZXY;

  /// @brief Field HAPI_ZYX value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_ZYX;

  /// @brief Field HAPI_XYZORDER_DEFAULT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_XYZOrder const HAPI_XYZORDER_DEFAULT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_XYZOrder, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_XYZOrder, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_XYZOrder, "HoudiniEngineUnity", "HAPI_XYZOrder");
