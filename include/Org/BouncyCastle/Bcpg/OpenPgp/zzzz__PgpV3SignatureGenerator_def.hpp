#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpV3SignatureGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpOnePassSignature;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpV3SignatureGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpV3SignatureGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(580)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1674))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpV3SignatureGenerator*
class CORDL_TYPE PgpV3SignatureGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyAlgorithm, offset 0x10, size 0x4
  __declspec(property(get = __get_keyAlgorithm, put = __set_keyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x14, size 0x4
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field privKey, offset 0x18, size 0x8
  __declspec(property(get = __get_privKey, put = __set_privKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __get_sig, put = __set_sig))::Org::BouncyCastle::Crypto::ISigner* sig;

  /// @brief Field dig, offset 0x28, size 0x8
  __declspec(property(get = __get_dig, put = __set_dig))::Org::BouncyCastle::Crypto::IDigest* dig;

  /// @brief Field signatureType, offset 0x30, size 0x4
  __declspec(property(get = __get_signatureType, put = __set_signatureType)) int32_t signatureType;

  /// @brief Field lastb, offset 0x34, size 0x1
  __declspec(property(get = __get_lastb, put = __set_lastb)) uint8_t lastb;

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __get_keyAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __get_keyAlgorithm() const;

  constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& __get_privKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*> const& __get_privKey() const;

  constexpr void __set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __get_sig() const;

  constexpr void __set_sig(::Org::BouncyCastle::Crypto::ISigner* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_dig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_dig() const;

  constexpr void __set_dig(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_signatureType();

  constexpr int32_t const& __get_signatureType() const;

  constexpr void __set_signatureType(int32_t value);

  constexpr uint8_t& __get_lastb();

  constexpr uint8_t const& __get_lastb() const;

  constexpr void __set_lastb(uint8_t value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                      ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method .ctor, addr 0x10ce600, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method InitSign, addr 0x10ce6d8, size 0x8, virtual false, abstract: false, final false
  inline void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key);

  /// @brief Method InitSign, addr 0x10ce6e0, size 0x268, virtual false, abstract: false, final false
  inline void InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Update, addr 0x10ce948, size 0x14, virtual false, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method doCanonicalUpdateByte, addr 0x10ce95c, size 0x64, virtual false, abstract: false, final false
  inline void doCanonicalUpdateByte(uint8_t b);

  /// @brief Method doUpdateCRLF, addr 0x10ceae8, size 0x20, virtual false, abstract: false, final false
  inline void doUpdateCRLF();

  /// @brief Method doUpdateByte, addr 0x10ce9c0, size 0x128, virtual false, abstract: false, final false
  inline void doUpdateByte(uint8_t b);

  /// @brief Method Update, addr 0x10ceb08, size 0x1a4, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Update, addr 0x10cecac, size 0x198, virtual false, abstract: false, final false
  inline void Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method GenerateOnePassVersion, addr 0x10cee44, size 0xcc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* GenerateOnePassVersion(bool isNested);

  /// @brief Method Generate, addr 0x10cef10, size 0x3d0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Generate();

  // Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpV3SignatureGenerator(PgpV3SignatureGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpV3SignatureGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpV3SignatureGenerator(PgpV3SignatureGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpV3SignatureGenerator();

public:
  /// @brief Field keyAlgorithm, offset: 0x10, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___keyAlgorithm;

  /// @brief Field hashAlgorithm, offset: 0x14, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashAlgorithm;

  /// @brief Field privKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* ___privKey;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___sig;

  /// @brief Field dig, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___dig;

  /// @brief Field signatureType, offset: 0x30, size: 0x4, def value: None
  int32_t ___signatureType;

  /// @brief Field lastb, offset: 0x34, size: 0x1, def value: None
  uint8_t ___lastb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___keyAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___hashAlgorithm) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___privKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___sig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___dig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___signatureType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator, ___lastb) == 0x34, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpV3SignatureGenerator");
