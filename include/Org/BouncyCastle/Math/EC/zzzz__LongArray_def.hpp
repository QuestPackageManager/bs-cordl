#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Math.EC::LongArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1574))
// CS Name: ::Org.BouncyCastle.Math.EC::LongArray*
class CORDL_TYPE LongArray : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ints, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ints, put = __set_m_ints))::ArrayW<int64_t, ::Array<int64_t>*> m_ints;

  /// @brief Field INTERLEAVE2_TABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INTERLEAVE2_TABLE, put = setStaticF_INTERLEAVE2_TABLE))::ArrayW<uint16_t, ::Array<uint16_t>*> INTERLEAVE2_TABLE;

  /// @brief Field INTERLEAVE3_TABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INTERLEAVE3_TABLE, put = setStaticF_INTERLEAVE3_TABLE))::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE3_TABLE;

  /// @brief Field INTERLEAVE4_TABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INTERLEAVE4_TABLE, put = setStaticF_INTERLEAVE4_TABLE))::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE4_TABLE;

  /// @brief Field INTERLEAVE5_TABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INTERLEAVE5_TABLE, put = setStaticF_INTERLEAVE5_TABLE))::ArrayW<int32_t, ::Array<int32_t>*> INTERLEAVE5_TABLE;

  /// @brief Field INTERLEAVE7_TABLE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_INTERLEAVE7_TABLE, put = setStaticF_INTERLEAVE7_TABLE))::ArrayW<int64_t, ::Array<int64_t>*> INTERLEAVE7_TABLE;

  /// @brief Field BitLengths, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BitLengths, put = setStaticF_BitLengths))::ArrayW<uint8_t, ::Array<uint8_t>*> BitLengths;

  __declspec(property(get = get_Length)) int32_t Length;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get_m_ints();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get_m_ints() const;

  constexpr void __set_m_ints(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline void setStaticF_INTERLEAVE2_TABLE(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  static inline ::ArrayW<uint16_t, ::Array<uint16_t>*> getStaticF_INTERLEAVE2_TABLE();

  static inline void setStaticF_INTERLEAVE3_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE3_TABLE();

  static inline void setStaticF_INTERLEAVE4_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE4_TABLE();

  static inline void setStaticF_INTERLEAVE5_TABLE(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_INTERLEAVE5_TABLE();

  static inline void setStaticF_INTERLEAVE7_TABLE(::ArrayW<int64_t, ::Array<int64_t>*> value);

  static inline ::ArrayW<int64_t, ::Array<int64_t>*> getStaticF_INTERLEAVE7_TABLE();

  static inline void setStaticF_BitLengths(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_BitLengths();

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(int32_t intLen);

  /// @brief Method .ctor addr 0xfe6978 size 0x68 virtual false final false
  inline void _ctor(int32_t intLen);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints);

  /// @brief Method .ctor addr 0xfdd3e0 size 0x28 virtual false final false
  inline void _ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints, int32_t off, int32_t len);

  /// @brief Method .ctor addr 0xfe69e0 size 0xb4 virtual false final false
  inline void _ctor(::ArrayW<int64_t, ::Array<int64_t>*> ints, int32_t off, int32_t len);

  static inline ::Org::BouncyCastle::Math::EC::LongArray* New_ctor(::Org::BouncyCastle::Math::BigInteger* bigInt);

  /// @brief Method .ctor addr 0xfdf2dc size 0x224 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* bigInt);

  /// @brief Method CopyTo addr 0xfdcf08 size 0x2c virtual false final false
  inline void CopyTo(::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff);

  /// @brief Method IsOne addr 0xfdf5e4 size 0x60 virtual false final false
  inline bool IsOne();

  /// @brief Method IsZero addr 0xfdf698 size 0x4c virtual false final false
  inline bool IsZero();

  /// @brief Method GetUsedLength addr 0xfe6a94 size 0x1c virtual false final false
  inline int32_t GetUsedLength();

  /// @brief Method GetUsedLengthFrom addr 0xfe6ab0 size 0xe0 virtual false final false
  inline int32_t GetUsedLengthFrom(int32_t from);

  /// @brief Method Degree addr 0xfdf528 size 0xa4 virtual false final false
  inline int32_t Degree();

  /// @brief Method DegreeFrom addr 0xfe6cb0 size 0xac virtual false final false
  inline int32_t DegreeFrom(int32_t limit);

  /// @brief Method BitLength addr 0xfe6b90 size 0x120 virtual false final false
  static inline int32_t BitLength(int64_t w);

  /// @brief Method ResizedInts addr 0xfe6d5c size 0xbc virtual false final false
  inline ::ArrayW<int64_t, ::Array<int64_t>*> ResizedInts(int32_t newLen);

  /// @brief Method ToBigInteger addr 0xfdf76c size 0x214 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method ShiftUp addr 0xfe6e18 size 0x80 virtual false final false
  static inline int64_t ShiftUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, int32_t count, int32_t shift);

  /// @brief Method ShiftUp addr 0xfe6e98 size 0x98 virtual false final false
  static inline int64_t ShiftUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t shift);

  /// @brief Method AddOne addr 0xfdfe2c size 0x11c virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* AddOne();

  /// @brief Method AddShiftedByBitsSafe addr 0xfe6f30 size 0x100 virtual false final false
  inline void AddShiftedByBitsSafe(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t otherDegree, int32_t bits);

  /// @brief Method AddShiftedUp addr 0xfe70a8 size 0xa4 virtual false final false
  static inline int64_t AddShiftedUp(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count, int32_t shift);

  /// @brief Method AddShiftedDown addr 0xfe714c size 0x90 virtual false final false
  static inline int64_t AddShiftedDown(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count, int32_t shift);

  /// @brief Method AddShiftedByWords addr 0xfdfccc size 0xd4 virtual false final false
  inline void AddShiftedByWords(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t words);

  /// @brief Method Add addr 0xfe7030 size 0x78 virtual false final false
  static inline void Add(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t count);

  /// @brief Method Add addr 0xfe71dc size 0x90 virtual false final false
  static inline void Add(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff,
                         int32_t count);

  /// @brief Method AddBoth addr 0xfe726c size 0x98 virtual false final false
  static inline void AddBoth(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y1, int32_t y1Off, ::ArrayW<int64_t, ::Array<int64_t>*> y2, int32_t y2Off,
                             int32_t count);

  /// @brief Method Distribute addr 0xfe7304 size 0xa8 virtual false final false
  static inline void Distribute(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t src, int32_t dst1, int32_t dst2, int32_t count);

  /// @brief Method get_Length addr 0xfe73ac size 0x1c virtual false final false
  inline int32_t get_Length();

  /// @brief Method FlipWord addr 0xfe73c8 size 0x7c virtual false final false
  static inline void FlipWord(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int64_t word);

  /// @brief Method TestBitZero addr 0xfdf720 size 0x34 virtual false final false
  inline bool TestBitZero();

  /// @brief Method TestBit addr 0xfe7444 size 0x40 virtual false final false
  static inline bool TestBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t n);

  /// @brief Method FlipBit addr 0xfe7484 size 0x44 virtual false final false
  static inline void FlipBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t n);

  /// @brief Method MultiplyWord addr 0xfe74c8 size 0x118 virtual false final false
  static inline void MultiplyWord(int64_t a, ::ArrayW<int64_t, ::Array<int64_t>*> b, int32_t bLen, ::ArrayW<int64_t, ::Array<int64_t>*> c, int32_t cOff);

  /// @brief Method ModMultiplyLD addr 0xfe75e0 size 0x518 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyLD(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModMultiply addr 0xfe0028 size 0x450 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiply(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModMultiplyAlt addr 0xfe7bb0 size 0x4bc virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModMultiplyAlt(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModReduce addr 0xfe81e4 size 0xe4 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModReduce(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Multiply addr 0xfe0620 size 0x430 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Multiply(::Org::BouncyCastle::Math::EC::LongArray* other, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Reduce addr 0xfe0a50 size 0xe0 virtual false final false
  inline void Reduce(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceResult addr 0xfe7af8 size 0xb8 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::LongArray* ReduceResult(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceInPlace addr 0xfe82c8 size 0x248 virtual false final false
  static inline int32_t ReduceInPlace(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceBitWise addr 0xfe87b8 size 0xc4 virtual false final false
  static inline void ReduceBitWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t BitLength, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceBit addr 0xfe887c size 0x114 virtual false final false
  static inline void ReduceBit(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceWordWise addr 0xfe8648 size 0x170 virtual false final false
  static inline void ReduceWordWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t toBit, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceWord addr 0xfe8990 size 0x108 virtual false final false
  static inline void ReduceWord(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t bit, int64_t word, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ReduceVectorWise addr 0xfe8510 size 0x138 virtual false final false
  static inline void ReduceVectorWise(::ArrayW<int64_t, ::Array<int64_t>*> buf, int32_t off, int32_t len, int32_t words, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method FlipVector addr 0xfe8a98 size 0x100 virtual false final false
  static inline void FlipVector(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> y, int32_t yOff, int32_t yLen, int32_t bits);

  /// @brief Method ModSquare addr 0xfe0c08 size 0x190 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModSquare(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method ModSquareN addr 0xfe10f0 size 0x134 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModSquareN(int32_t n, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Square addr 0xfe0efc size 0x150 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Square(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method SquareInPlace addr 0xfe8c58 size 0xe0 virtual false final false
  static inline void SquareInPlace(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xLen, int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Interleave addr 0xfe806c size 0x178 virtual false final false
  static inline void Interleave(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t width);

  /// @brief Method Interleave3 addr 0xfe8d38 size 0xe4 virtual false final false
  static inline void Interleave3(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method Interleave3 addr 0xfe90d8 size 0x88 virtual false final false
  static inline int64_t Interleave3(int64_t x);

  /// @brief Method Interleave3_21to63 addr 0xfe9160 size 0xac virtual false final false
  static inline int64_t Interleave3_21to63(int32_t x);

  /// @brief Method Interleave5 addr 0xfe8e1c size 0xe4 virtual false final false
  static inline void Interleave5(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method Interleave5 addr 0xfe920c size 0xa0 virtual false final false
  static inline int64_t Interleave5(int64_t x);

  /// @brief Method Interleave3_13to65 addr 0xfe92ac size 0x94 virtual false final false
  static inline int64_t Interleave3_13to65(int32_t x);

  /// @brief Method Interleave7 addr 0xfe8f00 size 0xe4 virtual false final false
  static inline void Interleave7(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count);

  /// @brief Method Interleave7 addr 0xfe9340 size 0x114 virtual false final false
  static inline int64_t Interleave7(int64_t x);

  /// @brief Method Interleave2_n addr 0xfe8fe4 size 0xf4 virtual false final false
  static inline void Interleave2_n(::ArrayW<int64_t, ::Array<int64_t>*> x, int32_t xOff, ::ArrayW<int64_t, ::Array<int64_t>*> z, int32_t zOff, int32_t count, int32_t rounds);

  /// @brief Method Interleave2_n addr 0xfe9454 size 0xec virtual false final false
  static inline int64_t Interleave2_n(int64_t x, int32_t rounds);

  /// @brief Method Interleave4_16to64 addr 0xfe9540 size 0x94 virtual false final false
  static inline int64_t Interleave4_16to64(int32_t x);

  /// @brief Method Interleave2_32to64 addr 0xfe8b98 size 0xc0 virtual false final false
  static inline int64_t Interleave2_32to64(int32_t x);

  /// @brief Method ModInverse addr 0xfe12b8 size 0x480 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* ModInverse(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks);

  /// @brief Method Equals addr 0xfe95d4 size 0x88 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xfe965c size 0xb0 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::LongArray* other);

  /// @brief Method GetHashCode addr 0xfe970c size 0x7c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Copy addr 0xfdfc2c size 0xa0 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::LongArray* Copy();

  /// @brief Method ToString addr 0xfe9788 size 0x1bc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongArray(LongArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongArray(LongArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongArray();

public:
  /// @brief Field m_ints, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___m_ints;

  /// @brief Field ZEROES offset 0xffffffff size 0x8
  static constexpr ::ConstString ZEROES{ u"0000000000000000000000000000000000000000000000000000000000000000" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::LongArray, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::LongArray, ___m_ints) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::LongArray);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::LongArray*, "Org.BouncyCastle.Math.EC", "LongArray");
