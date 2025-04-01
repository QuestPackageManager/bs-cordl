#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Dstu7624Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7624Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.Dstu7624Engine
class CORDL_TYPE Dstu7624Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field S0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S0, put = setStaticF_S0)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S0;

  /// @brief Field S1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S1, put = setStaticF_S1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S1;

  /// @brief Field S2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S2, put = setStaticF_S2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S2;

  /// @brief Field S3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S3, put = setStaticF_S3)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S3;

  /// @brief Field T0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T0, put = setStaticF_T0)) ::ArrayW<uint8_t, ::Array<uint8_t>*> T0;

  /// @brief Field T1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T1, put = setStaticF_T1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> T1;

  /// @brief Field T2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T2, put = setStaticF_T2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> T2;

  /// @brief Field T3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T3, put = setStaticF_T3)) ::ArrayW<uint8_t, ::Array<uint8_t>*> T3;

  /// @brief Field forEncryption, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field internalState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internalState, put = __cordl_internal_set_internalState)) ::ArrayW<uint64_t, ::Array<uint64_t>*> internalState;

  /// @brief Field roundKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roundKeys, put = __cordl_internal_set_roundKeys)) ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*>
      roundKeys;

  /// @brief Field roundsAmount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_roundsAmount, put = __cordl_internal_set_roundsAmount)) int32_t roundsAmount;

  /// @brief Field wordsInBlock, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_wordsInBlock, put = __cordl_internal_set_wordsInBlock)) int32_t wordsInBlock;

  /// @brief Field wordsInKey, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_wordsInKey, put = __cordl_internal_set_wordsInKey)) int32_t wordsInKey;

  /// @brief Field workingKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<uint64_t, ::Array<uint64_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method AddRoundKey, addr 0x23560f4, size 0x88, virtual false, abstract: false, final false
  inline void AddRoundKey(int32_t round);

  /// @brief Method DecryptBlock_128, addr 0x2356204, size 0x360, virtual false, abstract: false, final false
  inline void DecryptBlock_128(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DecryptionRound, addr 0x23565ec, size 0x20, virtual false, abstract: false, final false
  inline void DecryptionRound();

  /// @brief Method EncryptBlock_128, addr 0x2355d94, size 0x360, virtual false, abstract: false, final false
  inline void EncryptBlock_128(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method EncryptionRound, addr 0x2355924, size 0x20, virtual false, abstract: false, final false
  inline void EncryptionRound();

  /// @brief Method GetBlockSize, addr 0x2357228, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x2354ecc, size 0x2e4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InvShiftRows, addr 0x2356b8c, size 0x250, virtual false, abstract: false, final false
  inline void InvShiftRows();

  /// @brief Method InvSubBytes, addr 0x2356ddc, size 0x1b8, virtual false, abstract: false, final false
  inline void InvSubBytes();

  /// @brief Method MixColumn, addr 0x23570e4, size 0xb0, virtual false, abstract: false, final false
  static inline uint64_t MixColumn(uint64_t c);

  /// @brief Method MixColumnInv, addr 0x2356f94, size 0x150, virtual false, abstract: false, final false
  static inline uint64_t MixColumnInv(uint64_t c);

  /// @brief Method MixColumns, addr 0x2356a14, size 0xbc, virtual false, abstract: false, final false
  inline void MixColumns();

  /// @brief Method MixColumnsInv, addr 0x2356ad0, size 0xbc, virtual false, abstract: false, final false
  inline void MixColumnsInv();

  /// @brief Method MulX, addr 0x2357194, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t MulX(uint64_t n);

  /// @brief Method MulX2, addr 0x23571bc, size 0x2c, virtual false, abstract: false, final false
  static inline uint64_t MulX2(uint64_t n);

  static inline ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* New_ctor(int32_t blockSizeBits);

  /// @brief Method ProcessBlock, addr 0x2355b4c, size 0x248, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x235723c, size 0x24, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Rotate, addr 0x23571b4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t Rotate(int32_t n, uint64_t x);

  /// @brief Method RotateLeft, addr 0x2355944, size 0x208, virtual false, abstract: false, final false
  inline void RotateLeft(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ShiftRows, addr 0x23567c4, size 0x250, virtual false, abstract: false, final false
  inline void ShiftRows();

  /// @brief Method SubBytes, addr 0x235660c, size 0x1b8, virtual false, abstract: false, final false
  inline void SubBytes();

  /// @brief Method SubRoundKey, addr 0x2356564, size 0x88, virtual false, abstract: false, final false
  inline void SubRoundKey(int32_t round);

  /// @brief Method WorkingKeyExpandEven, addr 0x2355420, size 0x490, virtual false, abstract: false, final false
  inline void WorkingKeyExpandEven(::ArrayW<uint64_t, ::Array<uint64_t>*> workingKey, ::ArrayW<uint64_t, ::Array<uint64_t>*> tempKey);

  /// @brief Method WorkingKeyExpandKT, addr 0x23551b0, size 0x270, virtual false, abstract: false, final false
  inline void WorkingKeyExpandKT(::ArrayW<uint64_t, ::Array<uint64_t>*> workingKey, ::ArrayW<uint64_t, ::Array<uint64_t>*> tempKeys);

  /// @brief Method WorkingKeyExpandOdd, addr 0x23558b0, size 0x74, virtual false, abstract: false, final false
  inline void WorkingKeyExpandOdd();

  /// @brief Method XorRoundKey, addr 0x235617c, size 0x88, virtual false, abstract: false, final false
  inline void XorRoundKey(int32_t round);

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_internalState() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_internalState();

  constexpr ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> const& __cordl_internal_get_roundKeys() const;

  constexpr ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*>& __cordl_internal_get_roundKeys();

  constexpr int32_t const& __cordl_internal_get_roundsAmount() const;

  constexpr int32_t& __cordl_internal_get_roundsAmount();

  constexpr int32_t const& __cordl_internal_get_wordsInBlock() const;

  constexpr int32_t& __cordl_internal_get_wordsInBlock();

  constexpr int32_t const& __cordl_internal_get_wordsInKey() const;

  constexpr int32_t& __cordl_internal_get_wordsInKey();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_internalState(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set_roundKeys(::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> value);

  constexpr void __cordl_internal_set_roundsAmount(int32_t value);

  constexpr void __cordl_internal_set_wordsInBlock(int32_t value);

  constexpr void __cordl_internal_set_wordsInKey(int32_t value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x2354e08, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S0();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S2();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S3();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_T0();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_T1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_T2();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_T3();

  /// @brief Method get_AlgorithmName, addr 0x23571e8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x2357234, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_S0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_S1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_S2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_S3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_T0(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_T1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_T2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_T3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7624Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7624Engine(Dstu7624Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7624Engine(Dstu7624Engine const&) = delete;

  /// @brief Field ROUNDS_128 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_128{ static_cast<int32_t>(0xa) };

  /// @brief Field ROUNDS_256 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_256{ static_cast<int32_t>(0xe) };

  /// @brief Field ROUNDS_512 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_512{ static_cast<int32_t>(0x12) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 842 };

  /// @brief Field mdsInvMatrix offset 0xffffffff size 0x8
  static constexpr uint64_t mdsInvMatrix{ static_cast<uint64_t>(0xcad7492fa87695adu) };

  /// @brief Field mdsMatrix offset 0xffffffff size 0x8
  static constexpr uint64_t mdsMatrix{ static_cast<uint64_t>(0x407060801050101u) };

  /// @brief Field internalState, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___internalState;

  /// @brief Field workingKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___workingKey;

  /// @brief Field roundKeys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> ___roundKeys;

  /// @brief Field wordsInBlock, offset: 0x28, size: 0x4, def value: None
  int32_t ___wordsInBlock;

  /// @brief Field wordsInKey, offset: 0x2c, size: 0x4, def value: None
  int32_t ___wordsInKey;

  /// @brief Field roundsAmount, offset: 0x30, size: 0x4, def value: None
  int32_t ___roundsAmount;

  /// @brief Field forEncryption, offset: 0x34, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___internalState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___workingKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___roundKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___wordsInBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___wordsInKey) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___roundsAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, ___forEncryption) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*, "Org.BouncyCastle.Crypto.Engines", "Dstu7624Engine");
