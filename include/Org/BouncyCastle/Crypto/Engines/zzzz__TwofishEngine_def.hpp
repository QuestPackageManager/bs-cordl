#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/TwofishEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TwofishEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TwofishEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::TwofishEngine);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.TwofishEngine
class CORDL_TYPE TwofishEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field P, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_P, put = setStaticF_P)) ::System::Object* P;

  /// @brief Field encrypting, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypting, put = __cordl_internal_set_encrypting)) bool encrypting;

  /// @brief Field gMDS0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gMDS0, put = __cordl_internal_set_gMDS0)) ::ArrayW<int32_t, ::Array<int32_t>*> gMDS0;

  /// @brief Field gMDS1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gMDS1, put = __cordl_internal_set_gMDS1)) ::ArrayW<int32_t, ::Array<int32_t>*> gMDS1;

  /// @brief Field gMDS2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gMDS2, put = __cordl_internal_set_gMDS2)) ::ArrayW<int32_t, ::Array<int32_t>*> gMDS2;

  /// @brief Field gMDS3, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gMDS3, put = __cordl_internal_set_gMDS3)) ::ArrayW<int32_t, ::Array<int32_t>*> gMDS3;

  /// @brief Field gSBox, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_gSBox, put = __cordl_internal_set_gSBox)) ::ArrayW<int32_t, ::Array<int32_t>*> gSBox;

  /// @brief Field gSubKeys, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gSubKeys, put = __cordl_internal_set_gSubKeys)) ::ArrayW<int32_t, ::Array<int32_t>*> gSubKeys;

  /// @brief Field k64Cnt, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_k64Cnt, put = __cordl_internal_set_k64Cnt)) int32_t k64Cnt;

  /// @brief Field workingKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method Bits32ToBytes, addr 0x32d6ac8, size 0x80, virtual false, abstract: false, final false
  inline void Bits32ToBytes(int32_t inData, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t offset);

  /// @brief Method BytesTo32Bits, addr 0x32d6404, size 0x70, virtual false, abstract: false, final false
  inline int32_t BytesTo32Bits(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t p);

  /// @brief Method DecryptBlock, addr 0x32d6180, size 0x26c, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method EncryptBlock, addr 0x32d5f10, size 0x270, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method F32, addr 0x32d6514, size 0x474, virtual false, abstract: false, final false
  inline int32_t F32(int32_t x, ::ArrayW<int32_t, ::Array<int32_t>*> k32);

  /// @brief Method Fe32_0, addr 0x32d69a8, size 0x8c, virtual false, abstract: false, final false
  inline int32_t Fe32_0(int32_t x);

  /// @brief Method Fe32_3, addr 0x32d6a34, size 0x94, virtual false, abstract: false, final false
  inline int32_t Fe32_3(int32_t x);

  /// @brief Method GetBlockSize, addr 0x32d63fc, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x32d549c, size 0x164, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method LFSR1, addr 0x32d6b88, size 0x14, virtual false, abstract: false, final false
  inline int32_t LFSR1(int32_t x);

  /// @brief Method LFSR2, addr 0x32d6b9c, size 0x24, virtual false, abstract: false, final false
  inline int32_t LFSR2(int32_t x);

  /// @brief Method M_b0, addr 0x32d6988, size 0x8, virtual false, abstract: false, final false
  inline int32_t M_b0(int32_t x);

  /// @brief Method M_b1, addr 0x32d6990, size 0x8, virtual false, abstract: false, final false
  inline int32_t M_b1(int32_t x);

  /// @brief Method M_b2, addr 0x32d6998, size 0x8, virtual false, abstract: false, final false
  inline int32_t M_b2(int32_t x);

  /// @brief Method M_b3, addr 0x32d69a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t M_b3(int32_t x);

  /// @brief Method Mx_X, addr 0x32d543c, size 0x28, virtual false, abstract: false, final false
  inline int32_t Mx_X(int32_t x);

  /// @brief Method Mx_Y, addr 0x32d5464, size 0x38, virtual false, abstract: false, final false
  inline int32_t Mx_Y(int32_t x);

  static inline ::Org::BouncyCastle::Crypto::Engines::TwofishEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x32d5dd4, size 0x13c, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method RS_MDS_Encode, addr 0x32d6474, size 0xa0, virtual false, abstract: false, final false
  inline int32_t RS_MDS_Encode(int32_t k0, int32_t k1);

  /// @brief Method RS_rem, addr 0x32d6b48, size 0x40, virtual false, abstract: false, final false
  inline int32_t RS_rem(int32_t x);

  /// @brief Method Reset, addr 0x32d63ec, size 0x10, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method SetKey, addr 0x32d5600, size 0x788, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  constexpr bool const& __cordl_internal_get_encrypting() const;

  constexpr bool& __cordl_internal_get_encrypting();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gMDS0() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gMDS0();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gMDS1() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gMDS1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gMDS2() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gMDS2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gMDS3() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gMDS3();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gSBox() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gSBox();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_gSubKeys() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_gSubKeys();

  constexpr int32_t const& __cordl_internal_get_k64Cnt() const;

  constexpr int32_t& __cordl_internal_get_k64Cnt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_encrypting(bool value);

  constexpr void __cordl_internal_set_gMDS0(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_gMDS1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_gMDS2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_gMDS3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_gSBox(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_gSubKeys(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_k64Cnt(int32_t value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x32d5134, size 0x308, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Object* getStaticF_P();

  /// @brief Method get_AlgorithmName, addr 0x32d5d88, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x32d5dcc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_P(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwofishEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwofishEngine(TwofishEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwofishEngine(TwofishEngine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  /// @brief Field GF256_FDBK offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK{ static_cast<int32_t>(0x169) };

  /// @brief Field GF256_FDBK_2 offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK_2{ static_cast<int32_t>(0xb4) };

  /// @brief Field GF256_FDBK_4 offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK_4{ static_cast<int32_t>(0x5a) };

  /// @brief Field INPUT_WHITEN offset 0xffffffff size 0x4
  static constexpr int32_t INPUT_WHITEN{ static_cast<int32_t>(0x0) };

  /// @brief Field MAX_KEY_BITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_KEY_BITS{ static_cast<int32_t>(0x100) };

  /// @brief Field MAX_ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field OUTPUT_WHITEN offset 0xffffffff size 0x4
  static constexpr int32_t OUTPUT_WHITEN{ static_cast<int32_t>(0x4) };

  /// @brief Field P_00 offset 0xffffffff size 0x4
  static constexpr int32_t P_00{ static_cast<int32_t>(0x1) };

  /// @brief Field P_01 offset 0xffffffff size 0x4
  static constexpr int32_t P_01{ static_cast<int32_t>(0x0) };

  /// @brief Field P_02 offset 0xffffffff size 0x4
  static constexpr int32_t P_02{ static_cast<int32_t>(0x0) };

  /// @brief Field P_03 offset 0xffffffff size 0x4
  static constexpr int32_t P_03{ static_cast<int32_t>(0x1) };

  /// @brief Field P_04 offset 0xffffffff size 0x4
  static constexpr int32_t P_04{ static_cast<int32_t>(0x1) };

  /// @brief Field P_10 offset 0xffffffff size 0x4
  static constexpr int32_t P_10{ static_cast<int32_t>(0x0) };

  /// @brief Field P_11 offset 0xffffffff size 0x4
  static constexpr int32_t P_11{ static_cast<int32_t>(0x0) };

  /// @brief Field P_12 offset 0xffffffff size 0x4
  static constexpr int32_t P_12{ static_cast<int32_t>(0x1) };

  /// @brief Field P_13 offset 0xffffffff size 0x4
  static constexpr int32_t P_13{ static_cast<int32_t>(0x1) };

  /// @brief Field P_14 offset 0xffffffff size 0x4
  static constexpr int32_t P_14{ static_cast<int32_t>(0x0) };

  /// @brief Field P_20 offset 0xffffffff size 0x4
  static constexpr int32_t P_20{ static_cast<int32_t>(0x1) };

  /// @brief Field P_21 offset 0xffffffff size 0x4
  static constexpr int32_t P_21{ static_cast<int32_t>(0x1) };

  /// @brief Field P_22 offset 0xffffffff size 0x4
  static constexpr int32_t P_22{ static_cast<int32_t>(0x0) };

  /// @brief Field P_23 offset 0xffffffff size 0x4
  static constexpr int32_t P_23{ static_cast<int32_t>(0x0) };

  /// @brief Field P_24 offset 0xffffffff size 0x4
  static constexpr int32_t P_24{ static_cast<int32_t>(0x0) };

  /// @brief Field P_30 offset 0xffffffff size 0x4
  static constexpr int32_t P_30{ static_cast<int32_t>(0x0) };

  /// @brief Field P_31 offset 0xffffffff size 0x4
  static constexpr int32_t P_31{ static_cast<int32_t>(0x1) };

  /// @brief Field P_32 offset 0xffffffff size 0x4
  static constexpr int32_t P_32{ static_cast<int32_t>(0x1) };

  /// @brief Field P_33 offset 0xffffffff size 0x4
  static constexpr int32_t P_33{ static_cast<int32_t>(0x0) };

  /// @brief Field P_34 offset 0xffffffff size 0x4
  static constexpr int32_t P_34{ static_cast<int32_t>(0x1) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field ROUND_SUBKEYS offset 0xffffffff size 0x4
  static constexpr int32_t ROUND_SUBKEYS{ static_cast<int32_t>(0x8) };

  /// @brief Field RS_GF_FDBK offset 0xffffffff size 0x4
  static constexpr int32_t RS_GF_FDBK{ static_cast<int32_t>(0x14d) };

  /// @brief Field SK_BUMP offset 0xffffffff size 0x4
  static constexpr int32_t SK_BUMP{ static_cast<int32_t>(0x1010101) };

  /// @brief Field SK_ROTL offset 0xffffffff size 0x4
  static constexpr int32_t SK_ROTL{ static_cast<int32_t>(0x9) };

  /// @brief Field SK_STEP offset 0xffffffff size 0x4
  static constexpr int32_t SK_STEP{ static_cast<int32_t>(0x2020202) };

  /// @brief Field TOTAL_SUBKEYS offset 0xffffffff size 0x4
  static constexpr int32_t TOTAL_SUBKEYS{ static_cast<int32_t>(0x28) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 881 };

  /// @brief Field encrypting, offset: 0x10, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field gMDS0, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS0;

  /// @brief Field gMDS1, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS1;

  /// @brief Field gMDS2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS2;

  /// @brief Field gMDS3, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS3;

  /// @brief Field gSubKeys, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gSubKeys;

  /// @brief Field gSBox, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gSBox;

  /// @brief Field k64Cnt, offset: 0x48, size: 0x4, def value: None
  int32_t ___k64Cnt;

  /// @brief Field workingKey, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___encrypting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gMDS0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gMDS1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gMDS2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gMDS3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gSubKeys) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___gSBox) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___k64Cnt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TwofishEngine, ___workingKey) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::TwofishEngine, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TwofishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TwofishEngine*, "Org.BouncyCastle.Crypto.Engines", "TwofishEngine");
