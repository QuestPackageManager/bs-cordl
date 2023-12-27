#pragma once
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
// Type: System.Security.Cryptography.X509Certificates::X509FindType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8983))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509FindType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr X509FindType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr X509FindType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FindByThumbprint value: static_cast<int32_t>(0x0)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByThumbprint;

  /// @brief Field FindBySubjectName value: static_cast<int32_t>(0x1)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectName;

  /// @brief Field FindBySubjectDistinguishedName value: static_cast<int32_t>(0x2)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectDistinguishedName;

  /// @brief Field FindByIssuerName value: static_cast<int32_t>(0x3)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerName;

  /// @brief Field FindByIssuerDistinguishedName value: static_cast<int32_t>(0x4)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByIssuerDistinguishedName;

  /// @brief Field FindBySerialNumber value: static_cast<int32_t>(0x5)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySerialNumber;

  /// @brief Field FindByTimeValid value: static_cast<int32_t>(0x6)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeValid;

  /// @brief Field FindByTimeNotYetValid value: static_cast<int32_t>(0x7)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeNotYetValid;

  /// @brief Field FindByTimeExpired value: static_cast<int32_t>(0x8)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTimeExpired;

  /// @brief Field FindByTemplateName value: static_cast<int32_t>(0x9)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByTemplateName;

  /// @brief Field FindByApplicationPolicy value: static_cast<int32_t>(0xa)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByApplicationPolicy;

  /// @brief Field FindByCertificatePolicy value: static_cast<int32_t>(0xb)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByCertificatePolicy;

  /// @brief Field FindByExtension value: static_cast<int32_t>(0xc)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByExtension;

  /// @brief Field FindByKeyUsage value: static_cast<int32_t>(0xd)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindByKeyUsage;

  /// @brief Field FindBySubjectKeyIdentifier value: static_cast<int32_t>(0xe)
  static ::System::Security::Cryptography::X509Certificates::X509FindType const FindBySubjectKeyIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509FindType, 0x4>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509FindType, "System.Security.Cryptography.X509Certificates", "X509FindType");
