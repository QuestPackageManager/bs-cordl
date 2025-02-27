#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/CcmBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CcmBlockCipher)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CcmBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher);
// Dependencies Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher, Org.BouncyCastle.Crypto.Modes.IAeadCipher, System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
class CORDL_TYPE CcmBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field BlockSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BlockSize, put = setStaticF_BlockSize)) int32_t BlockSize;

  /// @brief Field associatedText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedText, put = __cordl_internal_set_associatedText)) ::System::IO::MemoryStream* associatedText;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field data, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::IO::MemoryStream* data;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field initialAssociatedText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_initialAssociatedText, put = __cordl_internal_set_initialAssociatedText)) ::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field keyParam, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_keyParam, put = __cordl_internal_set_keyParam)) ::Org::BouncyCastle::Crypto::ICipherParameters* keyParam;

  /// @brief Field macBlock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_macBlock, put = __cordl_internal_set_macBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field macSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field nonce, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Method CalculateMac, addr 0x23a4cbc, size 0x898, virtual false, abstract: false, final false
  inline int32_t CalculateMac(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataOff, int32_t dataLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock);

  /// @brief Method DoFinal, addr 0x23a40e0, size 0xa8, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetAssociatedTextLength, addr 0x23a556c, size 0x38, virtual false, abstract: false, final false
  inline int32_t GetAssociatedTextLength();

  /// @brief Method GetBlockSize, addr 0x23a3f28, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetMac, addr 0x23a4264, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetMacSize, addr 0x23a3dfc, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetMacSize(bool forEncryption, int32_t requestedMacBits);

  /// @brief Method GetOutputSize, addr 0x23a42d4, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUnderlyingCipher, addr 0x23a3c24, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetUpdateOutputSize, addr 0x23a42cc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method HasAssociatedText, addr 0x23a5554, size 0x18, virtual false, abstract: false, final false
  inline bool HasAssociatedText();

  /// @brief Method Init, addr 0x23a3c2c, size 0x1d0, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method ProcessAadByte, addr 0x23a3fcc, size 0x24, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x23a3ff0, size 0x24, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte, addr 0x23a4014, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x23a4040, size 0xa0, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessPacket, addr 0x23a4328, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method ProcessPacket, addr 0x23a4420, size 0x89c, virtual true, abstract: false, final false
  inline int32_t ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x23a4188, size 0xdc, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_associatedText() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_associatedText();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_data() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_data();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_initialAssociatedText() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_initialAssociatedText();

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* const& __cordl_internal_get_keyParam() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __cordl_internal_get_keyParam();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBlock();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonce();

  constexpr void __cordl_internal_set_associatedText(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_data(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_keyParam(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr void __cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23a3a08, size 0x21c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline int32_t getStaticF_BlockSize();

  /// @brief Method get_AlgorithmName, addr 0x23a3e68, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  static inline void setStaticF_BlockSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CcmBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CcmBlockCipher(CcmBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CcmBlockCipher(CcmBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 960 };

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
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___macBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___nonce) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___initialAssociatedText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___macSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___keyParam) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___associatedText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, ___data) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CcmBlockCipher");
