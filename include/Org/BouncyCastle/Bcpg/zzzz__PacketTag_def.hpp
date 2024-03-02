#pragma once
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
// Type: Org.BouncyCastle.Bcpg::PacketTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: ::Org.BouncyCastle.Bcpg::PacketTag
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CompressedData value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Bcpg::PacketTag const CompressedData;

  /// @brief Field Experimental1 value: static_cast<int32_t>(0x3c)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental1;

  /// @brief Field Experimental2 value: static_cast<int32_t>(0x3d)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental2;

  /// @brief Field Experimental3 value: static_cast<int32_t>(0x3e)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental3;

  /// @brief Field Experimental4 value: static_cast<int32_t>(0x3f)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Experimental4;

  /// @brief Field LiteralData value: static_cast<int32_t>(0xb)
  static ::Org::BouncyCastle::Bcpg::PacketTag const LiteralData;

  /// @brief Field Marker value: static_cast<int32_t>(0xa)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Marker;

  /// @brief Field ModificationDetectionCode value: static_cast<int32_t>(0x13)
  static ::Org::BouncyCastle::Bcpg::PacketTag const ModificationDetectionCode;

  /// @brief Field OnePassSignature value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Bcpg::PacketTag const OnePassSignature;

  /// @brief Field PublicKey value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicKey;

  /// @brief Field PublicKeyEncryptedSession value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicKeyEncryptedSession;

  /// @brief Field PublicSubkey value: static_cast<int32_t>(0xe)
  static ::Org::BouncyCastle::Bcpg::PacketTag const PublicSubkey;

  /// @brief Field Reserved value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Reserved;

  /// @brief Field SecretKey value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SecretKey;

  /// @brief Field SecretSubkey value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SecretSubkey;

  /// @brief Field Signature value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Signature;

  /// @brief Field SymmetricEncryptedIntegrityProtected value: static_cast<int32_t>(0x12)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricEncryptedIntegrityProtected;

  /// @brief Field SymmetricKeyEncrypted value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncrypted;

  /// @brief Field SymmetricKeyEncryptedSessionKey value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Bcpg::PacketTag const SymmetricKeyEncryptedSessionKey;

  /// @brief Field Trust value: static_cast<int32_t>(0xc)
  static ::Org::BouncyCastle::Bcpg::PacketTag const Trust;

  /// @brief Field UserAttribute value: static_cast<int32_t>(0x11)
  static ::Org::BouncyCastle::Bcpg::PacketTag const UserAttribute;

  /// @brief Field UserId value: static_cast<int32_t>(0xd)
  static ::Org::BouncyCastle::Bcpg::PacketTag const UserId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PacketTag, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::PacketTag, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PacketTag, "Org.BouncyCastle.Bcpg", "PacketTag");
