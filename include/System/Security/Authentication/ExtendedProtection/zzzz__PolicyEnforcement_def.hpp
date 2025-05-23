#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/PolicyEnforcement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolicyEnforcement)
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
struct PolicyEnforcement;
}
// Write type traits
MARK_VAL_T(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement);
// Dependencies
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: true
// CS Name: System.Security.Authentication.ExtendedProtection.PolicyEnforcement
struct CORDL_TYPE PolicyEnforcement {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PolicyEnforcement_Unwrapped
  enum struct __PolicyEnforcement_Unwrapped : int32_t {
    __E_Never = static_cast<int32_t>(0x0),
    __E_WhenSupported = static_cast<int32_t>(0x1),
    __E_Always = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PolicyEnforcement_Unwrapped() const noexcept {
    return static_cast<__PolicyEnforcement_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PolicyEnforcement();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PolicyEnforcement(int32_t value__) noexcept;

  /// @brief Field Always value: I32(2)
  static ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement const Always;

  /// @brief Field Never value: I32(0)
  static ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement const Never;

  /// @brief Field WhenSupported value: I32(1)
  static ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement const WhenSupported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, 0x4>, "Size mismatch!");

} // namespace System::Security::Authentication::ExtendedProtection
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement, "System.Security.Authentication.ExtendedProtection", "PolicyEnforcement");
