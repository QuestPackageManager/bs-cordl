#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/LongArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongArray)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::LongArray);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.LongArray
class CORDL_TYPE LongArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field BitLengths, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BitLengths, put = setStaticF_BitLengths)) ::ArrayW<uint8_t, ::Array<uint8_t>*> BitLengths;

  /// @brief Field INTERLEAVE2_TABLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_INTERLEAVE2_TABLE, put = setStaticF_INTERLEAVE2_TABLE)) ::ArrayW<uint16_t, ::Array<uint16_t>*> INTERLEAVE2_TABLE;

  /// @brief Field INTERLEAVE3_TABLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_INTERLEAVE3_TABLE, put = setStaticF_INTERLEAVE3_TABLE)) ::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE3_TABLE;

  /// @brief Field INTERLEAVE4_TABLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_INTERLEAVE4_TABLE, put = setStaticF_INTERLEAVE4_TABLE)) ::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE4_TABLE;

  /// @brief Field INTERLEAVE5_TABLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_INTERLEAVE5_TABLE, put = setStaticF_INTERLEAVE5_TABLE)) ::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE5_TABLE;

  /// @brief Field INTERLEAVE7_TABLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_INTERLEAVE7_TABLE, put = setStaticF_INTERLEAVE7_TABLE)) ::ArrayW<int64_t, ::Array<int64_t>*> INTERLEAVE7_TABLE;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field m_ints, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ints, put = __cordl_internal_set_m_ints)) ::ArrayW<int64_t, ::Array<int64_t>*> m_ints;

  /// @brief Method Add, addr 0x24da530, size 0x78, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count);

  /// @brief Method Add, addr 0x24da6dc, size 0x90, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff,
                         int32_t count);

  /// @brief Method AddBoth, addr 0x24da76c, size 0x98, virtual false, abstract: false, final false
  static inline void AddBoth(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y1, int32_t y1Off, ::ArrayW<int64_t, ::Array<int64_t>*> y2, int32_t y2Off,
                             int32_t count);

  /// @brief Method AddOne, addr 0x24d34e8, size 0x118, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* AddOne();

  /// @brief Method AddShiftedByBitsSafe, addr 0x24da430, size 0x100, virtual false, abstract: false, final false
  inline void AddShiftedByBitsSafe(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t otherDegree, int32_t bits);

  /// @brief Method AddShiftedByWords, addr 0x24d338c, size 0xd4, virtual false, abstract: false, final false
  inline void AddShiftedByWords(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t words);

  /// @brief Method AddShiftedDown, addr 0x24da64c, size 0x90, virtual false, abstract: false, final false
  static inline int64_t AddShiftedDown(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count, int32_t shift);

  /// @brief Method AddShiftedUp, addr 0x24da5a8, size 0xa4, virtual false, abstract: false, final false
  static inline int64_t AddShiftedUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count, int32_t shift);

  /// @brief Method BitLength, addr 0x24da090, size 0x120, virtual false, abstract: false, final false
  static inline int32_t BitLength(int64_t w);

  /// @brief Method Copy, addr 0x24d32f4, size 0x98, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Copy();

  /// @brief Method CopyTo, addr 0x24d05ec, size 0x2c, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff);

  /// @brief Method Degree, addr 0x24d2c30, size 0xa0, virtual false, abstract: false, final false
  inline int32_t Degree();

  /// @brief Method DegreeFrom, addr 0x24da1b0, size 0xac, virtual false, abstract: false, final false
  inline int32_t DegreeFrom(int32_t limit);

  /// @brief Method Distribute, addr 0x24da804, size 0xa8, virtual false, abstract: false, final false
  static inline void Distribute(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t src, int32_t dst1, int32_t dst2, int32_t count);

  /// @brief Method Equals, addr 0x24dcaf8, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x24dcb80, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::LongArray* other);

  /// @brief Method FlipBit, addr 0x24da97c, size 0x40, virtual false, abstract: false, final false
  static inline void FlipBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t n);

  /// @brief Method FlipVector, addr 0x24dbfc4, size 0x100, virtual false, abstract: false, final false
  static inline void FlipVector(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t yLen, int32_t bits);

  /// @brief Method FlipWord, addr 0x24da8c8, size 0x7c, virtual false, abstract: false, final false
  static inline void FlipWord(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int64_t word);

  /// @brief Method GetHashCode, addr 0x24dcc3c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetUsedLength, addr 0x24d9f90, size 0x1c, virtual false, abstract: false, final false
  inline int32_t GetUsedLength();

  /// @brief Method GetUsedLengthFrom, addr 0x24d9fac, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetUsedLengthFrom(int32_t from);

  /// @brief Method Interleave, addr 0x24db5a8, size 0x190, virtual false, abstract: false, final false
  static inline void Interleave(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t width);

  /// @brief Method Interleave2_32to64, addr 0x24dc0c4, size 0xc0, virtual false, abstract: false, final false
  static inline int64_t Interleave2_32to64(int32_t x);

  /// @brief Method Interleave2_n, addr 0x24dc97c, size 0xe8, virtual false, abstract: false, final false
  static inline int64_t Interleave2_n(int64_t x, int32_t rounds);

  /// @brief Method Interleave2_n, addr 0x24dc50c, size 0xf4, virtual false, abstract: false, final false
  static inline void Interleave2_n(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t rounds);

  /// @brief Method Interleave3, addr 0x24dc600, size 0x88, virtual false, abstract: false, final false
  static inline int64_t Interleave3(int64_t x);

  /// @brief Method Interleave3, addr 0x24dc260, size 0xe4, virtual false, abstract: false, final false
  static inline void Interleave3(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method Interleave3_13to65, addr 0x24dc7d4, size 0x94, virtual false, abstract: false, final false
  static inline int64_t Interleave3_13to65(int32_t x);

  /// @brief Method Interleave3_21to63, addr 0x24dc688, size 0xac, virtual false, abstract: false, final false
  static inline int64_t Interleave3_21to63(int32_t x);

  /// @brief Method Interleave4_16to64, addr 0x24dca64, size 0x94, virtual false, abstract: false, final false
  static inline int64_t Interleave4_16to64(int32_t x);

  /// @brief Method Interleave5, addr 0x24dc734, size 0xa0, virtual false, abstract: false, final false
  static inline int64_t Interleave5(int64_t x);

  /// @brief Method Interleave5, addr 0x24dc344, size 0xe4, virtual false, abstract: false, final false
  static inline void Interleave5(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method Interleave7, addr 0x24dc868, size 0x114, virtual false, abstract: false, final false
  static inline int64_t Interleave7(int64_t x);

  /// @brief Method Interleave7, addr 0x24dc428, size 0xe4, virtual false, abstract: false, final false
  static inline void Interleave7(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method IsOne, addr 0x24d2ce8, size 0x70, virtual false, abstract: false, final false
  inline bool IsOne();

  /// @brief Method IsZero, addr 0x24d2d70, size 0x5c, virtual false, abstract: false, final false
  inline bool IsZero();

  /// @brief Method ModInverse, addr 0x24d4988, size 0x470, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModInverse(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModMultiply, addr 0x24d36dc, size 0x45c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiply(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModMultiplyAlt, addr 0x24db0b8, size 0x4f0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyAlt(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModMultiplyLD, addr 0x24daad4, size 0x534, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyLD(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModReduce, addr 0x24db738, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModReduce(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModSquare, addr 0x24d42e0, size 0x194, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModSquare(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModSquareN, addr 0x24d47c0, size 0x138, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModSquareN(int32_t n, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Multiply, addr 0x24d3cdc, size 0x450, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Multiply(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method MultiplyWord, addr 0x24da9bc, size 0x118, virtual false, abstract: false, final false
  static inline void MultiplyWord(int64_t a, ::ArrayW<int64_t, ::Array<int64_t>*> b, int32_t bLen, ::ArrayW<int64_t, ::Array<int64_t>*> c, int32_t cOff);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::Org::BouncyCastle::Math::BigInteger* bigInt);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(int32_t intLen);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints, int32_t off, int32_t len);

  /// @brief Method Reduce, addr 0x24d412c, size 0xe0, virtual false, abstract: false, final false
  inline void Reduce(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceBit, addr 0x24dbdd8, size 0xfc, virtual false, abstract: false, final false
  static inline void ReduceBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceBitWise, addr 0x24dbd14, size 0xc4, virtual false, abstract: false, final false
  static inline void ReduceBitWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t BitLength, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceInPlace, addr 0x24db818, size 0x278, virtual false, abstract: false, final false
  static inline int32_t ReduceInPlace(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceResult, addr 0x24db008, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::LongArray* ReduceResult(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceVectorWise, addr 0x24dba90, size 0x114, virtual false, abstract: false, final false
  static inline void ReduceVectorWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t words, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceWord, addr 0x24dbed4, size 0xf0, virtual false, abstract: false, final false
  static inline void ReduceWord(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int64_t word, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceWordWise, addr 0x24dbba4, size 0x170, virtual false, abstract: false, final false
  static inline void ReduceWordWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t toBit, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ResizedInts, addr 0x24da25c, size 0xbc, virtual false, abstract: false, final false
  inline ::ArrayW<int64_t, ::Array<int64_t>*> ResizedInts(int32_t newLen);

  /// @brief Method ShiftUp, addr 0x24da318, size 0x80, virtual false, abstract: false, final false
  static inline int64_t ShiftUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, int32_t count, int32_t shift);

  /// @brief Method ShiftUp, addr 0x24da398, size 0x98, virtual false, abstract: false, final false
  static inline int64_t ShiftUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t shift);

  /// @brief Method Square, addr 0x24d45d4, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Square(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method SquareInPlace, addr 0x24dc184, size 0xdc, virtual false, abstract: false, final false
  static inline void SquareInPlace(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xLen, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method TestBit, addr 0x24da944, size 0x38, virtual false, abstract: false, final false
  static inline bool TestBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t n);

  /// @brief Method TestBitZero, addr 0x24d2e08, size 0x34, virtual false, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0x24d2e54, size 0x204, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method ToString, addr 0x24dccb8, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get_m_ints() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get_m_ints();

  constexpr void __cordl_internal_set_m_ints(::ArrayW<int64_t, ::Array<int64_t>*> value);

  /// @brief Method .ctor, addr 0x24d29bc, size 0x24c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* bigInt);

  /// @brief Method .ctor, addr 0x24d9e74, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t intLen);

  /// @brief Method .ctor, addr 0x24d0ae0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints);

  /// @brief Method .ctor, addr 0x24d9edc, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints, int32_t off, int32_t len);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_BitLengths();

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_INTERLEAVE2_TABLE();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE3_TABLE();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE4_TABLE();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE5_TABLE();

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_INTERLEAVE7_TABLE();

  /// @brief Method get_Length, addr 0x24da8ac, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  static inline void setStaticF_BitLengths(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_INTERLEAVE2_TABLE(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  static inline void setStaticF_INTERLEAVE3_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_INTERLEAVE4_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_INTERLEAVE5_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_INTERLEAVE7_TABLE(::ArrayW<int64_t, ::Array<int64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongArray(LongArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongArray(LongArray const&) = delete;

  /// @brief Field ZEROES offset 0xffffffff size 0x8
  static constexpr ::ConstString ZEROES{ u"0000000000000000000000000000000000000000000000000000000000000000" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1574 };

  /// @brief Field m_ints, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_ints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::LongArray, ___m_ints) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::LongArray, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::LongArray);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::LongArray*, "Org.BouncyCastle.Math.EC", "LongArray");
