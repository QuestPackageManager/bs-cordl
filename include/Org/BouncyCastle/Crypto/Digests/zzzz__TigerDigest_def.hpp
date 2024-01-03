#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TigerDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class TigerDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
// Type: Org.BouncyCastle.Crypto.Digests::TigerDigest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(783))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::TigerDigest*
class CORDL_TYPE TigerDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x8
  __declspec(property(get = __get_a, put = __set_a)) int64_t a;

  /// @brief Field b, offset 0x18, size 0x8
  __declspec(property(get = __get_b, put = __set_b)) int64_t b;

  /// @brief Field c, offset 0x20, size 0x8
  __declspec(property(get = __get_c, put = __set_c)) int64_t c;

  /// @brief Field byteCount, offset 0x28, size 0x8
  __declspec(property(get = __get_byteCount, put = __set_byteCount)) int64_t byteCount;

  /// @brief Field Buffer, offset 0x30, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field bOff, offset 0x38, size 0x4
  __declspec(property(get = __get_bOff, put = __set_bOff)) int32_t bOff;

  /// @brief Field x, offset 0x40, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<int64_t, ::Array<int64_t>*> x;

  /// @brief Field xOff, offset 0x48, size 0x4
  __declspec(property(get = __get_xOff, put = __set_xOff)) int32_t xOff;

  /// @brief Field t1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t1, put = setStaticF_t1))::ArrayW<int64_t, ::Array<int64_t>*> t1;

  /// @brief Field t2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t2, put = setStaticF_t2))::ArrayW<int64_t, ::Array<int64_t>*> t2;

  /// @brief Field t3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t3, put = setStaticF_t3))::ArrayW<int64_t, ::Array<int64_t>*> t3;

  /// @brief Field t4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_t4, put = setStaticF_t4))::ArrayW<int64_t, ::Array<int64_t>*> t4;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr int64_t& __get_a();

  constexpr int64_t const& __get_a() const;

  constexpr void __set_a(int64_t value);

  constexpr int64_t& __get_b();

  constexpr int64_t const& __get_b() const;

  constexpr void __set_b(int64_t value);

  constexpr int64_t& __get_c();

  constexpr int64_t const& __get_c() const;

  constexpr void __set_c(int64_t value);

  constexpr int64_t& __get_byteCount();

  constexpr int64_t const& __get_byteCount() const;

  constexpr void __set_byteCount(int64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bOff();

  constexpr int32_t const& __get_bOff() const;

  constexpr void __set_bOff(int32_t value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get_x();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr int32_t& __get_xOff();

  constexpr int32_t const& __get_xOff() const;

  constexpr void __set_xOff(int32_t value);

  static inline void setStaticF_t1(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t1();

  static inline void setStaticF_t2(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t2();

  static inline void setStaticF_t3(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t3();

  static inline void setStaticF_t4(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_t4();

  static inline ::Org::BouncyCastle::Crypto::Digests::TigerDigest* New_ctor();

  /// @brief Method .ctor, addr 0xea9494, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::TigerDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest* t);

  /// @brief Method .ctor, addr 0xea95c4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest* t);

  /// @brief Method get_AlgorithmName, addr 0xea9740, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize, addr 0xea9780, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method GetByteLength, addr 0xea9788, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method ProcessWord, addr 0xea9790, size 0x11c, virtual false, abstract: false, final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off);

  /// @brief Method Update, addr 0xea9c90, size 0x70, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xea9d00, size 0x110, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method RoundABC, addr 0xea9e10, size 0x184, virtual false, abstract: false, final false
  inline void RoundABC(int64_t x, int64_t mul);

  /// @brief Method RoundBCA, addr 0xea9f94, size 0x180, virtual false, abstract: false, final false
  inline void RoundBCA(int64_t x, int64_t mul);

  /// @brief Method RoundCAB, addr 0xeaa114, size 0x180, virtual false, abstract: false, final false
  inline void RoundCAB(int64_t x, int64_t mul);

  /// @brief Method KeySchedule, addr 0xeaa294, size 0xdc, virtual false, abstract: false, final false
  inline void KeySchedule();

  /// @brief Method ProcessBlock, addr 0xea98ac, size 0x3e4, virtual false, abstract: false, final false
  inline void ProcessBlock();

  /// @brief Method UnpackWord, addr 0xeaa370, size 0xf0, virtual false, abstract: false, final false
  inline void UnpackWord(int64_t r, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method ProcessLength, addr 0xeaa460, size 0x2c, virtual false, abstract: false, final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method Finish, addr 0xeaa48c, size 0x4c, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method DoFinal, addr 0xeaa4d8, size 0x60, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xea9520, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Copy, addr 0xeaa538, size 0x60, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset, addr 0xea9658, size 0xe8, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TigerDigest(TigerDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TigerDigest(TigerDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TigerDigest();

public:
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

  /// @brief Field MyByteLength offset 0xffffffff size 0x4
  static constexpr int32_t MyByteLength{ static_cast<int32_t>(0x40) };

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x18) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::TigerDigest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___a) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___b) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___byteCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___Buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___bOff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___x) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::TigerDigest, ___xOff) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::TigerDigest*, "Org.BouncyCastle.Crypto.Digests", "TigerDigest");
