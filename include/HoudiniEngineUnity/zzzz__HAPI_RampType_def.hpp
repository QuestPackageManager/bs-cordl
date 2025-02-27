#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_RampType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_RampType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_RampType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_RampType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_RampType
struct CORDL_TYPE HAPI_RampType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_RampType_Unwrapped
  enum struct __HAPI_RampType_Unwrapped : int32_t {
    __E_HAPI_RAMPTYPE_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_RAMPTYPE_FLOAT = static_cast<int32_t>(0x0),
    __E_HAPI_RAMPTYPE_COLOR = static_cast<int32_t>(0x1),
    __E_HAPI_RAMPTYPE_MAX = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_RampType_Unwrapped() const noexcept {
    return static_cast<__HAPI_RampType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_RampType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_RampType(int32_t value__) noexcept;

  /// @brief Field HAPI_RAMPTYPE_COLOR value: I32(1)
  static ::HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_COLOR;

  /// @brief Field HAPI_RAMPTYPE_FLOAT value: I32(0)
  static ::HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_FLOAT;

  /// @brief Field HAPI_RAMPTYPE_INVALID value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_INVALID;

  /// @brief Field HAPI_RAMPTYPE_MAX value: I32(2)
  static ::HoudiniEngineUnity::HAPI_RampType const HAPI_RAMPTYPE_MAX;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11682 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_RampType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_RampType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_RampType, "HoudiniEngineUnity", "HAPI_RampType");
