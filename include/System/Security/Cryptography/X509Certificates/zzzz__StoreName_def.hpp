#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/StoreName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StoreName)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct StoreName;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::StoreName);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.StoreName
struct CORDL_TYPE StoreName {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StoreName_Unwrapped
  enum struct __StoreName_Unwrapped : int32_t {
    __E_AddressBook = static_cast<int32_t>(0x1),
    __E_AuthRoot = static_cast<int32_t>(0x2),
    __E_CertificateAuthority = static_cast<int32_t>(0x3),
    __E_Disallowed = static_cast<int32_t>(0x4),
    __E_My = static_cast<int32_t>(0x5),
    __E_Root = static_cast<int32_t>(0x6),
    __E_TrustedPeople = static_cast<int32_t>(0x7),
    __E_TrustedPublisher = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StoreName_Unwrapped() const noexcept {
    return static_cast<__StoreName_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreName();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StoreName(int32_t value__) noexcept;

  /// @brief Field AddressBook value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::StoreName const AddressBook;

  /// @brief Field AuthRoot value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::StoreName const AuthRoot;

  /// @brief Field CertificateAuthority value: I32(3)
  static ::System::Security::Cryptography::X509Certificates::StoreName const CertificateAuthority;

  /// @brief Field Disallowed value: I32(4)
  static ::System::Security::Cryptography::X509Certificates::StoreName const Disallowed;

  /// @brief Field My value: I32(5)
  static ::System::Security::Cryptography::X509Certificates::StoreName const My;

  /// @brief Field Root value: I32(6)
  static ::System::Security::Cryptography::X509Certificates::StoreName const Root;

  /// @brief Field TrustedPeople value: I32(7)
  static ::System::Security::Cryptography::X509Certificates::StoreName const TrustedPeople;

  /// @brief Field TrustedPublisher value: I32(8)
  static ::System::Security::Cryptography::X509Certificates::StoreName const TrustedPublisher;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11153 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::StoreName, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::StoreName, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::StoreName, "System.Security.Cryptography.X509Certificates", "StoreName");
