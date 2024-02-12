#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Modes::KCcmBlockCipher
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(972))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::KCcmBlockCipher*
class CORDL_TYPE KCcmBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::IBlockCipher* engine;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field forEncryption, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field initialAssociatedText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_initialAssociatedText, put = __cordl_internal_set_initialAssociatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field mac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field macBlock, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_macBlock, put = __cordl_internal_set_macBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field nonce, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Field G1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_G1, put = __cordl_internal_set_G1))::ArrayW<uint8_t, ::Array<uint8_t>*> G1;

  /// @brief Field buffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field s, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s))::ArrayW<uint8_t, ::Array<uint8_t>*> s;

  /// @brief Field counter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter))::ArrayW<uint8_t, ::Array<uint8_t>*> counter;

  /// @brief Field associatedText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_associatedText, put = __cordl_internal_set_associatedText))::System::IO::MemoryStream* associatedText;

  /// @brief Field data, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::IO::MemoryStream* data;

  /// @brief Field Nb_, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_Nb_, put = __cordl_internal_set_Nb_)) int32_t Nb_;

  /// @brief Field BYTES_IN_INT, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BYTES_IN_INT, put = setStaticF_BYTES_IN_INT)) int32_t BYTES_IN_INT;

  /// @brief Field BITS_IN_BYTE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BITS_IN_BYTE, put = setStaticF_BITS_IN_BYTE)) int32_t BITS_IN_BYTE;

  /// @brief Field MAX_MAC_BIT_LENGTH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_MAC_BIT_LENGTH, put = setStaticF_MAX_MAC_BIT_LENGTH)) int32_t MAX_MAC_BIT_LENGTH;

  /// @brief Field MIN_MAC_BIT_LENGTH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MIN_MAC_BIT_LENGTH, put = setStaticF_MIN_MAC_BIT_LENGTH)) int32_t MIN_MAC_BIT_LENGTH;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_engine() const;

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_initialAssociatedText() const;

  constexpr void __cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

  constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBlock() const;

  constexpr void __cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_nonce() const;

  constexpr void __cordl_internal_set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_G1();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_G1() const;

  constexpr void __cordl_internal_set_G1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_s();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_s() const;

  constexpr void __cordl_internal_set_s(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_counter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_counter() const;

  constexpr void __cordl_internal_set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_associatedText();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get_associatedText() const;

  constexpr void __cordl_internal_set_associatedText(::System::IO::MemoryStream* value);

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get_data() const;

  constexpr void __cordl_internal_set_data(::System::IO::MemoryStream* value);

  constexpr int32_t& __cordl_internal_get_Nb_();

  constexpr int32_t const& __cordl_internal_get_Nb_() const;

  constexpr void __cordl_internal_set_Nb_(int32_t value);

  static inline void setStaticF_BYTES_IN_INT(int32_t value);

  static inline int32_t getStaticF_BYTES_IN_INT();

  static inline void setStaticF_BITS_IN_BYTE(int32_t value);

  static inline int32_t getStaticF_BITS_IN_BYTE();

  static inline void setStaticF_MAX_MAC_BIT_LENGTH(int32_t value);

  static inline int32_t getStaticF_MAX_MAC_BIT_LENGTH();

  static inline void setStaticF_MIN_MAC_BIT_LENGTH(int32_t value);

  static inline int32_t getStaticF_MIN_MAC_BIT_LENGTH();

  /// @brief Method setNb, addr 0xf4bbf0, size 0x78, virtual false, abstract: false, final false
  inline void setNb(int32_t Nb);

  static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method .ctor, addr 0xf4bc68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  static inline ::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb);

  /// @brief Method .ctor, addr 0xf4bc70, size 0x4b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t Nb);

  /// @brief Method Init, addr 0xf4c128, size 0x408, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf4c530, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetBlockSize, addr 0xf4c5f0, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetUnderlyingCipher, addr 0xf4c694, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method ProcessAadByte, addr 0xf4c69c, size 0x24, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0xf4c6c0, size 0x24, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method ProcessAAD, addr 0xf4c6e4, size 0x8b0, virtual false, abstract: false, final false
  inline void ProcessAAD(::ArrayW<uint8_t, ::Array<uint8_t>*> assocText, int32_t assocOff, int32_t assocLen, int32_t dataLen);

  /// @brief Method ProcessByte, addr 0xf4d258, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0xf4d284, size 0xa0, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessPacket, addr 0xf4d324, size 0xb60, virtual false, abstract: false, final false
  inline int32_t ProcessPacket(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBlock, addr 0xf4e10c, size 0x218, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method CalculateMac, addr 0xf4de84, size 0x288, virtual false, abstract: false, final false
  inline void CalculateMac(::ArrayW<uint8_t, ::Array<uint8_t>*> authText, int32_t authOff, int32_t len);

  /// @brief Method DoFinal, addr 0xf4e324, size 0x98, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMac, addr 0xf4e3bc, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetUpdateOutputSize, addr 0xf4e418, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method GetOutputSize, addr 0xf4e420, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method Reset, addr 0xf4e42c, size 0x118, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method intToBytes, addr 0xf4cf94, size 0x80, virtual false, abstract: false, final false
  inline void intToBytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method getFlag, addr 0xf4d014, size 0x244, virtual false, abstract: false, final false
  inline uint8_t getFlag(bool authTextPresents, int32_t macSize);

  // Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KCcmBlockCipher(KCcmBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KCcmBlockCipher(KCcmBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KCcmBlockCipher();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, 0x78>, "Size mismatch!");

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

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "KCcmBlockCipher");
