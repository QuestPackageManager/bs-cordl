#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcbBlockCipher)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OcbBlockCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher);
// Type: Org.BouncyCastle.Crypto.Modes::OcbBlockCipher
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(974))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::OcbBlockCipher*
class CORDL_TYPE OcbBlockCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashCipher, offset 0x10, size 0x8
  __declspec(property(get = __get_hashCipher, put = __set_hashCipher))::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher;

  /// @brief Field mainCipher, offset 0x18, size 0x8
  __declspec(property(get = __get_mainCipher, put = __set_mainCipher))::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher;

  /// @brief Field forEncryption, offset 0x20, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field macSize, offset 0x24, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field initialAssociatedText, offset 0x28, size 0x8
  __declspec(property(get = __get_initialAssociatedText, put = __set_initialAssociatedText))::ArrayW<uint8_t, ::Array<uint8_t>*> initialAssociatedText;

  /// @brief Field L, offset 0x30, size 0x8
  __declspec(property(get = __get_L, put = __set_L))::System::Collections::IList* L;

  /// @brief Field L_Asterisk, offset 0x38, size 0x8
  __declspec(property(get = __get_L_Asterisk, put = __set_L_Asterisk))::ArrayW<uint8_t, ::Array<uint8_t>*> L_Asterisk;

  /// @brief Field L_Dollar, offset 0x40, size 0x8
  __declspec(property(get = __get_L_Dollar, put = __set_L_Dollar))::ArrayW<uint8_t, ::Array<uint8_t>*> L_Dollar;

  /// @brief Field KtopInput, offset 0x48, size 0x8
  __declspec(property(get = __get_KtopInput, put = __set_KtopInput))::ArrayW<uint8_t, ::Array<uint8_t>*> KtopInput;

  /// @brief Field Stretch, offset 0x50, size 0x8
  __declspec(property(get = __get_Stretch, put = __set_Stretch))::ArrayW<uint8_t, ::Array<uint8_t>*> Stretch;

  /// @brief Field OffsetMAIN_0, offset 0x58, size 0x8
  __declspec(property(get = __get_OffsetMAIN_0, put = __set_OffsetMAIN_0))::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetMAIN_0;

  /// @brief Field hashBlock, offset 0x60, size 0x8
  __declspec(property(get = __get_hashBlock, put = __set_hashBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> hashBlock;

  /// @brief Field mainBlock, offset 0x68, size 0x8
  __declspec(property(get = __get_mainBlock, put = __set_mainBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> mainBlock;

  /// @brief Field hashBlockPos, offset 0x70, size 0x4
  __declspec(property(get = __get_hashBlockPos, put = __set_hashBlockPos)) int32_t hashBlockPos;

  /// @brief Field mainBlockPos, offset 0x74, size 0x4
  __declspec(property(get = __get_mainBlockPos, put = __set_mainBlockPos)) int32_t mainBlockPos;

  /// @brief Field hashBlockCount, offset 0x78, size 0x8
  __declspec(property(get = __get_hashBlockCount, put = __set_hashBlockCount)) int64_t hashBlockCount;

  /// @brief Field mainBlockCount, offset 0x80, size 0x8
  __declspec(property(get = __get_mainBlockCount, put = __set_mainBlockCount)) int64_t mainBlockCount;

  /// @brief Field OffsetHASH, offset 0x88, size 0x8
  __declspec(property(get = __get_OffsetHASH, put = __set_OffsetHASH))::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetHASH;

  /// @brief Field Sum, offset 0x90, size 0x8
  __declspec(property(get = __get_Sum, put = __set_Sum))::ArrayW<uint8_t, ::Array<uint8_t>*> Sum;

  /// @brief Field OffsetMAIN, offset 0x98, size 0x8
  __declspec(property(get = __get_OffsetMAIN, put = __set_OffsetMAIN))::ArrayW<uint8_t, ::Array<uint8_t>*> OffsetMAIN;

  /// @brief Field Checksum, offset 0xa0, size 0x8
  __declspec(property(get = __get_Checksum, put = __set_Checksum))::ArrayW<uint8_t, ::Array<uint8_t>*> Checksum;

  /// @brief Field macBlock, offset 0xa8, size 0x8
  __declspec(property(get = __get_macBlock, put = __set_macBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> macBlock;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_hashCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_hashCipher() const;

  constexpr void __set_hashCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_mainCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_mainCipher() const;

  constexpr void __set_mainCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_initialAssociatedText();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_initialAssociatedText() const;

  constexpr void __set_initialAssociatedText(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Collections::IList*& __get_L();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_L() const;

  constexpr void __set_L(::System::Collections::IList* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_L_Asterisk();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_L_Asterisk() const;

  constexpr void __set_L_Asterisk(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_L_Dollar();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_L_Dollar() const;

  constexpr void __set_L_Dollar(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_KtopInput();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_KtopInput() const;

  constexpr void __set_KtopInput(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Stretch();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Stretch() const;

  constexpr void __set_Stretch(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_OffsetMAIN_0();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_OffsetMAIN_0() const;

  constexpr void __set_OffsetMAIN_0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_hashBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_hashBlock() const;

  constexpr void __set_hashBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mainBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mainBlock() const;

  constexpr void __set_mainBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_hashBlockPos();

  constexpr int32_t const& __get_hashBlockPos() const;

  constexpr void __set_hashBlockPos(int32_t value);

  constexpr int32_t& __get_mainBlockPos();

  constexpr int32_t const& __get_mainBlockPos() const;

  constexpr void __set_mainBlockPos(int32_t value);

  constexpr int64_t& __get_hashBlockCount();

  constexpr int64_t const& __get_hashBlockCount() const;

  constexpr void __set_hashBlockCount(int64_t value);

  constexpr int64_t& __get_mainBlockCount();

  constexpr int64_t const& __get_mainBlockCount() const;

  constexpr void __set_mainBlockCount(int64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_OffsetHASH();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_OffsetHASH() const;

  constexpr void __set_OffsetHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Sum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Sum() const;

  constexpr void __set_Sum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_OffsetMAIN();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_OffsetMAIN() const;

  constexpr void __set_OffsetMAIN(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Checksum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Checksum() const;

  constexpr void __set_Checksum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macBlock() const;

  constexpr void __set_macBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Modes::OcbBlockCipher* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher);

  /// @brief Method .ctor addr 0xeaef78 size 0x3e4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher, ::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher);

  /// @brief Method GetUnderlyingCipher addr 0xeaf35c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher();

  /// @brief Method get_AlgorithmName addr 0xeaf364 size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xeaf424 size 0x6dc virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessNonce addr 0xeafb98 size 0x238 virtual true final false
  inline int32_t ProcessNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> N);

  /// @brief Method GetBlockSize addr 0xeafdd0 size 0x8 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method GetMac addr 0xeafdd8 size 0x88 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize addr 0xeafe60 size 0x28 virtual true final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUpdateOutputSize addr 0xeafe88 size 0x38 virtual true final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method ProcessAadByte addr 0xeafec0 size 0x68 virtual true final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes addr 0xeaff28 size 0xb4 virtual true final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t off, int32_t len);

  /// @brief Method ProcessByte addr 0xeaffdc size 0x7c virtual true final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessBytes addr 0xeb0058 size 0xe0 virtual true final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal addr 0xeb0138 size 0x40c virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xeb05fc size 0x14 virtual true final false
  inline void Reset();

  /// @brief Method Clear addr 0xeb0610 size 0x1c virtual true final false
  inline void Clear(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method GetLSub addr 0xeb062c size 0x2cc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetLSub(int32_t n);

  /// @brief Method ProcessHashBlock addr 0xeb08f8 size 0x70 virtual true final false
  inline void ProcessHashBlock();

  /// @brief Method ProcessMainBlock addr 0xeb099c size 0x1d0 virtual true final false
  inline void ProcessMainBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xeb0b6c size 0x1ec virtual true final false
  inline void Reset(bool clearMac);

  /// @brief Method UpdateHASH addr 0xeb0d58 size 0xe0 virtual true final false
  inline void UpdateHASH(::ArrayW<uint8_t, ::Array<uint8_t>*> LSub);

  /// @brief Method OCB_double addr 0xeafb00 size 0x98 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> OCB_double(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method OCB_extend addr 0xeb0544 size 0x60 virtual false final false
  static inline void OCB_extend(::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t pos);

  /// @brief Method OCB_ntz addr 0xeb0968 size 0x34 virtual false final false
  static inline int32_t OCB_ntz(int64_t x);

  /// @brief Method ShiftLeft addr 0xeb0e38 size 0x60 virtual false final false
  static inline int32_t ShiftLeft(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Xor addr 0xeb05a4 size 0x58 virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  // Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcbBlockCipher(OcbBlockCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcbBlockCipher(OcbBlockCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcbBlockCipher();

public:
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
