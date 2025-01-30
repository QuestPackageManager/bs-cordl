#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/StoreLocation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoreLocation)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::StoreLocation);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.StoreLocation
struct CORDL_TYPE StoreLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StoreLocation_Unwrapped
  enum struct __StoreLocation_Unwrapped : int32_t {
    __E_CurrentUser = static_cast<int32_t>(0x1),
    __E_LocalMachine = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StoreLocation_Unwrapped() const noexcept {
    return static_cast<__StoreLocation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreLocation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StoreLocation(int32_t value__) noexcept;

  /// @brief Field CurrentUser value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::StoreLocation const CurrentUser;

  /// @brief Field LocalMachine value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::StoreLocation const LocalMachine;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9298 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::StoreLocation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::StoreLocation, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::StoreLocation, "System.Security.Cryptography.X509Certificates", "StoreLocation");
