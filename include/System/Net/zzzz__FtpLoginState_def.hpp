#pragma once
// IWYU pragma private; include "System/Net/FtpLoginState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpLoginState)
// Forward declare root types
namespace System::Net {
struct FtpLoginState;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpLoginState);
// Type: System.Net::FtpLoginState
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// CS Name: ::System.Net::FtpLoginState
struct CORDL_TYPE FtpLoginState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __FtpLoginState_Unwrapped
  enum struct __FtpLoginState_Unwrapped : uint8_t {
    __E_NotLoggedIn = static_cast<uint8_t>(0x0u),
    __E_LoggedIn = static_cast<uint8_t>(0x1u),
    __E_LoggedInButNeedsRelogin = static_cast<uint8_t>(0x2u),
    __E_ReloginFailed = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FtpLoginState_Unwrapped() const noexcept {
    return static_cast<__FtpLoginState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FtpLoginState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr FtpLoginState(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field LoggedIn value: static_cast<uint8_t>(0x1u)
  static ::System::Net::FtpLoginState const LoggedIn;

  /// @brief Field LoggedInButNeedsRelogin value: static_cast<uint8_t>(0x2u)
  static ::System::Net::FtpLoginState const LoggedInButNeedsRelogin;

  /// @brief Field NotLoggedIn value: static_cast<uint8_t>(0x0u)
  static ::System::Net::FtpLoginState const NotLoggedIn;

  /// @brief Field ReloginFailed value: static_cast<uint8_t>(0x3u)
  static ::System::Net::FtpLoginState const ReloginFailed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpLoginState, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Net::FtpLoginState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpLoginState, "System.Net", "FtpLoginState");
