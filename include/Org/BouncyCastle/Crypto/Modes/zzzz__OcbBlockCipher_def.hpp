#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/OcbBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcbBlockCipher)
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
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OcbBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::OcbBlockCipher
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Modes::OcbBlockCipher*
class CORDL_TYPE OcbBlockCipher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field Checksum, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_Checksum, put = __cordl_internal_set_Checksum)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Checksum;

  /// @brief Field KtopInput, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_KtopInput, put = __cordl_internal_set_KtopInput)) ::ArrayW<uint8_t, ::Array<uint8_t>*> KtopInput;

  /// @brief Field L, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_L, put = __cordl_internal_set_L)) ::System::Collections::IList* L;

  /// @brief Field L_Asterisk, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_L_Asterisk, put = __cordl_internal_set_L_Asterisk)) ::ArrayW<uint8_t, ::Array<uint8_t>*> L_Asterisk;

  /// @brief Field L_Dollar, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_L_Dollar, put = __cordl_internal_set_L_Dollar)) ::ArrayW<uint8_t, ::Array<uint8_t>*> L_Dollar;

  /// @brief Field OffsetHASH, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_OffsetHASH, put = __cordl_internal_set_OffsetHASH)) ::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetHASH;

  /// @brief Field OffsetMAIN, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_OffsetMAIN, put = __cordl_internal_set_OffsetMAIN)) ::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetMAIN;

  /// @brief Field OffsetMAIN_0, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_OffsetMAIN_0, put = __cordl_internal_set_OffsetMAIN_0)) ::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetMAIN_0;

  /// @brief Field Stretch, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Stretch, put = __cordl_internal_set_Stretch)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Stretch;

  /// @brief Field Sum, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_Sum, put = __cordl_internal_set_Sum)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Sum;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field hashBlock, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_hashBlock, put = __cordl_internal_set_hashBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> hashBlock;

  /// @brief Field hashBlockCount, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_hashBlockCount, put = __cordl_internal_set_hashBlockCount)) int64_t hashBlockCount;

  /// @brief Field hashBlockPos, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_hashBlockPos, put = __cordl_internal_set_hashBlockPos)) int32_t hashBlockPos;

  /// @brief Field hashCipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashCipher, put = __cordl_internal_set_hashCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher;

  /// @brief Field initialAssociatedText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_initialAssociatedText, put = __cordl_internal_set_initialAssociatedText)) ::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field macBlock, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_macBlock, put = __cordl_internal_set_macBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  /// @brief Field macSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field mainBlock, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mainBlock, put = __cordl_internal_set_mainBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mainBlock;

  /// @brief Field mainBlockCount, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_mainBlockCount, put = __cordl_internal_set_mainBlockCount)) int64_t mainBlockCount;

  /// @brief Field mainBlockPos, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_mainBlockPos, put = __cordl_internal_set_mainBlockPos)) int32_t mainBlockPos;

  /// @brief Field mainCipher, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mainCipher, put = __cordl_internal_set_mainCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Method Clear, addr 0x23790f4, size 0x1c, virtual true, abstract: false, final false
  inline void Clear(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method DoFinal, addr 0x2378c24, size 0x404, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x23788bc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetLSub, addr 0x2379110, size 0x2cc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetLSub(int32_t n);

  /// @brief Method GetMac, addr 0x23788c4, size 0x88, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize, addr 0x237894c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUnderlyingCipher, addr 0x2377e54, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method GetUpdateOutputSize, addr 0x2378974, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method Init, addr 0x2377f1c, size 0x6d0, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher);

  /// @brief Method OCB_double, addr 0x23785ec, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> OCB_double(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method OCB_extend, addr 0x2379028, size 0x60, virtual false, abstract: false, final false
  static inline void OCB_extend(::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t pos);

  /// @brief Method OCB_ntz, addr 0x237944c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t OCB_ntz(int64_t x);

  /// @brief Method ProcessAadByte, addr 0x23789ac, size 0x68, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x2378a14, size 0xb4, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t off, int32_t len);

  /// @brief Method ProcessByte, addr 0x2378ac8, size 0x7c, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x2378b44, size 0xe0, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessHashBlock, addr 0x23793dc, size 0x70, virtual true, abstract: false, final false
  inline void ProcessHashBlock();

  /// @brief Method ProcessMainBlock, addr 0x2379480, size 0x1d0, virtual true, abstract: false, final false
  inline void ProcessMainBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessNonce, addr 0x2378684, size 0x238, virtual true, abstract: false, final false
  inline int32_t ProcessNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> N);

  /// @brief Method Reset, addr 0x23790e0, size 0x14, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x2379650, size 0x1ec, virtual true, abstract: false, final false
  inline void Reset(bool clearMac);

  /// @brief Method ShiftLeft, addr 0x237991c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ShiftLeft(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method UpdateHASH, addr 0x237983c, size 0xe0, virtual true, abstract: false, final false
  inline void UpdateHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> LSub);

  /// @brief Method Xor, addr 0x2379088, size 0x58, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Checksum() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Checksum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_KtopInput() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_KtopInput();

  constexpr ::System::Collections::IList*& __cordl_internal_get_L();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_L() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_L_Asterisk() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_L_Asterisk();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_L_Dollar() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_L_Dollar();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_OffsetHASH() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_OffsetHASH();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_OffsetMAIN() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_OffsetMAIN();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_OffsetMAIN_0() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_OffsetMAIN_0();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Stretch() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Stretch();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Sum() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Sum();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_hashBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_hashBlock();

  constexpr int64_t const& __cordl_internal_get_hashBlockCount() const;

  constexpr int64_t& __cordl_internal_get_hashBlockCount();

  constexpr int32_t const& __cordl_internal_get_hashBlockPos() const;

  constexpr int32_t& __cordl_internal_get_hashBlockPos();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_hashCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_hashCipher() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_initialAssociatedText() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_macBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_macBlock();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mainBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mainBlock();

  constexpr int64_t const& __cordl_internal_get_mainBlockCount() const;

  constexpr int64_t& __cordl_internal_get_mainBlockCount();

  constexpr int32_t const& __cordl_internal_get_mainBlockPos() const;

  constexpr int32_t& __cordl_internal_get_mainBlockPos();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_mainCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_mainCipher() const;

  constexpr void __cordl_internal_set_Checksum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_KtopInput(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_L(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_L_Asterisk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_L_Dollar(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_OffsetHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_OffsetMAIN(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_OffsetMAIN_0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Stretch(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Sum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_hashBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_hashBlockCount(int64_t value);

  constexpr void __cordl_internal_set_hashBlockPos(int32_t value);

  constexpr void __cordl_internal_set_hashCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_mainBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mainBlockCount(int64_t value);

  constexpr void __cordl_internal_set_mainBlockPos(int32_t value);

  constexpr void __cordl_internal_set_mainCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  /// @brief Method .ctor, addr 0x2377a84, size 0x3d0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher);

  /// @brief Method get_AlgorithmName, addr 0x2377e5c, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadBlockCipher() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcbBlockCipher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcbBlockCipher(OcbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcbBlockCipher(OcbBlockCipher const&) = delete;

  /// @brief Field hashCipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___hashCipher;

  /// @brief Field mainCipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___mainCipher;

  /// @brief Field forEncryption, offset: 0x20, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field macSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field initialAssociatedText, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___initialAssociatedText;

  /// @brief Field L, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IList* ___L;

  /// @brief Field L_Asterisk, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___L_Asterisk;

  /// @brief Field L_Dollar, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___L_Dollar;

  /// @brief Field KtopInput, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___KtopInput;

  /// @brief Field Stretch, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Stretch;

  /// @brief Field OffsetMAIN_0, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___OffsetMAIN_0;

  /// @brief Field hashBlock, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___hashBlock;

  /// @brief Field mainBlock, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mainBlock;

  /// @brief Field hashBlockPos, offset: 0x70, size: 0x4, def value: None
  int32_t ___hashBlockPos;

  /// @brief Field mainBlockPos, offset: 0x74, size: 0x4, def value: None
  int32_t ___mainBlockPos;

  /// @brief Field hashBlockCount, offset: 0x78, size: 0x8, def value: None
  int64_t ___hashBlockCount;

  /// @brief Field mainBlockCount, offset: 0x80, size: 0x8, def value: None
  int64_t ___mainBlockCount;

  /// @brief Field OffsetHASH, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___OffsetHASH;

  /// @brief Field Sum, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Sum;

  /// @brief Field OffsetMAIN, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___OffsetMAIN;

  /// @brief Field Checksum, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Checksum;

  /// @brief Field macBlock, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macBlock;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, 0xb0>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___hashCipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___mainCipher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___forEncryption) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___macSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___initialAssociatedText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___L) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___L_Asterisk) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___L_Dollar) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___KtopInput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___Stretch) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___OffsetMAIN_0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___hashBlock) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___mainBlock) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___hashBlockPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___mainBlockPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___hashBlockCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___mainBlockCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___OffsetHASH) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___Sum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___OffsetMAIN) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___Checksum) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, ___macBlock) == 0xa8, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher");
