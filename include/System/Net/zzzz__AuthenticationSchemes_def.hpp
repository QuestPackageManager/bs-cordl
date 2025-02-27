#pragma once
// IWYU pragma private; include "System/Net/AuthenticationSchemes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationSchemes)
// Forward declare root types
namespace System::Net {
struct AuthenticationSchemes;
}
// Write type traits
MARK_VAL_T(::System::Net::AuthenticationSchemes);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.AuthenticationSchemes
struct CORDL_TYPE AuthenticationSchemes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AuthenticationSchemes_Unwrapped
  enum struct __AuthenticationSchemes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Digest = static_cast<int32_t>(0x1),
    __E_Negotiate = static_cast<int32_t>(0x2),
    __E_Ntlm = static_cast<int32_t>(0x4),
    __E_Basic = static_cast<int32_t>(0x8),
    __E_Anonymous = static_cast<int32_t>(0x8000),
    __E_IntegratedWindowsAuthentication = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AuthenticationSchemes_Unwrapped() const noexcept {
    return static_cast<__AuthenticationSchemes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationSchemes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AuthenticationSchemes(int32_t value__) noexcept;

  /// @brief Field Anonymous value: I32(32768)
  static ::System::Net::AuthenticationSchemes const Anonymous;

  /// @brief Field Basic value: I32(8)
  static ::System::Net::AuthenticationSchemes const Basic;

  /// @brief Field Digest value: I32(1)
  static ::System::Net::AuthenticationSchemes const Digest;

  /// @brief Field IntegratedWindowsAuthentication value: I32(6)
  static ::System::Net::AuthenticationSchemes const IntegratedWindowsAuthentication;

  /// @brief Field Negotiate value: I32(2)
  static ::System::Net::AuthenticationSchemes const Negotiate;

  /// @brief Field None value: I32(0)
  static ::System::Net::AuthenticationSchemes const None;

  /// @brief Field Ntlm value: I32(4)
  static ::System::Net::AuthenticationSchemes const Ntlm;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::AuthenticationSchemes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::AuthenticationSchemes, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::AuthenticationSchemes, "System.Net", "AuthenticationSchemes");
