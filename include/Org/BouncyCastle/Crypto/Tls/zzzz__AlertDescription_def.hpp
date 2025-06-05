#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AlertDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlertDescription)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AlertDescription;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AlertDescription);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AlertDescription
class CORDL_TYPE AlertDescription : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetName, addr 0x23e2fc0, size 0x3f4, virtual false, abstract: false, final false
  static inline ::StringW GetName(uint8_t alertDescription);

  /// @brief Method GetText, addr 0x23e33b4, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW GetText(uint8_t alertDescription);

  static inline ::Org::BouncyCastle::Crypto::Tls::AlertDescription* New_ctor();

  /// @brief Method .ctor, addr 0x23e3530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlertDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlertDescription(AlertDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlertDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlertDescription(AlertDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1178 };

  /// @brief Field access_denied offset 0xffffffff size 0x1
  static constexpr uint8_t access_denied{ static_cast<uint8_t>(0x31u) };

  /// @brief Field bad_certificate offset 0xffffffff size 0x1
  static constexpr uint8_t bad_certificate{ static_cast<uint8_t>(0x2au) };

  /// @brief Field bad_certificate_hash_value offset 0xffffffff size 0x1
  static constexpr uint8_t bad_certificate_hash_value{ static_cast<uint8_t>(0x72u) };

  /// @brief Field bad_certificate_status_response offset 0xffffffff size 0x1
  static constexpr uint8_t bad_certificate_status_response{ static_cast<uint8_t>(0x71u) };

  /// @brief Field bad_record_mac offset 0xffffffff size 0x1
  static constexpr uint8_t bad_record_mac{ static_cast<uint8_t>(0x14u) };

  /// @brief Field certificate_expired offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_expired{ static_cast<uint8_t>(0x2du) };

  /// @brief Field certificate_revoked offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_revoked{ static_cast<uint8_t>(0x2cu) };

  /// @brief Field certificate_unknown offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_unknown{ static_cast<uint8_t>(0x2eu) };

  /// @brief Field certificate_unobtainable offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_unobtainable{ static_cast<uint8_t>(0x6fu) };

  /// @brief Field close_notify offset 0xffffffff size 0x1
  static constexpr uint8_t close_notify{ static_cast<uint8_t>(0x0u) };

  /// @brief Field decode_error offset 0xffffffff size 0x1
  static constexpr uint8_t decode_error{ static_cast<uint8_t>(0x32u) };

  /// @brief Field decompression_failure offset 0xffffffff size 0x1
  static constexpr uint8_t decompression_failure{ static_cast<uint8_t>(0x1eu) };

  /// @brief Field decrypt_error offset 0xffffffff size 0x1
  static constexpr uint8_t decrypt_error{ static_cast<uint8_t>(0x33u) };

  /// @brief Field decryption_failed offset 0xffffffff size 0x1
  static constexpr uint8_t decryption_failed{ static_cast<uint8_t>(0x15u) };

  /// @brief Field export_restriction offset 0xffffffff size 0x1
  static constexpr uint8_t export_restriction{ static_cast<uint8_t>(0x3cu) };

  /// @brief Field handshake_failure offset 0xffffffff size 0x1
  static constexpr uint8_t handshake_failure{ static_cast<uint8_t>(0x28u) };

  /// @brief Field illegal_parameter offset 0xffffffff size 0x1
  static constexpr uint8_t illegal_parameter{ static_cast<uint8_t>(0x2fu) };

  /// @brief Field inappropriate_fallback offset 0xffffffff size 0x1
  static constexpr uint8_t inappropriate_fallback{ static_cast<uint8_t>(0x56u) };

  /// @brief Field insufficient_security offset 0xffffffff size 0x1
  static constexpr uint8_t insufficient_security{ static_cast<uint8_t>(0x47u) };

  /// @brief Field internal_error offset 0xffffffff size 0x1
  static constexpr uint8_t internal_error{ static_cast<uint8_t>(0x50u) };

  /// @brief Field no_certificate offset 0xffffffff size 0x1
  static constexpr uint8_t no_certificate{ static_cast<uint8_t>(0x29u) };

  /// @brief Field no_renegotiation offset 0xffffffff size 0x1
  static constexpr uint8_t no_renegotiation{ static_cast<uint8_t>(0x64u) };

  /// @brief Field protocol_version offset 0xffffffff size 0x1
  static constexpr uint8_t protocol_version{ static_cast<uint8_t>(0x46u) };

  /// @brief Field record_overflow offset 0xffffffff size 0x1
  static constexpr uint8_t record_overflow{ static_cast<uint8_t>(0x16u) };

  /// @brief Field unexpected_message offset 0xffffffff size 0x1
  static constexpr uint8_t unexpected_message{ static_cast<uint8_t>(0xau) };

  /// @brief Field unknown_ca offset 0xffffffff size 0x1
  static constexpr uint8_t unknown_ca{ static_cast<uint8_t>(0x30u) };

  /// @brief Field unknown_psk_identity offset 0xffffffff size 0x1
  static constexpr uint8_t unknown_psk_identity{ static_cast<uint8_t>(0x73u) };

  /// @brief Field unrecognized_name offset 0xffffffff size 0x1
  static constexpr uint8_t unrecognized_name{ static_cast<uint8_t>(0x70u) };

  /// @brief Field unsupported_certificate offset 0xffffffff size 0x1
  static constexpr uint8_t unsupported_certificate{ static_cast<uint8_t>(0x2bu) };

  /// @brief Field unsupported_extension offset 0xffffffff size 0x1
  static constexpr uint8_t unsupported_extension{ static_cast<uint8_t>(0x6eu) };

  /// @brief Field user_canceled offset 0xffffffff size 0x1
  static constexpr uint8_t user_canceled{ static_cast<uint8_t>(0x5au) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AlertDescription, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AlertDescription);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AlertDescription*, "Org.BouncyCastle.Crypto.Tls", "AlertDescription");
