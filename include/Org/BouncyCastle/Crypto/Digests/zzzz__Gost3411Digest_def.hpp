#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Gost3411Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411Digest)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411Digest
class CORDL_TYPE Gost3411Digest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field C, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_C, put = __cordl_internal_set_C)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> C;

  /// @brief Field C2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C2, put = setStaticF_C2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> C2;

  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_H, put = __cordl_internal_set_H)) ::ArrayW<uint8_t, ::Array<uint8_t>*> H;

  /// @brief Field K, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_K, put = __cordl_internal_set_K)) ::ArrayW<uint8_t, ::Array<uint8_t>*> K;

  /// @brief Field L, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_L, put = __cordl_internal_set_L)) ::ArrayW<uint8_t, ::Array<uint8_t>*> L;

  /// @brief Field M, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_M, put = __cordl_internal_set_M)) ::ArrayW<uint8_t, ::Array<uint8_t>*> M;

  /// @brief Field S, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field Sum, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Sum, put = __cordl_internal_set_Sum)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Sum;

  /// @brief Field U, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_U, put = __cordl_internal_set_U)) ::ArrayW<uint8_t, ::Array<uint8_t>*> U;

  /// @brief Field V, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_V, put = __cordl_internal_set_V)) ::ArrayW<uint8_t, ::Array<uint8_t>*> V;

  /// @brief Field W, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_W, put = __cordl_internal_set_W)) ::ArrayW<uint8_t, ::Array<uint8_t>*> W;

  /// @brief Field a, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) ::ArrayW<uint8_t, ::Array<uint8_t>*> a;

  /// @brief Field byteCount, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_byteCount, put = __cordl_internal_set_byteCount)) uint64_t byteCount;

  /// @brief Field cipher, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* cipher;

  /// @brief Field sBox, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sBox, put = __cordl_internal_set_sBox)) ::ArrayW<uint8_t, ::Array<uint8_t>*> sBox;

  /// @brief Field wS, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_wS, put = __cordl_internal_set_wS)) ::ArrayW<int16_t, ::Array<int16_t>*> wS;

  /// @brief Field w_S, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_w_S, put = __cordl_internal_set_w_S)) ::ArrayW<int16_t, ::Array<int16_t>*> w_S;

  /// @brief Field xBuf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xBuf, put = __cordl_internal_set_xBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_xBufOff, put = __cordl_internal_set_xBufOff)) int32_t xBufOff;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method A, addr 0x26972c8, size 0xc0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> A(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method BlockUpdate, addr 0x2697088, size 0x130, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Copy, addr 0x26977d8, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x2697784, size 0x4c, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method E, addr 0x2697388, size 0x178, virtual false, abstract: false, final false
  inline void E(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> s, int32_t sOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method GetByteLength, addr 0x26977d0, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2696c60, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method MakeC, addr 0x2696084, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> MakeC();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sBoxParam);

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);

  /// @brief Method P, addr 0x26971b8, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> P(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method Reset, addr 0x26963b4, size 0x160, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x269694c, size 0x2d4, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update, addr 0x2696c68, size 0x80, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __cordl_internal_get_C() const;

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __cordl_internal_get_C();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_H() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_H();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_K() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_K();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_L() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_L();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_M() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_M();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_S() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_S();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Sum() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Sum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_U() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_U();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_V() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_V();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_W() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_W();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_a() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_a();

  constexpr uint64_t const& __cordl_internal_get_byteCount() const;

  constexpr uint64_t& __cordl_internal_get_byteCount();

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sBox() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sBox();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_wS() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_wS();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_w_S() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_w_S();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_xBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_xBuf();

  constexpr int32_t const& __cordl_internal_get_xBufOff() const;

  constexpr int32_t& __cordl_internal_get_xBufOff();

  constexpr void __cordl_internal_set_C(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  constexpr void __cordl_internal_set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_K(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_L(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_M(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Sum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_U(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_V(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_W(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_a(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_byteCount(uint64_t value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_sBox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_wS(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_w_S(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_xBufOff(int32_t value);

  /// @brief Method .ctor, addr 0x269612c, size 0x288, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2696514, size 0x294, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sBoxParam);

  /// @brief Method .ctor, addr 0x26967a8, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);

  /// @brief Method cpyBytesToShort, addr 0x269760c, size 0x84, virtual false, abstract: false, final false
  static inline void cpyBytesToShort(::ArrayW<uint8_t, ::Array<uint8_t>*> S, ::ArrayW<int16_t, ::Array<int16_t>*> wS);

  /// @brief Method cpyShortToBytes, addr 0x2697690, size 0x9c, virtual false, abstract: false, final false
  static inline void cpyShortToBytes(::ArrayW<int16_t, ::Array<int16_t>*> wS, ::ArrayW<uint8_t, ::Array<uint8_t>*> S);

  /// @brief Method finish, addr 0x269772c, size 0x58, virtual false, abstract: false, final false
  inline void finish();

  /// @brief Method fw, addr 0x2697500, size 0x10c, virtual false, abstract: false, final false
  inline void fw(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_C2();

  /// @brief Method get_AlgorithmName, addr 0x2696c20, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  /// @brief Method processBlock, addr 0x2696d60, size 0x328, virtual false, abstract: false, final false
  inline void processBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  static inline void setStaticF_C2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method sumByteArray, addr 0x2696ce8, size 0x78, virtual false, abstract: false, final false
  inline void sumByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411Digest(Gost3411Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411Digest(Gost3411Digest const&) = delete;

  /// @brief Field DIGEST_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t DIGEST_LENGTH{ static_cast<int32_t>(0x20) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 751 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___H) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___L) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___M) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___Sum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___C) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___xBuf) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___xBufOff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___byteCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___cipher) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___sBox) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___K) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___a) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___wS) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___w_S) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___S) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___U) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___V) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, ___W) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411Digest, 0xa0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
