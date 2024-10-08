#pragma once
// IWYU pragma private; include "System/Net/Security/AuthenticationLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationLevel)
// Forward declare root types
namespace System::Net::Security {
struct AuthenticationLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Security::AuthenticationLevel);
// Type: System.Net.Security::AuthenticationLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Security {
// Is value type: true
// CS Name: ::System.Net.Security::AuthenticationLevel
struct CORDL_TYPE AuthenticationLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AuthenticationLevel_Unwrapped
  enum struct __AuthenticationLevel_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MutualAuthRequested = static_cast<int32_t>(0x1),
    __E_MutualAuthRequired = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AuthenticationLevel_Unwrapped() const noexcept {
    return static_cast<__AuthenticationLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AuthenticationLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MutualAuthRequested value: static_cast<int32_t>(0x1)
  static ::System::Net::Security::AuthenticationLevel const MutualAuthRequested;

  /// @brief Field MutualAuthRequired value: static_cast<int32_t>(0x2)
  static ::System::Net::Security::AuthenticationLevel const MutualAuthRequired;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Net::Security::AuthenticationLevel const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9860 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::AuthenticationLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Security::AuthenticationLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::AuthenticationLevel, "System.Net.Security", "AuthenticationLevel");
