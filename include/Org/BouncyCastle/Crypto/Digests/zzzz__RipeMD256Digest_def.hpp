#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/RipeMD256Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RipeMD256Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class RipeMD256Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest);
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD256Digest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::RipeMD256Digest*
class CORDL_TYPE RipeMD256Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field H0, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_H0, put = __cordl_internal_set_H0)) int32_t H0;

  /// @brief Field H1, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_H1, put = __cordl_internal_set_H1)) int32_t H1;

  /// @brief Field H2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_H2, put = __cordl_internal_set_H2)) int32_t H2;

  /// @brief Field H3, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_H3, put = __cordl_internal_set_H3)) int32_t H3;

  /// @brief Field H4, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_H4, put = __cordl_internal_set_H4)) int32_t H4;

  /// @brief Field H5, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_H5, put = __cordl_internal_set_H5)) int32_t H5;

  /// @brief Field H6, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_H6, put = __cordl_internal_set_H6)) int32_t H6;

  /// @brief Field H7, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_H7, put = __cordl_internal_set_H7)) int32_t H7;

  /// @brief Field X, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) ::ArrayW<int32_t, ::Array<int32_t>*> X;

  /// @brief Field xOff, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Method Copy, addr 0x22f8300, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x22f6ee4, size 0x64, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* t);

  /// @brief Method DoFinal, addr 0x22f70f0, size 0xc0, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method F1, addr 0x22f7260, size 0x1c, virtual false, abstract: false, final false
  inline int32_t F1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F1, addr 0x22f7228, size 0xc, virtual false, abstract: false, final false
  inline int32_t F1(int32_t x, int32_t y, int32_t z);

  /// @brief Method F2, addr 0x22f727c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t F2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F2, addr 0x22f7234, size 0x10, virtual false, abstract: false, final false
  inline int32_t F2(int32_t x, int32_t y, int32_t z);

  /// @brief Method F3, addr 0x22f72a8, size 0x28, virtual false, abstract: false, final false
  inline int32_t F3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F3, addr 0x22f7244, size 0xc, virtual false, abstract: false, final false
  inline int32_t F3(int32_t x, int32_t y, int32_t z);

  /// @brief Method F4, addr 0x22f72d0, size 0x2c, virtual false, abstract: false, final false
  inline int32_t F4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F4, addr 0x22f7250, size 0x10, virtual false, abstract: false, final false
  inline int32_t F4(int32_t x, int32_t y, int32_t z);

  /// @brief Method FF1, addr 0x22f72fc, size 0x1c, virtual false, abstract: false, final false
  inline int32_t FF1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF2, addr 0x22f7318, size 0x2c, virtual false, abstract: false, final false
  inline int32_t FF2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF3, addr 0x22f7344, size 0x28, virtual false, abstract: false, final false
  inline int32_t FF3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF4, addr 0x22f736c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t FF4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method GetDigestSize, addr 0x22f6dfc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* t);

  /// @brief Method ProcessBlock, addr 0x22f7398, size 0xf68, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x22f7004, size 0x6c, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x22f6f48, size 0xbc, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method RL, addr 0x22f721c, size 0xc, virtual false, abstract: false, final false
  inline int32_t RL(int32_t x, int32_t n);

  /// @brief Method Reset, addr 0x22f71b0, size 0x6c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x22f8358, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method UnpackWord, addr 0x22f7070, size 0x80, virtual false, abstract: false, final false
  inline void UnpackWord(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  constexpr int32_t const& __cordl_internal_get_H0() const;

  constexpr int32_t& __cordl_internal_get_H0();

  constexpr int32_t const& __cordl_internal_get_H1() const;

  constexpr int32_t& __cordl_internal_get_H1();

  constexpr int32_t const& __cordl_internal_get_H2() const;

  constexpr int32_t& __cordl_internal_get_H2();

  constexpr int32_t const& __cordl_internal_get_H3() const;

  constexpr int32_t& __cordl_internal_get_H3();

  constexpr int32_t const& __cordl_internal_get_H4() const;

  constexpr int32_t& __cordl_internal_get_H4();

  constexpr int32_t const& __cordl_internal_get_H5() const;

  constexpr int32_t& __cordl_internal_get_H5();

  constexpr int32_t const& __cordl_internal_get_H6() const;

  constexpr int32_t& __cordl_internal_get_H6();

  constexpr int32_t const& __cordl_internal_get_H7() const;

  constexpr int32_t& __cordl_internal_get_H7();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_H0(int32_t value);

  constexpr void __cordl_internal_set_H1(int32_t value);

  constexpr void __cordl_internal_set_H2(int32_t value);

  constexpr void __cordl_internal_set_H3(int32_t value);

  constexpr void __cordl_internal_set_H4(int32_t value);

  constexpr void __cordl_internal_set_H5(int32_t value);

  constexpr void __cordl_internal_set_H6(int32_t value);

  constexpr void __cordl_internal_set_H7(int32_t value);

  constexpr void __cordl_internal_set_X(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x22f6e04, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22f6e70, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest* t);

  /// @brief Method get_AlgorithmName, addr 0x22f6dbc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RipeMD256Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RipeMD256Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RipeMD256Digest(RipeMD256Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RipeMD256Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RipeMD256Digest(RipeMD256Digest const&) = delete;

  /// @brief Field H0, offset: 0x28, size: 0x4, def value: None
  int32_t ___H0;

  /// @brief Field H1, offset: 0x2c, size: 0x4, def value: None
  int32_t ___H1;

  /// @brief Field H2, offset: 0x30, size: 0x4, def value: None
  int32_t ___H2;

  /// @brief Field H3, offset: 0x34, size: 0x4, def value: None
  int32_t ___H3;

  /// @brief Field H4, offset: 0x38, size: 0x4, def value: None
  int32_t ___H4;

  /// @brief Field H5, offset: 0x3c, size: 0x4, def value: None
  int32_t ___H5;

  /// @brief Field H6, offset: 0x40, size: 0x4, def value: None
  int32_t ___H6;

  /// @brief Field H7, offset: 0x44, size: 0x4, def value: None
  int32_t ___H7;

  /// @brief Field X, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___X;

  /// @brief Field xOff, offset: 0x50, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x20) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H1) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H6) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___H7) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___X) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest, ___xOff) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD256Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD256Digest");
