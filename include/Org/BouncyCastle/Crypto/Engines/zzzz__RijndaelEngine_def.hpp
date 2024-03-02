#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RijndaelEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RijndaelEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RijndaelEngine
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RijndaelEngine*
class CORDL_TYPE RijndaelEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field A0, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_A0, put = __cordl_internal_set_A0)) int64_t A0;

  /// @brief Field A1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_A1, put = __cordl_internal_set_A1)) int64_t A1;

  /// @brief Field A2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_A2, put = __cordl_internal_set_A2)) int64_t A2;

  /// @brief Field A3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_A3, put = __cordl_internal_set_A3)) int64_t A3;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field Alogtable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Alogtable, put = setStaticF_Alogtable))::ArrayW<uint8_t, ::Array<uint8_t>*> Alogtable;

  /// @brief Field BC, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_BC, put = __cordl_internal_set_BC)) int32_t BC;

  /// @brief Field BC_MASK, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BC_MASK, put = __cordl_internal_set_BC_MASK)) int64_t BC_MASK;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field Logtable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Logtable, put = setStaticF_Logtable))::ArrayW<uint8_t, ::Array<uint8_t>*> Logtable;

  /// @brief Field MAXKC, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAXKC, put = setStaticF_MAXKC)) int32_t MAXKC;

  /// @brief Field MAXROUNDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAXROUNDS, put = setStaticF_MAXROUNDS)) int32_t MAXROUNDS;

  /// @brief Field ROUNDS, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_ROUNDS, put = __cordl_internal_set_ROUNDS)) int32_t ROUNDS;

  /// @brief Field S, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S, put = setStaticF_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field Si, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Si, put = setStaticF_Si))::ArrayW<uint8_t, ::Array<uint8_t>*> Si;

  /// @brief Field blockBits, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_blockBits, put = __cordl_internal_set_blockBits)) int32_t blockBits;

  /// @brief Field forEncryption, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field rcon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rcon, put = setStaticF_rcon))::ArrayW<uint8_t, ::Array<uint8_t>*> rcon;

  /// @brief Field shifts0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shifts0, put = setStaticF_shifts0))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> shifts0;

  /// @brief Field shifts0SC, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_shifts0SC, put = __cordl_internal_set_shifts0SC))::ArrayW<uint8_t, ::Array<uint8_t>*> shifts0SC;

  /// @brief Field shifts1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shifts1, put = setStaticF_shifts1))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> shifts1;

  /// @brief Field shifts1SC, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_shifts1SC, put = __cordl_internal_set_shifts1SC))::ArrayW<uint8_t, ::Array<uint8_t>*> shifts1SC;

  /// @brief Field workingKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey,
                      put = __cordl_internal_set_workingKey))::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method ApplyS, addr 0xf4fb14, size 0x68, virtual false, abstract: false, final false
  inline int64_t ApplyS(int64_t r, ::ArrayW<uint8_t, ::Array<uint8_t>*> box);

  /// @brief Method DecryptBlock, addr 0xf51048, size 0x12c, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> rk);

  /// @brief Method EncryptBlock, addr 0xf50f4c, size 0xfc, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> rk);

  /// @brief Method GenerateWorkingKey, addr 0xf50084, size 0x7a0, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method GetBlockSize, addr 0xf50cc0, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xf50ae0, size 0x198, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InvMixColumn, addr 0xf4fd6c, size 0x318, virtual false, abstract: false, final false
  inline void InvMixColumn();

  /// @brief Method KeyAddition, addr 0xf4f9b0, size 0x78, virtual false, abstract: false, final false
  inline void KeyAddition(::ArrayW<int64_t, ::Array<int64_t>*> rk);

  /// @brief Method MixColumn, addr 0xf4fbe8, size 0x184, virtual false, abstract: false, final false
  inline void MixColumn();

  /// @brief Method Mul0x2, addr 0xf4f630, size 0xa8, virtual false, abstract: false, final false
  inline uint8_t Mul0x2(int32_t b);

  /// @brief Method Mul0x3, addr 0xf4f6d8, size 0xa8, virtual false, abstract: false, final false
  inline uint8_t Mul0x3(int32_t b);

  /// @brief Method Mul0x9, addr 0xf4f780, size 0x8c, virtual false, abstract: false, final false
  inline uint8_t Mul0x9(int32_t b);

  /// @brief Method Mul0xb, addr 0xf4f80c, size 0x8c, virtual false, abstract: false, final false
  inline uint8_t Mul0xb(int32_t b);

  /// @brief Method Mul0xd, addr 0xf4f898, size 0x8c, virtual false, abstract: false, final false
  inline uint8_t Mul0xd(int32_t b);

  /// @brief Method Mul0xe, addr 0xf4f924, size 0x8c, virtual false, abstract: false, final false
  inline uint8_t Mul0xe(int32_t b);

  static inline ::Org::BouncyCastle::Crypto::Engines::RijndaelEngine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::RijndaelEngine* New_ctor(int32_t blockBits);

  /// @brief Method PackBlock, addr 0xf51174, size 0xc0, virtual false, abstract: false, final false
  inline void PackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method ProcessBlock, addr 0xf50cd4, size 0x15c, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf51234, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Shift, addr 0xf4fa28, size 0x2c, virtual false, abstract: false, final false
  inline int64_t Shift(int64_t r, int32_t shift);

  /// @brief Method ShiftRow, addr 0xf4fa54, size 0xc0, virtual false, abstract: false, final false
  inline void ShiftRow(::ArrayW<uint8_t, ::Array<uint8_t>*> shiftsSC);

  /// @brief Method Substitution, addr 0xf4fb7c, size 0x6c, virtual false, abstract: false, final false
  inline void Substitution(::ArrayW<uint8_t, ::Array<uint8_t>*> box);

  /// @brief Method UnPackBlock, addr 0xf50e30, size 0x11c, virtual false, abstract: false, final false
  inline void UnPackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  constexpr int64_t const& __cordl_internal_get_A0() const;

  constexpr int64_t& __cordl_internal_get_A0();

  constexpr int64_t const& __cordl_internal_get_A1() const;

  constexpr int64_t& __cordl_internal_get_A1();

  constexpr int64_t const& __cordl_internal_get_A2() const;

  constexpr int64_t& __cordl_internal_get_A2();

  constexpr int64_t const& __cordl_internal_get_A3() const;

  constexpr int64_t& __cordl_internal_get_A3();

  constexpr int32_t const& __cordl_internal_get_BC() const;

  constexpr int32_t& __cordl_internal_get_BC();

  constexpr int64_t const& __cordl_internal_get_BC_MASK() const;

  constexpr int64_t& __cordl_internal_get_BC_MASK();

  constexpr int32_t const& __cordl_internal_get_ROUNDS() const;

  constexpr int32_t& __cordl_internal_get_ROUNDS();

  constexpr int32_t const& __cordl_internal_get_blockBits() const;

  constexpr int32_t& __cordl_internal_get_blockBits();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_shifts0SC() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_shifts0SC();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_shifts1SC() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_shifts1SC();

  constexpr ::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_A0(int64_t value);

  constexpr void __cordl_internal_set_A1(int64_t value);

  constexpr void __cordl_internal_set_A2(int64_t value);

  constexpr void __cordl_internal_set_A3(int64_t value);

  constexpr void __cordl_internal_set_BC(int32_t value);

  constexpr void __cordl_internal_set_BC_MASK(int64_t value);

  constexpr void __cordl_internal_set_ROUNDS(int32_t value);

  constexpr void __cordl_internal_set_blockBits(int32_t value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_shifts0SC(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_shifts1SC(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> value);

  /// @brief Method .ctor, addr 0xf50824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0xf5082c, size 0x2b4, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockBits);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Alogtable();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Logtable();

  static inline int32_t getStaticF_MAXKC();

  static inline int32_t getStaticF_MAXROUNDS();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Si();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_rcon();

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_shifts0();

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_shifts1();

  /// @brief Method get_AlgorithmName, addr 0xf50c78, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf50cb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_Alogtable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_Logtable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_MAXKC(int32_t value);

  static inline void setStaticF_MAXROUNDS(int32_t value);

  static inline void setStaticF_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_Si(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_rcon(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_shifts0(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline void setStaticF_shifts1(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RijndaelEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RijndaelEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RijndaelEngine(RijndaelEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RijndaelEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RijndaelEngine(RijndaelEngine const&) = delete;

  /// @brief Field BC, offset: 0x10, size: 0x4, def value: None
  int32_t ___BC;

  /// @brief Field BC_MASK, offset: 0x18, size: 0x8, def value: None
  int64_t ___BC_MASK;

  /// @brief Field ROUNDS, offset: 0x20, size: 0x4, def value: None
  int32_t ___ROUNDS;

  /// @brief Field blockBits, offset: 0x24, size: 0x4, def value: None
  int32_t ___blockBits;

  /// @brief Field workingKey, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int64_t, ::Array<int64_t>*>, ::Array<::ArrayW<int64_t, ::Array<int64_t>*>>*> ___workingKey;

  /// @brief Field A0, offset: 0x30, size: 0x8, def value: None
  int64_t ___A0;

  /// @brief Field A1, offset: 0x38, size: 0x8, def value: None
  int64_t ___A1;

  /// @brief Field A2, offset: 0x40, size: 0x8, def value: None
  int64_t ___A2;

  /// @brief Field A3, offset: 0x48, size: 0x8, def value: None
  int64_t ___A3;

  /// @brief Field forEncryption, offset: 0x50, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field shifts0SC, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___shifts0SC;

  /// @brief Field shifts1SC, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___shifts1SC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___BC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___BC_MASK) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___ROUNDS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___blockBits) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___workingKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___A0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___A1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___A2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___A3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___forEncryption) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___shifts0SC) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, ___shifts1SC) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine*, "Org.BouncyCastle.Crypto.Engines", "RijndaelEngine");
