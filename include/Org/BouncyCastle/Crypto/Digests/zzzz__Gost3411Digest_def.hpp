#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411Digest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411Digest
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(751))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Gost3411Digest*
class CORDL_TYPE Gost3411Digest : public ::System::Object {
public:
  // Declarations
  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __get_H, put = __set_H))::ArrayW<uint8_t, ::Array<uint8_t>*> H;

  /// @brief Field L, offset 0x18, size 0x8
  __declspec(property(get = __get_L, put = __set_L))::ArrayW<uint8_t, ::Array<uint8_t>*> L;

  /// @brief Field M, offset 0x20, size 0x8
  __declspec(property(get = __get_M, put = __set_M))::ArrayW<uint8_t, ::Array<uint8_t>*> M;

  /// @brief Field Sum, offset 0x28, size 0x8
  __declspec(property(get = __get_Sum, put = __set_Sum))::ArrayW<uint8_t, ::Array<uint8_t>*> Sum;

  /// @brief Field C, offset 0x30, size 0x8
  __declspec(property(get = __get_C, put = __set_C))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> C;

  /// @brief Field xBuf, offset 0x38, size 0x8
  __declspec(property(get = __get_xBuf, put = __set_xBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x40, size 0x4
  __declspec(property(get = __get_xBufOff, put = __set_xBufOff)) int32_t xBufOff;

  /// @brief Field byteCount, offset 0x48, size 0x8
  __declspec(property(get = __get_byteCount, put = __set_byteCount)) uint64_t byteCount;

  /// @brief Field cipher, offset 0x50, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field sBox, offset 0x58, size 0x8
  __declspec(property(get = __get_sBox, put = __set_sBox))::ArrayW<uint8_t, ::Array<uint8_t>*> sBox;

  /// @brief Field K, offset 0x60, size 0x8
  __declspec(property(get = __get_K, put = __set_K))::ArrayW<uint8_t, ::Array<uint8_t>*> K;

  /// @brief Field a, offset 0x68, size 0x8
  __declspec(property(get = __get_a, put = __set_a))::ArrayW<uint8_t, ::Array<uint8_t>*> a;

  /// @brief Field wS, offset 0x70, size 0x8
  __declspec(property(get = __get_wS, put = __set_wS))::ArrayW<int16_t, ::Array<int16_t>*> wS;

  /// @brief Field w_S, offset 0x78, size 0x8
  __declspec(property(get = __get_w_S, put = __set_w_S))::ArrayW<int16_t, ::Array<int16_t>*> w_S;

  /// @brief Field S, offset 0x80, size 0x8
  __declspec(property(get = __get_S, put = __set_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field U, offset 0x88, size 0x8
  __declspec(property(get = __get_U, put = __set_U))::ArrayW<uint8_t, ::Array<uint8_t>*> U;

  /// @brief Field V, offset 0x90, size 0x8
  __declspec(property(get = __get_V, put = __set_V))::ArrayW<uint8_t, ::Array<uint8_t>*> V;

  /// @brief Field W, offset 0x98, size 0x8
  __declspec(property(get = __get_W, put = __set_W))::ArrayW<uint8_t, ::Array<uint8_t>*> W;

  /// @brief Field C2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C2, put = setStaticF_C2))::ArrayW<uint8_t, ::Array<uint8_t>*> C2;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_H();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_H() const;

  constexpr void __set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_L();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_L() const;

  constexpr void __set_L(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_M();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_M() const;

  constexpr void __set_M(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Sum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Sum() const;

  constexpr void __set_Sum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_C();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_C() const;

  constexpr void __set_C(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_xBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_xBuf() const;

  constexpr void __set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_xBufOff();

  constexpr int32_t const& __get_xBufOff() const;

  constexpr void __set_xBufOff(int32_t value);

  constexpr uint64_t& __get_byteCount();

  constexpr uint64_t const& __get_byteCount() const;

  constexpr void __set_byteCount(uint64_t value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sBox();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sBox() const;

  constexpr void __set_sBox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_K();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_K() const;

  constexpr void __set_K(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_a();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_a() const;

  constexpr void __set_a(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_wS();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_wS() const;

  constexpr void __set_wS(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_w_S();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_w_S() const;

  constexpr void __set_w_S(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_S();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_S() const;

  constexpr void __set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_U();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_U() const;

  constexpr void __set_U(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_V();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_V() const;

  constexpr void __set_V(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_W();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_W() const;

  constexpr void __set_W(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_C2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_C2();

  /// @brief Method MakeC addr 0x1221934 size 0xd0 virtual false final false
  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> MakeC();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor();

  /// @brief Method .ctor addr 0x1221a04 size 0x290 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sBoxParam);

  /// @brief Method .ctor addr 0x1221df4 size 0x294 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sBoxParam);

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);

  /// @brief Method .ctor addr 0x1222088 size 0x1a4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);

  /// @brief Method get_AlgorithmName addr 0x1222504 size 0x40 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0x1222544 size 0x8 virtual true final true
  inline int32_t GetDigestSize();

  /// @brief Method Update addr 0x122254c size 0x80 virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0x1222968 size 0x130 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method P addr 0x1222a98 size 0x110 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> P(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method A addr 0x1222ba8 size 0xc0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> A(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method E addr 0x1222c68 size 0x17c virtual false final false
  inline void E(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> s, int32_t sOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method fw addr 0x1222de4 size 0x10c virtual false final false
  inline void fw(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method processBlock addr 0x1222644 size 0x324 virtual false final false
  inline void processBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method finish addr 0x1223018 size 0x58 virtual false final false
  inline void finish();

  /// @brief Method DoFinal addr 0x1223070 size 0x4c virtual true final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0x1221c94 size 0x160 virtual true final true
  inline void Reset();

  /// @brief Method sumByteArray addr 0x12225cc size 0x78 virtual false final false
  inline void sumByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method cpyBytesToShort addr 0x1222ef0 size 0x8c virtual false final false
  static inline void cpyBytesToShort(::ArrayW<uint8_t, ::Array<uint8_t>*> S, ::ArrayW<int16_t, ::Array<int16_t>*> wS);

  /// @brief Method cpyShortToBytes addr 0x1222f7c size 0x9c virtual false final false
  static inline void cpyShortToBytes(::ArrayW<int16_t, ::Array<int16_t>*> wS, ::ArrayW<uint8_t, ::Array<uint8_t>*> S);

  /// @brief Method GetByteLength addr 0x12230bc size 0x8 virtual true final true
  inline int32_t GetByteLength();

  /// @brief Method Copy addr 0x12230c4 size 0x60 virtual true final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0x122222c size 0x2d8 virtual true final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411Digest(Gost3411Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411Digest(Gost3411Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411Digest();

public:
  /// @brief Field H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___H;

  /// @brief Field L, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___L;

  /// @brief Field M, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___M;

  /// @brief Field Sum, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Sum;

  /// @brief Field C, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___C;

  /// @brief Field xBuf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___xBuf;

  /// @brief Field xBufOff, offset: 0x40, size: 0x4, def value: None
  int32_t ___xBufOff;

  /// @brief Field byteCount, offset: 0x48, size: 0x8, def value: None
  uint64_t ___byteCount;

  /// @brief Field cipher, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___cipher;

  /// @brief Field sBox, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sBox;

  /// @brief Field K, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___K;

  /// @brief Field a, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___a;

  /// @brief Field wS, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___wS;

  /// @brief Field w_S, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___w_S;

  /// @brief Field S, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S;

  /// @brief Field U, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___U;

  /// @brief Field V, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___V;

  /// @brief Field W, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___W;

  /// @brief Field DIGEST_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t DIGEST_LENGTH{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, 0xa0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
