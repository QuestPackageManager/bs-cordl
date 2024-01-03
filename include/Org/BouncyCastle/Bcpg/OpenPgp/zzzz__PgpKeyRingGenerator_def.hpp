#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRingGenerator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(594)), TypeDefinitionIndex(TypeDefinitionIndex(572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1648))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyRingGenerator*
class CORDL_TYPE PgpKeyRingGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __get_keys, put = __set_keys))::System::Collections::IList* keys;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::StringW id;

  /// @brief Field encAlgorithm, offset 0x20, size 0x4
  __declspec(property(get = __get_encAlgorithm, put = __set_encAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x24, size 0x4
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field certificationLevel, offset 0x28, size 0x4
  __declspec(property(get = __get_certificationLevel, put = __set_certificationLevel)) int32_t certificationLevel;

  /// @brief Field rawPassPhrase, offset 0x30, size 0x8
  __declspec(property(get = __get_rawPassPhrase, put = __set_rawPassPhrase))::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase;

  /// @brief Field useSha1, offset 0x38, size 0x1
  __declspec(property(get = __get_useSha1, put = __set_useSha1)) bool useSha1;

  /// @brief Field masterKey, offset 0x40, size 0x8
  __declspec(property(get = __get_masterKey, put = __set_masterKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey;

  /// @brief Field hashedPacketVector, offset 0x48, size 0x8
  __declspec(property(get = __get_hashedPacketVector, put = __set_hashedPacketVector))::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPacketVector;

  /// @brief Field unhashedPacketVector, offset 0x50, size 0x8
  __declspec(property(get = __get_unhashedPacketVector, put = __set_unhashedPacketVector))::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPacketVector;

  /// @brief Field rand, offset 0x58, size 0x8
  __declspec(property(get = __get_rand, put = __set_rand))::Org::BouncyCastle::Security::SecureRandom* rand;

  constexpr ::System::Collections::IList*& __get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_keys() const;

  constexpr void __set_keys(::System::Collections::IList* value);

  constexpr ::StringW& __get_id();

  constexpr ::StringW const& __get_id() const;

  constexpr void __set_id(::StringW value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_encAlgorithm() const;

  constexpr void __set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr int32_t& __get_certificationLevel();

  constexpr int32_t const& __get_certificationLevel() const;

  constexpr void __set_certificationLevel(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_rawPassPhrase();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_rawPassPhrase() const;

  constexpr void __set_rawPassPhrase(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_useSha1();

  constexpr bool const& __get_useSha1() const;

  constexpr void __set_useSha1(bool value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*& __get_masterKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*> const& __get_masterKey() const;

  constexpr void __set_masterKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& __get_hashedPacketVector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*> const& __get_hashedPacketVector() const;

  constexpr void __set_hashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value);

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& __get_unhashedPacketVector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*> const& __get_unhashedPacketVector() const;

  constexpr void __set_unhashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_rand();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_rand() const;

  constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae5a4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae630, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
           ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae6b0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae730, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae8d4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
  New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
           ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
           ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
           ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae964, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                  bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x10ae9f4, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                    ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method AddSubKey, addr 0x10aeba4, size 0x8, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair);

  /// @brief Method AddSubKey, addr 0x10aefd4, size 0xc, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method AddSubKey, addr 0x10aebac, size 0x428, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets);

  /// @brief Method AddSubKey, addr 0x10aefe0, size 0x41c, virtual false, abstract: false, final false
  inline void AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                        ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GenerateSecretKeyRing, addr 0x10af4c8, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* GenerateSecretKeyRing();

  /// @brief Method GeneratePublicKeyRing, addr 0x10af530, size 0x4c4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* GeneratePublicKeyRing();

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpKeyRingGenerator(PgpKeyRingGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpKeyRingGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpKeyRingGenerator(PgpKeyRingGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpKeyRingGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator, 0x60>, "Size mismatch!");

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

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyRingGenerator");
