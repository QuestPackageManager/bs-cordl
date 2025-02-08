#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/TigerDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TigerDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class TigerDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.TigerDigest
class CORDL_TYPE TigerDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field Buffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) int64_t a;

  /// @brief Field b, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) int64_t b;

  /// @brief Field bOff, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bOff, put = __cordl_internal_set_bOff)) int32_t bOff;

  /// @brief Field byteCount, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_byteCount, put = __cordl_internal_set_byteCount)) int64_t byteCount;

  /// @brief Field c, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) int64_t c;

  /// @brief Field t1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t1, put = setStaticF_t1)) ::ArrayW<int64_t, ::Array<int64_t>*> t1;

  /// @brief Field t2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t2, put = setStaticF_t2)) ::ArrayW<int64_t, ::Array<int64_t>*> t2;

  /// @brief Field t3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t3, put = setStaticF_t3)) ::ArrayW<int64_t, ::Array<int64_t>*> t3;

  /// @brief Field t4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_t4, put = setStaticF_t4)) ::ArrayW<int64_t, ::Array<int64_t>*> t4;

  /// @brief Field x, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<int64_t, ::Array<int64_t>*> x;

  /// @brief Field xOff, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2337794, size 0x104, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Copy, addr 0x2337fbc, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x2337f5c, size 0x60, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Finish, addr 0x2337f14, size 0x48, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method GetByteLength, addr 0x233721c, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2337214, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method KeySchedule, addr 0x2337d1c, size 0xdc, virtual false, abstract: false, final false
  inline void KeySchedule();

  static inline ::Org::BouncyCastle::Crypto::Digests::TigerDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::TigerDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest* t);

  /// @brief Method ProcessBlock, addr 0x2337340, size 0x3e4, virtual false, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method ProcessLength, addr 0x2337ee8, size 0x2c, virtual false, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method ProcessWord, addr 0x2337224, size 0x11c, virtual false, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off);

  /// @brief Method Reset, addr 0x2336fb4, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x23370ec, size 0xe8, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method RoundABC, addr 0x2337898, size 0x184, virtual false, abstract: false, final false
  inline void RoundABC(int64_t x, int64_t mul);

  /// @brief Method RoundBCA, addr 0x2337a1c, size 0x180, virtual false, abstract: false, final false
  inline void RoundBCA(int64_t x, int64_t mul);

  /// @brief Method RoundCAB, addr 0x2337b9c, size 0x180, virtual false, abstract: false, final false
  inline void RoundCAB(int64_t x, int64_t mul);

  /// @brief Method UnpackWord, addr 0x2337df8, size 0xf0, virtual false, abstract: false, final false
  inline void UnpackWord(int64_t r, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Update, addr 0x2337724, size 0x70, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr int64_t const& __cordl_internal_get_a() const;

  constexpr int64_t& __cordl_internal_get_a();

  constexpr int64_t const& __cordl_internal_get_b() const;

  constexpr int64_t& __cordl_internal_get_b();

  constexpr int32_t const& __cordl_internal_get_bOff() const;

  constexpr int32_t& __cordl_internal_get_bOff();

  constexpr int64_t const& __cordl_internal_get_byteCount() const;

  constexpr int64_t& __cordl_internal_get_byteCount();

  constexpr int64_t const& __cordl_internal_get_c() const;

  constexpr int64_t& __cordl_internal_get_c();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_a(int64_t value);

  constexpr void __cordl_internal_set_b(int64_t value);

  constexpr void __cordl_internal_set_bOff(int32_t value);

  constexpr void __cordl_internal_set_byteCount(int64_t value);

  constexpr void __cordl_internal_set_c(int64_t value);

  constexpr void __cordl_internal_set_x(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x2336f28, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2337058, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest* t);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t1();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t2();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t3();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t4();

  /// @brief Method get_AlgorithmName, addr 0x23371d4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  static inline void setStaticF_t1(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_t2(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_t3(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_t4(::ArrayW<int64_t, ::Array<int64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TigerDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TigerDigest(TigerDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TigerDigest(TigerDigest const&) = delete;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x18) };

  /// @brief Field MyByteLength offset 0xffffffff size 0x4
  static constexpr int32_t MyByteLength{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 783 };

  /// @brief Field a, offset: 0x10, size: 0x8, def value: None
  int64_t ___a;

  /// @brief Field b, offset: 0x18, size: 0x8, def value: None
  int64_t ___b;

  /// @brief Field c, offset: 0x20, size: 0x8, def value: None
  int64_t ___c;

  /// @brief Field byteCount, offset: 0x28, size: 0x8, def value: None
  int64_t ___byteCount;

  /// @brief Field Buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field bOff, offset: 0x38, size: 0x4, def value: None
  int32_t ___bOff;

  /// @brief Field x, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___x;

  /// @brief Field xOff, offset: 0x48, size: 0x4, def value: None
  int32_t ___xOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___a) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___b) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___byteCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___Buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___bOff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___x) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___xOff) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::TigerDigest, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::TigerDigest*, "Org.BouncyCastle.Crypto.Digests", "TigerDigest");
