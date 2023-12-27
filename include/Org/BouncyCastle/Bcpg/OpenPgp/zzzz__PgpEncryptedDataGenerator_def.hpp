#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpEncryptedDataGenerator)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__EncMethod;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__PbeMethod;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__PubMethod;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpEncryptedDataGenerator;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__EncMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__PbeMethod;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __PgpEncryptedDataGenerator__PubMethod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod);
// Type: ::EncMethod
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(594)), TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1639))
// CS Name: ::PgpEncryptedDataGenerator::EncMethod*
class CORDL_TYPE __PgpEncryptedDataGenerator__EncMethod : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field sessionInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_sessionInfo, put = __set_sessionInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo;

  /// @brief Field encAlgorithm, offset 0x18, size 0x4
  __declspec(property(get = __get_encAlgorithm, put = __set_encAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sessionInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sessionInfo() const;

  constexpr void __set_sessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_encAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_encAlgorithm() const;

  constexpr void __set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __get_key() const;

  constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method AddSessionInfo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> si, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod* New_ctor();

  /// @brief Method .ctor addr 0x10ab610 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__EncMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PgpEncryptedDataGenerator__EncMethod(__PgpEncryptedDataGenerator__EncMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__EncMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PgpEncryptedDataGenerator__EncMethod(__PgpEncryptedDataGenerator__EncMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PgpEncryptedDataGenerator__EncMethod();

public:
  /// @brief Field sessionInfo, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sessionInfo;

  /// @brief Field encAlgorithm, offset: 0x18, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___encAlgorithm;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::PbeMethod
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1640))
// CS Name: ::PgpEncryptedDataGenerator::PbeMethod*
class CORDL_TYPE __PgpEncryptedDataGenerator__PbeMethod : public ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod {
public:
  // Declarations
  /// @brief Field s2k, offset 0x28, size 0x8
  __declspec(property(get = __get_s2k, put = __set_s2k))::Org::BouncyCastle::Bcpg::S2k* s2k;

  constexpr ::Org::BouncyCastle::Bcpg::S2k*& __get_s2k();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::S2k*> const& __get_s2k() const;

  constexpr void __set_s2k(::Org::BouncyCastle::Bcpg::S2k* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                     ::Org::BouncyCastle::Bcpg::S2k* s2k, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  /// @brief Method .ctor addr 0x10aa09c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  /// @brief Method GetKey addr 0x10ab618 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* GetKey();

  /// @brief Method AddSessionInfo addr 0x10ab620 size 0x2a0 virtual true final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> si, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Encode addr 0x10ab8c0 size 0x98 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut);

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__PbeMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PgpEncryptedDataGenerator__PbeMethod(__PgpEncryptedDataGenerator__PbeMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__PbeMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PgpEncryptedDataGenerator__PbeMethod(__PgpEncryptedDataGenerator__PbeMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PgpEncryptedDataGenerator__PbeMethod();

public:
  /// @brief Field s2k, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::S2k* ___s2k;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: ::PubMethod
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1641))
// CS Name: ::PgpEncryptedDataGenerator::PubMethod*
class CORDL_TYPE __PgpEncryptedDataGenerator__PubMethod : public ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod {
public:
  // Declarations
  /// @brief Field pubKey, offset 0x28, size 0x8
  __declspec(property(get = __get_pubKey, put = __set_pubKey))::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey;

  /// @brief Field sessionKeyObfuscation, offset 0x30, size 0x1
  __declspec(property(get = __get_sessionKeyObfuscation, put = __set_sessionKeyObfuscation)) bool sessionKeyObfuscation;

  /// @brief Field data, offset 0x38, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> data;

  constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& __get_pubKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*> const& __get_pubKey() const;

  constexpr void __set_pubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value);

  constexpr bool& __get_sessionKeyObfuscation();

  constexpr bool const& __get_sessionKeyObfuscation() const;

  constexpr void __set_sessionKeyObfuscation(bool value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_data();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod* New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation);

  /// @brief Method .ctor addr 0x10aa280 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey, bool sessionKeyObfuscation);

  /// @brief Method AddSessionInfo addr 0x10ab958 size 0x24 virtual true final false
  inline void AddSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method EncryptSessionInfo addr 0x10ab97c size 0x94c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method ProcessSessionInfo addr 0x10ac2c8 size 0x294 virtual false final false
  inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ProcessSessionInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedSessionInfo);

  /// @brief Method ConvertToEncodedMpi addr 0x10acc10 size 0x1a0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertToEncodedMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedSessionInfo);

  /// @brief Method Encode addr 0x10acdb0 size 0xb0 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut);

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__PubMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PgpEncryptedDataGenerator__PubMethod(__PgpEncryptedDataGenerator__PubMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PgpEncryptedDataGenerator__PubMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PgpEncryptedDataGenerator__PubMethod(__PgpEncryptedDataGenerator__PubMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PgpEncryptedDataGenerator__PubMethod();

public:
  /// @brief Field pubKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* ___pubKey;

  /// @brief Field sessionKeyObfuscation, offset: 0x30, size: 0x1, def value: None
  bool ___sessionKeyObfuscation;

  /// @brief Field data, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataGenerator
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(594))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1642))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpEncryptedDataGenerator*
class CORDL_TYPE PgpEncryptedDataGenerator : public ::System::Object {
public:
  // Declarations
  using PubMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod;

  using PbeMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod;

  using EncMethod = ::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod;

  /// @brief Field pOut, offset 0x10, size 0x8
  __declspec(property(get = __get_pOut, put = __set_pOut))::Org::BouncyCastle::Bcpg::BcpgOutputStream* pOut;

  /// @brief Field cOut, offset 0x18, size 0x8
  __declspec(property(get = __get_cOut, put = __set_cOut))::Org::BouncyCastle::Crypto::IO::CipherStream* cOut;

  /// @brief Field c, offset 0x20, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::Org::BouncyCastle::Crypto::IBufferedCipher* c;

  /// @brief Field withIntegrityPacket, offset 0x28, size 0x1
  __declspec(property(get = __get_withIntegrityPacket, put = __set_withIntegrityPacket)) bool withIntegrityPacket;

  /// @brief Field oldFormat, offset 0x29, size 0x1
  __declspec(property(get = __get_oldFormat, put = __set_oldFormat)) bool oldFormat;

  /// @brief Field digestOut, offset 0x30, size 0x8
  __declspec(property(get = __get_digestOut, put = __set_digestOut))::Org::BouncyCastle::Crypto::IO::DigestStream* digestOut;

  /// @brief Field methods, offset 0x38, size 0x8
  __declspec(property(get = __get_methods, put = __set_methods))::System::Collections::IList* methods;

  /// @brief Field defAlgorithm, offset 0x40, size 0x4
  __declspec(property(get = __get_defAlgorithm, put = __set_defAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag defAlgorithm;

  /// @brief Field rand, offset 0x48, size 0x8
  __declspec(property(get = __get_rand, put = __set_rand))::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
  constexpr operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& __get_pOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgOutputStream*> const& __get_pOut() const;

  constexpr void __set_pOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value);

  constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& __get_cOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> const& __get_cOut() const;

  constexpr void __set_cOut(::Org::BouncyCastle::Crypto::IO::CipherStream* value);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_c() const;

  constexpr void __set_c(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr bool& __get_withIntegrityPacket();

  constexpr bool const& __get_withIntegrityPacket() const;

  constexpr void __set_withIntegrityPacket(bool value);

  constexpr bool& __get_oldFormat();

  constexpr bool const& __get_oldFormat() const;

  constexpr void __set_oldFormat(bool value);

  constexpr ::Org::BouncyCastle::Crypto::IO::DigestStream*& __get_digestOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::DigestStream*> const& __get_digestOut() const;

  constexpr void __set_digestOut(::Org::BouncyCastle::Crypto::IO::DigestStream* value);

  constexpr ::System::Collections::IList*& __get_methods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_methods() const;

  constexpr void __set_methods(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_defAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_defAlgorithm() const;

  constexpr void __set_defAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_rand();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_rand() const;

  constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  /// @brief Method .ctor addr 0x10a9bb0 size 0xac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket);

  /// @brief Method .ctor addr 0x10a9c5c size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x10a9d10 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand);

  /// @brief Method .ctor addr 0x10a9d90 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool withIntegrityPacket, ::Org::BouncyCastle::Security::SecureRandom* rand);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator* New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                        ::Org::BouncyCastle::Security::SecureRandom* rand, bool oldFormat);

  /// @brief Method .ctor addr 0x10a9e20 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand, bool oldFormat);

  /// @brief Method AddMethod addr 0x10a9eb0 size 0x30 virtual false final false
  inline void AddMethod(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method AddMethod addr 0x10a9ee0 size 0x3c virtual false final false
  inline void AddMethod(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method AddMethodUtf8 addr 0x10aa050 size 0x40 virtual false final false
  inline void AddMethodUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method AddMethodRaw addr 0x10aa090 size 0xc virtual false final false
  inline void AddMethodRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method DoAddMethod addr 0x10a9f1c size 0x134 virtual false final false
  inline void DoAddMethod(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag s2kDigest);

  /// @brief Method AddMethod addr 0x10aa0d8 size 0x8 virtual false final false
  inline void AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key);

  /// @brief Method AddMethod addr 0x10aa0e0 size 0x14c virtual false final false
  inline void AddMethod(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, bool sessionKeyObfuscation);

  /// @brief Method AddCheckSum addr 0x10aa2b0 size 0x90 virtual false final false
  inline void AddCheckSum(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo);

  /// @brief Method CreateSessionInfo addr 0x10aa340 size 0xa8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSessionInfo(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key);

  /// @brief Method Open addr 0x10aa3e8 size 0xf50 virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, int64_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Open addr 0x10ab338 size 0x8 virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, int64_t length);

  /// @brief Method Open addr 0x10ab340 size 0xc virtual false final false
  inline ::System::IO::Stream* Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Close addr 0x10ab34c size 0x2c4 virtual true final true
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpEncryptedDataGenerator(PgpEncryptedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpEncryptedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpEncryptedDataGenerator(PgpEncryptedDataGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpEncryptedDataGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedDataGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__EncMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/EncMethod");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PbeMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PbeMethod");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__PgpEncryptedDataGenerator__PubMethod*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpEncryptedDataGenerator/PubMethod");
