#pragma once
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
// Type: System.Security.Cryptography.X509Certificates::StoreName
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8980))
// CS Name: ::System.Security.Cryptography.X509Certificates::StoreName
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StoreName(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreName();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AddressBook value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::StoreName const AddressBook;

  /// @brief Field AuthRoot value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::StoreName const AuthRoot;

  /// @brief Field CertificateAuthority value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::X509Certificates::StoreName const CertificateAuthority;

  /// @brief Field Disallowed value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::X509Certificates::StoreName const Disallowed;

  /// @brief Field My value: static_cast<int32_t>(0x5)
  static ::System::Security::Cryptography::X509Certificates::StoreName const My;

  /// @brief Field Root value: static_cast<int32_t>(0x6)
  static ::System::Security::Cryptography::X509Certificates::StoreName const Root;

  /// @brief Field TrustedPeople value: static_cast<int32_t>(0x7)
  static ::System::Security::Cryptography::X509Certificates::StoreName const TrustedPeople;

  /// @brief Field TrustedPublisher value: static_cast<int32_t>(0x8)
  static ::System::Security::Cryptography::X509Certificates::StoreName const TrustedPublisher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::StoreName, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::StoreName, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::StoreName, "System.Security.Cryptography.X509Certificates", "StoreName");
