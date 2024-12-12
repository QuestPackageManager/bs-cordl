#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SeedEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SeedEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SeedEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.SeedEngine
class CORDL_TYPE SeedEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field KC, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KC, put = setStaticF_KC)) ::ArrayW<uint32_t, ::Array<uint32_t>*> KC;

  /// @brief Field SS0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SS0, put = setStaticF_SS0)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SS0;

  /// @brief Field SS1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SS1, put = setStaticF_SS1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SS1;

  /// @brief Field SS2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SS2, put = setStaticF_SS2)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SS2;

  /// @brief Field SS3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SS3, put = setStaticF_SS3)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SS3;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field wKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wKey, put = __cordl_internal_set_wKey)) ::ArrayW<int32_t, ::Array<int32_t>*> wKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method F, addr 0x236ae84, size 0x64, virtual false, abstract: false, final false
  inline int64_t F(int32_t ki0, int32_t ki1, int64_t r);

  /// @brief Method G, addr 0x236af50, size 0xec, virtual false, abstract: false, final false
  inline int32_t G(int32_t x);

  /// @brief Method GetBlockSize, addr 0x236ac34, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x236a9b8, size 0xb0, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::SeedEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x236ac3c, size 0x1ec, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBuf, int32_t outOff);

  /// @brief Method Reset, addr 0x236af3c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_wKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_wKey();

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_wKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x236b240, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method bytesToLong, addr 0x236ae28, size 0x5c, virtual false, abstract: false, final false
  inline int64_t bytesToLong(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOff);

  /// @brief Method createWorkingKey, addr 0x236aa68, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> createWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> inKey);

  /// @brief Method extractW0, addr 0x236af40, size 0x8, virtual false, abstract: false, final false
  inline int32_t extractW0(int64_t lVal);

  /// @brief Method extractW1, addr 0x236af48, size 0x8, virtual false, abstract: false, final false
  inline int32_t extractW1(int64_t lVal);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KC();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SS0();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SS1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SS2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SS3();

  /// @brief Method get_AlgorithmName, addr 0x236abec, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x236ac2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method longToBytes, addr 0x236aee8, size 0x54, virtual false, abstract: false, final false
  inline void longToBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> dest, int32_t destOff, int64_t value);

  /// @brief Method phaseCalc1, addr 0x236b08c, size 0x20, virtual false, abstract: false, final false
  inline int32_t phaseCalc1(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1);

  /// @brief Method phaseCalc2, addr 0x236b04c, size 0x40, virtual false, abstract: false, final false
  inline int32_t phaseCalc2(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1);

  /// @brief Method rotateLeft8, addr 0x236b044, size 0x8, virtual false, abstract: false, final false
  inline int64_t rotateLeft8(int64_t x);

  /// @brief Method rotateRight8, addr 0x236b03c, size 0x8, virtual false, abstract: false, final false
  inline int64_t rotateRight8(int64_t x);

  static inline void setStaticF_KC(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SS0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SS1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SS2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SS3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SeedEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SeedEngine(SeedEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SeedEngine(SeedEngine const&) = delete;

  /// @brief Field BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t BlockSize{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 867 };

  /// @brief Field wKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___wKey;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SeedEngine, ___wKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SeedEngine, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SeedEngine, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedEngine*, "Org.BouncyCastle.Crypto.Engines", "SeedEngine");
