#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/PacketTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::PacketTag);
// Dependencies
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: Org.BouncyCastle.Bcpg.PacketTag
struct CORDL_TYPE PacketTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PacketTag_Unwrapped
  enum struct __PacketTag_Unwrapped : int32_t {
    __E_Reserved = static_cast<int32_t>(0x0),
    __E_PublicKeyEncryptedSession = static_cast<int32_t>(0x1),
    __E_Signature = static_cast<int32_t>(0x2),
    __E_SymmetricKeyEncryptedSessionKey = static_cast<int32_t>(0x3),
    __E_OnePassSignature = static_cast<int32_t>(0x4),
    __E_SecretKey = static_cast<int32_t>(0x5),
    __E_PublicKey = static_cast<int32_t>(0x6),
    __E_SecretSubkey = static_cast<int32_t>(0x7),
    __E_CompressedData = static_cast<int32_t>(0x8),
    __E_SymmetricKeyEncrypted = static_cast<int32_t>(0x9),
    __E_Marker = static_cast<int32_t>(0xa),
    __E_LiteralData = static_cast<int32_t>(0xb),
    __E_Trust = static_cast<int32_t>(0xc),
    __E_UserId = static_cast<int32_t>(0xd),
    __E_PublicSubkey = static_cast<int32_t>(0xe),
    __E_UserAttribute = static_cast<int32_t>(0x11),
    __E_SymmetricEncryptedIntegrityProtected = static_cast<int32_t>(0x12),
    __E_ModificationDetectionCode = static_cast<int32_t>(0x13),
    __E_Experimental1 = static_cast<int32_t>(0x3c),
    __E_Experimental2 = static_cast<int32_t>(0x3d),
    __E_Experimental3 = static_cast<int32_t>(0x3e),
    __E_Experimental4 = static_cast<int32_t>(0x3f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PacketTag_Unwrapped() const noexcept {
    return static_cast<__PacketTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PacketTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PacketTag(int32_t value__) noexcept;

  /// @brief Field CompressedData value: I32(8)
  static ::Org::BouncyCastle::Bcpg::PacketTag const CompressedData;

  /// @brief Field Experimental1 value: I32(60)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental1;

  /// @brief Field Experimental2 value: I32(61)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental2;

  /// @brief Field Experimental3 value: I32(62)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental3;

  /// @brief Field Experimental4 value: I32(63)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental4;

  /// @brief Field LiteralData value: I32(11)
  static ::Org::BouncyCastle::Bcpg::PacketTag const LiteralData;

  /// @brief Field Marker value: I32(10)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Marker;

  /// @brief Field ModificationDetectionCode value: I32(19)
  static ::Org::BouncyCastle::Bcpg::PacketTag const ModificationDetectionCode;

  /// @brief Field OnePassSignature value: I32(4)
  static ::Org::BouncyCastle::Bcpg::PacketTag const OnePassSignature;

  /// @brief Field PublicKey value: I32(6)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicKey;

  /// @brief Field PublicKeyEncryptedSession value: I32(1)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicKeyEncryptedSession;

  /// @brief Field PublicSubkey value: I32(14)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicSubkey;

  /// @brief Field Reserved value: I32(0)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Reserved;

  /// @brief Field SecretKey value: I32(5)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SecretKey;

  /// @brief Field SecretSubkey value: I32(7)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SecretSubkey;

  /// @brief Field Signature value: I32(2)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Signature;

  /// @brief Field SymmetricEncryptedIntegrityProtected value: I32(18)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricEncryptedIntegrityProtected;

  /// @brief Field SymmetricKeyEncrypted value: I32(9)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncrypted;

  /// @brief Field SymmetricKeyEncryptedSessionKey value: I32(3)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncryptedSessionKey;

  /// @brief Field Trust value: I32(12)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Trust;

  /// @brief Field UserAttribute value: I32(17)
  static ::Org::BouncyCastle::Bcpg::PacketTag const UserAttribute;

  /// @brief Field UserId value: I32(13)
  static ::Org::BouncyCastle::Bcpg::PacketTag const UserId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::PacketTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PacketTag, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PacketTag, "Org.BouncyCastle.Bcpg", "PacketTag");
