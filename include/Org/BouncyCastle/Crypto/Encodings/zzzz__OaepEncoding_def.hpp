#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Encodings/OaepEncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OaepEncoding)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class OaepEncoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding);
// Dependencies Org.BouncyCastle.Crypto.IAsymmetricBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Encodings.OaepEncoding
class CORDL_TYPE OaepEncoding : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field defHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_defHash, put = __cordl_internal_set_defHash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> defHash;

  /// @brief Field engine, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field mgf1Hash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mgf1Hash, put = __cordl_internal_set_mgf1Hash)) ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Method DecodeBlock, addr 0x23409bc, size 0x448, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method EncodeBlock, addr 0x2340698, size 0x324, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method GetInputBlockSize, addr 0x23404f8, size 0xc8, virtual true, abstract: false, final true
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0x23405c0, size 0xc8, virtual true, abstract: false, final true
  inline int32_t GetOutputBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0x23402ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init, addr 0x23403b4, size 0x144, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method ItoOSP, addr 0x23412dc, size 0x54, virtual false, abstract: false, final false
  inline void ItoOSP(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash,
                                                                               ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method ProcessBlock, addr 0x2340688, size 0x10, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_defHash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_defHash();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_engine();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mgf1Hash() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mgf1Hash();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_defHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_mgf1Hash(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x2340034, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method .ctor, addr 0x23400b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method .ctor, addr 0x23400a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method .ctor, addr 0x23400c0, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method get_AlgorithmName, addr 0x23402f4, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

  /// @brief Method maskGeneratorFunction1, addr 0x2340e04, size 0x4d8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> maskGeneratorFunction1(::ArrayW<uint8_t, ::Array<uint8_t>*> Z, int32_t zOff, int32_t zLen, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OaepEncoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OaepEncoding(OaepEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OaepEncoding(OaepEncoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 820 };

  /// @brief Field defHash, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___defHash;

  /// @brief Field mgf1Hash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mgf1Hash;

  /// @brief Field engine, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field forEncryption, offset: 0x30, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___defHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___mgf1Hash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___engine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___random) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___forEncryption) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding*, "Org.BouncyCastle.Crypto.Encodings", "OaepEncoding");
