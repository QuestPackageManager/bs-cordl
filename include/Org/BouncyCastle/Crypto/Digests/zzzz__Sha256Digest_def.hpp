#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Sha256Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha256Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha256Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha256Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha256Digest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha256Digest*
class CORDL_TYPE Sha256Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
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

  /// @brief Field H5, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_H5, put = __cordl_internal_set_H5)) uint32_t H5;

  /// @brief Field H6, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_H6, put = __cordl_internal_set_H6)) uint32_t H6;

  /// @brief Field H7, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_H7, put = __cordl_internal_set_H7)) uint32_t H7;

  /// @brief Field H8, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_H8, put = __cordl_internal_set_H8)) uint32_t H8;

  /// @brief Field K, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_K, put = setStaticF_K)) ::ArrayW<uint32_t, ::Array<uint32_t>*> K;

  /// @brief Field X, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X)) ::ArrayW<uint32_t, ::Array<uint32_t>*> X;

  /// @brief Field xOff, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Method Copy, addr 0x22f0eb8, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x22f0640, size 0x64, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::Sha256Digest* t);

  /// @brief Method DoFinal, addr 0x22f07d8, size 0xe0, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetDigestSize, addr 0x22f06e4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha256Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha256Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha256Digest* t);

  /// @brief Method ProcessBlock, addr 0x22f0904, size 0x550, virtual true, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x22f076c, size 0x6c, virtual true, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x22f06ec, size 0x80, virtual true, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x22f08b8, size 0x4c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x22f0f10, size 0x84, virtual true, abstract: false, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Sum0Maj, addr 0x22f0e94, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t Sum0Maj(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method Sum1Ch, addr 0x22f0e74, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t Sum1Ch(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method Theta0, addr 0x22f0e64, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t Theta0(uint32_t x);

  /// @brief Method Theta1, addr 0x22f0e54, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t Theta1(uint32_t x);

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

  constexpr uint32_t const& __cordl_internal_get_H6() const;

  constexpr uint32_t& __cordl_internal_get_H6();

  constexpr uint32_t const& __cordl_internal_get_H7() const;

  constexpr uint32_t& __cordl_internal_get_H7();

  constexpr uint32_t const& __cordl_internal_get_H8() const;

  constexpr uint32_t& __cordl_internal_get_H8();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_H1(uint32_t value);

  constexpr void __cordl_internal_set_H2(uint32_t value);

  constexpr void __cordl_internal_set_H3(uint32_t value);

  constexpr void __cordl_internal_set_H4(uint32_t value);

  constexpr void __cordl_internal_set_H5(uint32_t value);

  constexpr void __cordl_internal_set_H6(uint32_t value);

  constexpr void __cordl_internal_set_H7(uint32_t value);

  constexpr void __cordl_internal_set_H8(uint32_t value);

  constexpr void __cordl_internal_set_X(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x22f053c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22f05cc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha256Digest* t);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_K();

  /// @brief Method get_AlgorithmName, addr 0x22f06a4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method initHs, addr 0x22f05b0, size 0x1c, virtual false, abstract: false, final false
  inline void initHs();

  static inline void setStaticF_K(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha256Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sha256Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha256Digest(Sha256Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha256Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha256Digest(Sha256Digest const&) = delete;

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

  /// @brief Field H6, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___H6;

  /// @brief Field H7, offset: 0x40, size: 0x4, def value: None
  uint32_t ___H7;

  /// @brief Field H8, offset: 0x44, size: 0x4, def value: None
  uint32_t ___H8;

  /// @brief Field X, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___X;

  /// @brief Field xOff, offset: 0x50, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x20) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha256Digest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H6) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H7) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___H8) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___X) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Sha256Digest, ___xOff) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha256Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha256Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha256Digest");
