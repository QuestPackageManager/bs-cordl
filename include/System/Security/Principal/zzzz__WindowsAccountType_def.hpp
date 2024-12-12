#pragma once
// IWYU pragma private; include "System/Security/Principal/WindowsAccountType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsAccountType)
// Forward declare root types
namespace System::Security::Principal {
struct WindowsAccountType;
}
// Write type traits
MARK_VAL_T(::System::Security::Principal::WindowsAccountType);
// Dependencies
namespace System::Security::Principal {
// Is value type: true
// CS Name: System.Security.Principal.WindowsAccountType
struct CORDL_TYPE WindowsAccountType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WindowsAccountType_Unwrapped
  enum struct __WindowsAccountType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Guest = static_cast<int32_t>(0x1),
    __E_System = static_cast<int32_t>(0x2),
    __E_Anonymous = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WindowsAccountType_Unwrapped() const noexcept {
    return static_cast<__WindowsAccountType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsAccountType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WindowsAccountType(int32_t value__) noexcept;

  /// @brief Field Anonymous value: I32(3)
  static ::System::Security::Principal::WindowsAccountType const Anonymous;

  /// @brief Field Guest value: I32(1)
  static ::System::Security::Principal::WindowsAccountType const Guest;

  /// @brief Field Normal value: I32(0)
  static ::System::Security::Principal::WindowsAccountType const Normal;

  /// @brief Field System value: I32(2)
  static ::System::Security::Principal::WindowsAccountType const System;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3004 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::WindowsAccountType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsAccountType, 0x4>, "Size mismatch!");

} // namespace System::Security::Principal
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
