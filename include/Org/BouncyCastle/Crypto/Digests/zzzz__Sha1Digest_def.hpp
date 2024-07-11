#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Sha1Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha1Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha1Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha1Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha1Digest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha1Digest*
class CORDL_TYPE Sha1Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field H1, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_H1, put = __cordl_internal_set_H1)) uint32_t H1;

  /// @brief Field H2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_H2, put = __cordl_internal_set_H2)) uint32_t H2;

  /// @brief Field H3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_H3, put = __cordl_internal_set_H3)) uint32_t H3;

  /// @brief Field H4, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_H4, put = __cordl_internal_set_H4)) uint32_t H4;

  /// @brief Field H5, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_H5, put = __cordl_internal_set_H5)) uint32_t H5;

  /// @brief Field X, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X))::ArrayW<uint32_t, ::Array<uint32_t>*> X;

  /// @brief Field xOff, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Method Copy, addr 0x1112f20, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x111272c, size 0x64, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method DoFinal, addr 0x11128c4, size 0xa4, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method F, addr 0x11129b4, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t F(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method G, addr 0x11129d0, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t G(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method GetDigestSize, addr 0x11127d0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method H, addr 0x11129c4, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t H(uint32_t u, uint32_t v, uint32_t w);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha1Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha1Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method ProcessBlock, addr 0x11129e4, size 0x53c, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x1112858, size 0x6c, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x11127d8, size 0x80, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x1112968, size 0x4c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x1112f80, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  constexpr uint32_t const& __cordl_internal_get_H1() const;

  constexpr uint32_t& __cordl_internal_get_H1();

  constexpr uint32_t const& __cordl_internal_get_H2() const;

  constexpr uint32_t& __cordl_internal_get_H2();

  constexpr uint32_t const& __cordl_internal_get_H3() const;

  constexpr uint32_t& __cordl_internal_get_H3();

  constexpr uint32_t const& __cordl_internal_get_H4() const;

  constexpr uint32_t& __cordl_internal_get_H4();

  constexpr uint32_t const& __cordl_internal_get_H5() const;

  constexpr uint32_t& __cordl_internal_get_H5();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_H1(uint32_t value);

  constexpr void __cordl_internal_set_H2(uint32_t value);

  constexpr void __cordl_internal_set_H3(uint32_t value);

  constexpr void __cordl_internal_set_H4(uint32_t value);

  constexpr void __cordl_internal_set_H5(uint32_t value);

  constexpr void __cordl_internal_set_X(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x111264c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x11126b8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method get_AlgorithmName, addr 0x1112790, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha1Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha1Digest(Sha1Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha1Digest(Sha1Digest const&) = delete;

  /// @brief Field H1, offset: 0x28, size: 0x4, def value: None
  uint32_t ___H1;

  /// @brief Field H2, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___H2;

  /// @brief Field H3, offset: 0x30, size: 0x4, def value: None
  uint32_t ___H3;

  /// @brief Field H4, offset: 0x34, size: 0x4, def value: None
  uint32_t ___H4;

  /// @brief Field H5, offset: 0x38, size: 0x4, def value: None
  uint32_t ___H5;

  /// @brief Field X, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___X;

  /// @brief Field xOff, offset: 0x48, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x14) };

  /// @brief Field Y1 offset 0xffffffff size 0x4
  static constexpr uint32_t Y1{ static_cast<uint32_t>(0x827999f0u) };

  /// @brief Field Y2 offset 0xffffffff size 0x4
  static constexpr uint32_t Y2{ static_cast<uint32_t>(0xd9eba1f0u) };

  /// @brief Field Y3 offset 0xffffffff size 0x4
  static constexpr uint32_t Y3{ static_cast<uint32_t>(0x1bbcdcf0u) };

  /// @brief Field Y4 offset 0xffffffff size 0x4
  static constexpr uint32_t Y4{ static_cast<uint32_t>(0x62c1d6f0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha1Digest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___H1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___H2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___H3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___H4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___H5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___X) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha1Digest, ___xOff) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha1Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha1Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha1Digest");
