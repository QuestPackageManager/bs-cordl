#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUtilities)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace System::IO {
class FileInfo;
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
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1673))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpUtilities*
class CORDL_TYPE PgpUtilities : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10cdbe8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method DsaSigToMpi addr 0x10ca904 size 0x260 virtual false final false
  static inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> DsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method RsaSigToMpi addr 0x10cab64 size 0xfc virtual false final false
  static inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> RsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method GetDigestName addr 0x10b9a00 size 0x12c virtual false final false
  static inline ::StringW GetDigestName(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GetSignatureName addr 0x10c830c size 0x180 virtual false final false
  static inline ::StringW GetSignatureName(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GetSymmetricCipherName addr 0x10b985c size 0x1a4 virtual false final false
  static inline ::StringW GetSymmetricCipherName(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm);

  /// @brief Method GetKeySize addr 0x10cdbf0 size 0xa4 virtual false final false
  static inline int32_t GetKeySize(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm);

  /// @brief Method MakeKey addr 0x10cdc94 size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method MakeRandomKey addr 0x10cdd0c size 0x9c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeRandomKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                     ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method EncodePassPhrase addr 0x10be5c0 size 0x50 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePassPhrase(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool utf8);

  /// @brief Method MakeKeyFromPassPhrase addr 0x10cdda8 size 0x3c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                             ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method MakeKeyFromPassPhraseUtf8 addr 0x10cdde4 size 0x38 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhraseUtf8(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method MakeKeyFromPassPhraseRaw addr 0x10cde1c size 0x8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhraseRaw(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method DoMakeKeyFromPassPhrase addr 0x10bfc18 size 0x970 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* DoMakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method WriteFileToLiteralData addr 0x10cde24 size 0xd4 virtual false final false
  static inline void WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file);

  /// @brief Method WriteFileToLiteralData addr 0x10ce0d8 size 0xcc virtual false final false
  static inline void WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method PipeFileContents addr 0x10cdef8 size 0x1e0 virtual false final false
  static inline void PipeFileContents(::System::IO::FileInfo* file, ::System::IO::Stream* pOut, int32_t bufSize);

  /// @brief Method IsPossiblyBase64 addr 0x10ce1a4 size 0x48 virtual false final false
  static inline bool IsPossiblyBase64(int32_t ch);

  /// @brief Method GetDecoderStream addr 0x10ce1ec size 0x414 virtual false final false
  static inline ::System::IO::Stream* GetDecoderStream(::System::IO::Stream* inputStream);

  /// @brief Method CreateWrapper addr 0x10b9c34 size 0x124 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* CreateWrapper(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  /// @brief Method GenerateIV addr 0x10c2924 size 0x7c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateIV(int32_t length, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateS2k addr 0x10c2894 size 0x90 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::S2k* GenerateS2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int32_t s2kCount, ::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUtilities(PgpUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUtilities(PgpUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUtilities();

public:
  /// @brief Field ReadAhead offset 0xffffffff size 0x4
  static constexpr int32_t ReadAhead{ static_cast<int32_t>(0x3c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUtilities");
