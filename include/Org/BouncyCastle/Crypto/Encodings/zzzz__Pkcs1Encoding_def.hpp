#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs1Encoding)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class Pkcs1Encoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding);
// Type: Org.BouncyCastle.Crypto.Encodings::Pkcs1Encoding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(821))
// CS Name: ::Org.BouncyCastle.Crypto.Encodings::Pkcs1Encoding*
class CORDL_TYPE Pkcs1Encoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field random, offset 0x10, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field forPrivateKey, offset 0x21, size 0x1
  __declspec(property(get = __get_forPrivateKey, put = __set_forPrivateKey)) bool forPrivateKey;

  /// @brief Field useStrictLength, offset 0x22, size 0x1
  __declspec(property(get = __get_useStrictLength, put = __set_useStrictLength)) bool useStrictLength;

  /// @brief Field pLen, offset 0x24, size 0x4
  __declspec(property(get = __get_pLen, put = __set_pLen)) int32_t pLen;

  /// @brief Field fallback, offset 0x28, size 0x8
  __declspec(property(get = __get_fallback, put = __set_fallback))::ArrayW<uint8_t, ::Array<uint8_t>*> fallback;

  /// @brief Field blockBuffer, offset 0x30, size 0x8
  __declspec(property(get = __get_blockBuffer, put = __set_blockBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> blockBuffer;

  /// @brief Field strictLengthEnabled, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_strictLengthEnabled, put = setStaticF_strictLengthEnabled))::ArrayW<bool, ::Array<bool>*> strictLengthEnabled;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr bool& __get_forPrivateKey();

  constexpr bool const& __get_forPrivateKey() const;

  constexpr void __set_forPrivateKey(bool value);

  constexpr bool& __get_useStrictLength();

  constexpr bool const& __get_useStrictLength() const;

  constexpr void __set_useStrictLength(bool value);

  constexpr int32_t& __get_pLen();

  constexpr int32_t const& __get_pLen() const;

  constexpr void __set_pLen(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fallback();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fallback() const;

  constexpr void __set_fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_blockBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_blockBuffer() const;

  constexpr void __set_blockBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_strictLengthEnabled(::ArrayW<bool, ::Array<bool>*> value);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_strictLengthEnabled();

  /// @brief Method get_StrictLengthEnabled addr 0xeb4118 size 0x70 virtual false final false
  static inline bool get_StrictLengthEnabled();

  /// @brief Method set_StrictLengthEnabled addr 0xeb4188 size 0x78 virtual false final false
  static inline void set_StrictLengthEnabled(bool value);

  static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method .ctor addr 0xeb4318 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, int32_t pLen);

  /// @brief Method .ctor addr 0xeb439c size 0x8c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, int32_t pLen);

  static inline ::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::ArrayW<uint8_t, ::Array<uint8_t>*> fallback);

  /// @brief Method .ctor addr 0xeb4428 size 0x9c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::ArrayW<uint8_t, ::Array<uint8_t>*> fallback);

  /// @brief Method GetUnderlyingCipher addr 0xeb44c4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();

  /// @brief Method get_AlgorithmName addr 0xeb44cc size 0xc0 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xeb458c size 0x2dc virtual true final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetInputBlockSize addr 0xeb4868 size 0xb8 virtual true final true
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xeb4920 size 0xb8 virtual true final true
  inline int32_t GetOutputBlockSize();

  /// @brief Method ProcessBlock addr 0xeb49d8 size 0x10 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method EncodeBlock addr 0xeb4cd8 size 0x308 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method CheckPkcs1Encoding addr 0xeb4fe0 size 0xa0 virtual false final false
  static inline int32_t CheckPkcs1Encoding(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded, int32_t pLen);

  /// @brief Method DecodeBlockOrRandom addr 0xeb5080 size 0x2fc virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlockOrRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method DecodeBlock addr 0xeb49e8 size 0x2f0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method FindStart addr 0xeb537c size 0x98 virtual false final false
  inline int32_t FindStart(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs1Encoding(Pkcs1Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs1Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs1Encoding(Pkcs1Encoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs1Encoding();

public:
  /// @brief Field random, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field forPrivateKey, offset: 0x21, size: 0x1, def value: None
  bool ___forPrivateKey;

  /// @brief Field useStrictLength, offset: 0x22, size: 0x1, def value: None
  bool ___useStrictLength;

  /// @brief Field pLen, offset: 0x24, size: 0x4, def value: None
  int32_t ___pLen;

  /// @brief Field fallback, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fallback;

  /// @brief Field blockBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___blockBuffer;

  /// @brief Field StrictLengthEnabledProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString StrictLengthEnabledProperty{ u"Org.BouncyCastle.Pkcs1.Strict" };

  /// @brief Field HeaderLength offset 0xffffffff size 0x4
  static constexpr int32_t HeaderLength{ static_cast<int32_t>(0xa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::Pkcs1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "Pkcs1Encoding");
