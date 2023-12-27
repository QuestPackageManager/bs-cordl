#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CcmBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CcmBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::CcmBlockCipher
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(960))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::CcmBlockCipher*
class CORDL_TYPE CcmBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field macBlock, offset 0x18, size 0x8
  __declspec(property(get = __get_macBlock, put = __set_macBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field nonce, offset 0x28, size 0x8
  __declspec(property(get = __get_nonce, put = __set_nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Field initialAssociatedText, offset 0x30, size 0x8
  __declspec(property(get = __get_initialAssociatedText, put = __set_initialAssociatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field macSize, offset 0x38, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field keyParam, offset 0x40, size 0x8
  __declspec(property(get = __get_keyParam, put = __set_keyParam))::Org::BouncyCastle::Crypto::ICipherParameters* keyParam;

  /// @brief Field associatedText, offset 0x48, size 0x8
  __declspec(property(get = __get_associatedText, put = __set_associatedText))::System::IO::MemoryStream* associatedText;

  /// @brief Field data, offset 0x50, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::IO::MemoryStream* data;

  /// @brief Field BlockSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BlockSize, put = setStaticF_BlockSize)) int32_t BlockSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macBlock() const;

  constexpr void __set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_nonce() const;

  constexpr void __set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_initialAssociatedText() const;

  constexpr void __set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __get_keyParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __get_keyParam() const;

  constexpr void __set_keyParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr ::System::IO::MemoryStream*& __get_associatedText();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __get_associatedText() const;

  constexpr void __set_associatedText(::System::IO::MemoryStream* value);

  constexpr ::System::IO::MemoryStream*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __get_data() const;

  constexpr void __set_data(::System::IO::MemoryStream* value);

  static inline void setStaticF_BlockSize(int32_t value);

  static inline int32_t getStaticF_BlockSize();

  static inline ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor addr 0xf154fc size 0x22c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetUnderlyingCipher addr 0xf15728 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init addr 0xf15730 size 0x1d8 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0xf15978 size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetBlockSize addr 0xf15a38 size 0xa4 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessAadByte addr 0xf15adc size 0x24 virtual true final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes addr 0xf15b00 size 0x24 virtual true final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte addr 0xf15b24 size 0x2c virtual true final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes addr 0xf15b50 size 0xa0 virtual true final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal addr 0xf15bf0 size 0xa8 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset addr 0xf15c98 size 0xdc virtual true final false
  inline void Reset();

  /// @brief Method GetMac addr 0xf15d74 size 0x68 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetUpdateOutputSize addr 0xf15ddc size 0x8 virtual true final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method GetOutputSize addr 0xf15de4 size 0x54 virtual true final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method ProcessPacket addr 0xf15e38 size 0xfc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method ProcessPacket addr 0xf15f34 size 0x8cc virtual true final false
  inline int32_t ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method CalculateMac addr 0xf16800 size 0x894 virtual false final false
  inline int32_t CalculateMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataOff, int32_t dataLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock);

  /// @brief Method GetMacSize addr 0xf15908 size 0x70 virtual false final false
  inline int32_t GetMacSize(bool forEncryption, int32_t requestedMacBits);

  /// @brief Method GetAssociatedTextLength addr 0xf170ac size 0x38 virtual false final false
  inline int32_t GetAssociatedTextLength();

  /// @brief Method HasAssociatedText addr 0xf17094 size 0x18 virtual false final false
  inline bool HasAssociatedText();

  // Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CcmBlockCipher(CcmBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CcmBlockCipher(CcmBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CcmBlockCipher();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field macBlock, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBlock;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field nonce, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nonce;

  /// @brief Field initialAssociatedText, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___initialAssociatedText;

  /// @brief Field macSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field keyParam, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___keyParam;

  /// @brief Field associatedText, offset: 0x48, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___associatedText;

  /// @brief Field data, offset: 0x50, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CcmBlockCipher");
