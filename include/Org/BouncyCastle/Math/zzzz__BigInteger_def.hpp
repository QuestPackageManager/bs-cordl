#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IList;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::BigInteger);
// Type: Org.BouncyCastle.Math::BigInteger
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math::BigInteger*
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BitCount)) int32_t BitCount;

  __declspec(property(get = get_BitLength)) int32_t BitLength;

  /// @brief Field BitLengthTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BitLengthTable, put = setStaticF_BitLengthTable))::ArrayW<uint8_t, ::Array<uint8_t>*> BitLengthTable;

  /// @brief Field ExpWindowThresholds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExpWindowThresholds, put = setStaticF_ExpWindowThresholds))::ArrayW<int32_t, ::Array<int32_t>*> ExpWindowThresholds;

  /// @brief Field Four, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Four, put = setStaticF_Four))::Org::BouncyCastle::Math::BigInteger* Four;

  __declspec(property(get = get_IntValue)) int32_t IntValue;

  __declspec(property(get = get_IntValueExact)) int32_t IntValueExact;

  __declspec(property(get = get_LongValue)) int64_t LongValue;

  __declspec(property(get = get_LongValueExact)) int64_t LongValueExact;

  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field RandomSource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RandomSource, put = setStaticF_RandomSource))::Org::BouncyCastle::Security::SecureRandom* RandomSource;

  /// @brief Field SMALL_CONSTANTS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SMALL_CONSTANTS,
                             put = setStaticF_SMALL_CONSTANTS))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> SMALL_CONSTANTS;

  __declspec(property(get = get_SignValue)) int32_t SignValue;

  /// @brief Field Ten, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ten, put = setStaticF_Ten))::Org::BouncyCastle::Math::BigInteger* Ten;

  /// @brief Field Three, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Three, put = setStaticF_Three))::Org::BouncyCastle::Math::BigInteger* Three;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::Org::BouncyCastle::Math::BigInteger* Zero;

  /// @brief Field ZeroEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ZeroEncoding, put = setStaticF_ZeroEncoding))::ArrayW<uint8_t, ::Array<uint8_t>*> ZeroEncoding;

  /// @brief Field ZeroMagnitude, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ZeroMagnitude, put = setStaticF_ZeroMagnitude))::ArrayW<int32_t, ::Array<int32_t>*> ZeroMagnitude;

  /// @brief Field mQuote, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_mQuote, put = __cordl_internal_set_mQuote)) int32_t mQuote;

  /// @brief Field magnitude, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_magnitude, put = __cordl_internal_set_magnitude))::ArrayW<int32_t, ::Array<int32_t>*> magnitude;

  /// @brief Field nBitLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nBitLength, put = __cordl_internal_set_nBitLength)) int32_t nBitLength;

  /// @brief Field nBits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_nBits, put = __cordl_internal_set_nBits)) int32_t nBits;

  /// @brief Field primeLists, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primeLists, put = setStaticF_primeLists))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> primeLists;

  /// @brief Field primeProducts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primeProducts, put = setStaticF_primeProducts))::ArrayW<int32_t, ::Array<int32_t>*> primeProducts;

  /// @brief Field radix10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix10, put = setStaticF_radix10))::Org::BouncyCastle::Math::BigInteger* radix10;

  /// @brief Field radix10E, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix10E, put = setStaticF_radix10E))::Org::BouncyCastle::Math::BigInteger* radix10E;

  /// @brief Field radix16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix16, put = setStaticF_radix16))::Org::BouncyCastle::Math::BigInteger* radix16;

  /// @brief Field radix16E, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix16E, put = setStaticF_radix16E))::Org::BouncyCastle::Math::BigInteger* radix16E;

  /// @brief Field radix2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix2, put = setStaticF_radix2))::Org::BouncyCastle::Math::BigInteger* radix2;

  /// @brief Field radix2E, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix2E, put = setStaticF_radix2E))::Org::BouncyCastle::Math::BigInteger* radix2E;

  /// @brief Field radix8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix8, put = setStaticF_radix8))::Org::BouncyCastle::Math::BigInteger* radix8;

  /// @brief Field radix8E, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_radix8E, put = setStaticF_radix8E))::Org::BouncyCastle::Math::BigInteger* radix8E;

  /// @brief Field sign, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sign, put = __cordl_internal_set_sign)) int32_t sign;

  /// @brief Method Abs, addr 0x1202ae0, size 0x10, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Abs();

  /// @brief Method Add, addr 0x1202004, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Add(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method AddMagnitudes, addr 0x1202b64, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> AddMagnitudes(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method AddToMagnitude, addr 0x1202d64, size 0x16c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* AddToMagnitude(::ArrayW<int32_t, ::Array<int32_t>*> magToAdd);

  /// @brief Method And, addr 0x1202ed0, size 0x274, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* And(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method AndNot, addr 0x120315c, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* AndNot(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method AppendZeroExtendedString, addr 0x1208a18, size 0x64, virtual false, abstract: false, final false
  static inline void AppendZeroExtendedString(::System::Text::StringBuilder* sb, ::StringW s, int32_t minLength);

  /// @brief Method Arbitrary, addr 0x1201608, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Arbitrary(int32_t sizeInBits);

  /// @brief Method BitCnt, addr 0x1203288, size 0x34, virtual false, abstract: false, final false
  static inline int32_t BitCnt(int32_t i);

  /// @brief Method BitLen, addr 0x12033c0, size 0x124, virtual false, abstract: false, final false
  static inline int32_t BitLen(int32_t w);

  /// @brief Method CalcBitLength, addr 0x12032bc, size 0x104, virtual false, abstract: false, final false
  static inline int32_t CalcBitLength(int32_t sign, int32_t indx, ::ArrayW<int32_t, ::Array<int32_t>*> mag);

  /// @brief Method CheckProbablePrime, addr 0x12028f8, size 0x1e8, virtual false, abstract: false, final false
  inline bool CheckProbablePrime(int32_t certainty, ::System::Random* random, bool randomlySelected);

  /// @brief Method ClearBit, addr 0x1209378, size 0x11c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ClearBit(int32_t n);

  /// @brief Method CompareNoLeadingZeroes, addr 0x1203714, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t CompareNoLeadingZeroes(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CompareTo, addr 0x1203508, size 0x84, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x120358c, size 0xac, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method CompareTo, addr 0x1203638, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t CompareTo(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CreateUValueOf, addr 0x120123c, size 0x138, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateUValueOf(uint64_t value);

  /// @brief Method CreateValueOf, addr 0x1208d08, size 0xa8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateValueOf(int64_t value);

  /// @brief Method CreateWindowEntry, addr 0x12074ec, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CreateWindowEntry(int32_t mult, int32_t zeroes);

  /// @brief Method Divide, addr 0x12037a0, size 0x48c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> Divide(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Divide, addr 0x1203ff4, size 0x1e8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Divide(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method DivideAndRemainder, addr 0x12041dc, size 0x310, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DivideAndRemainder(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method DivideWords, addr 0x1206974, size 0xf0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* DivideWords(int32_t w);

  /// @brief Method Equals, addr 0x1204640, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ExtEuclid, addr 0x1205d44, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ExtEuclid(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                 ByRef<::Org::BouncyCastle::Math::BigInteger*> u1Out);

  /// @brief Method FlipBit, addr 0x1209494, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* FlipBit(int32_t n);

  /// @brief Method FlipExistingBit, addr 0x1209284, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* FlipExistingBit(int32_t n);

  /// @brief Method Gcd, addr 0x1204774, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Gcd(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method GetByteLength, addr 0x12015f0, size 0x18, virtual false, abstract: false, final false
  static inline int32_t GetByteLength(int32_t nBits);

  /// @brief Method GetHashCode, addr 0x1204874, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLowestSetBit, addr 0x1208db0, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetLowestSetBit();

  /// @brief Method GetLowestSetBitMaskFirst, addr 0x1205040, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetLowestSetBitMaskFirst(int32_t firstWordMask);

  /// @brief Method GetMQuote, addr 0x1206b34, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetMQuote();

  /// @brief Method GetWindowList, addr 0x1206770, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetWindowList(::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t extraBits);

  /// @brief Method Inc, addr 0x12048cc, size 0x100, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Inc();

  /// @brief Method IsEqualMagnitude, addr 0x12046f4, size 0x80, virtual false, abstract: false, final false
  inline bool IsEqualMagnitude(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsProbablePrime, addr 0x1204af4, size 0x8, virtual false, abstract: false, final false
  inline bool IsProbablePrime(int32_t certainty);

  /// @brief Method IsProbablePrime, addr 0x1204afc, size 0x120, virtual false, abstract: false, final false
  inline bool IsProbablePrime(int32_t certainty, bool randomlySelected);

  /// @brief Method LastNBits, addr 0x12044ec, size 0x154, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> LastNBits(int32_t n);

  /// @brief Method MakeMagnitude, addr 0x1202310, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeMagnitude(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method Max, addr 0x1205990, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Max(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Min, addr 0x12059b8, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Min(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Mod, addr 0x12047e4, size 0x90, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Mod(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModInverse, addr 0x12059e0, size 0x160, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInverse(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModInverse32, addr 0x1205e90, size 0x30, virtual false, abstract: false, final false
  static inline int32_t ModInverse32(int32_t d);

  /// @brief Method ModInverse64, addr 0x1205e58, size 0x38, virtual false, abstract: false, final false
  static inline int64_t ModInverse64(int64_t d);

  /// @brief Method ModInversePow2, addr 0x1205b40, size 0x204, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInversePow2(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPow, addr 0x1205ee0, size 0x218, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModPow(::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPowBarrett, addr 0x12060f8, size 0x438, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ModPowBarrett(::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPowMonty, addr 0x1205324, size 0x600, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ModPowMonty(::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m,
                                                                   bool convert);

  /// @brief Method MontgomeryReduce, addr 0x1207380, size 0x16c, virtual false, abstract: false, final false
  static inline void MontgomeryReduce(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> m, uint32_t mDash);

  /// @brief Method Multiply, addr 0x12076a0, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Multiply(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Multiply, addr 0x1201e3c, size 0x1c8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Multiply(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method MultiplyMonty, addr 0x1207018, size 0x368, virtual false, abstract: false, final false
  static inline void MultiplyMonty(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> m,
                                   uint32_t mDash, bool smallMontyModulus);

  /// @brief Method MultiplyMontyNIsOne, addr 0x1207780, size 0x2c, virtual false, abstract: false, final false
  static inline uint32_t MultiplyMontyNIsOne(uint32_t x, uint32_t y, uint32_t m, uint32_t mDash);

  /// @brief Method Negate, addr 0x1202af0, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Negate();

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(int32_t bitLength, int32_t certainty, ::System::Random* random);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(int32_t signum, ::ArrayW<int32_t, ::Array<int32_t>*> mag, bool checkMag);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(int32_t sizeInBits, ::System::Random* random);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(::StringW str, int32_t radix);

  static inline ::Org::BouncyCastle::Math::BigInteger* New_ctor(::StringW value);

  /// @brief Method NextProbablePrime, addr 0x12077ac, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextProbablePrime();

  /// @brief Method Not, addr 0x1203144, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Not();

  /// @brief Method Or, addr 0x1208dc8, size 0x25c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Or(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Pow, addr 0x1201444, size 0x1ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Pow(int32_t exp);

  /// @brief Method ProbablePrime, addr 0x1207a1c, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ProbablePrime(int32_t bitLength, ::System::Random* random);

  /// @brief Method QuickPow2Check, addr 0x12034e4, size 0x24, virtual false, abstract: false, final false
  inline bool QuickPow2Check();

  /// @brief Method RabinMillerTest, addr 0x1205038, size 0x8, virtual false, abstract: false, final false
  inline bool RabinMillerTest(int32_t certainty, ::System::Random* random);

  /// @brief Method RabinMillerTest, addr 0x1204d58, size 0x2e0, virtual false, abstract: false, final false
  inline bool RabinMillerTest(int32_t certainty, ::System::Random* random, bool randomlySelected);

  /// @brief Method ReduceBarrett, addr 0x120665c, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReduceBarrett(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* m, ::Org::BouncyCastle::Math::BigInteger* mr,
                                                                     ::Org::BouncyCastle::Math::BigInteger* yu);

  /// @brief Method Remainder, addr 0x1207a90, size 0x358, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Remainder(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Remainder, addr 0x12050d8, size 0x24c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Remainder(::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method Remainder, addr 0x1204cec, size 0x6c, virtual false, abstract: false, final false
  inline int32_t Remainder(int32_t m);

  /// @brief Method RemainderWords, addr 0x1206a64, size 0xd0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* RemainderWords(int32_t w);

  /// @brief Method SetBit, addr 0x1207900, size 0x11c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* SetBit(int32_t n);

  /// @brief Method ShiftLeft, addr 0x1203c2c, size 0x184, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ShiftLeft(::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t n);

  /// @brief Method ShiftLeft, addr 0x1201d14, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ShiftLeft(int32_t n);

  /// @brief Method ShiftLeftOneInPlace, addr 0x1207de8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ShiftLeftOneInPlace(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t carry);

  /// @brief Method ShiftRight, addr 0x11fb75c, size 0x1f0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ShiftRight(int32_t n);

  /// @brief Method ShiftRightInPlace, addr 0x1203ee4, size 0x110, virtual false, abstract: false, final false
  static inline void ShiftRightInPlace(int32_t start, ::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t n);

  /// @brief Method ShiftRightOneInPlace, addr 0x1203e50, size 0x94, virtual false, abstract: false, final false
  static inline void ShiftRightOneInPlace(int32_t start, ::ArrayW<int32_t, ::Array<int32_t>*> mag);

  /// @brief Method Square, addr 0x1207508, size 0x198, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Square(::ArrayW<int32_t, ::Array<int32_t>*> w, ::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method Square, addr 0x1206530, size 0x12c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Square();

  /// @brief Method SquareMonty, addr 0x1206be4, size 0x434, virtual false, abstract: false, final false
  static inline void SquareMonty(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> m, uint32_t mDash, bool smallMontyModulus);

  /// @brief Method Subtract, addr 0x1203db0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Subtract(int32_t xStart, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yStart, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Subtract, addr 0x1202c08, size 0x15c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Subtract(::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method TestBit, addr 0x1204c1c, size 0xd0, virtual false, abstract: false, final false
  inline bool TestBit(int32_t n);

  /// @brief Method ToByteArray, addr 0x1207e44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToByteArray, addr 0x1207e4c, size 0x3b4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(bool _cordl_unsigned);

  /// @brief Method ToByteArrayUnsigned, addr 0x1208200, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArrayUnsigned();

  /// @brief Method ToString, addr 0x1208208, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x1208210, size 0x808, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t radix);

  /// @brief Method ToString, addr 0x1208a7c, size 0x28c, virtual false, abstract: false, final false
  static inline void ToString(::System::Text::StringBuilder* sb, int32_t radix, ::System::Collections::IList* moduli, int32_t scale, ::Org::BouncyCastle::Math::BigInteger* pos);

  /// @brief Method ValueOf, addr 0x1201374, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ValueOf(int64_t value);

  /// @brief Method Xor, addr 0x1209024, size 0x260, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Xor(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method ZeroOut, addr 0x1205ec0, size 0x20, virtual false, abstract: false, final false
  static inline void ZeroOut(::ArrayW<int32_t, ::Array<int32_t>*> x);

  constexpr int32_t const& __cordl_internal_get_mQuote() const;

  constexpr int32_t& __cordl_internal_get_mQuote();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_magnitude() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_magnitude();

  constexpr int32_t const& __cordl_internal_get_nBitLength() const;

  constexpr int32_t& __cordl_internal_get_nBitLength();

  constexpr int32_t const& __cordl_internal_get_nBits() const;

  constexpr int32_t& __cordl_internal_get_nBits();

  constexpr int32_t const& __cordl_internal_get_sign() const;

  constexpr int32_t& __cordl_internal_get_sign();

  constexpr void __cordl_internal_set_mQuote(int32_t value);

  constexpr void __cordl_internal_set_magnitude(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_nBitLength(int32_t value);

  constexpr void __cordl_internal_set_nBits(int32_t value);

  constexpr void __cordl_internal_set_sign(int32_t value);

  /// @brief Method .ctor, addr 0x12025e8, size 0x310, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitLength, int32_t certainty, ::System::Random* random);

  /// @brief Method .ctor, addr 0x1202090, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x12020ac, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x11fdfb4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x12024b0, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x1201104, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(int32_t signum, ::ArrayW<int32_t, ::Array<int32_t>*> mag, bool checkMag);

  /// @brief Method .ctor, addr 0x1201684, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(int32_t sizeInBits, ::System::Random* random);

  /// @brief Method .ctor, addr 0x120182c, size 0x4e8, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t radix);

  /// @brief Method .ctor, addr 0x1201824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method doSubBigLil, addr 0x12049cc, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> doSubBigLil(::ArrayW<int32_t, ::Array<int32_t>*> bigMag, ::ArrayW<int32_t, ::Array<int32_t>*> lilMag);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_BitLengthTable();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_ExpWindowThresholds();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Four();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF_RandomSource();

  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> getStaticF_SMALL_CONSTANTS();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Ten();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Three();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Zero();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ZeroEncoding();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_ZeroMagnitude();

  static inline ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> getStaticF_primeLists();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primeProducts();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix10();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix10E();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix16();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix16E();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix2();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix2E();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix8();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_radix8E();

  /// @brief Method get_BitCount, addr 0x1203184, size 0x104, virtual false, abstract: false, final false
  inline int32_t get_BitCount();

  /// @brief Method get_BitLength, addr 0x11fb68c, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_BitLength();

  /// @brief Method get_IntValue, addr 0x11fb710, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_IntValue();

  /// @brief Method get_IntValueExact, addr 0x1204a88, size 0x6c, virtual false, abstract: false, final false
  inline int32_t get_IntValueExact();

  /// @brief Method get_LongValue, addr 0x11fba20, size 0x6c, virtual false, abstract: false, final false
  inline int64_t get_LongValue();

  /// @brief Method get_LongValueExact, addr 0x1205924, size 0x6c, virtual false, abstract: false, final false
  inline int64_t get_LongValueExact();

  /// @brief Method get_SignValue, addr 0x1207e3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SignValue();

  static inline void setStaticF_BitLengthTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ExpWindowThresholds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_Four(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_RandomSource(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline void setStaticF_SMALL_CONSTANTS(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> value);

  static inline void setStaticF_Ten(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Three(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Zero(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_ZeroEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ZeroMagnitude(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_primeLists(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  static inline void setStaticF_primeProducts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_radix10(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix10E(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix16(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix16E(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix2(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix2E(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix8(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_radix8E(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger(BigInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger(BigInteger const&) = delete;

  /// @brief Field magnitude, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___magnitude;

  /// @brief Field sign, offset: 0x18, size: 0x4, def value: None
  int32_t ___sign;

  /// @brief Field nBits, offset: 0x1c, size: 0x4, def value: None
  int32_t ___nBits;

  /// @brief Field nBitLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___nBitLength;

  /// @brief Field mQuote, offset: 0x24, size: 0x4, def value: None
  int32_t ___mQuote;

  /// @brief Field BitsPerByte offset 0xffffffff size 0x4
  static constexpr int32_t BitsPerByte{ static_cast<int32_t>(0x8) };

  /// @brief Field BitsPerInt offset 0xffffffff size 0x4
  static constexpr int32_t BitsPerInt{ static_cast<int32_t>(0x20) };

  /// @brief Field BytesPerInt offset 0xffffffff size 0x4
  static constexpr int32_t BytesPerInt{ static_cast<int32_t>(0x4) };

  /// @brief Field IMASK offset 0xffffffff size 0x8
  static constexpr int64_t IMASK{ static_cast<int64_t>(0xffffffff) };

  /// @brief Field UIMASK offset 0xffffffff size 0x8
  static constexpr uint64_t UIMASK{ static_cast<uint64_t>(0xffffffffu) };

  /// @brief Field chunk10 offset 0xffffffff size 0x4
  static constexpr int32_t chunk10{ static_cast<int32_t>(0x13) };

  /// @brief Field chunk16 offset 0xffffffff size 0x4
  static constexpr int32_t chunk16{ static_cast<int32_t>(0x10) };

  /// @brief Field chunk2 offset 0xffffffff size 0x4
  static constexpr int32_t chunk2{ static_cast<int32_t>(0x1) };

  /// @brief Field chunk8 offset 0xffffffff size 0x4
  static constexpr int32_t chunk8{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::BigInteger, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___magnitude) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___sign) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___nBits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___nBitLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___mQuote) == 0x24, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math
NEED_NO_BOX(::Org::BouncyCastle::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::BigInteger*, "Org.BouncyCastle.Math", "BigInteger");
