#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngineBase)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngineBase;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngineBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SerpentEngineBase*
class CORDL_TYPE SerpentEngineBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field BlockSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BlockSize, put = setStaticF_BlockSize)) int32_t BlockSize;

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
  __declspec(property(get = __cordl_internal_get_wKey, put = __cordl_internal_set_wKey))::ArrayW<int32_t, ::Array<int32_t>*> wKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetBlockSize, addr 0xf741ec, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Ib0, addr 0xf7444c, size 0x44, virtual false, abstract: false, final false
  inline void Ib0(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib1, addr 0xf744d0, size 0x40, virtual false, abstract: false, final false
  inline void Ib1(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib2, addr 0xf74558, size 0x44, virtual false, abstract: false, final false
  inline void Ib2(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib3, addr 0xf745e8, size 0x48, virtual false, abstract: false, final false
  inline void Ib3(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib4, addr 0xf74674, size 0x44, virtual false, abstract: false, final false
  inline void Ib4(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib5, addr 0xf74700, size 0x48, virtual false, abstract: false, final false
  inline void Ib5(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib6, addr 0xf74788, size 0x44, virtual false, abstract: false, final false
  inline void Ib6(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Ib7, addr 0xf74814, size 0x4c, virtual false, abstract: false, final false
  inline void Ib7(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Init, addr 0xf74020, size 0x184, virtual true, abstract: false, final false
  inline void Init(bool encrypting, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InverseLT, addr 0xf748fc, size 0x8c, virtual false, abstract: false, final false
  inline void InverseLT();

  /// @brief Method LT, addr 0xf74860, size 0x9c, virtual false, abstract: false, final false
  inline void LT();

  /// @brief Method MakeWorkingKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase* New_ctor();

  /// @brief Method ProcessBlock, addr 0xf74244, size 0x1b0, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf743f4, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateLeft, addr 0xf743f8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t RotateLeft(int32_t x, int32_t bits);

  /// @brief Method RotateRight, addr 0xf74404, size 0x8, virtual false, abstract: false, final false
  static inline int32_t RotateRight(int32_t x, int32_t bits);

  /// @brief Method Sb0, addr 0xf7440c, size 0x40, virtual false, abstract: false, final false
  inline void Sb0(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb1, addr 0xf74490, size 0x40, virtual false, abstract: false, final false
  inline void Sb1(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb2, addr 0xf74510, size 0x48, virtual false, abstract: false, final false
  inline void Sb2(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb3, addr 0xf7459c, size 0x4c, virtual false, abstract: false, final false
  inline void Sb3(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb4, addr 0xf74630, size 0x44, virtual false, abstract: false, final false
  inline void Sb4(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb5, addr 0xf746b8, size 0x48, virtual false, abstract: false, final false
  inline void Sb5(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb6, addr 0xf74748, size 0x40, virtual false, abstract: false, final false
  inline void Sb6(int32_t a, int32_t b, int32_t c, int32_t d);

  /// @brief Method Sb7, addr 0xf747cc, size 0x48, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0xf74018, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_BlockSize();

  /// @brief Method get_AlgorithmName, addr 0xf741a4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf741e4, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field PHI offset 0xffffffff size 0x4
  static constexpr int32_t PHI{ static_cast<int32_t>(0x9e3779b9) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___encrypting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___wKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, ___X3) == 0x2c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngineBase");
