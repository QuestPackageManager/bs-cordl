#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/MD4Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD4Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD4Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD4Digest);
// Dependencies Org.BouncyCastle.Crypto.Digests.GeneralDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.MD4Digest
class CORDL_TYPE MD4Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field H1, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_H1, put = __cordl_internal_set_H1)) int32_t H1;

  /// @brief Field H2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_H2, put = __cordl_internal_set_H2)) int32_t H2;

  /// @brief Field H3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_H3, put = __cordl_internal_set_H3)) int32_t H3;

  /// @brief Field H4, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_H4, put = __cordl_internal_set_H4)) int32_t H4;

  /// @brief Field X, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) ::ArrayW<int32_t, ::Array<int32_t>*> X;

  /// @brief Field xOff, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Method Copy, addr 0x269a138, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x2699788, size 0x5c, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD4Digest* t);

  /// @brief Method DoFinal, addr 0x26999d4, size 0x80, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method F, addr 0x2699ac0, size 0x10, virtual false, abstract: false, final false
  inline int32_t F(int32_t u, int32_t v, int32_t w);

  /// @brief Method G, addr 0x2699ad0, size 0x14, virtual false, abstract: false, final false
  inline int32_t G(int32_t u, int32_t v, int32_t w);

  /// @brief Method GetDigestSize, addr 0x2699824, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method H, addr 0x2699ae4, size 0xc, virtual false, abstract: false, final false
  inline int32_t H(int32_t u, int32_t v, int32_t w);

  static inline ::Org::BouncyCastle::Crypto::Digests::MD4Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::MD4Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD4Digest* t);

  /// @brief Method ProcessBlock, addr 0x2699af0, size 0x648, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x26998e8, size 0x6c, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x269982c, size 0xbc, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x2699a54, size 0x60, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x269a190, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method RotateLeft, addr 0x2699ab4, size 0xc, virtual false, abstract: false, final false
  inline int32_t RotateLeft(int32_t x, int32_t n);

  /// @brief Method UnpackWord, addr 0x2699954, size 0x80, virtual false, abstract: false, final false
  inline void UnpackWord(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  constexpr int32_t const& __cordl_internal_get_H1() const;

  constexpr int32_t& __cordl_internal_get_H1();

  constexpr int32_t const& __cordl_internal_get_H2() const;

  constexpr int32_t& __cordl_internal_get_H2();

  constexpr int32_t const& __cordl_internal_get_H3() const;

  constexpr int32_t& __cordl_internal_get_H3();

  constexpr int32_t const& __cordl_internal_get_H4() const;

  constexpr int32_t& __cordl_internal_get_H4();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_H1(int32_t value);

  constexpr void __cordl_internal_set_H2(int32_t value);

  constexpr void __cordl_internal_set_H3(int32_t value);

  constexpr void __cordl_internal_set_H4(int32_t value);

  constexpr void __cordl_internal_set_X(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x26996a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2699714, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD4Digest* t);

  /// @brief Method get_AlgorithmName, addr 0x26997e4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD4Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD4Digest(MD4Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD4Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD4Digest(MD4Digest const&) = delete;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x10) };

  /// @brief Field S11 offset 0xffffffff size 0x4
  static constexpr int32_t S11{ static_cast<int32_t>(0x3) };

  /// @brief Field S12 offset 0xffffffff size 0x4
  static constexpr int32_t S12{ static_cast<int32_t>(0x7) };

  /// @brief Field S13 offset 0xffffffff size 0x4
  static constexpr int32_t S13{ static_cast<int32_t>(0xb) };

  /// @brief Field S14 offset 0xffffffff size 0x4
  static constexpr int32_t S14{ static_cast<int32_t>(0x13) };

  /// @brief Field S21 offset 0xffffffff size 0x4
  static constexpr int32_t S21{ static_cast<int32_t>(0x3) };

  /// @brief Field S22 offset 0xffffffff size 0x4
  static constexpr int32_t S22{ static_cast<int32_t>(0x5) };

  /// @brief Field S23 offset 0xffffffff size 0x4
  static constexpr int32_t S23{ static_cast<int32_t>(0x9) };

  /// @brief Field S24 offset 0xffffffff size 0x4
  static constexpr int32_t S24{ static_cast<int32_t>(0xd) };

  /// @brief Field S31 offset 0xffffffff size 0x4
  static constexpr int32_t S31{ static_cast<int32_t>(0x3) };

  /// @brief Field S32 offset 0xffffffff size 0x4
  static constexpr int32_t S32{ static_cast<int32_t>(0x9) };

  /// @brief Field S33 offset 0xffffffff size 0x4
  static constexpr int32_t S33{ static_cast<int32_t>(0xb) };

  /// @brief Field S34 offset 0xffffffff size 0x4
  static constexpr int32_t S34{ static_cast<int32_t>(0xf) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 758 };

  /// @brief Field H1, offset: 0x28, size: 0x4, def value: None
  int32_t ___H1;

  /// @brief Field H2, offset: 0x2c, size: 0x4, def value: None
  int32_t ___H2;

  /// @brief Field H3, offset: 0x30, size: 0x4, def value: None
  int32_t ___H3;

  /// @brief Field H4, offset: 0x34, size: 0x4, def value: None
  int32_t ___H4;

  /// @brief Field X, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___X;

  /// @brief Field xOff, offset: 0x40, size: 0x4, def value: None
  int32_t ___xOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___H1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___H2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___H3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___H4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___X) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD4Digest, ___xOff) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD4Digest, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD4Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD4Digest*, "Org.BouncyCastle.Crypto.Digests", "MD4Digest");
