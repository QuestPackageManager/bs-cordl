#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509FindType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(X509FindType)
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509FindType;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::X509Certificates::X509FindType);
// Dependencies
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// CS Name: System.Security.Cryptography.X509Certificates.X509FindType
struct CORDL_TYPE X509FindType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __X509FindType_Unwrapped
  enum struct __X509FindType_Unwrapped : int32_t {
    __E_FindByThumbprint = static_cast<int32_t>(0x0),
    __E_FindBySubjectName = static_cast<int32_t>(0x1),
    __E_FindBySubjectDistinguishedName = static_cast<int32_t>(0x2),
    __E_FindByIssuerName = static_cast<int32_t>(0x3),
    __E_FindByIssuerDistinguishedName = static_cast<int32_t>(0x4),
    __E_FindBySerialNumber = static_cast<int32_t>(0x5),
    __E_FindByTimeValid = static_cast<int32_t>(0x6),
    __E_FindByTimeNotYetValid = static_cast<int32_t>(0x7),
    __E_FindByTimeExpired = static_cast<int32_t>(0x8),
    __E_FindByTemplateName = static_cast<int32_t>(0x9),
    __E_FindByApplicationPolicy = static_cast<int32_t>(0xa),
    __E_FindByCertificatePolicy = static_cast<int32_t>(0xb),
    __E_FindByExtension = static_cast<int32_t>(0xc),
    __E_FindByKeyUsage = static_cast<int32_t>(0xd),
    __E_FindBySubjectKeyIdentifier = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __X509FindType_Unwrapped() const noexcept {
    return static_cast<__X509FindType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509FindType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509FindType(int32_t value__) noexcept;

  /// @brief Field FindByApplicationPolicy value: I32(10)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByApplicationPolicy;

  /// @brief Field FindByCertificatePolicy value: I32(11)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByCertificatePolicy;

  /// @brief Field FindByExtension value: I32(12)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByExtension;

  /// @brief Field FindByIssuerDistinguishedName value: I32(4)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerDistinguishedName;

  /// @brief Field FindByIssuerName value: I32(3)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerName;

  /// @brief Field FindByKeyUsage value: I32(13)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByKeyUsage;

  /// @brief Field FindBySerialNumber value: I32(5)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySerialNumber;

  /// @brief Field FindBySubjectDistinguishedName value: I32(2)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectDistinguishedName;

  /// @brief Field FindBySubjectKeyIdentifier value: I32(14)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectKeyIdentifier;

  /// @brief Field FindBySubjectName value: I32(1)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectName;

  /// @brief Field FindByTemplateName value: I32(9)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTemplateName;

  /// @brief Field FindByThumbprint value: I32(0)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByThumbprint;

  /// @brief Field FindByTimeExpired value: I32(8)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeExpired;

  /// @brief Field FindByTimeNotYetValid value: I32(7)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeNotYetValid;

  /// @brief Field FindByTimeValid value: I32(6)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeValid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509FindType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509FindType, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509FindType, "System.Security.Cryptography.X509Certificates", "X509FindType");
