#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/MD5Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD5Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD5Digest);
// Dependencies Org.BouncyCastle.Crypto.Digests.GeneralDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.MD5Digest
class CORDL_TYPE MD5Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field H1, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_H1, put = __cordl_internal_set_H1)) uint32_t H1;

  /// @brief Field H2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_H2, put = __cordl_internal_set_H2)) uint32_t H2;

  /// @brief Field H3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_H3, put = __cordl_internal_set_H3)) uint32_t H3;

  /// @brief Field H4, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_H4, put = __cordl_internal_set_H4)) uint32_t H4;

  /// @brief Field S11, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S11, put = setStaticF_S11)) int32_t S11;

  /// @brief Field S12, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S12, put = setStaticF_S12)) int32_t S12;

  /// @brief Field S13, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S13, put = setStaticF_S13)) int32_t S13;

  /// @brief Field S14, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S14, put = setStaticF_S14)) int32_t S14;

  /// @brief Field S21, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S21, put = setStaticF_S21)) int32_t S21;

  /// @brief Field S22, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S22, put = setStaticF_S22)) int32_t S22;

  /// @brief Field S23, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S23, put = setStaticF_S23)) int32_t S23;

  /// @brief Field S24, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S24, put = setStaticF_S24)) int32_t S24;

  /// @brief Field S31, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S31, put = setStaticF_S31)) int32_t S31;

  /// @brief Field S32, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S32, put = setStaticF_S32)) int32_t S32;

  /// @brief Field S33, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S33, put = setStaticF_S33)) int32_t S33;

  /// @brief Field S34, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S34, put = setStaticF_S34)) int32_t S34;

  /// @brief Field S41, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S41, put = setStaticF_S41)) int32_t S41;

  /// @brief Field S42, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S42, put = setStaticF_S42)) int32_t S42;

  /// @brief Field S43, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S43, put = setStaticF_S43)) int32_t S43;

  /// @brief Field S44, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_S44, put = setStaticF_S44)) int32_t S44;

  /// @brief Field X, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) ::ArrayW<uint32_t, ::Array<uint32_t>*> X;

  /// @brief Field xOff, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Method Copy, addr 0x269b178, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x269a2f4, size 0x5c, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD5Digest* t);

  /// @brief Method DoFinal, addr 0x269a4e0, size 0x90, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method F, addr 0x269a5dc, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t F(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method G, addr 0x269a5ec, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t G(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method GetDigestSize, addr 0x269a390, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method H, addr 0x269a5fc, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t H(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method K, addr 0x269a608, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t K(uint32_t u, uint32_t v, uint32_t w);

  static inline ::Org::BouncyCastle::Crypto::Digests::MD5Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::MD5Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD5Digest* t);

  /// @brief Method ProcessBlock, addr 0x269a614, size 0xb64, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x269a418, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x269a398, size 0x80, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x269a570, size 0x60, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x269b1d0, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method RotateLeft, addr 0x269a5d0, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t RotateLeft(uint32_t x, int32_t n);

  constexpr uint32_t const& __cordl_internal_get_H1() const;

  constexpr uint32_t& __cordl_internal_get_H1();

  constexpr uint32_t const& __cordl_internal_get_H2() const;

  constexpr uint32_t& __cordl_internal_get_H2();

  constexpr uint32_t const& __cordl_internal_get_H3() const;

  constexpr uint32_t& __cordl_internal_get_H3();

  constexpr uint32_t const& __cordl_internal_get_H4() const;

  constexpr uint32_t& __cordl_internal_get_H4();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_H1(uint32_t value);

  constexpr void __cordl_internal_set_H2(uint32_t value);

  constexpr void __cordl_internal_set_H3(uint32_t value);

  constexpr void __cordl_internal_set_H4(uint32_t value);

  constexpr void __cordl_internal_set_X(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x269a214, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x269a280, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD5Digest* t);

  static inline int32_t getStaticF_S11();

  static inline int32_t getStaticF_S12();

  static inline int32_t getStaticF_S13();

  static inline int32_t getStaticF_S14();

  static inline int32_t getStaticF_S21();

  static inline int32_t getStaticF_S22();

  static inline int32_t getStaticF_S23();

  static inline int32_t getStaticF_S24();

  static inline int32_t getStaticF_S31();

  static inline int32_t getStaticF_S32();

  static inline int32_t getStaticF_S33();

  static inline int32_t getStaticF_S34();

  static inline int32_t getStaticF_S41();

  static inline int32_t getStaticF_S42();

  static inline int32_t getStaticF_S43();

  static inline int32_t getStaticF_S44();

  /// @brief Method get_AlgorithmName, addr 0x269a350, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  static inline void setStaticF_S11(int32_t value);

  static inline void setStaticF_S12(int32_t value);

  static inline void setStaticF_S13(int32_t value);

  static inline void setStaticF_S14(int32_t value);

  static inline void setStaticF_S21(int32_t value);

  static inline void setStaticF_S22(int32_t value);

  static inline void setStaticF_S23(int32_t value);

  static inline void setStaticF_S24(int32_t value);

  static inline void setStaticF_S31(int32_t value);

  static inline void setStaticF_S32(int32_t value);

  static inline void setStaticF_S33(int32_t value);

  static inline void setStaticF_S34(int32_t value);

  static inline void setStaticF_S41(int32_t value);

  static inline void setStaticF_S42(int32_t value);

  static inline void setStaticF_S43(int32_t value);

  static inline void setStaticF_S44(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5Digest(MD5Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5Digest(MD5Digest const&) = delete;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 759 };

  /// @brief Field H1, offset: 0x28, size: 0x4, def value: None
  uint32_t ___H1;

  /// @brief Field H2, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___H2;

  /// @brief Field H3, offset: 0x30, size: 0x4, def value: None
  uint32_t ___H3;

  /// @brief Field H4, offset: 0x34, size: 0x4, def value: None
  uint32_t ___H4;

  /// @brief Field X, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___X;

  /// @brief Field xOff, offset: 0x40, size: 0x4, def value: None
  int32_t ___xOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___H1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___H2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___H3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___H4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___X) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD5Digest, ___xOff) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD5Digest, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD5Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD5Digest*, "Org.BouncyCastle.Crypto.Digests", "MD5Digest");
