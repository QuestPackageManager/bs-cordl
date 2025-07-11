#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/AesEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class AesEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::AesEngine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.AesEngine
class CORDL_TYPE AesEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field C0, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_C0, put = __cordl_internal_set_C0)) uint32_t C0;

  /// @brief Field C1, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_C1, put = __cordl_internal_set_C1)) uint32_t C1;

  /// @brief Field C2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_C2, put = __cordl_internal_set_C2)) uint32_t C2;

  /// @brief Field C3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_C3, put = __cordl_internal_set_C3)) uint32_t C3;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field ROUNDS, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ROUNDS, put = __cordl_internal_set_ROUNDS)) int32_t ROUNDS;

  /// @brief Field S, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S, put = setStaticF_S)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field Si, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Si, put = setStaticF_Si)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Si;

  /// @brief Field T0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T0, put = setStaticF_T0)) ::ArrayW<uint32_t, ::Array<uint32_t>*> T0;

  /// @brief Field Tinv0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Tinv0, put = setStaticF_Tinv0)) ::ArrayW<uint32_t, ::Array<uint32_t>*> Tinv0;

  /// @brief Field WorkingKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_WorkingKey, put = __cordl_internal_set_WorkingKey)) ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>
      WorkingKey;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field rcon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rcon, put = setStaticF_rcon)) ::ArrayW<uint8_t, ::Array<uint8_t>*> rcon;

  /// @brief Field s, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0x2343ce4, size 0x8c4, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> KW);

  /// @brief Method EncryptBlock, addr 0x234360c, size 0x6d8, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> KW);

  /// @brief Method FFmulX, addr 0x2342628, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t FFmulX(uint32_t x);

  /// @brief Method FFmulX2, addr 0x2342648, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t FFmulX2(uint32_t x);

  /// @brief Method GenerateWorkingKey, addr 0x23427c0, size 0xabc, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, bool forEncryption);

  /// @brief Method GetBlockSize, addr 0x2343460, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x2343284, size 0x194, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Inv_Mcol, addr 0x2342664, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t Inv_Mcol(uint32_t x);

  static inline ::Org::BouncyCastle::Crypto::Engines::AesEngine* New_ctor();

  /// @brief Method PackBlock, addr 0x23445a8, size 0x64, virtual false, abstract: false, final false
  inline void PackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method ProcessBlock, addr 0x2343468, size 0x134, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x234460c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Shift, addr 0x2342620, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Shift(uint32_t r, int32_t shift);

  /// @brief Method SubWord, addr 0x23426fc, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t SubWord(uint32_t x);

  /// @brief Method UnPackBlock, addr 0x234359c, size 0x70, virtual false, abstract: false, final false
  inline void UnPackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  constexpr uint32_t const& __cordl_internal_get_C0() const;

  constexpr uint32_t& __cordl_internal_get_C0();

  constexpr uint32_t const& __cordl_internal_get_C1() const;

  constexpr uint32_t& __cordl_internal_get_C1();

  constexpr uint32_t const& __cordl_internal_get_C2() const;

  constexpr uint32_t& __cordl_internal_get_C2();

  constexpr uint32_t const& __cordl_internal_get_C3() const;

  constexpr uint32_t& __cordl_internal_get_C3();

  constexpr int32_t const& __cordl_internal_get_ROUNDS() const;

  constexpr int32_t& __cordl_internal_get_ROUNDS();

  constexpr ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> const& __cordl_internal_get_WorkingKey() const;

  constexpr ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>& __cordl_internal_get_WorkingKey();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_s() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_s();

  constexpr void __cordl_internal_set_C0(uint32_t value);

  constexpr void __cordl_internal_set_C1(uint32_t value);

  constexpr void __cordl_internal_set_C2(uint32_t value);

  constexpr void __cordl_internal_set_C3(uint32_t value);

  constexpr void __cordl_internal_set_ROUNDS(int32_t value);

  constexpr void __cordl_internal_set_WorkingKey(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_s(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x234327c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Si();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_T0();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_Tinv0();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_rcon();

  /// @brief Method get_AlgorithmName, addr 0x2343418, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x2343458, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_Si(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_T0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_Tinv0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_rcon(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AesEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesEngine(AesEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesEngine(AesEngine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 823 };

  /// @brief Field m1 offset 0xffffffff size 0x4
  static constexpr uint32_t m1{ static_cast<uint32_t>(0x80808080u) };

  /// @brief Field m2 offset 0xffffffff size 0x4
  static constexpr uint32_t m2{ static_cast<uint32_t>(0x7f7f7f7fu) };

  /// @brief Field m3 offset 0xffffffff size 0x4
  static constexpr uint32_t m3{ static_cast<uint32_t>(0x1bu) };

  /// @brief Field m4 offset 0xffffffff size 0x4
  static constexpr uint32_t m4{ static_cast<uint32_t>(0xc0c0c0c0u) };

  /// @brief Field m5 offset 0xffffffff size 0x4
  static constexpr uint32_t m5{ static_cast<uint32_t>(0x3f3f3f3fu) };

  /// @brief Field ROUNDS, offset: 0x10, size: 0x4, def value: None
  int32_t ___ROUNDS;

  /// @brief Field WorkingKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> ___WorkingKey;

  /// @brief Field C0, offset: 0x20, size: 0x4, def value: None
  uint32_t ___C0;

  /// @brief Field C1, offset: 0x24, size: 0x4, def value: None
  uint32_t ___C1;

  /// @brief Field C2, offset: 0x28, size: 0x4, def value: None
  uint32_t ___C2;

  /// @brief Field C3, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___C3;

  /// @brief Field forEncryption, offset: 0x30, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field s, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___ROUNDS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___WorkingKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___C0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___C1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___C2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___C3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___forEncryption) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesEngine, ___s) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::AesEngine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::AesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::AesEngine*, "Org.BouncyCastle.Crypto.Engines", "AesEngine");
