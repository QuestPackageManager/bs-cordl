#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SignaturePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignaturePacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignaturePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignaturePacket);
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket, Org.BouncyCastle.Bcpg.HashAlgorithmTag, Org.BouncyCastle.Bcpg.PublicKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.SignaturePacket
class CORDL_TYPE SignaturePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  __declspec(property(get = get_CreationTime)) int64_t CreationTime;

  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_KeyAlgorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field creationTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_creationTime, put = __cordl_internal_set_creationTime)) int64_t creationTime;

  /// @brief Field fingerprint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fingerprint, put = __cordl_internal_set_fingerprint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint;

  /// @brief Field hashAlgorithm, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field hashedData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_hashedData,
                      put = __cordl_internal_set_hashedData)) ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
      hashedData;

  /// @brief Field keyAlgorithm, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_keyAlgorithm, put = __cordl_internal_set_keyAlgorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm;

  /// @brief Field keyId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_keyId, put = __cordl_internal_set_keyId)) int64_t keyId;

  /// @brief Field signature, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>
      signature;

  /// @brief Field signatureEncoding, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureEncoding, put = __cordl_internal_set_signatureEncoding)) ::ArrayW<uint8_t, ::Array<uint8_t>*> signatureEncoding;

  /// @brief Field signatureType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_signatureType, put = __cordl_internal_set_signatureType)) int32_t signatureType;

  /// @brief Field unhashedData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_unhashedData,
                      put = __cordl_internal_set_unhashedData)) ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
      unhashedData;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method Encode, addr 0x264b3fc, size 0x328, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method EncodeLengthAndData, addr 0x264b7d4, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeLengthAndData(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetEncodedSubpackets, addr 0x264b724, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ps);

  /// @brief Method GetHashedSubPackets, addr 0x264b3e4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> GetHashedSubPackets();

  /// @brief Method GetSignature, addr 0x264b1c4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> GetSignature();

  /// @brief Method GetSignatureBytes, addr 0x264b1cc, size 0x218, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureBytes();

  /// @brief Method GetSignatureTrailer, addr 0x264aec0, size 0x2f4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureTrailer();

  /// @brief Method GetUnhashedSubPackets, addr 0x264b3ec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> GetUnhashedSubPackets();

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  constexpr int64_t const& __cordl_internal_get_creationTime() const;

  constexpr int64_t& __cordl_internal_get_creationTime();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fingerprint() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fingerprint();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __cordl_internal_get_hashAlgorithm();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __cordl_internal_get_hashedData() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __cordl_internal_get_hashedData();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __cordl_internal_get_keyAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __cordl_internal_get_keyAlgorithm();

  constexpr int64_t const& __cordl_internal_get_keyId() const;

  constexpr int64_t& __cordl_internal_get_keyId();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> const& __cordl_internal_get_signature() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>& __cordl_internal_get_signature();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_signatureEncoding() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_signatureEncoding();

  constexpr int32_t const& __cordl_internal_get_signatureType() const;

  constexpr int32_t& __cordl_internal_get_signatureType();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __cordl_internal_get_unhashedData() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __cordl_internal_get_unhashedData();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_creationTime(int64_t value);

  constexpr void __cordl_internal_set_fingerprint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr void __cordl_internal_set_hashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  constexpr void __cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_keyId(int64_t value);

  constexpr void __cordl_internal_set_signature(::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> value);

  constexpr void __cordl_internal_set_signatureEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_signatureType(int32_t value);

  constexpr void __cordl_internal_set_unhashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x264450c, size 0xd68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x264ac74, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method .ctor, addr 0x264ad4c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    int64_t creationTime, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method .ctor, addr 0x264acb4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method get_CreationTime, addr 0x264b3f4, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_CreationTime();

  /// @brief Method get_HashAlgorithm, addr 0x264b1bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_KeyAlgorithm, addr 0x264b1b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method get_KeyId, addr 0x264aeb8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_SignatureType, addr 0x264aeb0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SignatureType();

  /// @brief Method get_Version, addr 0x264aea8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method setCreationTime, addr 0x264adb8, size 0xf0, virtual false, abstract: false, final false
  inline void setCreationTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePacket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePacket(SignaturePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePacket(SignaturePacket const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 589 };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field signatureType, offset: 0x14, size: 0x4, def value: None
  int32_t ___signatureType;

  /// @brief Field creationTime, offset: 0x18, size: 0x8, def value: None
  int64_t ___creationTime;

  /// @brief Field keyId, offset: 0x20, size: 0x8, def value: None
  int64_t ___keyId;

  /// @brief Field keyAlgorithm, offset: 0x28, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___keyAlgorithm;

  /// @brief Field hashAlgorithm, offset: 0x2c, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashAlgorithm;

  /// @brief Field signature, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> ___signature;

  /// @brief Field fingerprint, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fingerprint;

  /// @brief Field hashedData, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ___hashedData;

  /// @brief Field unhashedData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ___unhashedData;

  /// @brief Field signatureEncoding, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___signatureEncoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___signatureType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___creationTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___keyId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___keyAlgorithm) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___hashAlgorithm) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___signature) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___fingerprint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___hashedData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___unhashedData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::SignaturePacket, ___signatureEncoding) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignaturePacket, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignaturePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignaturePacket*, "Org.BouncyCastle.Bcpg", "SignaturePacket");
