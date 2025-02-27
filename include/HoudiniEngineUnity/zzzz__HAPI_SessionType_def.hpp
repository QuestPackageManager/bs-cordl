#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_SessionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_SessionType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SessionType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_SessionType
struct CORDL_TYPE HAPI_SessionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_SessionType_Unwrapped
  enum struct __HAPI_SessionType_Unwrapped : int32_t {
    __E_HAPI_SESSION_INPROCESS = static_cast<int32_t>(0x0),
    __E_HAPI_SESSION_THRIFT = static_cast<int32_t>(0x1),
    __E_HAPI_SESSION_CUSTOM1 = static_cast<int32_t>(0x2),
    __E_HAPI_SESSION_CUSTOM2 = static_cast<int32_t>(0x3),
    __E_HAPI_SESSION_CUSTOM3 = static_cast<int32_t>(0x4),
    __E_HAPI_SESSION_MAX = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_SessionType_Unwrapped() const noexcept {
    return static_cast<__HAPI_SessionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_SessionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_SessionType(int32_t value__) noexcept;

  /// @brief Field HAPI_SESSION_CUSTOM1 value: I32(2)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_CUSTOM1;

  /// @brief Field HAPI_SESSION_CUSTOM2 value: I32(3)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_CUSTOM2;

  /// @brief Field HAPI_SESSION_CUSTOM3 value: I32(4)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_CUSTOM3;

  /// @brief Field HAPI_SESSION_INPROCESS value: I32(0)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_INPROCESS;

  /// @brief Field HAPI_SESSION_MAX value: I32(5)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_MAX;

  /// @brief Field HAPI_SESSION_THRIFT value: I32(1)
  static ::HoudiniEngineUnity::HAPI_SessionType const HAPI_SESSION_THRIFT;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11678 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_SessionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SessionType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionType, "HoudiniEngineUnity", "HAPI_SessionType");
