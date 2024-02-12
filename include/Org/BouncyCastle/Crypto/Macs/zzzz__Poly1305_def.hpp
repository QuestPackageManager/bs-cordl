#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Poly1305)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Poly1305;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::Poly1305);
// Type: Org.BouncyCastle.Crypto.Macs::Poly1305
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(945))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::Poly1305*
class CORDL_TYPE Poly1305 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field singleByte, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_singleByte, put = __cordl_internal_set_singleByte))::ArrayW<uint8_t, ::Array<uint8_t>*> singleByte;

  /// @brief Field r0, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_r0, put = __cordl_internal_set_r0)) uint32_t r0;

  /// @brief Field r1, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_r1, put = __cordl_internal_set_r1)) uint32_t r1;

  /// @brief Field r2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_r2, put = __cordl_internal_set_r2)) uint32_t r2;

  /// @brief Field r3, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_r3, put = __cordl_internal_set_r3)) uint32_t r3;

  /// @brief Field r4, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_r4, put = __cordl_internal_set_r4)) uint32_t r4;

  /// @brief Field s1, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_s1, put = __cordl_internal_set_s1)) uint32_t s1;

  /// @brief Field s2, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_s2, put = __cordl_internal_set_s2)) uint32_t s2;

  /// @brief Field s3, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_s3, put = __cordl_internal_set_s3)) uint32_t s3;

  /// @brief Field s4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_s4, put = __cordl_internal_set_s4)) uint32_t s4;

  /// @brief Field k0, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_k0, put = __cordl_internal_set_k0)) uint32_t k0;

  /// @brief Field k1, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_k1, put = __cordl_internal_set_k1)) uint32_t k1;

  /// @brief Field k2, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_k2, put = __cordl_internal_set_k2)) uint32_t k2;

  /// @brief Field k3, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_k3, put = __cordl_internal_set_k3)) uint32_t k3;

  /// @brief Field currentBlock, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_currentBlock, put = __cordl_internal_set_currentBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> currentBlock;

  /// @brief Field currentBlockOffset, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_currentBlockOffset, put = __cordl_internal_set_currentBlockOffset)) int32_t currentBlockOffset;

  /// @brief Field h0, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_h0, put = __cordl_internal_set_h0)) uint32_t h0;

  /// @brief Field h1, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_h1, put = __cordl_internal_set_h1)) uint32_t h1;

  /// @brief Field h2, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_h2, put = __cordl_internal_set_h2)) uint32_t h2;

  /// @brief Field h3, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_h3, put = __cordl_internal_set_h3)) uint32_t h3;

  /// @brief Field h4, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_h4, put = __cordl_internal_set_h4)) uint32_t h4;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_cipher() const;

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_singleByte();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_singleByte() const;

  constexpr void __cordl_internal_set_singleByte(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint32_t& __cordl_internal_get_r0();

  constexpr uint32_t const& __cordl_internal_get_r0() const;

  constexpr void __cordl_internal_set_r0(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_r1();

  constexpr uint32_t const& __cordl_internal_get_r1() const;

  constexpr void __cordl_internal_set_r1(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_r2();

  constexpr uint32_t const& __cordl_internal_get_r2() const;

  constexpr void __cordl_internal_set_r2(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_r3();

  constexpr uint32_t const& __cordl_internal_get_r3() const;

  constexpr void __cordl_internal_set_r3(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_r4();

  constexpr uint32_t const& __cordl_internal_get_r4() const;

  constexpr void __cordl_internal_set_r4(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_s1();

  constexpr uint32_t const& __cordl_internal_get_s1() const;

  constexpr void __cordl_internal_set_s1(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_s2();

  constexpr uint32_t const& __cordl_internal_get_s2() const;

  constexpr void __cordl_internal_set_s2(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_s3();

  constexpr uint32_t const& __cordl_internal_get_s3() const;

  constexpr void __cordl_internal_set_s3(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_s4();

  constexpr uint32_t const& __cordl_internal_get_s4() const;

  constexpr void __cordl_internal_set_s4(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_k0();

  constexpr uint32_t const& __cordl_internal_get_k0() const;

  constexpr void __cordl_internal_set_k0(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_k1();

  constexpr uint32_t const& __cordl_internal_get_k1() const;

  constexpr void __cordl_internal_set_k1(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_k2();

  constexpr uint32_t const& __cordl_internal_get_k2() const;

  constexpr void __cordl_internal_set_k2(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_k3();

  constexpr uint32_t const& __cordl_internal_get_k3() const;

  constexpr void __cordl_internal_set_k3(uint32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_currentBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_currentBlock() const;

  constexpr void __cordl_internal_set_currentBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_currentBlockOffset();

  constexpr int32_t const& __cordl_internal_get_currentBlockOffset() const;

  constexpr void __cordl_internal_set_currentBlockOffset(int32_t value);

  constexpr uint32_t& __cordl_internal_get_h0();

  constexpr uint32_t const& __cordl_internal_get_h0() const;

  constexpr void __cordl_internal_set_h0(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_h1();

  constexpr uint32_t const& __cordl_internal_get_h1() const;

  constexpr void __cordl_internal_set_h1(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_h2();

  constexpr uint32_t const& __cordl_internal_get_h2() const;

  constexpr void __cordl_internal_set_h2(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_h3();

  constexpr uint32_t const& __cordl_internal_get_h3() const;

  constexpr void __cordl_internal_set_h3(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_h4();

  constexpr uint32_t const& __cordl_internal_get_h4() const;

  constexpr void __cordl_internal_set_h4(uint32_t value);

  static inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* New_ctor();

  /// @brief Method .ctor, addr 0xf3b9b4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Macs::Poly1305* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor, addr 0xf3ba28, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method Init, addr 0xf3bb74, size 0x19c, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method SetKey, addr 0xf3bd10, size 0x344, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method get_AlgorithmName, addr 0xf3c060, size 0xe8, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize, addr 0xf3c148, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Update, addr 0xf3c150, size 0x34, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf3c184, size 0xe8, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method ProcessBlock, addr 0xf3c26c, size 0x21c, virtual false, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method DoFinal, addr 0xf3c490, size 0x1e0, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf3c054, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method mul32x32_64, addr 0xf3c488, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t mul32x32_64(uint32_t i1, uint32_t i2);

  // Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Poly1305(Poly1305&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Poly1305(Poly1305 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Poly1305();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field singleByte, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___singleByte;

  /// @brief Field r0, offset: 0x20, size: 0x4, def value: None
  uint32_t ___r0;

  /// @brief Field r1, offset: 0x24, size: 0x4, def value: None
  uint32_t ___r1;

  /// @brief Field r2, offset: 0x28, size: 0x4, def value: None
  uint32_t ___r2;

  /// @brief Field r3, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___r3;

  /// @brief Field r4, offset: 0x30, size: 0x4, def value: None
  uint32_t ___r4;

  /// @brief Field s1, offset: 0x34, size: 0x4, def value: None
  uint32_t ___s1;

  /// @brief Field s2, offset: 0x38, size: 0x4, def value: None
  uint32_t ___s2;

  /// @brief Field s3, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___s3;

  /// @brief Field s4, offset: 0x40, size: 0x4, def value: None
  uint32_t ___s4;

  /// @brief Field k0, offset: 0x44, size: 0x4, def value: None
  uint32_t ___k0;

  /// @brief Field k1, offset: 0x48, size: 0x4, def value: None
  uint32_t ___k1;

  /// @brief Field k2, offset: 0x4c, size: 0x4, def value: None
  uint32_t ___k2;

  /// @brief Field k3, offset: 0x50, size: 0x4, def value: None
  uint32_t ___k3;

  /// @brief Field currentBlock, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___currentBlock;

  /// @brief Field currentBlockOffset, offset: 0x60, size: 0x4, def value: None
  int32_t ___currentBlockOffset;

  /// @brief Field h0, offset: 0x64, size: 0x4, def value: None
  uint32_t ___h0;

  /// @brief Field h1, offset: 0x68, size: 0x4, def value: None
  uint32_t ___h1;

  /// @brief Field h2, offset: 0x6c, size: 0x4, def value: None
  uint32_t ___h2;

  /// @brief Field h3, offset: 0x70, size: 0x4, def value: None
  uint32_t ___h3;

  /// @brief Field h4, offset: 0x74, size: 0x4, def value: None
  uint32_t ___h4;

  /// @brief Field BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t BlockSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Poly1305, 0x78>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___singleByte) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___r0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___r1) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___r2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___r3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___r4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___s1) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___s2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___s3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___s4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___k0) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___k1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___k2) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___k3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___currentBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___currentBlockOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___h0) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___h1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___h2) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___h3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Poly1305, ___h4) == 0x74, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Poly1305);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Poly1305*, "Org.BouncyCastle.Crypto.Macs", "Poly1305");
