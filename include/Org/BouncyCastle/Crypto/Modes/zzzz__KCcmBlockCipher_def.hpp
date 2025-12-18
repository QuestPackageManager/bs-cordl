#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/KCcmBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KCcmBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
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
class KCcmBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
class CORDL_TYPE KCcmBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field BITS_IN_BYTE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BITS_IN_BYTE, put = setStaticF_BITS_IN_BYTE)) int32_t BITS_IN_BYTE;

  /// @brief Field BYTES_IN_INT, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BYTES_IN_INT, put = setStaticF_BYTES_IN_INT)) int32_t BYTES_IN_INT;

  /// @brief Field G1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_G1, put = __cordl_internal_set_G1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> G1;

  /// @brief Field MAX_MAC_BIT_LENGTH, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MAX_MAC_BIT_LENGTH, put = setStaticF_MAX_MAC_BIT_LENGTH)) int32_t MAX_MAC_BIT_LENGTH;

  /// @brief Field MIN_MAC_BIT_LENGTH, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MIN_MAC_BIT_LENGTH, put = setStaticF_MIN_MAC_BIT_LENGTH)) int32_t MIN_MAC_BIT_LENGTH;

  /// @brief Field Nb_, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_Nb_, put = __cordl_internal_set_Nb_)) int32_t Nb_;

  /// @brief Field associatedText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedText, put = __cordl_internal_set_associatedText)) ::System::IO::MemoryStream* associatedText;

  /// @brief Field buffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field counter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) ::ArrayW<uint8_t, ::Array<uint8_t>*> counter;

  /// @brief Field data, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::IO::MemoryStream* data;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::IBlockCipher* engine;

  /// @brief Field forEncryption, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field initialAssociatedText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_initialAssociatedText, put = __cordl_internal_set_initialAssociatedText)) ::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field mac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field macBlock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_macBlock, put = __cordl_internal_set_macBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field nonce, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Field s, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Method CalculateMac, addr 0x3304908, size 0x290, virtual false, abstract: false, final false
  inline void CalculateMac(::ArrayW<uint8_t, ::Array<uint8_t>*> authText, int32_t authOff, int32_t len);

  /// @brief Method DoFinal, addr 0x3304db8, size 0x98, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x3302fec, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetMac, addr 0x3304e50, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize, addr 0x3304eb8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUnderlyingCipher, addr 0x3303094, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetUpdateOutputSize, addr 0x3304eb0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method Init, addr 0x3302b10, size 0x414, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb);

  /// @brief Method ProcessAAD, addr 0x33030dc, size 0x8a4, virtual false, abstract: false, final false
  inline void ProcessAAD(::ArrayW<uint8_t, ::Array<uint8_t>*> assocText, int32_t assocOff, int32_t assocLen, int32_t dataLen);

  /// @brief Method ProcessAadByte, addr 0x330309c, size 0x20, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x33030bc, size 0x20, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method ProcessBlock, addr 0x3304b98, size 0x220, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessByte, addr 0x3303c94, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x3303cc0, size 0xa4, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessPacket, addr 0x3303d64, size 0xba4, virtual false, abstract: false, final false
  inline int32_t ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x3304ec4, size 0x11c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_G1() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_G1();

  constexpr int32_t const& __cordl_internal_get_Nb_() const;

  constexpr int32_t& __cordl_internal_get_Nb_();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_associatedText() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_associatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_counter() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_counter();

  constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_data() const;

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_data();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_engine();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_initialAssociatedText() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBlock();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_s() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_G1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Nb_(int32_t value);

  constexpr void __cordl_internal_set_associatedText(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_data(::System::IO::MemoryStream* value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_s(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3302654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method .ctor, addr 0x330265c, size 0x4b4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb);

  /// @brief Method getFlag, addr 0x3303a00, size 0x294, virtual false, abstract: false, final false
  inline uint8_t getFlag(bool authTextPresents, int32_t macSize);

  static inline int32_t getStaticF_BITS_IN_BYTE();

  static inline int32_t getStaticF_BYTES_IN_INT();

  static inline int32_t getStaticF_MAX_MAC_BIT_LENGTH();

  static inline int32_t getStaticF_MIN_MAC_BIT_LENGTH();

  /// @brief Method get_AlgorithmName, addr 0x3302f24, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  /// @brief Method intToBytes, addr 0x3303980, size 0x80, virtual false, abstract: false, final false
  inline void intToBytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method setNb, addr 0x33025e4, size 0x70, virtual false, abstract: false, final false
  inline void setNb(int32_t Nb);

  static inline void setStaticF_BITS_IN_BYTE(int32_t value);

  static inline void setStaticF_BYTES_IN_INT(int32_t value);

  static inline void setStaticF_MAX_MAC_BIT_LENGTH(int32_t value);

  static inline void setStaticF_MIN_MAC_BIT_LENGTH(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KCcmBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KCcmBlockCipher(KCcmBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KCcmBlockCipher(KCcmBlockCipher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 972 };

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___engine;

  /// @brief Field macSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field forEncryption, offset: 0x1c, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field initialAssociatedText, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___initialAssociatedText;

  /// @brief Field mac, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field macBlock, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBlock;

  /// @brief Field nonce, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nonce;

  /// @brief Field G1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___G1;

  /// @brief Field buffer, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field s, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___s;

  /// @brief Field counter, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___counter;

  /// @brief Field associatedText, offset: 0x60, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___associatedText;

  /// @brief Field data, offset: 0x68, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___data;

  /// @brief Field Nb_, offset: 0x70, size: 0x4, def value: None
  int32_t ___Nb_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___macSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___forEncryption) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___initialAssociatedText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___mac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___macBlock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___nonce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___G1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___buffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___s) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___counter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___associatedText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___data) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, ___Nb_) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, 0x78>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "KCcmBlockCipher");
