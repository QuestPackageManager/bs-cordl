#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SerpentEngineBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngineBase)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngineBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
class CORDL_TYPE SerpentEngineBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field BlockSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BlockSize, put = setStaticF_BlockSize)) int32_t BlockSize;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field X0, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_X0, put = __cordl_internal_set_X0)) int32_t X0;

  /// @brief Field X1, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_X1, put = __cordl_internal_set_X1)) int32_t X1;

  /// @brief Field X2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_X2, put = __cordl_internal_set_X2)) int32_t X2;

  /// @brief Field X3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_X3, put = __cordl_internal_set_X3)) int32_t X3;

  /// @brief Field encrypting, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypting, put = __cordl_internal_set_encrypting)) bool encrypting;

  /// @brief Field wKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_wKey, put = __cordl_internal_set_wKey)) ::ArrayW<int32_t, ::Array<int32_t>*> wKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0x236b474, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Ib0, addr 0x236b6cc, size 0x44, virtual false, abstract: false, final false
  inline void Ib0(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib1, addr 0x236b750, size 0x40, virtual false, abstract: false, final false
  inline void Ib1(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib2, addr 0x236b7d8, size 0x44, virtual false, abstract: false, final false
  inline void Ib2(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib3, addr 0x236b868, size 0x48, virtual false, abstract: false, final false
  inline void Ib3(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib4, addr 0x236b8f4, size 0x44, virtual false, abstract: false, final false
  inline void Ib4(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib5, addr 0x236b980, size 0x48, virtual false, abstract: false, final false
  inline void Ib5(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib6, addr 0x236ba08, size 0x44, virtual false, abstract: false, final false
  inline void Ib6(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib7, addr 0x236ba94, size 0x4c, virtual false, abstract: false, final false
  inline void Ib7(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Init, addr 0x236b2b0, size 0x17c, virtual true, abstract: false, final false
  inline void Init(bool encrypting, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InverseLT, addr 0x236bb7c, size 0x8c, virtual false, abstract: false, final false
  inline void InverseLT();

  /// @brief Method LT, addr 0x236bae0, size 0x9c, virtual false, abstract: false, final false
  inline void LT();

  /// @brief Method MakeWorkingKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase* New_ctor();

  /// @brief Method ProcessBlock, addr 0x236b4cc, size 0x1a8, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x236b674, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateLeft, addr 0x236b678, size 0xc, virtual false, abstract: false, final false
  static inline int32_t RotateLeft(int32_t x, int32_t bits);

  /// @brief Method RotateRight, addr 0x236b684, size 0x8, virtual false, abstract: false, final false
  static inline int32_t RotateRight(int32_t x, int32_t bits);

  /// @brief Method Sb0, addr 0x236b68c, size 0x40, virtual false, abstract: false, final false
  inline void Sb0(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb1, addr 0x236b710, size 0x40, virtual false, abstract: false, final false
  inline void Sb1(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb2, addr 0x236b790, size 0x48, virtual false, abstract: false, final false
  inline void Sb2(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb3, addr 0x236b81c, size 0x4c, virtual false, abstract: false, final false
  inline void Sb3(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb4, addr 0x236b8b0, size 0x44, virtual false, abstract: false, final false
  inline void Sb4(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb5, addr 0x236b938, size 0x48, virtual false, abstract: false, final false
  inline void Sb5(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb6, addr 0x236b9c8, size 0x40, virtual false, abstract: false, final false
  inline void Sb6(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb7, addr 0x236ba4c, size 0x48, virtual false, abstract: false, final false
  inline void Sb7(int32_t a, int32_t b, int32_t c, int32_t d);

  constexpr int32_t const& __cordl_internal_get_X0() const;

  constexpr int32_t& __cordl_internal_get_X0();

  constexpr int32_t const& __cordl_internal_get_X1() const;

  constexpr int32_t& __cordl_internal_get_X1();

  constexpr int32_t const& __cordl_internal_get_X2() const;

  constexpr int32_t& __cordl_internal_get_X2();

  constexpr int32_t const& __cordl_internal_get_X3() const;

  constexpr int32_t& __cordl_internal_get_X3();

  constexpr bool const& __cordl_internal_get_encrypting() const;

  constexpr bool& __cordl_internal_get_encrypting();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_wKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_wKey();

  constexpr void __cordl_internal_set_X0(int32_t value);

  constexpr void __cordl_internal_set_X1(int32_t value);

  constexpr void __cordl_internal_set_X2(int32_t value);

  constexpr void __cordl_internal_set_X3(int32_t value);

  constexpr void __cordl_internal_set_encrypting(bool value);

  constexpr void __cordl_internal_set_wKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x236b2a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_BlockSize();

  /// @brief Method get_AlgorithmName, addr 0x236b42c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x236b46c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_BlockSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerpentEngineBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngineBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerpentEngineBase(SerpentEngineBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerpentEngineBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerpentEngineBase(SerpentEngineBase const&) = delete;

  /// @brief Field PHI offset 0xffffffff size 0x4
  static constexpr int32_t PHI{ static_cast<int32_t>(0x9e3779b9) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0x20) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 869 };

  /// @brief Field encrypting, offset: 0x10, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field wKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___wKey;

  /// @brief Field X0, offset: 0x20, size: 0x4, def value: None
  int32_t ___X0;

  /// @brief Field X1, offset: 0x24, size: 0x4, def value: None
  int32_t ___X1;

  /// @brief Field X2, offset: 0x28, size: 0x4, def value: None
  int32_t ___X2;

  /// @brief Field X3, offset: 0x2c, size: 0x4, def value: None
  int32_t ___X3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___encrypting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___wKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X3) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngineBase");
