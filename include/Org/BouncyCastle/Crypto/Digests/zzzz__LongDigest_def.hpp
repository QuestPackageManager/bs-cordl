#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(756))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::LongDigest*
class CORDL_TYPE LongDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field MyByteLength, offset 0x10, size 0x4
  __declspec(property(get = __get_MyByteLength, put = __set_MyByteLength)) int32_t MyByteLength;

  /// @brief Field xBuf, offset 0x18, size 0x8
  __declspec(property(get = __get_xBuf, put = __set_xBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> xBuf;

  /// @brief Field xBufOff, offset 0x20, size 0x4
  __declspec(property(get = __get_xBufOff, put = __set_xBufOff)) int32_t xBufOff;

  /// @brief Field byteCount1, offset 0x28, size 0x8
  __declspec(property(get = __get_byteCount1, put = __set_byteCount1)) int64_t byteCount1;

  /// @brief Field byteCount2, offset 0x30, size 0x8
  __declspec(property(get = __get_byteCount2, put = __set_byteCount2)) int64_t byteCount2;

  /// @brief Field H1, offset 0x38, size 0x8
  __declspec(property(get = __get_H1, put = __set_H1)) uint64_t H1;

  /// @brief Field H2, offset 0x40, size 0x8
  __declspec(property(get = __get_H2, put = __set_H2)) uint64_t H2;

  /// @brief Field H3, offset 0x48, size 0x8
  __declspec(property(get = __get_H3, put = __set_H3)) uint64_t H3;

  /// @brief Field H4, offset 0x50, size 0x8
  __declspec(property(get = __get_H4, put = __set_H4)) uint64_t H4;

  /// @brief Field H5, offset 0x58, size 0x8
  __declspec(property(get = __get_H5, put = __set_H5)) uint64_t H5;

  /// @brief Field H6, offset 0x60, size 0x8
  __declspec(property(get = __get_H6, put = __set_H6)) uint64_t H6;

  /// @brief Field H7, offset 0x68, size 0x8
  __declspec(property(get = __get_H7, put = __set_H7)) uint64_t H7;

  /// @brief Field H8, offset 0x70, size 0x8
  __declspec(property(get = __get_H8, put = __set_H8)) uint64_t H8;

  /// @brief Field W, offset 0x78, size 0x8
  __declspec(property(get = __get_W, put = __set_W))::ArrayW<uint64_t, ::Array<uint64_t>*> W;

  /// @brief Field wOff, offset 0x80, size 0x4
  __declspec(property(get = __get_wOff, put = __set_wOff)) int32_t wOff;

  /// @brief Field K, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_K, put = setStaticF_K))::ArrayW<uint64_t, ::Array<uint64_t>*> K;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr int32_t& __get_MyByteLength();

  constexpr int32_t const& __get_MyByteLength() const;

  constexpr void __set_MyByteLength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_xBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_xBuf() const;

  constexpr void __set_xBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_xBufOff();

  constexpr int32_t const& __get_xBufOff() const;

  constexpr void __set_xBufOff(int32_t value);

  constexpr int64_t& __get_byteCount1();

  constexpr int64_t const& __get_byteCount1() const;

  constexpr void __set_byteCount1(int64_t value);

  constexpr int64_t& __get_byteCount2();

  constexpr int64_t const& __get_byteCount2() const;

  constexpr void __set_byteCount2(int64_t value);

  constexpr uint64_t& __get_H1();

  constexpr uint64_t const& __get_H1() const;

  constexpr void __set_H1(uint64_t value);

  constexpr uint64_t& __get_H2();

  constexpr uint64_t const& __get_H2() const;

  constexpr void __set_H2(uint64_t value);

  constexpr uint64_t& __get_H3();

  constexpr uint64_t const& __get_H3() const;

  constexpr void __set_H3(uint64_t value);

  constexpr uint64_t& __get_H4();

  constexpr uint64_t const& __get_H4() const;

  constexpr void __set_H4(uint64_t value);

  constexpr uint64_t& __get_H5();

  constexpr uint64_t const& __get_H5() const;

  constexpr void __set_H5(uint64_t value);

  constexpr uint64_t& __get_H6();

  constexpr uint64_t const& __get_H6() const;

  constexpr void __set_H6(uint64_t value);

  constexpr uint64_t& __get_H7();

  constexpr uint64_t const& __get_H7() const;

  constexpr void __set_H7(uint64_t value);

  constexpr uint64_t& __get_H8();

  constexpr uint64_t const& __get_H8() const;

  constexpr void __set_H8(uint64_t value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_W();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_W() const;

  constexpr void __set_W(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr int32_t& __get_wOff();

  constexpr int32_t const& __get_wOff() const;

  constexpr void __set_wOff(int32_t value);

  static inline void setStaticF_K(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_K();

  static inline ::Org::BouncyCastle::Crypto::Digests::LongDigest* New_ctor();

  /// @brief Method .ctor addr 0x122672c size 0xa0 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::LongDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  /// @brief Method .ctor addr 0x12267cc size 0xac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  /// @brief Method CopyIn addr 0x1226878 size 0x9c virtual false final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::LongDigest* t);

  /// @brief Method Update addr 0x1226914 size 0x74 virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0x12269fc size 0x110 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Finish addr 0x1226b0c size 0x6c virtual false final false
  inline void Finish();

  /// @brief Method Reset addr 0x1227188 size 0x6c virtual true final false
  inline void Reset();

  /// @brief Method ProcessWord addr 0x1226988 size 0x74 virtual false final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method AdjustByteCounts addr 0x1226b78 size 0x24 virtual false final false
  inline void AdjustByteCounts();

  /// @brief Method ProcessLength addr 0x1226b9c size 0x60 virtual false final false
  inline void ProcessLength(int64_t lowW, int64_t hiW);

  /// @brief Method ProcessBlock addr 0x1226bfc size 0x58c virtual false final false
  inline void ProcessBlock();

  /// @brief Method Ch addr 0x1227224 size 0x10 virtual false final false
  static inline uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);

  /// @brief Method Maj addr 0x1227244 size 0x14 virtual false final false
  static inline uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);

  /// @brief Method Sum0 addr 0x1227234 size 0x10 virtual false final false
  static inline uint64_t Sum0(uint64_t x);

  /// @brief Method Sum1 addr 0x1227214 size 0x10 virtual false final false
  static inline uint64_t Sum1(uint64_t x);

  /// @brief Method Sigma0 addr 0x1227204 size 0x10 virtual false final false
  static inline uint64_t Sigma0(uint64_t x);

  /// @brief Method Sigma1 addr 0x12271f4 size 0x10 virtual false final false
  static inline uint64_t Sigma1(uint64_t x);

  /// @brief Method GetByteLength addr 0x1227258 size 0x8 virtual true final true
  inline int32_t GetByteLength();

  /// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* t);

  // Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongDigest(LongDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongDigest(LongDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongDigest();

public:
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

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::LongDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::LongDigest*, "Org.BouncyCastle.Crypto.Digests", "LongDigest");
