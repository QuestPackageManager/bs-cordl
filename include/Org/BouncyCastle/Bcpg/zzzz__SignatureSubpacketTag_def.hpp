#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SignatureSubpacketTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureSubpacketTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag);
// Dependencies
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: Org.BouncyCastle.Bcpg.SignatureSubpacketTag
struct CORDL_TYPE SignatureSubpacketTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SignatureSubpacketTag_Unwrapped
  enum struct __SignatureSubpacketTag_Unwrapped : int32_t {
    __E_CreationTime = static_cast<int32_t>(0x2),
    __E_ExpireTime = static_cast<int32_t>(0x3),
    __E_Exportable = static_cast<int32_t>(0x4),
    __E_TrustSig = static_cast<int32_t>(0x5),
    __E_RegExp = static_cast<int32_t>(0x6),
    __E_Revocable = static_cast<int32_t>(0x7),
    __E_KeyExpireTime = static_cast<int32_t>(0x9),
    __E_Placeholder = static_cast<int32_t>(0xa),
    __E_PreferredSymmetricAlgorithms = static_cast<int32_t>(0xb),
    __E_RevocationKey = static_cast<int32_t>(0xc),
    __E_IssuerKeyId = static_cast<int32_t>(0x10),
    __E_NotationData = static_cast<int32_t>(0x14),
    __E_PreferredHashAlgorithms = static_cast<int32_t>(0x15),
    __E_PreferredCompressionAlgorithms = static_cast<int32_t>(0x16),
    __E_KeyServerPreferences = static_cast<int32_t>(0x17),
    __E_PreferredKeyServer = static_cast<int32_t>(0x18),
    __E_PrimaryUserId = static_cast<int32_t>(0x19),
    __E_PolicyUrl = static_cast<int32_t>(0x1a),
    __E_KeyFlags = static_cast<int32_t>(0x1b),
    __E_SignerUserId = static_cast<int32_t>(0x1c),
    __E_RevocationReason = static_cast<int32_t>(0x1d),
    __E_Features = static_cast<int32_t>(0x1e),
    __E_SignatureTarget = static_cast<int32_t>(0x1f),
    __E_EmbeddedSignature = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SignatureSubpacketTag_Unwrapped() const noexcept {
    return static_cast<__SignatureSubpacketTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureSubpacketTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SignatureSubpacketTag(int32_t value__) noexcept;

  /// @brief Field CreationTime value: I32(2)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const CreationTime;

  /// @brief Field EmbeddedSignature value: I32(32)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const EmbeddedSignature;

  /// @brief Field ExpireTime value: I32(3)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const ExpireTime;

  /// @brief Field Exportable value: I32(4)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Exportable;

  /// @brief Field Features value: I32(30)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Features;

  /// @brief Field IssuerKeyId value: I32(16)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const IssuerKeyId;

  /// @brief Field KeyExpireTime value: I32(9)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyExpireTime;

  /// @brief Field KeyFlags value: I32(27)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyFlags;

  /// @brief Field KeyServerPreferences value: I32(23)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const KeyServerPreferences;

  /// @brief Field NotationData value: I32(20)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const NotationData;

  /// @brief Field Placeholder value: I32(10)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Placeholder;

  /// @brief Field PolicyUrl value: I32(26)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PolicyUrl;

  /// @brief Field PreferredCompressionAlgorithms value: I32(22)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredCompressionAlgorithms;

  /// @brief Field PreferredHashAlgorithms value: I32(21)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredHashAlgorithms;

  /// @brief Field PreferredKeyServer value: I32(24)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredKeyServer;

  /// @brief Field PreferredSymmetricAlgorithms value: I32(11)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PreferredSymmetricAlgorithms;

  /// @brief Field PrimaryUserId value: I32(25)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const PrimaryUserId;

  /// @brief Field RegExp value: I32(6)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RegExp;

  /// @brief Field Revocable value: I32(7)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const Revocable;

  /// @brief Field RevocationKey value: I32(12)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationKey;

  /// @brief Field RevocationReason value: I32(29)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const RevocationReason;

  /// @brief Field SignatureTarget value: I32(31)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignatureTarget;

  /// @brief Field SignerUserId value: I32(28)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const SignerUserId;

  /// @brief Field TrustSig value: I32(5)
  static ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag const TrustSig;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, "Org.BouncyCastle.Bcpg", "SignatureSubpacketTag");
