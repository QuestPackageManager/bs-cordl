#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GcmBlockCipher)
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
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
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class GcmBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::GcmBlockCipher
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(970))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::GcmBlockCipher*
class CORDL_TYPE GcmBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field multiplier, offset 0x18, size 0x8
  __declspec(property(get = __get_multiplier, put = __set_multiplier))::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* multiplier;

  /// @brief Field exp, offset 0x20, size 0x8
  __declspec(property(get = __get_exp, put = __set_exp))::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp;

  /// @brief Field forEncryption, offset 0x28, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field initialised, offset 0x29, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field macSize, offset 0x2c, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field lastKey, offset 0x30, size 0x8
  __declspec(property(get = __get_lastKey, put = __set_lastKey))::ArrayW<uint8_t, ::Array<uint8_t>*> lastKey;

  /// @brief Field nonce, offset 0x38, size 0x8
  __declspec(property(get = __get_nonce, put = __set_nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> nonce;

  /// @brief Field initialAssociatedText, offset 0x40, size 0x8
  __declspec(property(get = __get_initialAssociatedText, put = __set_initialAssociatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field H, offset 0x48, size 0x8
  __declspec(property(get = __get_H, put = __set_H))::ArrayW<uint8_t, ::Array<uint8_t>*> H;

  /// @brief Field J0, offset 0x50, size 0x8
  __declspec(property(get = __get_J0, put = __set_J0))::ArrayW<uint8_t, ::Array<uint8_t>*> J0;

  /// @brief Field bufBlock, offset 0x58, size 0x8
  __declspec(property(get = __get_bufBlock, put = __set_bufBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> bufBlock;

  /// @brief Field macBlock, offset 0x60, size 0x8
  __declspec(property(get = __get_macBlock, put = __set_macBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field S, offset 0x68, size 0x8
  __declspec(property(get = __get_S, put = __set_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field S_at, offset 0x70, size 0x8
  __declspec(property(get = __get_S_at, put = __set_S_at))::ArrayW<uint8_t, ::Array<uint8_t>*> S_at;

  /// @brief Field S_atPre, offset 0x78, size 0x8
  __declspec(property(get = __get_S_atPre, put = __set_S_atPre))::ArrayW<uint8_t, ::Array<uint8_t>*> S_atPre;

  /// @brief Field counter, offset 0x80, size 0x8
  __declspec(property(get = __get_counter, put = __set_counter))::ArrayW<uint8_t, ::Array<uint8_t>*> counter;

  /// @brief Field blocksRemaining, offset 0x88, size 0x4
  __declspec(property(get = __get_blocksRemaining, put = __set_blocksRemaining)) uint32_t blocksRemaining;

  /// @brief Field bufOff, offset 0x8c, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field totalLength, offset 0x90, size 0x8
  __declspec(property(get = __get_totalLength, put = __set_totalLength)) uint64_t totalLength;

  /// @brief Field atBlock, offset 0x98, size 0x8
  __declspec(property(get = __get_atBlock, put = __set_atBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> atBlock;

  /// @brief Field atBlockPos, offset 0xa0, size 0x4
  __declspec(property(get = __get_atBlockPos, put = __set_atBlockPos)) int32_t atBlockPos;

  /// @brief Field atLength, offset 0xa8, size 0x8
  __declspec(property(get = __get_atLength, put = __set_atLength)) uint64_t atLength;

  /// @brief Field atLengthPre, offset 0xb0, size 0x8
  __declspec(property(get = __get_atLengthPre, put = __set_atLengthPre)) uint64_t atLengthPre;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*& __get_multiplier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*> const& __get_multiplier() const;

  constexpr void __set_multiplier(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* value);

  constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*& __get_exp();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*> const& __get_exp() const;

  constexpr void __set_exp(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_lastKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_lastKey() const;

  constexpr void __set_lastKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_nonce() const;

  constexpr void __set_nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_initialAssociatedText() const;

  constexpr void __set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_H();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_H() const;

  constexpr void __set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_J0();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_J0() const;

  constexpr void __set_J0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_bufBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_bufBlock() const;

  constexpr void __set_bufBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macBlock() const;

  constexpr void __set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_S();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_S() const;

  constexpr void __set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_S_at();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_S_at() const;

  constexpr void __set_S_at(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_S_atPre();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_S_atPre() const;

  constexpr void __set_S_atPre(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_counter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_counter() const;

  constexpr void __set_counter(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint32_t& __get_blocksRemaining();

  constexpr uint32_t const& __get_blocksRemaining() const;

  constexpr void __set_blocksRemaining(uint32_t value);

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr uint64_t& __get_totalLength();

  constexpr uint64_t const& __get_totalLength() const;

  constexpr void __set_totalLength(uint64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_atBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_atBlock() const;

  constexpr void __set_atBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_atBlockPos();

  constexpr int32_t const& __get_atBlockPos() const;

  constexpr void __set_atBlockPos(int32_t value);

  constexpr uint64_t& __get_atLength();

  constexpr uint64_t const& __get_atLength() const;

  constexpr void __set_atLength(uint64_t value);

  constexpr uint64_t& __get_atLengthPre();

  constexpr uint64_t const& __get_atLengthPre() const;

  constexpr void __set_atLengthPre(uint64_t value);

  static inline ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c);

  /// @brief Method .ctor, addr 0xf1e444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c);

  static inline ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m);

  /// @brief Method .ctor, addr 0xf1e44c, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* c, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m);

  /// @brief Method get_AlgorithmName, addr 0xf1e5dc, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetUnderlyingCipher, addr 0xf1e69c, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetBlockSize, addr 0xf1e6a4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xf1e6ac, size 0x6bc, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMac, addr 0xf1ef80, size 0x88, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize, addr 0xf1f008, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUpdateOutputSize, addr 0xf1f030, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method ProcessAadByte, addr 0xf1f068, size 0x7c, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0xf1f164, size 0xc0, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method InitCipher, addr 0xf1f224, size 0x94, virtual false, abstract: false, final false
  inline void InitCipher();

  /// @brief Method ProcessByte, addr 0xf1f3bc, size 0xc8, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0xf1f5fc, size 0x24c, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal, addr 0xf1f848, size 0x52c, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf20090, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0xf1fecc, size 0x1c4, virtual false, abstract: false, final false
  inline void Reset(bool clearMac);

  /// @brief Method ProcessBlock, addr 0xf1f484, size 0x178, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t bufOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessPartial, addr 0xf1fd74, size 0x158, virtual false, abstract: false, final false
  inline void ProcessPartial(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method gHASH, addr 0xf1ede0, size 0xb4, virtual false, abstract: false, final false
  inline void gHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t len);

  /// @brief Method gHASHBlock, addr 0xf1ee94, size 0xec, virtual false, abstract: false, final false
  inline void gHASHBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method gHASHBlock, addr 0xf2023c, size 0xfc, virtual false, abstract: false, final false
  inline void gHASHBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off);

  /// @brief Method gHASHPartial, addr 0xf1f2b8, size 0x104, virtual false, abstract: false, final false
  inline void gHASHPartial(::ArrayW<uint8_t, ::Array<uint8_t>*> Y, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method GetNextCtrBlock, addr 0xf20098, size 0x1a4, virtual false, abstract: false, final false
  inline void GetNextCtrBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method CheckStatus, addr 0xf1f0e4, size 0x80, virtual false, abstract: false, final false
  inline void CheckStatus();

  // Ctor Parameters [CppParam { name: "", ty: "GcmBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GcmBlockCipher(GcmBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GcmBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GcmBlockCipher(GcmBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GcmBlockCipher();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field multiplier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* ___multiplier;

  /// @brief Field exp, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* ___exp;

  /// @brief Field forEncryption, offset: 0x28, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field initialised, offset: 0x29, size: 0x1, def value: None
  bool ___initialised;

  /// @brief Field macSize, offset: 0x2c, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field lastKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___lastKey;

  /// @brief Field nonce, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___nonce;

  /// @brief Field initialAssociatedText, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___initialAssociatedText;

  /// @brief Field H, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___H;

  /// @brief Field J0, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___J0;

  /// @brief Field bufBlock, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bufBlock;

  /// @brief Field macBlock, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBlock;

  /// @brief Field S, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S;

  /// @brief Field S_at, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S_at;

  /// @brief Field S_atPre, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S_atPre;

  /// @brief Field counter, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___counter;

  /// @brief Field blocksRemaining, offset: 0x88, size: 0x4, def value: None
  uint32_t ___blocksRemaining;

  /// @brief Field bufOff, offset: 0x8c, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field totalLength, offset: 0x90, size: 0x8, def value: None
  uint64_t ___totalLength;

  /// @brief Field atBlock, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___atBlock;

  /// @brief Field atBlockPos, offset: 0xa0, size: 0x4, def value: None
  int32_t ___atBlockPos;

  /// @brief Field atLength, offset: 0xa8, size: 0x8, def value: None
  uint64_t ___atLength;

  /// @brief Field atLengthPre, offset: 0xb0, size: 0x8, def value: None
  uint64_t ___atLengthPre;

  /// @brief Field BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t BlockSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___multiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___exp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___forEncryption) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___initialised) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___macSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___lastKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___nonce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___initialAssociatedText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___H) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___J0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___bufBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___macBlock) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___S) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___S_at) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___S_atPre) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___counter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___blocksRemaining) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___bufOff) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___totalLength) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___atBlock) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___atBlockPos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___atLength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, ___atLengthPre) == 0xb0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GcmBlockCipher");
