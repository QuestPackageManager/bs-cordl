#pragma once
// IWYU pragma private; include "Mono/Security/Interface/AlertDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AlertDescription)
// Forward declare root types
namespace Mono::Security::Interface {
struct AlertDescription;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::AlertDescription);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.AlertDescription
struct CORDL_TYPE AlertDescription {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AlertDescription_Unwrapped
  enum struct __AlertDescription_Unwrapped : uint8_t {
    __E_CloseNotify = static_cast<uint8_t>(0x0u),
    __E_UnexpectedMessage = static_cast<uint8_t>(0xau),
    __E_BadRecordMAC = static_cast<uint8_t>(0x14u),
    __E_DecryptionFailed_RESERVED = static_cast<uint8_t>(0x15u),
    __E_RecordOverflow = static_cast<uint8_t>(0x16u),
    __E_DecompressionFailure = static_cast<uint8_t>(0x1eu),
    __E_HandshakeFailure = static_cast<uint8_t>(0x28u),
    __E_NoCertificate_RESERVED = static_cast<uint8_t>(0x29u),
    __E_BadCertificate = static_cast<uint8_t>(0x2au),
    __E_UnsupportedCertificate = static_cast<uint8_t>(0x2bu),
    __E_CertificateRevoked = static_cast<uint8_t>(0x2cu),
    __E_CertificateExpired = static_cast<uint8_t>(0x2du),
    __E_CertificateUnknown = static_cast<uint8_t>(0x2eu),
    __E_IlegalParameter = static_cast<uint8_t>(0x2fu),
    __E_UnknownCA = static_cast<uint8_t>(0x30u),
    __E_AccessDenied = static_cast<uint8_t>(0x31u),
    __E_DecodeError = static_cast<uint8_t>(0x32u),
    __E_DecryptError = static_cast<uint8_t>(0x33u),
    __E_ExportRestriction = static_cast<uint8_t>(0x3cu),
    __E_ProtocolVersion = static_cast<uint8_t>(0x46u),
    __E_InsuficientSecurity = static_cast<uint8_t>(0x47u),
    __E_InternalError = static_cast<uint8_t>(0x50u),
    __E_UserCancelled = static_cast<uint8_t>(0x5au),
    __E_NoRenegotiation = static_cast<uint8_t>(0x64u),
    __E_UnsupportedExtension = static_cast<uint8_t>(0x6eu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AlertDescription_Unwrapped() const noexcept {
    return static_cast<__AlertDescription_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertDescription();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AlertDescription(uint8_t value__) noexcept;

  /// @brief Field AccessDenied value: U8(49)
  static ::Mono::Security::Interface::AlertDescription const AccessDenied;

  /// @brief Field BadCertificate value: U8(42)
  static ::Mono::Security::Interface::AlertDescription const BadCertificate;

  /// @brief Field BadRecordMAC value: U8(20)
  static ::Mono::Security::Interface::AlertDescription const BadRecordMAC;

  /// @brief Field CertificateExpired value: U8(45)
  static ::Mono::Security::Interface::AlertDescription const CertificateExpired;

  /// @brief Field CertificateRevoked value: U8(44)
  static ::Mono::Security::Interface::AlertDescription const CertificateRevoked;

  /// @brief Field CertificateUnknown value: U8(46)
  static ::Mono::Security::Interface::AlertDescription const CertificateUnknown;

  /// @brief Field CloseNotify value: U8(0)
  static ::Mono::Security::Interface::AlertDescription const CloseNotify;

  /// @brief Field DecodeError value: U8(50)
  static ::Mono::Security::Interface::AlertDescription const DecodeError;

  /// @brief Field DecompressionFailure value: U8(30)
  static ::Mono::Security::Interface::AlertDescription const DecompressionFailure;

  /// @brief Field DecryptError value: U8(51)
  static ::Mono::Security::Interface::AlertDescription const DecryptError;

  /// @brief Field DecryptionFailed_RESERVED value: U8(21)
  static ::Mono::Security::Interface::AlertDescription const DecryptionFailed_RESERVED;

  /// @brief Field ExportRestriction value: U8(60)
  static ::Mono::Security::Interface::AlertDescription const ExportRestriction;

  /// @brief Field HandshakeFailure value: U8(40)
  static ::Mono::Security::Interface::AlertDescription const HandshakeFailure;

  /// @brief Field IlegalParameter value: U8(47)
  static ::Mono::Security::Interface::AlertDescription const IlegalParameter;

  /// @brief Field InsuficientSecurity value: U8(71)
  static ::Mono::Security::Interface::AlertDescription const InsuficientSecurity;

  /// @brief Field InternalError value: U8(80)
  static ::Mono::Security::Interface::AlertDescription const InternalError;

  /// @brief Field NoCertificate_RESERVED value: U8(41)
  static ::Mono::Security::Interface::AlertDescription const NoCertificate_RESERVED;

  /// @brief Field NoRenegotiation value: U8(100)
  static ::Mono::Security::Interface::AlertDescription const NoRenegotiation;

  /// @brief Field ProtocolVersion value: U8(70)
  static ::Mono::Security::Interface::AlertDescription const ProtocolVersion;

  /// @brief Field RecordOverflow value: U8(22)
  static ::Mono::Security::Interface::AlertDescription const RecordOverflow;

  /// @brief Field UnexpectedMessage value: U8(10)
  static ::Mono::Security::Interface::AlertDescription const UnexpectedMessage;

  /// @brief Field UnknownCA value: U8(48)
  static ::Mono::Security::Interface::AlertDescription const UnknownCA;

  /// @brief Field UnsupportedCertificate value: U8(43)
  static ::Mono::Security::Interface::AlertDescription const UnsupportedCertificate;

  /// @brief Field UnsupportedExtension value: U8(110)
  static ::Mono::Security::Interface::AlertDescription const UnsupportedExtension;

  /// @brief Field UserCancelled value: U8(90)
  static ::Mono::Security::Interface::AlertDescription const UserCancelled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::AlertDescription, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::AlertDescription, 0x1>, "Size mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::AlertDescription, "Mono.Security.Interface", "AlertDescription");
