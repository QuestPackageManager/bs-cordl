#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignaturePacket)
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SignaturePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SignaturePacket);
// Type: Org.BouncyCastle.Bcpg::SignaturePacket
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(580)), TypeDefinitionIndex(TypeDefinitionIndex(572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(589))
// CS Name: ::Org.BouncyCastle.Bcpg::SignaturePacket*
class CORDL_TYPE SignaturePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field signatureType, offset 0x14, size 0x4
  __declspec(property(get = __get_signatureType, put = __set_signatureType)) int32_t signatureType;

  /// @brief Field creationTime, offset 0x18, size 0x8
  __declspec(property(get = __get_creationTime, put = __set_creationTime)) int64_t creationTime;

  /// @brief Field keyId, offset 0x20, size 0x8
  __declspec(property(get = __get_keyId, put = __set_keyId)) int64_t keyId;

  /// @brief Field keyAlgorithm, offset 0x28, size 0x4
  __declspec(property(get = __get_keyAlgorithm, put = __set_keyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x2c, size 0x4
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field signature, offset 0x30, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature;

  /// @brief Field fingerprint, offset 0x38, size 0x8
  __declspec(property(get = __get_fingerprint, put = __set_fingerprint))::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint;

  /// @brief Field hashedData, offset 0x40, size 0x8
  __declspec(property(get = __get_hashedData, put = __set_hashedData))::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData;

  /// @brief Field unhashedData, offset 0x48, size 0x8
  __declspec(property(get = __get_unhashedData,
                      put = __set_unhashedData))::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData;

  /// @brief Field signatureEncoding, offset 0x50, size 0x8
  __declspec(property(get = __get_signatureEncoding, put = __set_signatureEncoding))::ArrayW<uint8_t, ::Array<uint8_t>*> signatureEncoding;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_KeyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_CreationTime)) int64_t CreationTime;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int32_t& __get_signatureType();

  constexpr int32_t const& __get_signatureType() const;

  constexpr void __set_signatureType(int32_t value);

  constexpr int64_t& __get_creationTime();

  constexpr int64_t const& __get_creationTime() const;

  constexpr void __set_creationTime(int64_t value);

  constexpr int64_t& __get_keyId();

  constexpr int64_t const& __get_keyId() const;

  constexpr void __set_keyId(int64_t value);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __get_keyAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __get_keyAlgorithm() const;

  constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>& __get_signature();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> const& __get_signature() const;

  constexpr void __set_signature(::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fingerprint();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fingerprint() const;

  constexpr void __set_fingerprint(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __get_hashedData();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __get_hashedData() const;

  constexpr void __set_hashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>& __get_unhashedData();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const& __get_unhashedData() const;

  constexpr void __set_unhashedData(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_signatureEncoding();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_signatureEncoding() const;

  constexpr void __set_signatureEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x11cd64c, size 0xd7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method .ctor, addr 0x11d3f4c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int64_t creationTime, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method .ctor, addr 0x11d4024, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    int64_t creationTime, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint, ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* New_ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                     ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                                                                     ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method .ctor, addr 0x11d3f8c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t version, int32_t signatureType, int64_t keyId, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> hashedData,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> unhashedData, ::ArrayW<uint8_t, ::Array<uint8_t>*> fingerprint,
                    ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> signature);

  /// @brief Method get_Version, addr 0x11d4188, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_SignatureType, addr 0x11d4190, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SignatureType();

  /// @brief Method get_KeyId, addr 0x11d4198, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method GetSignatureTrailer, addr 0x11d41a0, size 0x2fc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureTrailer();

  /// @brief Method get_KeyAlgorithm, addr 0x11d449c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method get_HashAlgorithm, addr 0x11d44a4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method GetSignature, addr 0x11d44ac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> GetSignature();

  /// @brief Method GetSignatureBytes, addr 0x11d44b4, size 0x21c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureBytes();

  /// @brief Method GetHashedSubPackets, addr 0x11d46d0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> GetHashedSubPackets();

  /// @brief Method GetUnhashedSubPackets, addr 0x11d46d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> GetUnhashedSubPackets();

  /// @brief Method get_CreationTime, addr 0x11d46e0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_CreationTime();

  /// @brief Method Encode, addr 0x11d46e8, size 0x32c, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method EncodeLengthAndData, addr 0x11d4ac4, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeLengthAndData(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetEncodedSubpackets, addr 0x11d4a14, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedSubpackets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> ps);

  /// @brief Method setCreationTime, addr 0x11d4090, size 0xf8, virtual false, abstract: false, final false
  inline void setCreationTime();

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignaturePacket(SignaturePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignaturePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignaturePacket(SignaturePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignaturePacket();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SignaturePacket, 0x58>, "Size mismatch!");

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

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SignaturePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SignaturePacket*, "Org.BouncyCastle.Bcpg", "SignaturePacket");
