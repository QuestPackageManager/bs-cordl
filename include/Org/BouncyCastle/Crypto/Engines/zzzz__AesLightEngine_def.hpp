#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesLightEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class AesLightEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::AesLightEngine);
// Type: Org.BouncyCastle.Crypto.Engines::AesLightEngine
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(825))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::AesLightEngine*
class CORDL_TYPE AesLightEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field ROUNDS, offset 0x10, size 0x4
  __declspec(property(get = __get_ROUNDS, put = __set_ROUNDS)) int32_t ROUNDS;

  /// @brief Field WorkingKey, offset 0x18, size 0x8
  __declspec(property(get = __get_WorkingKey, put = __set_WorkingKey))::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> WorkingKey;

  /// @brief Field C0, offset 0x20, size 0x4
  __declspec(property(get = __get_C0, put = __set_C0)) uint32_t C0;

  /// @brief Field C1, offset 0x24, size 0x4
  __declspec(property(get = __get_C1, put = __set_C1)) uint32_t C1;

  /// @brief Field C2, offset 0x28, size 0x4
  __declspec(property(get = __get_C2, put = __set_C2)) uint32_t C2;

  /// @brief Field C3, offset 0x2c, size 0x4
  __declspec(property(get = __get_C3, put = __set_C3)) uint32_t C3;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field S, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S, put = setStaticF_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field Si, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Si, put = setStaticF_Si))::ArrayW<uint8_t, ::Array<uint8_t>*> Si;

  /// @brief Field rcon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rcon, put = setStaticF_rcon))::ArrayW<uint8_t, ::Array<uint8_t>*> rcon;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr int32_t& __get_ROUNDS();

  constexpr int32_t const& __get_ROUNDS() const;

  constexpr void __set_ROUNDS(int32_t value);

  constexpr ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>& __get_WorkingKey();

  constexpr ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> const& __get_WorkingKey() const;

  constexpr void __set_WorkingKey(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> value);

  constexpr uint32_t& __get_C0();

  constexpr uint32_t const& __get_C0() const;

  constexpr void __set_C0(uint32_t value);

  constexpr uint32_t& __get_C1();

  constexpr uint32_t const& __get_C1() const;

  constexpr void __set_C1(uint32_t value);

  constexpr uint32_t& __get_C2();

  constexpr uint32_t const& __get_C2() const;

  constexpr void __set_C2(uint32_t value);

  constexpr uint32_t& __get_C3();

  constexpr uint32_t const& __get_C3() const;

  constexpr void __set_C3(uint32_t value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  static inline void setStaticF_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S();

  static inline void setStaticF_Si(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Si();

  static inline void setStaticF_rcon(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_rcon();

  /// @brief Method Shift, addr 0xeb98dc, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Shift(uint32_t r, int32_t shift);

  /// @brief Method FFmulX, addr 0xeb98e4, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t FFmulX(uint32_t x);

  /// @brief Method FFmulX2, addr 0xeb9904, size 0x1c, virtual false, abstract: false, final false
  static inline uint32_t FFmulX2(uint32_t x);

  /// @brief Method Mcol, addr 0xeb9920, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Mcol(uint32_t x);

  /// @brief Method Inv_Mcol, addr 0xeb999c, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t Inv_Mcol(uint32_t x);

  /// @brief Method SubWord, addr 0xeb9a34, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t SubWord(uint32_t x);

  /// @brief Method GenerateWorkingKey, addr 0xeb9af8, size 0xb18, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, bool forEncryption);

  static inline ::Org::BouncyCastle::Crypto::Engines::AesLightEngine* New_ctor();

  /// @brief Method .ctor, addr 0xeba610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0xeba618, size 0x124, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xeba73c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xeba77c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xeba784, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xeba78c, size 0x138, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xebbb5c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method UnPackBlock, addr 0xeba8c4, size 0x70, virtual false, abstract: false, final false
  inline void UnPackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method PackBlock, addr 0xebbaf8, size 0x64, virtual false, abstract: false, final false
  inline void PackBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method EncryptBlock, addr 0xeba934, size 0x7b8, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> KW);

  /// @brief Method DecryptBlock, addr 0xebb0ec, size 0xa0c, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*> KW);

  // Ctor Parameters [CppParam { name: "", ty: "AesLightEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesLightEngine(AesLightEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesLightEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesLightEngine(AesLightEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesLightEngine();

public:
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

  /// @brief Field m1 offset 0xffffffff size 0x4
  static constexpr uint32_t m1{ static_cast<uint32_t>(0x808080f0u) };

  /// @brief Field m2 offset 0xffffffff size 0x4
  static constexpr uint32_t m2{ static_cast<uint32_t>(0x7f7f7ff0u) };

  /// @brief Field m3 offset 0xffffffff size 0x4
  static constexpr uint32_t m3{ static_cast<uint32_t>(0xc0c0f01bu) };

  /// @brief Field m4 offset 0xffffffff size 0x4
  static constexpr uint32_t m4{ static_cast<uint32_t>(0xc0c0c0f0u) };

  /// @brief Field m5 offset 0xffffffff size 0x4
  static constexpr uint32_t m5{ static_cast<uint32_t>(0x3f3f3ff0u) };

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::AesLightEngine, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___ROUNDS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___WorkingKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___C0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___C1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___C2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___C3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::AesLightEngine, ___forEncryption) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::AesLightEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::AesLightEngine*, "Org.BouncyCastle.Crypto.Engines", "AesLightEngine");
