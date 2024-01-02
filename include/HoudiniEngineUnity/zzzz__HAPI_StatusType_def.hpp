#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_StatusType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StatusType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_StatusType);
// Type: HoudiniEngineUnity::HAPI_StatusType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9687))
// CS Name: ::HoudiniEngineUnity::HAPI_StatusType
struct CORDL_TYPE HAPI_StatusType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_StatusType_Unwrapped
  enum struct __HAPI_StatusType_Unwrapped : int32_t {
    __E_HAPI_STATUS_CALL_RESULT = static_cast<int32_t>(0x0),
    __E_HAPI_STATUS_COOK_RESULT = static_cast<int32_t>(0x1),
    __E_HAPI_STATUS_COOK_STATE = static_cast<int32_t>(0x2),
    __E_HAPI_STATUS_MAX = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_StatusType_Unwrapped() const noexcept {
    return static_cast<__HAPI_StatusType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_StatusType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_StatusType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_STATUS_CALL_RESULT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_CALL_RESULT;

  /// @brief Field HAPI_STATUS_COOK_RESULT value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_COOK_RESULT;

  /// @brief Field HAPI_STATUS_COOK_STATE value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_COOK_STATE;

  /// @brief Field HAPI_STATUS_MAX value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_MAX;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_StatusType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_StatusType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_StatusType, "HoudiniEngineUnity", "HAPI_StatusType");
