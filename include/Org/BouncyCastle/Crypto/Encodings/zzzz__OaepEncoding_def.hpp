#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Encodings::OaepEncoding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(820))
// CS Name: ::Org.BouncyCastle.Crypto.Encodings::OaepEncoding*
class CORDL_TYPE OaepEncoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field defHash, offset 0x10, size 0x8
  __declspec(property(get = __get_defHash, put = __set_defHash))::ArrayW<uint8_t, ::Array<uint8_t>*> defHash;

  /// @brief Field mgf1Hash, offset 0x18, size 0x8
  __declspec(property(get = __get_mgf1Hash, put = __set_mgf1Hash))::Org::BouncyCastle::Crypto::IDigest* mgf1Hash;

  /// @brief Field engine, offset 0x20, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_defHash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_defHash() const;

  constexpr void __set_defHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mgf1Hash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mgf1Hash() const;

  constexpr void __set_mgf1Hash(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xeb2e08, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash);

  /// @brief Method .ctor, addr 0xeb2e90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method .ctor, addr 0xeb2e84, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  static inline ::Org::BouncyCastle::Crypto::Encodings::OaepEncoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash,
                                                                               ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method .ctor, addr 0xeb2e9c, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* hash, ::Org::BouncyCastle::Crypto::IDigest* mgf1Hash,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingParams);

  /// @brief Method GetUnderlyingCipher, addr 0xeb30c8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();

  /// @brief Method get_AlgorithmName, addr 0xeb30d0, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xeb3190, size 0x148, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method GetInputBlockSize, addr 0xeb32d8, size 0xc8, virtual true, abstract: false, final true
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0xeb33a0, size 0xc8, virtual true, abstract: false, final true
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock, addr 0xeb3468, size 0x10, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method EncodeBlock, addr 0xeb3478, size 0x324, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method DecodeBlock, addr 0xeb379c, size 0x450, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method ItoOSP, addr 0xeb40c4, size 0x54, virtual false, abstract: false, final false
  inline void ItoOSP(int32_t i, ::ArrayW<uint8_t, ::Array<uint8_t>*> sp);

  /// @brief Method maskGeneratorFunction1, addr 0xeb3bec, size 0x4d8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> maskGeneratorFunction1(::ArrayW<uint8_t, ::Array<uint8_t>*> Z, int32_t zOff, int32_t zLen, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OaepEncoding(OaepEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OaepEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OaepEncoding(OaepEncoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OaepEncoding();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___defHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___mgf1Hash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___engine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___random) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding, ___forEncryption) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::OaepEncoding*, "Org.BouncyCastle.Crypto.Encodings", "OaepEncoding");
