#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpEncryptedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpEncryptedDataGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_EncMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_PbeMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_PubMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_EncMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_PbeMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator_PubMethod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod);
// Dependencies Org.BouncyCastle.Bcpg.ContainedPacket, Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator/EncMethod
class CORDL_TYPE PgpEncryptedDataGenerator_EncMethod : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field encAlgorithm, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_encAlgorithm, put = __cordl_internal_set_encAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;

  /// @brief Field sessionInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionInfo, put = __cordl_internal_set_sessionInfo)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo;

  /// @brief Method AddSessionInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> si, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod* New_ctor();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __cordl_internal_get_encAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __cordl_internal_get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& __cordl_internal_get_key() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sessionInfo() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sessionInfo();

  constexpr void __cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr void __cordl_internal_set_sessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2529fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataGenerator_EncMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_EncMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataGenerator_EncMethod(PgpEncryptedDataGenerator_EncMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_EncMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataGenerator_EncMethod(PgpEncryptedDataGenerator_EncMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1639 };

  /// @brief Field sessionInfo, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sessionInfo;

  /// @brief Field encAlgorithm, offset: 0x18, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___encAlgorithm;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod, ___sessionInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod, ___encAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod, ___key) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator::EncMethod
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator/PbeMethod
class CORDL_TYPE PgpEncryptedDataGenerator_PbeMethod : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod {
public:
  // Declarations
  /// @brief Field s2k, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_s2k, put = __cordl_internal_set_s2k)) ::Org::BouncyCastle::Bcpg::S2k* s2k;

  /// @brief Method AddSessionInfo, addr 0x2529ff8, size 0x294, virtual true, abstract: false, final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> si, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Encode, addr 0x252a28c, size 0x94, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut);

  /// @brief Method GetKey, addr 0x2529ff0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetKey();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  constexpr ::Org::BouncyCastle::Bcpg::S2k* const& __cordl_internal_get_s2k() const;

  constexpr ::Org::BouncyCastle::Bcpg::S2k*& __cordl_internal_get_s2k();

  constexpr void __cordl_internal_set_s2k(::Org::BouncyCastle::Bcpg::S2k* value);

  /// @brief Method .ctor, addr 0x2528ac4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataGenerator_PbeMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_PbeMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataGenerator_PbeMethod(PgpEncryptedDataGenerator_PbeMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_PbeMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataGenerator_PbeMethod(PgpEncryptedDataGenerator_PbeMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1640 };

  /// @brief Field s2k, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::S2k* ___s2k;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod, ___s2k) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator::EncMethod
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator/PubMethod
class CORDL_TYPE PgpEncryptedDataGenerator_PubMethod : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod {
public:
  // Declarations
  /// @brief Field data, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data;

  /// @brief Field pubKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pubKey, put = __cordl_internal_set_pubKey)) ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey;

  /// @brief Field sessionKeyObfuscation, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_sessionKeyObfuscation, put = __cordl_internal_set_sessionKeyObfuscation)) bool sessionKeyObfuscation;

  /// @brief Method AddSessionInfo, addr 0x252a320, size 0x24, virtual true, abstract: false, final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method ConvertToEncodedMpi, addr 0x252b514, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertToEncodedMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedSessionInfo);

  /// @brief Method Encode, addr 0x252b69c, size 0xac, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut);

  /// @brief Method EncryptSessionInfo, addr 0x252a344, size 0x928, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation);

  /// @brief Method ProcessSessionInfo, addr 0x252ac6c, size 0x23c, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ProcessSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedSessionInfo);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_data();

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& __cordl_internal_get_pubKey() const;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __cordl_internal_get_pubKey();

  constexpr bool const& __cordl_internal_get_sessionKeyObfuscation() const;

  constexpr bool& __cordl_internal_get_sessionKeyObfuscation();

  constexpr void __cordl_internal_set_data(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr void __cordl_internal_set_pubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  constexpr void __cordl_internal_set_sessionKeyObfuscation(bool value);

  /// @brief Method .ctor, addr 0x2528c9c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataGenerator_PubMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_PubMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataGenerator_PubMethod(PgpEncryptedDataGenerator_PubMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator_PubMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataGenerator_PubMethod(PgpEncryptedDataGenerator_PubMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1641 };

  /// @brief Field pubKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pubKey;

  /// @brief Field sessionKeyObfuscation, offset: 0x30, size: 0x1, def value: None
  bool ___sessionKeyObfuscation;

  /// @brief Field data, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod, ___pubKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod, ___sessionKeyObfuscation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod, ___data) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Dependencies Org.BouncyCastle.Bcpg.OpenPgp.IStreamGenerator, Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag, System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpEncryptedDataGenerator
class CORDL_TYPE PgpEncryptedDataGenerator : public ::System::Object {
public:
  // Declarations
  using EncMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod;

  using PbeMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod;

  using PubMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod;

  /// @brief Field c, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::Org::BouncyCastle::Crypto::IBufferedCipher* c;

  /// @brief Field cOut, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cOut, put = __cordl_internal_set_cOut)) ::Org::BouncyCastle::Crypto::IO::CipherStream* cOut;

  /// @brief Field defAlgorithm, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_defAlgorithm, put = __cordl_internal_set_defAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag defAlgorithm;

  /// @brief Field digestOut, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_digestOut, put = __cordl_internal_set_digestOut)) ::Org::BouncyCastle::Crypto::IO::DigestStream* digestOut;

  /// @brief Field methods, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_methods, put = __cordl_internal_set_methods)) ::System::Collections::IList* methods;

  /// @brief Field oldFormat, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_oldFormat, put = __cordl_internal_set_oldFormat)) bool oldFormat;

  /// @brief Field pOut, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pOut, put = __cordl_internal_set_pOut)) ::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut;

  /// @brief Field rand, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rand, put = __cordl_internal_set_rand)) ::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Field withIntegrityPacket, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_withIntegrityPacket, put = __cordl_internal_set_withIntegrityPacket)) bool withIntegrityPacket;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  /// @brief Method AddCheckSum, addr 0x2528ccc, size 0xc4, virtual false, abstract: false, final false
  inline void AddCheckSum(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo);

  /// @brief Method AddMethod, addr 0x2528b00, size 0x8, virtual false, abstract: false, final false
  inline void AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  /// @brief Method AddMethod, addr 0x2528b08, size 0x144, virtual false, abstract: false, final false
  inline void AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, bool sessionKeyObfuscation);

  /// @brief Method AddMethod, addr 0x25288dc, size 0x30, virtual false, abstract: false, final false
  inline void AddMethod(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method AddMethod, addr 0x252890c, size 0x3c, virtual false, abstract: false, final false
  inline void AddMethod(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method AddMethodRaw, addr 0x2528ab8, size 0xc, virtual false, abstract: false, final false
  inline void AddMethodRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method AddMethodUtf8, addr 0x2528a78, size 0x40, virtual false, abstract: false, final false
  inline void AddMethodUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method Close, addr 0x2529d2c, size 0x2bc, virtual true, abstract: false, final true
  inline void Close();

  /// @brief Method CreateSessionInfo, addr 0x2528d90, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSessionInfo(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  /// @brief Method DoAddMethod, addr 0x2528948, size 0x130, virtual false, abstract: false, final false
  inline void DoAddMethod(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand, bool oldFormat);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method Open, addr 0x2529d20, size 0xc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Open, addr 0x2529d18, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, int64_t length);

  /// @brief Method Open, addr 0x2528e38, size 0xee0, virtual false, abstract: false, final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, int64_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& __cordl_internal_get_c() const;

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __cordl_internal_get_c();

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& __cordl_internal_get_cOut() const;

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& __cordl_internal_get_cOut();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __cordl_internal_get_defAlgorithm() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __cordl_internal_get_defAlgorithm();

  constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream* const& __cordl_internal_get_digestOut() const;

  constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream*& __cordl_internal_get_digestOut();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_methods() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_methods();

  constexpr bool const& __cordl_internal_get_oldFormat() const;

  constexpr bool& __cordl_internal_get_oldFormat();

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& __cordl_internal_get_pOut() const;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __cordl_internal_get_pOut();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_rand() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_rand();

  constexpr bool const& __cordl_internal_get_withIntegrityPacket() const;

  constexpr bool& __cordl_internal_get_withIntegrityPacket();

  constexpr void __cordl_internal_set_c(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr void __cordl_internal_set_cOut(::Org::BouncyCastle::Crypto::IO::CipherStream* value);

  constexpr void __cordl_internal_set_defAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr void __cordl_internal_set_digestOut(::Org::BouncyCastle::Crypto::IO::DigestStream* value);

  constexpr void __cordl_internal_set_methods(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_oldFormat(bool value);

  constexpr void __cordl_internal_set_pOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  constexpr void __cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_withIntegrityPacket(bool value);

  /// @brief Method .ctor, addr 0x25285e0, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  /// @brief Method .ctor, addr 0x2528734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor, addr 0x2528848, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand, bool oldFormat);

  /// @brief Method .ctor, addr 0x2528684, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket);

  /// @brief Method .ctor, addr 0x25287b4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket, ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataGenerator(PgpEncryptedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataGenerator(PgpEncryptedDataGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1642 };

  /// @brief Field pOut, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgOutputStream* ___pOut;

  /// @brief Field cOut, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::CipherStream* ___cOut;

  /// @brief Field c, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___c;

  /// @brief Field withIntegrityPacket, offset: 0x28, size: 0x1, def value: None
  bool ___withIntegrityPacket;

  /// @brief Field oldFormat, offset: 0x29, size: 0x1, def value: None
  bool ___oldFormat;

  /// @brief Field digestOut, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::DigestStream* ___digestOut;

  /// @brief Field methods, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IList* ___methods;

  /// @brief Field defAlgorithm, offset: 0x40, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___defAlgorithm;

  /// @brief Field rand, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___rand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___pOut) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___cOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___withIntegrityPacket) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___oldFormat) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___digestOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___methods) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___defAlgorithm) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, ___rand) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_EncMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/EncMethod");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PbeMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PbeMethod");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator_PubMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PubMethod");
