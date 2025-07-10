#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyRingGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpKeyRingGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyRingGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator);
// Dependencies Org.BouncyCastle.Bcpg.HashAlgorithmTag, Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag, System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyRingGenerator
class CORDL_TYPE PgpKeyRingGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field certificationLevel, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_certificationLevel, put = __cordl_internal_set_certificationLevel)) int32_t certificationLevel;

  /// @brief Field encAlgorithm, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_encAlgorithm, put = __cordl_internal_set_encAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field hashedPacketVector, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_hashedPacketVector,
                      put = __cordl_internal_set_hashedPacketVector)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPacketVector;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::System::Collections::IList* keys;

  /// @brief Field masterKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_masterKey, put = __cordl_internal_set_masterKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey;

  /// @brief Field rand, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_rand, put = __cordl_internal_set_rand)) ::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Field rawPassPhrase, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rawPassPhrase, put = __cordl_internal_set_rawPassPhrase)) ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase;

  /// @brief Field unhashedPacketVector, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unhashedPacketVector,
                      put = __cordl_internal_set_unhashedPacketVector)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPacketVector;

  /// @brief Field useSha1, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_useSha1, put = __cordl_internal_set_useSha1)) bool useSha1;

  /// @brief Method AddSubKey, addr 0x252e7e4, size 0x8, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair);

  /// @brief Method AddSubKey, addr 0x252ebf4, size 0xc, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method AddSubKey, addr 0x252e7ec, size 0x408, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets);

  /// @brief Method AddSubKey, addr 0x252ec00, size 0x3fc, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GeneratePublicKeyRing, addr 0x252f130, size 0x4bc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* GeneratePublicKeyRing();

  /// @brief Method GenerateSecretKeyRing, addr 0x252f0d0, size 0x60, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* GenerateSecretKeyRing();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
           ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  constexpr int32_t const& __cordl_internal_get_certificationLevel() const;

  constexpr int32_t& __cordl_internal_get_certificationLevel();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __cordl_internal_get_encAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __cordl_internal_get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* const& __cordl_internal_get_hashedPacketVector() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& __cordl_internal_get_hashedPacketVector();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_keys() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_keys();

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* const& __cordl_internal_get_masterKey() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*& __cordl_internal_get_masterKey();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_rand() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_rand();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_rawPassPhrase() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_rawPassPhrase();

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* const& __cordl_internal_get_unhashedPacketVector() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& __cordl_internal_get_unhashedPacketVector();

  constexpr bool const& __cordl_internal_get_useSha1() const;

  constexpr bool& __cordl_internal_get_useSha1();

  constexpr void __cordl_internal_set_certificationLevel(int32_t value);

  constexpr void __cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr void __cordl_internal_set_hashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_masterKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* value);

  constexpr void __cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_rawPassPhrase(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_unhashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value);

  constexpr void __cordl_internal_set_useSha1(bool value);

  /// @brief Method .ctor, addr 0x252e518, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e638, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e5a8, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e1f0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e27c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e37c, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x252e2fc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyRingGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyRingGenerator(PgpKeyRingGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyRingGenerator(PgpKeyRingGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1648 };

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field encAlgorithm, offset: 0x20, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___encAlgorithm;

  /// @brief Field hashAlgorithm, offset: 0x24, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashAlgorithm;

  /// @brief Field certificationLevel, offset: 0x28, size: 0x4, def value: None
  int32_t ___certificationLevel;

  /// @brief Field rawPassPhrase, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___rawPassPhrase;

  /// @brief Field useSha1, offset: 0x38, size: 0x1, def value: None
  bool ___useSha1;

  /// @brief Field masterKey, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* ___masterKey;

  /// @brief Field hashedPacketVector, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* ___hashedPacketVector;

  /// @brief Field unhashedPacketVector, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* ___unhashedPacketVector;

  /// @brief Field rand, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___rand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___encAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___hashAlgorithm) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___certificationLevel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___rawPassPhrase) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___useSha1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___masterKey) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___hashedPacketVector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___unhashedPacketVector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, ___rand) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRingGenerator");
