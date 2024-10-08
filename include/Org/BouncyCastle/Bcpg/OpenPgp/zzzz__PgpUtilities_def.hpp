#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUtilities)
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
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpUtilities*
class CORDL_TYPE PgpUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateWrapper, addr 0x24f8f54, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* CreateWrapper(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm);

  /// @brief Method DoMakeKeyFromPassPhrase, addr 0x24fee10, size 0x960, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* DoMakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase);

  /// @brief Method DsaSigToMpi, addr 0x2509944, size 0x25c, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> DsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method EncodePassPhrase, addr 0x24fd810, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePassPhrase(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool utf8);

  /// @brief Method GenerateIV, addr 0x2501a70, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateIV(int32_t length, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GenerateS2k, addr 0x25019e8, size 0x88, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::S2k* GenerateS2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int32_t s2kCount, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GetDecoderStream, addr 0x250d1a4, size 0x400, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* GetDecoderStream(::System::IO::Stream* inputStream);

  /// @brief Method GetDigestName, addr 0x24f8d28, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GetDigestName(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GetKeySize, addr 0x250cbb0, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t GetKeySize(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm);

  /// @brief Method GetSignatureName, addr 0x2507398, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW GetSignatureName(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm);

  /// @brief Method GetSymmetricCipherName, addr 0x24f8b8c, size 0x19c, virtual false, abstract: false, final false
  static inline ::StringW GetSymmetricCipherName(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm);

  /// @brief Method IsPossiblyBase64, addr 0x250d158, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPossiblyBase64(int32_t ch);

  /// @brief Method MakeKey, addr 0x250cc4c, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method MakeKeyFromPassPhrase, addr 0x250cd60, size 0x3c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                             ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method MakeKeyFromPassPhraseRaw, addr 0x250cdd4, size 0x8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhraseRaw(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase);

  /// @brief Method MakeKeyFromPassPhraseUtf8, addr 0x250cd9c, size 0x38, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeKeyFromPassPhraseUtf8(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase);

  /// @brief Method MakeRandomKey, addr 0x250ccc4, size 0x9c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* MakeRandomKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                     ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities* New_ctor();

  /// @brief Method PipeFileContents, addr 0x250ceb0, size 0x1dc, virtual false, abstract: false, final false
  static inline void PipeFileContents(::System::IO::FileInfo* file, ::System::IO::Stream* pOut, int32_t bufSize);

  /// @brief Method RsaSigToMpi, addr 0x2509ba0, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> RsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method WriteFileToLiteralData, addr 0x250cddc, size 0xd4, virtual false, abstract: false, final false
  static inline void WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file);

  /// @brief Method WriteFileToLiteralData, addr 0x250d08c, size 0xcc, virtual false, abstract: false, final false
  static inline void WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x250cba8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUtilities(PgpUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUtilities(PgpUtilities const&) = delete;

  /// @brief Field ReadAhead offset 0xffffffff size 0x4
  static constexpr int32_t ReadAhead{ static_cast<int32_t>(0x3c) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUtilities");
