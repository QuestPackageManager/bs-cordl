#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpSignature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpSignature)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SignaturePacket;
}
namespace Org::BouncyCastle::Bcpg {
class SignatureSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignature
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpSignature*
class CORDL_TYPE PgpSignature : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CreationTime)) ::System::DateTime CreationTime;

  __declspec(property(get = get_HasSubpackets)) bool HasSubpackets;

  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_KeyAlgorithm)) ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field lastb, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_lastb, put = __cordl_internal_set_lastb)) uint8_t lastb;

  /// @brief Field sig, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig)) ::Org::BouncyCastle::Crypto::ISigner* sig;

  /// @brief Field sigPck, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigPck, put = __cordl_internal_set_sigPck)) ::Org::BouncyCastle::Bcpg::SignaturePacket* sigPck;

  /// @brief Field signatureType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_signatureType, put = __cordl_internal_set_signatureType)) int32_t signatureType;

  /// @brief Field trustPck, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trustPck, put = __cordl_internal_set_trustPck)) ::Org::BouncyCastle::Bcpg::TrustPacket* trustPck;

  /// @brief Method Cast, addr 0x2507194, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Cast(::Org::BouncyCastle::Bcpg::Packet* packet);

  /// @brief Method Encode, addr 0x2501070, size 0x58, virtual false, abstract: false, final false
  inline void Encode(::System::IO::Stream* outStream);

  /// @brief Method GetCreationTime, addr 0x25087cc, size 0x4, virtual false, abstract: false, final false
  inline ::System::DateTime GetCreationTime();

  /// @brief Method GetEncoded, addr 0x2508934, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncodedPublicKey, addr 0x2508100, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method GetHashedSubPackets, addr 0x250886c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* GetHashedSubPackets();

  /// @brief Method GetSig, addr 0x250731c, size 0x7c, virtual false, abstract: false, final false
  inline void GetSig();

  /// @brief Method GetSignature, addr 0x2507ca8, size 0x2b8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignature();

  /// @brief Method GetSignatureTrailer, addr 0x2507c8c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureTrailer();

  /// @brief Method GetUnhashedSubPackets, addr 0x25088f0, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* GetUnhashedSubPackets();

  /// @brief Method InitVerify, addr 0x25075b8, size 0x1a0, virtual false, abstract: false, final false
  inline void InitVerify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method IsCertification, addr 0x2507564, size 0x28, virtual false, abstract: false, final false
  inline bool IsCertification();

  /// @brief Method IsCertification, addr 0x25075a8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsCertification(int32_t signatureType);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket);

  /// @brief Method Update, addr 0x2507758, size 0xcc, virtual false, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method Update, addr 0x2507a14, size 0x1c, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method Update, addr 0x2507a30, size 0x114, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t length);

  /// @brief Method UpdateWithIdData, addr 0x2507f60, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateWithIdData(int32_t header, ::ArrayW<uint8_t, ::Array<uint8_t>*> idBytes);

  /// @brief Method UpdateWithPublicKey, addr 0x250803c, size 0xc4, virtual false, abstract: false, final false
  inline void UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  /// @brief Method Verify, addr 0x2507b44, size 0x148, virtual false, abstract: false, final false
  inline bool Verify();

  /// @brief Method VerifyCertification, addr 0x2508470, size 0x108, virtual false, abstract: false, final false
  inline bool VerifyCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  /// @brief Method VerifyCertification, addr 0x2508578, size 0xf8, virtual false, abstract: false, final false
  inline bool VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method VerifyCertification, addr 0x2508670, size 0x140, virtual false, abstract: false, final false
  inline bool VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey);

  /// @brief Method VerifyCertification, addr 0x25081f8, size 0x278, virtual false, abstract: false, final false
  inline bool VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  constexpr uint8_t const& __cordl_internal_get_lastb() const;

  constexpr uint8_t& __cordl_internal_get_lastb();

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get_sig() const;

  constexpr ::Org::BouncyCastle::Bcpg::SignaturePacket*& __cordl_internal_get_sigPck();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SignaturePacket*> const& __cordl_internal_get_sigPck() const;

  constexpr int32_t const& __cordl_internal_get_signatureType() const;

  constexpr int32_t& __cordl_internal_get_signatureType();

  constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& __cordl_internal_get_trustPck();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::TrustPacket*> const& __cordl_internal_get_trustPck() const;

  constexpr void __cordl_internal_set_lastb(uint8_t value);

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr void __cordl_internal_set_sigPck(::Org::BouncyCastle::Bcpg::SignaturePacket* value);

  constexpr void __cordl_internal_set_signatureType(int32_t value);

  constexpr void __cordl_internal_set_trustPck(::Org::BouncyCastle::Bcpg::TrustPacket* value);

  /// @brief Method .ctor, addr 0x250725c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput);

  /// @brief Method .ctor, addr 0x2507290, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket);

  /// @brief Method .ctor, addr 0x2507298, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket);

  /// @brief Method createSubpacketVector, addr 0x2508888, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
  createSubpacketVector(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> pcks);

  /// @brief Method doCanonicalUpdateByte, addr 0x2507824, size 0xe0, virtual false, abstract: false, final false
  inline void doCanonicalUpdateByte(uint8_t b);

  /// @brief Method doUpdateCRLF, addr 0x2507904, size 0x110, virtual false, abstract: false, final false
  inline void doUpdateCRLF();

  /// @brief Method get_CreationTime, addr 0x25087d0, size 0x68, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreationTime();

  /// @brief Method get_HasSubpackets, addr 0x2508838, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasSubpackets();

  /// @brief Method get_HashAlgorithm, addr 0x2507548, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_KeyAlgorithm, addr 0x250752c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method get_KeyId, addr 0x25087b0, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_KeyId();

  /// @brief Method get_SignatureType, addr 0x250758c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_SignatureType();

  /// @brief Method get_Version, addr 0x2507510, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpSignature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpSignature(PgpSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpSignature(PgpSignature const&) = delete;

  /// @brief Field sigPck, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::SignaturePacket* ___sigPck;

  /// @brief Field signatureType, offset: 0x18, size: 0x4, def value: None
  int32_t ___signatureType;

  /// @brief Field trustPck, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::TrustPacket* ___trustPck;

  /// @brief Field sig, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___sig;

  /// @brief Field lastb, offset: 0x30, size: 0x1, def value: None
  uint8_t ___lastb;

  /// @brief Field BinaryDocument offset 0xffffffff size 0x4
  static constexpr int32_t BinaryDocument{ static_cast<int32_t>(0x0) };

  /// @brief Field CanonicalTextDocument offset 0xffffffff size 0x4
  static constexpr int32_t CanonicalTextDocument{ static_cast<int32_t>(0x1) };

  /// @brief Field CasualCertification offset 0xffffffff size 0x4
  static constexpr int32_t CasualCertification{ static_cast<int32_t>(0x12) };

  /// @brief Field CertificationRevocation offset 0xffffffff size 0x4
  static constexpr int32_t CertificationRevocation{ static_cast<int32_t>(0x30) };

  /// @brief Field DefaultCertification offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCertification{ static_cast<int32_t>(0x10) };

  /// @brief Field DirectKey offset 0xffffffff size 0x4
  static constexpr int32_t DirectKey{ static_cast<int32_t>(0x1f) };

  /// @brief Field KeyRevocation offset 0xffffffff size 0x4
  static constexpr int32_t KeyRevocation{ static_cast<int32_t>(0x20) };

  /// @brief Field NoCertification offset 0xffffffff size 0x4
  static constexpr int32_t NoCertification{ static_cast<int32_t>(0x11) };

  /// @brief Field PositiveCertification offset 0xffffffff size 0x4
  static constexpr int32_t PositiveCertification{ static_cast<int32_t>(0x13) };

  /// @brief Field PrimaryKeyBinding offset 0xffffffff size 0x4
  static constexpr int32_t PrimaryKeyBinding{ static_cast<int32_t>(0x19) };

  /// @brief Field StandAlone offset 0xffffffff size 0x4
  static constexpr int32_t StandAlone{ static_cast<int32_t>(0x2) };

  /// @brief Field SubkeyBinding offset 0xffffffff size 0x4
  static constexpr int32_t SubkeyBinding{ static_cast<int32_t>(0x18) };

  /// @brief Field SubkeyRevocation offset 0xffffffff size 0x4
  static constexpr int32_t SubkeyRevocation{ static_cast<int32_t>(0x28) };

  /// @brief Field Timestamp offset 0xffffffff size 0x4
  static constexpr int32_t Timestamp{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, ___sigPck) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, ___signatureType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, ___trustPck) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, ___sig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature, ___lastb) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignature");
