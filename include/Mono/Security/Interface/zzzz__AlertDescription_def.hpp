#pragma once
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
// Type: Mono.Security.Interface::AlertDescription
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: ::Mono.Security.Interface::AlertDescription
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

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field AccessDenied value: static_cast<uint8_t>(0x31u)
  static ::Mono::Security::Interface::AlertDescription const AccessDenied;

  /// @brief Field BadCertificate value: static_cast<uint8_t>(0x2au)
  static ::Mono::Security::Interface::AlertDescription const BadCertificate;

  /// @brief Field BadRecordMAC value: static_cast<uint8_t>(0x14u)
  static ::Mono::Security::Interface::AlertDescription const BadRecordMAC;

  /// @brief Field CertificateExpired value: static_cast<uint8_t>(0x2du)
  static ::Mono::Security::Interface::AlertDescription const CertificateExpired;

  /// @brief Field CertificateRevoked value: static_cast<uint8_t>(0x2cu)
  static ::Mono::Security::Interface::AlertDescription const CertificateRevoked;

  /// @brief Field CertificateUnknown value: static_cast<uint8_t>(0x2eu)
  static ::Mono::Security::Interface::AlertDescription const CertificateUnknown;

  /// @brief Field CloseNotify value: static_cast<uint8_t>(0x0u)
  static ::Mono::Security::Interface::AlertDescription const CloseNotify;

  /// @brief Field DecodeError value: static_cast<uint8_t>(0x32u)
  static ::Mono::Security::Interface::AlertDescription const DecodeError;

  /// @brief Field DecompressionFailure value: static_cast<uint8_t>(0x1eu)
  static ::Mono::Security::Interface::AlertDescription const DecompressionFailure;

  /// @brief Field DecryptError value: static_cast<uint8_t>(0x33u)
  static ::Mono::Security::Interface::AlertDescription const DecryptError;

  /// @brief Field DecryptionFailed_RESERVED value: static_cast<uint8_t>(0x15u)
  static ::Mono::Security::Interface::AlertDescription const DecryptionFailed_RESERVED;

  /// @brief Field ExportRestriction value: static_cast<uint8_t>(0x3cu)
  static ::Mono::Security::Interface::AlertDescription const ExportRestriction;

  /// @brief Field HandshakeFailure value: static_cast<uint8_t>(0x28u)
  static ::Mono::Security::Interface::AlertDescription const HandshakeFailure;

  /// @brief Field IlegalParameter value: static_cast<uint8_t>(0x2fu)
  static ::Mono::Security::Interface::AlertDescription const IlegalParameter;

  /// @brief Field InsuficientSecurity value: static_cast<uint8_t>(0x47u)
  static ::Mono::Security::Interface::AlertDescription const InsuficientSecurity;

  /// @brief Field InternalError value: static_cast<uint8_t>(0x50u)
  static ::Mono::Security::Interface::AlertDescription const InternalError;

  /// @brief Field NoCertificate_RESERVED value: static_cast<uint8_t>(0x29u)
  static ::Mono::Security::Interface::AlertDescription const NoCertificate_RESERVED;

  /// @brief Field NoRenegotiation value: static_cast<uint8_t>(0x64u)
  static ::Mono::Security::Interface::AlertDescription const NoRenegotiation;

  /// @brief Field ProtocolVersion value: static_cast<uint8_t>(0x46u)
  static ::Mono::Security::Interface::AlertDescription const ProtocolVersion;

  /// @brief Field RecordOverflow value: static_cast<uint8_t>(0x16u)
  static ::Mono::Security::Interface::AlertDescription const RecordOverflow;

  /// @brief Field UnexpectedMessage value: static_cast<uint8_t>(0xau)
  static ::Mono::Security::Interface::AlertDescription const UnexpectedMessage;

  /// @brief Field UnknownCA value: static_cast<uint8_t>(0x30u)
  static ::Mono::Security::Interface::AlertDescription const UnknownCA;

  /// @brief Field UnsupportedCertificate value: static_cast<uint8_t>(0x2bu)
  static ::Mono::Security::Interface::AlertDescription const UnsupportedCertificate;

  /// @brief Field UnsupportedExtension value: static_cast<uint8_t>(0x6eu)
  static ::Mono::Security::Interface::AlertDescription const UnsupportedExtension;

  /// @brief Field UserCancelled value: static_cast<uint8_t>(0x5au)
  static ::Mono::Security::Interface::AlertDescription const UserCancelled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::AlertDescription, 0x1>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Interface::AlertDescription, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::AlertDescription, "Mono.Security.Interface", "AlertDescription");
