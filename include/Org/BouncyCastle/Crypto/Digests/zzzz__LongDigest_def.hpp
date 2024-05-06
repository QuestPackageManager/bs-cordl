#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/LongDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class LongDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::LongDigest);
// Type: Org.BouncyCastle.Crypto.Digests::LongDigest
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::LongDigest*
class CORDL_TYPE LongDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field H1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_H1, put = __cordl_internal_set_H1)) uint64_t H1;

  /// @brief Field H2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_H2, put = __cordl_internal_set_H2)) uint64_t H2;

  /// @brief Field H3, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_H3, put = __cordl_internal_set_H3)) uint64_t H3;

  /// @brief Field H4, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_H4, put = __cordl_internal_set_H4)) uint64_t H4;

  /// @brief Field H5, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_H5, put = __cordl_internal_set_H5)) uint64_t H5;

  /// @brief Field H6, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_H6, put = __cordl_internal_set_H6)) uint64_t H6;

  /// @brief Field H7, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_H7, put = __cordl_internal_set_H7)) uint64_t H7;

  /// @brief Field H8, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_H8, put = __cordl_internal_set_H8)) uint64_t H8;

  /// @brief Field K, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_K, put = setStaticF_K))::ArrayW<uint64_t, ::Array<uint64_t>*> K;

  /// @brief Field MyByteLength, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_MyByteLength, put = __cordl_internal_set_MyByteLength)) int32_t MyByteLength;

  /// @brief Field W, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_W, put = __cordl_internal_set_W))::ArrayW<uint64_t, ::Array<uint64_t>*> W;

  /// @brief Field byteCount1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_byteCount1, put = __cordl_internal_set_byteCount1)) int64_t byteCount1;

  /// @brief Field byteCount2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_byteCount2, put = __cordl_internal_set_byteCount2)) int64_t byteCount2;

  /// @brief Field wOff, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_wOff, put = __cordl_internal_set_wOff)) int32_t wOff;

  /// @brief Field xBuf, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xBuf, put = __cordl_internal_set_xBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_xBufOff, put = __cordl_internal_set_xBufOff)) int32_t xBufOff;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method AdjustByteCounts, addr 0x148b384, size 0x24, virtual false, abstract: false, final false
  inline void AdjustByteCounts();

  /// @brief Method BlockUpdate, addr 0x148b208, size 0x110, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Ch, addr 0x148ba30, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x148b084, size 0x9c, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  /// @brief Method DoFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Finish, addr 0x148b318, size 0x6c, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method GetByteLength, addr 0x148ba64, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetDigestSize();

  /// @brief Method Maj, addr 0x148ba50, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);

  static inline ::Org::BouncyCastle::Crypto::Digests::LongDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::LongDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  /// @brief Method ProcessBlock, addr 0x148b408, size 0x58c, virtual false, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x148b3a8, size 0x60, virtual false, abstract: false, final false
  inline void ProcessLength(int64_t lowW, int64_t hiW);

  /// @brief Method ProcessWord, addr 0x148b194, size 0x74, virtual false, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Reset, addr 0x148b994, size 0x6c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* t);

  /// @brief Method Sigma0, addr 0x148ba10, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Sigma0(uint64_t x);

  /// @brief Method Sigma1, addr 0x148ba00, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Sigma1(uint64_t x);

  /// @brief Method Sum0, addr 0x148ba40, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Sum0(uint64_t x);

  /// @brief Method Sum1, addr 0x148ba20, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Sum1(uint64_t x);

  /// @brief Method Update, addr 0x148b120, size 0x74, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr uint64_t const& __cordl_internal_get_H1() const;

  constexpr uint64_t& __cordl_internal_get_H1();

  constexpr uint64_t const& __cordl_internal_get_H2() const;

  constexpr uint64_t& __cordl_internal_get_H2();

  constexpr uint64_t const& __cordl_internal_get_H3() const;

  constexpr uint64_t& __cordl_internal_get_H3();

  constexpr uint64_t const& __cordl_internal_get_H4() const;

  constexpr uint64_t& __cordl_internal_get_H4();

  constexpr uint64_t const& __cordl_internal_get_H5() const;

  constexpr uint64_t& __cordl_internal_get_H5();

  constexpr uint64_t const& __cordl_internal_get_H6() const;

  constexpr uint64_t& __cordl_internal_get_H6();

  constexpr uint64_t const& __cordl_internal_get_H7() const;

  constexpr uint64_t& __cordl_internal_get_H7();

  constexpr uint64_t const& __cordl_internal_get_H8() const;

  constexpr uint64_t& __cordl_internal_get_H8();

  constexpr int32_t const& __cordl_internal_get_MyByteLength() const;

  constexpr int32_t& __cordl_internal_get_MyByteLength();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_W() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_W();

  constexpr int64_t const& __cordl_internal_get_byteCount1() const;

  constexpr int64_t& __cordl_internal_get_byteCount1();

  constexpr int64_t const& __cordl_internal_get_byteCount2() const;

  constexpr int64_t& __cordl_internal_get_byteCount2();

  constexpr int32_t const& __cordl_internal_get_wOff() const;

  constexpr int32_t& __cordl_internal_get_wOff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_xBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_xBuf();

  constexpr int32_t const& __cordl_internal_get_xBufOff() const;

  constexpr int32_t& __cordl_internal_get_xBufOff();

  constexpr void __cordl_internal_set_H1(uint64_t value);

  constexpr void __cordl_internal_set_H2(uint64_t value);

  constexpr void __cordl_internal_set_H3(uint64_t value);

  constexpr void __cordl_internal_set_H4(uint64_t value);

  constexpr void __cordl_internal_set_H5(uint64_t value);

  constexpr void __cordl_internal_set_H6(uint64_t value);

  constexpr void __cordl_internal_set_H7(uint64_t value);

  constexpr void __cordl_internal_set_H8(uint64_t value);

  constexpr void __cordl_internal_set_MyByteLength(int32_t value);

  constexpr void __cordl_internal_set_W(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set_byteCount1(int64_t value);

  constexpr void __cordl_internal_set_byteCount2(int64_t value);

  constexpr void __cordl_internal_set_wOff(int32_t value);

  constexpr void __cordl_internal_set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_xBufOff(int32_t value);

  /// @brief Method .ctor, addr 0x148af38, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x148afd8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_K();

  /// @brief Method get_AlgorithmName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  static inline void setStaticF_K(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongDigest(LongDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongDigest(LongDigest const&) = delete;

  /// @brief Field MyByteLength, offset: 0x10, size: 0x4, def value: None
  int32_t ___MyByteLength;

  /// @brief Field xBuf, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___xBuf;

  /// @brief Field xBufOff, offset: 0x20, size: 0x4, def value: None
  int32_t ___xBufOff;

  /// @brief Field byteCount1, offset: 0x28, size: 0x8, def value: None
  int64_t ___byteCount1;

  /// @brief Field byteCount2, offset: 0x30, size: 0x8, def value: None
  int64_t ___byteCount2;

  /// @brief Field H1, offset: 0x38, size: 0x8, def value: None
  uint64_t ___H1;

  /// @brief Field H2, offset: 0x40, size: 0x8, def value: None
  uint64_t ___H2;

  /// @brief Field H3, offset: 0x48, size: 0x8, def value: None
  uint64_t ___H3;

  /// @brief Field H4, offset: 0x50, size: 0x8, def value: None
  uint64_t ___H4;

  /// @brief Field H5, offset: 0x58, size: 0x8, def value: None
  uint64_t ___H5;

  /// @brief Field H6, offset: 0x60, size: 0x8, def value: None
  uint64_t ___H6;

  /// @brief Field H7, offset: 0x68, size: 0x8, def value: None
  uint64_t ___H7;

  /// @brief Field H8, offset: 0x70, size: 0x8, def value: None
  uint64_t ___H8;

  /// @brief Field W, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___W;

  /// @brief Field wOff, offset: 0x80, size: 0x4, def value: None
  int32_t ___wOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::LongDigest, 0x88>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___MyByteLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___xBuf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___xBufOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___byteCount1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___byteCount2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___H8) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___W) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::LongDigest, ___wOff) == 0x80, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::LongDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::LongDigest*, "Org.BouncyCastle.Crypto.Digests", "LongDigest");
