#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatformResponseErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformResponseErrorCode)
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
struct OculusPlatformResponseErrorCode;
}
// Write type traits
MARK_VAL_T(::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode);
// Dependencies
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformResponseErrorCode
struct CORDL_TYPE OculusPlatformResponseErrorCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OculusPlatformResponseErrorCode_Unwrapped
  enum struct __OculusPlatformResponseErrorCode_Unwrapped : int32_t {
    __E_UNKNOWN_ERROR = static_cast<int32_t>(0x1),
    __E_AUTHENTICATION_ERROR = static_cast<int32_t>(0x2),
    __E_NETWORK_ERROR = static_cast<int32_t>(0x3),
    __E_STORE_INSTALLATION_ERROR = static_cast<int32_t>(0x4),
    __E_CALLER_NOT_SIGNED = static_cast<int32_t>(0x5),
    __E_UNKNOWN_SERVER_ERROR = static_cast<int32_t>(0x6),
    __E_PERMISSIONS_FAILURE = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OculusPlatformResponseErrorCode_Unwrapped() const noexcept {
    return static_cast<__OculusPlatformResponseErrorCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformResponseErrorCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OculusPlatformResponseErrorCode(int32_t value__) noexcept;

  /// @brief Field AUTHENTICATION_ERROR value: I32(2)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const AUTHENTICATION_ERROR;

  /// @brief Field CALLER_NOT_SIGNED value: I32(5)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const CALLER_NOT_SIGNED;

  /// @brief Field NETWORK_ERROR value: I32(3)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const NETWORK_ERROR;

  /// @brief Field PERMISSIONS_FAILURE value: I32(7)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const PERMISSIONS_FAILURE;

  /// @brief Field STORE_INSTALLATION_ERROR value: I32(4)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const STORE_INSTALLATION_ERROR;

  /// @brief Field UNKNOWN_ERROR value: I32(1)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const UNKNOWN_ERROR;

  /// @brief Field UNKNOWN_SERVER_ERROR value: I32(6)
  static ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const UNKNOWN_SERVER_ERROR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21892 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode, 0x4>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode, "OculusStudios.Platform.Oculus", "OculusPlatformResponseErrorCode");
