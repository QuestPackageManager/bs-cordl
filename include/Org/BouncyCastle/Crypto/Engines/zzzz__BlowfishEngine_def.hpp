#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlowfishEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class BlowfishEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
// Type: Org.BouncyCastle.Crypto.Engines::BlowfishEngine
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::BlowfishEngine*
class CORDL_TYPE BlowfishEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field KP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KP, put = setStaticF_KP))::ArrayW<uint32_t, ::Array<uint32_t>*> KP;

  /// @brief Field KS0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KS0, put = setStaticF_KS0))::ArrayW<uint32_t, ::Array<uint32_t>*> KS0;

  /// @brief Field KS1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KS1, put = setStaticF_KS1))::ArrayW<uint32_t, ::Array<uint32_t>*> KS1;

  /// @brief Field KS2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KS2, put = setStaticF_KS2))::ArrayW<uint32_t, ::Array<uint32_t>*> KS2;

  /// @brief Field KS3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KS3, put = setStaticF_KS3))::ArrayW<uint32_t, ::Array<uint32_t>*> KS3;

  /// @brief Field P, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P))::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field P_SZ, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_P_SZ, put = setStaticF_P_SZ)) int32_t P_SZ;

  /// @brief Field ROUNDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ROUNDS, put = setStaticF_ROUNDS)) int32_t ROUNDS;

  /// @brief Field S0, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_S0, put = __cordl_internal_set_S0))::ArrayW<uint32_t, ::Array<uint32_t>*> S0;

  /// @brief Field S1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_S1, put = __cordl_internal_set_S1))::ArrayW<uint32_t, ::Array<uint32_t>*> S1;

  /// @brief Field S2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_S2, put = __cordl_internal_set_S2))::ArrayW<uint32_t, ::Array<uint32_t>*> S2;

  /// @brief Field S3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_S3, put = __cordl_internal_set_S3))::ArrayW<uint32_t, ::Array<uint32_t>*> S3;

  /// @brief Field SBOX_SK, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SBOX_SK, put = setStaticF_SBOX_SK)) int32_t SBOX_SK;

  /// @brief Field encrypting, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypting, put = __cordl_internal_set_encrypting)) bool encrypting;

  /// @brief Field workingKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0xf2feb0, size 0x190, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method EncryptBlock, addr 0xf2fd0c, size 0x1a4, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method F, addr 0xf3004c, size 0xa0, virtual false, abstract: false, final false
  inline uint32_t F(uint32_t x);

  /// @brief Method GetBlockSize, addr 0xf30044, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0xf2f740, size 0x144, virtual true, abstract: false, final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::BlowfishEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0xf2fbd4, size 0x138, virtual true, abstract: false, final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessTable, addr 0xf300ec, size 0x1a8, virtual false, abstract: false, final false
  inline void ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t, ::Array<uint32_t>*> table);

  /// @brief Method Reset, addr 0xf30040, size 0x4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method SetKey, addr 0xf2f884, size 0x308, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_P();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_S0() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_S0();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_S1() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_S1();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_S2() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_S2();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_S3() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_S3();

  constexpr bool const& __cordl_internal_get_encrypting() const;

  constexpr bool& __cordl_internal_get_encrypting();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_S0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_S1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_S2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_S3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_encrypting(bool value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0xf2f658, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KP();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS0();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_KS3();

  static inline int32_t getStaticF_P_SZ();

  static inline int32_t getStaticF_ROUNDS();

  static inline int32_t getStaticF_SBOX_SK();

  /// @brief Method get_AlgorithmName, addr 0xf2fb8c, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf2fbcc, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_KP(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KS3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_P_SZ(int32_t value);

  static inline void setStaticF_ROUNDS(int32_t value);

  static inline void setStaticF_SBOX_SK(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlowfishEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlowfishEngine(BlowfishEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlowfishEngine(BlowfishEngine const&) = delete;

  /// @brief Field S0, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___S0;

  /// @brief Field S1, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___S1;

  /// @brief Field S2, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___S2;

  /// @brief Field S3, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___S3;

  /// @brief Field P, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___P;

  /// @brief Field encrypting, offset: 0x38, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field workingKey, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___S0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___S1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___S2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___S3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___P) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___encrypting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine, ___workingKey) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::BlowfishEngine*, "Org.BouncyCastle.Crypto.Engines", "BlowfishEngine");
