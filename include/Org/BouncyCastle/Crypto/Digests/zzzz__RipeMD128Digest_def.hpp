#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RipeMD128Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class RipeMD128Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest);
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD128Digest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(762))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::RipeMD128Digest*
class CORDL_TYPE RipeMD128Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  /// @brief Field H0, offset 0x28, size 0x4
  __declspec(property(get = __get_H0, put = __set_H0)) int32_t H0;

  /// @brief Field H1, offset 0x2c, size 0x4
  __declspec(property(get = __get_H1, put = __set_H1)) int32_t H1;

  /// @brief Field H2, offset 0x30, size 0x4
  __declspec(property(get = __get_H2, put = __set_H2)) int32_t H2;

  /// @brief Field H3, offset 0x34, size 0x4
  __declspec(property(get = __get_H3, put = __set_H3)) int32_t H3;

  /// @brief Field X, offset 0x38, size 0x8
  __declspec(property(get = __get_X, put = __set_X))::ArrayW<int32_t, ::Array<int32_t>*> X;

  /// @brief Field xOff, offset 0x40, size 0x4
  __declspec(property(get = __get_xOff, put = __set_xOff)) int32_t xOff;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr int32_t& __get_H0();

  constexpr int32_t const& __get_H0() const;

  constexpr void __set_H0(int32_t value);

  constexpr int32_t& __get_H1();

  constexpr int32_t const& __get_H1() const;

  constexpr void __set_H1(int32_t value);

  constexpr int32_t& __get_H2();

  constexpr int32_t const& __get_H2() const;

  constexpr void __set_H2(int32_t value);

  constexpr int32_t& __get_H3();

  constexpr int32_t const& __get_H3() const;

  constexpr void __set_H3(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_X();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_X() const;

  constexpr void __set_X(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_xOff();

  constexpr int32_t const& __get_xOff() const;

  constexpr void __set_xOff(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* New_ctor();

  /// @brief Method .ctor addr 0x11b9d24 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t);

  /// @brief Method .ctor addr 0x11b9d90 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t);

  /// @brief Method CopyIn addr 0x11b9e04 size 0x5c virtual false final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t);

  /// @brief Method get_AlgorithmName addr 0x11b9e60 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0x11b9ea0 size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method ProcessWord addr 0x11b9ea8 size 0xbc virtual true final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ProcessLength addr 0x11b9f64 size 0x6c virtual true final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method UnpackWord addr 0x11b9fd0 size 0x80 virtual false final false
  inline void UnpackWord(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal addr 0x11ba050 size 0x80 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0x11ba0d0 size 0x60 virtual true final false
  inline void Reset();

  /// @brief Method RL addr 0x11ba130 size 0xc virtual false final false
  inline int32_t RL(int32_t x, int32_t n);

  /// @brief Method F1 addr 0x11ba13c size 0xc virtual false final false
  inline int32_t F1(int32_t x, int32_t y, int32_t z);

  /// @brief Method F2 addr 0x11ba148 size 0x10 virtual false final false
  inline int32_t F2(int32_t x, int32_t y, int32_t z);

  /// @brief Method F3 addr 0x11ba158 size 0xc virtual false final false
  inline int32_t F3(int32_t x, int32_t y, int32_t z);

  /// @brief Method F4 addr 0x11ba164 size 0x10 virtual false final false
  inline int32_t F4(int32_t x, int32_t y, int32_t z);

  /// @brief Method F1 addr 0x11ba174 size 0x1c virtual false final false
  inline int32_t F1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F2 addr 0x11ba190 size 0x2c virtual false final false
  inline int32_t F2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F3 addr 0x11ba1bc size 0x28 virtual false final false
  inline int32_t F3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method F4 addr 0x11ba1e4 size 0x2c virtual false final false
  inline int32_t F4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF1 addr 0x11ba210 size 0x1c virtual false final false
  inline int32_t FF1(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF2 addr 0x11ba22c size 0x2c virtual false final false
  inline int32_t FF2(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF3 addr 0x11ba258 size 0x28 virtual false final false
  inline int32_t FF3(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method FF4 addr 0x11ba280 size 0x2c virtual false final false
  inline int32_t FF4(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s);

  /// @brief Method ProcessBlock addr 0x11ba2ac size 0xedc virtual true final false
  inline void ProcessBlock();

  /// @brief Method Copy addr 0x11bb188 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0x11bb1e8 size 0x84 virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "RipeMD128Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RipeMD128Digest(RipeMD128Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RipeMD128Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RipeMD128Digest(RipeMD128Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RipeMD128Digest();

public:
  /// @brief Field H0, offset: 0x28, size: 0x4, def value: None
  int32_t ___H0;

  /// @brief Field H1, offset: 0x2c, size: 0x4, def value: None
  int32_t ___H1;

  /// @brief Field H2, offset: 0x30, size: 0x4, def value: None
  int32_t ___H2;

  /// @brief Field H3, offset: 0x34, size: 0x4, def value: None
  int32_t ___H3;

  /// @brief Field X, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___X;

  /// @brief Field xOff, offset: 0x40, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___H0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___H1) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___H2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___H3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___X) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest, ___xOff) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD128Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD128Digest");
