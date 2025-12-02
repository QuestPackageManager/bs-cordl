#pragma once
// IWYU pragma private; include "System/Security/Principal/TokenImpersonationLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenImpersonationLevel)
// Forward declare root types
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
// Write type traits
MARK_VAL_T(::System::Security::Principal::TokenImpersonationLevel);
// Dependencies
namespace System::Security::Principal {
// Is value type: true
// CS Name: System.Security.Principal.TokenImpersonationLevel
struct CORDL_TYPE TokenImpersonationLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TokenImpersonationLevel_Unwrapped
  enum struct __TokenImpersonationLevel_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Anonymous = static_cast<int32_t>(0x1),
    __E_Identification = static_cast<int32_t>(0x2),
    __E_Impersonation = static_cast<int32_t>(0x3),
    __E_Delegation = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TokenImpersonationLevel_Unwrapped() const noexcept {
    return static_cast<__TokenImpersonationLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenImpersonationLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TokenImpersonationLevel(int32_t value__) noexcept;

  /// @brief Field Anonymous value: I32(1)
  static ::System::Security::Principal::TokenImpersonationLevel const Anonymous;

  /// @brief Field Delegation value: I32(4)
  static ::System::Security::Principal::TokenImpersonationLevel const Delegation;

  /// @brief Field Identification value: I32(2)
  static ::System::Security::Principal::TokenImpersonationLevel const Identification;

  /// @brief Field Impersonation value: I32(3)
  static ::System::Security::Principal::TokenImpersonationLevel const Impersonation;

  /// @brief Field None value: I32(0)
  static ::System::Security::Principal::TokenImpersonationLevel const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3013 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::TokenImpersonationLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Principal::TokenImpersonationLevel, 0x4>, "Size mismatch!");

} // namespace System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::TokenImpersonationLevel, "System.Security.Principal", "TokenImpersonationLevel");
