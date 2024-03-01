#pragma once
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
// Type: System.Security.Principal::TokenImpersonationLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: true
// CS Name: ::System.Security.Principal::TokenImpersonationLevel
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__TokenImpersonationLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenImpersonationLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TokenImpersonationLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Anonymous value: static_cast<int32_t>(0x1)
  static ::System::Security::Principal::TokenImpersonationLevel const Anonymous;

  /// @brief Field Delegation value: static_cast<int32_t>(0x4)
  static ::System::Security::Principal::TokenImpersonationLevel const Delegation;

  /// @brief Field Identification value: static_cast<int32_t>(0x2)
  static ::System::Security::Principal::TokenImpersonationLevel const Identification;

  /// @brief Field Impersonation value: static_cast<int32_t>(0x3)
  static ::System::Security::Principal::TokenImpersonationLevel const Impersonation;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Security::Principal::TokenImpersonationLevel const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::TokenImpersonationLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::TokenImpersonationLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::TokenImpersonationLevel, "System.Security.Principal", "TokenImpersonationLevel");
