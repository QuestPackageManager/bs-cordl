#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Math {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.BigInteger
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BitCount)) int32_t BitCount;

  __declspec(property(get = get_BitLength)) int32_t BitLength;

  /// @brief Field BitLengthTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BitLengthTable, put = setStaticF_BitLengthTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> BitLengthTable;

  /// @brief Field ExpWindowThresholds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ExpWindowThresholds, put = setStaticF_ExpWindowThresholds)) ::ArrayW<int32_t, ::Array<int32_t>*> ExpWindowThresholds;

  /// @brief Field Four, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Four, put = setStaticF_Four)) ::Org::BouncyCastle::Math::BigInteger* Four;

  __declspec(property(get = get_IntValue)) int32_t IntValue;

  __declspec(property(get = get_IntValueExact)) int32_t IntValueExact;

  __declspec(property(get = get_LongValue)) int64_t LongValue;

  __declspec(property(get = get_LongValueExact)) int64_t LongValueExact;

  /// @brief Field One, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field RandomSource, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RandomSource, put = setStaticF_RandomSource)) ::Org::BouncyCastle::Security::SecureRandom* RandomSource;

  /// @brief Field SMALL_CONSTANTS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SMALL_CONSTANTS, put = setStaticF_SMALL_CONSTANTS)) ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
      SMALL_CONSTANTS;

  __declspec(property(get = get_SignValue)) int32_t SignValue;

  /// @brief Field Ten, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Ten, put = setStaticF_Ten)) ::Org::BouncyCastle::Math::BigInteger* Ten;

  /// @brief Field Three, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Three, put = setStaticF_Three)) ::Org::BouncyCastle::Math::BigInteger* Three;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Two, put = setStaticF_Two)) ::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::Org::BouncyCastle::Math::BigInteger* Zero;

  /// @brief Field ZeroEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ZeroEncoding, put = setStaticF_ZeroEncoding)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ZeroEncoding;

  /// @brief Field ZeroMagnitude, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ZeroMagnitude, put = setStaticF_ZeroMagnitude)) ::ArrayW<int32_t, ::Array<int32_t>*> ZeroMagnitude;

  /// @brief Field mQuote, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_mQuote, put = __cordl_internal_set_mQuote)) int32_t mQuote;

  /// @brief Field magnitude, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_magnitude, put = __cordl_internal_set_magnitude)) ::ArrayW<int32_t, ::Array<int32_t>*> magnitude;

  /// @brief Field nBitLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nBitLength, put = __cordl_internal_set_nBitLength)) int32_t nBitLength;

  /// @brief Field nBits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_nBits, put = __cordl_internal_set_nBits)) int32_t nBits;

  /// @brief Field primeLists, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primeLists, put = setStaticF_primeLists)) ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> primeLists;

  /// @brief Field primeProducts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primeProducts, put = setStaticF_primeProducts)) ::ArrayW<int32_t, ::Array<int32_t>*> primeProducts;

  /// @brief Field radix10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix10, put = setStaticF_radix10)) ::Org::BouncyCastle::Math::BigInteger* radix10;

  /// @brief Field radix10E, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix10E, put = setStaticF_radix10E)) ::Org::BouncyCastle::Math::BigInteger* radix10E;

  /// @brief Field radix16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix16, put = setStaticF_radix16)) ::Org::BouncyCastle::Math::BigInteger* radix16;

  /// @brief Field radix16E, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix16E, put = setStaticF_radix16E)) ::Org::BouncyCastle::Math::BigInteger* radix16E;

  /// @brief Field radix2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix2, put = setStaticF_radix2)) ::Org::BouncyCastle::Math::BigInteger* radix2;

  /// @brief Field radix2E, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix2E, put = setStaticF_radix2E)) ::Org::BouncyCastle::Math::BigInteger* radix2E;

  /// @brief Field radix8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix8, put = setStaticF_radix8)) ::Org::BouncyCastle::Math::BigInteger* radix8;

  /// @brief Field radix8E, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_radix8E, put = setStaticF_radix8E)) ::Org::BouncyCastle::Math::BigInteger* radix8E;

  /// @brief Field sign, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sign, put = __cordl_internal_set_sign)) int32_t sign;

  /// @brief Method Abs, addr 0x250eecc, size 0x10, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Abs();

  /// @brief Method Add, addr 0x250e3f0, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Add(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method AddMagnitudes, addr 0x250ef50, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> AddMagnitudes(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method AddToMagnitude, addr 0x250f134, size 0x174, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* AddToMagnitude(::ArrayW<int32_t, ::Array<int32_t>*> magToAdd);

  /// @brief Method And, addr 0x250f2a8, size 0x280, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* And(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method AndNot, addr 0x250f540, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* AndNot(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method AppendZeroExtendedString, addr 0x2514ea4, size 0x60, virtual false, abstract: false, final false
  static inline void AppendZeroExtendedString(::System::Text::StringBuilder* sb, ::StringW s, int32_t minLength);

  /// @brief Method Arbitrary, addr 0x250d9bc, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Arbitrary(int32_t sizeInBits);

  /// @brief Method BitCnt, addr 0x250f66c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t BitCnt(int32_t i);

  /// @brief Method BitLen, addr 0x250f7d0, size 0x124, virtual false, abstract: false, final false
  static inline int32_t BitLen(int32_t w);

  /// @brief Method CalcBitLength, addr 0x250f6a0, size 0x130, virtual false, abstract: false, final false
  static inline int32_t CalcBitLength(int32_t sign, int32_t indx, ::ArrayW<int32_t, ::Array<int32_t>*> mag);

  /// @brief Method CheckProbablePrime, addr 0x250ece8, size 0x1e4, virtual false, abstract: false, final false
  inline bool CheckProbablePrime(int32_t certainty, ::System::Random* random, bool randomlySelected);

  /// @brief Method ClearBit, addr 0x2515818, size 0x118, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ClearBit(int32_t n);

  /// @brief Method CompareNoLeadingZeroes, addr 0x250fb3c, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t CompareNoLeadingZeroes(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CompareTo, addr 0x250f918, size 0x84, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x250f99c, size 0xac, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method CompareTo, addr 0x250fa48, size 0xf4, virtual false, abstract: false, final false
  static inline int32_t CompareTo(int32_t xIndx, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yIndx, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method CreateUValueOf, addr 0x250d5e0, size 0x138, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateUValueOf(uint64_t value);

  /// @brief Method CreateValueOf, addr 0x2515190, size 0xa8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateValueOf(int64_t value);

  /// @brief Method CreateWindowEntry, addr 0x2513970, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t CreateWindowEntry(int32_t mult, int32_t zeroes);

  /// @brief Method Divide, addr 0x250fbe4, size 0x4c8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> Divide(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Divide, addr 0x2510474, size 0x1e0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Divide(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method DivideAndRemainder, addr 0x2510654, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DivideAndRemainder(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method DivideWords, addr 0x2512da4, size 0xec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* DivideWords(int32_t w);

  /// @brief Method Equals, addr 0x2510ac0, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method ExtEuclid, addr 0x2512168, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ExtEuclid(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                 ::ByRef<::Org::BouncyCastle::Math::BigInteger*> u1Out);

  /// @brief Method FlipBit, addr 0x2515930, size 0xf8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* FlipBit(int32_t n);

  /// @brief Method FlipExistingBit, addr 0x2515728, size 0xf0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* FlipExistingBit(int32_t n);

  /// @brief Method Gcd, addr 0x2510c08, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Gcd(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method GetByteLength, addr 0x250d9a4, size 0x18, virtual false, abstract: false, final false
  static inline int32_t GetByteLength(int32_t nBits);

  /// @brief Method GetHashCode, addr 0x2510d00, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetLowestSetBit, addr 0x2515238, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetLowestSetBit();

  /// @brief Method GetLowestSetBitMaskFirst, addr 0x25114a8, size 0x94, virtual false, abstract: false, final false
  inline int32_t GetLowestSetBitMaskFirst(int32_t firstWordMask);

  /// @brief Method GetMQuote, addr 0x2512f64, size 0xb0, virtual false, abstract: false, final false
  inline int32_t GetMQuote();

  /// @brief Method GetWindowList, addr 0x2512ba0, size 0x204, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetWindowList(::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t extraBits);

  /// @brief Method Inc, addr 0x2510d58, size 0x104, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Inc();

  /// @brief Method IsEqualMagnitude, addr 0x2510b74, size 0x94, virtual false, abstract: false, final false
  inline bool IsEqualMagnitude(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsProbablePrime, addr 0x2510f80, size 0x8, virtual false, abstract: false, final false
  inline bool IsProbablePrime(int32_t certainty);

  /// @brief Method IsProbablePrime, addr 0x2510f88, size 0x120, virtual false, abstract: false, final false
  inline bool IsProbablePrime(int32_t certainty, bool randomlySelected);

  /// @brief Method LastNBits, addr 0x251096c, size 0x154, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> LastNBits(int32_t n);

  /// @brief Method MakeMagnitude, addr 0x250e700, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> MakeMagnitude(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method Max, addr 0x2511dc4, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Max(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Min, addr 0x2511dec, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Min(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Mod, addr 0x2510c74, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Mod(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModInverse, addr 0x2511e14, size 0x150, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInverse(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModInverse32, addr 0x25122b4, size 0x30, virtual false, abstract: false, final false
  static inline int32_t ModInverse32(int32_t d);

  /// @brief Method ModInverse64, addr 0x251227c, size 0x38, virtual false, abstract: false, final false
  static inline int64_t ModInverse64(int64_t d);

  /// @brief Method ModInversePow2, addr 0x2511f64, size 0x204, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInversePow2(::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPow, addr 0x2512304, size 0x214, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModPow(::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPowBarrett, addr 0x2512518, size 0x444, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ModPowBarrett(::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m);

  /// @brief Method ModPowMonty, addr 0x251179c, size 0x5c0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ModPowMonty(::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* e, ::Org::BouncyCastle::Math::BigInteger* m,
                                                                   bool convert);

  /// @brief Method MontgomeryReduce, addr 0x251380c, size 0x164, virtual false, abstract: false, final false
  static inline void MontgomeryReduce(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> m, uint32_t mDash);

  /// @brief Method Multiply, addr 0x2513b04, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Multiply(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Multiply, addr 0x250e228, size 0x1c8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Multiply(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method MultiplyMonty, addr 0x251347c, size 0x390, virtual false, abstract: false, final false
  static inline void MultiplyMonty(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> m,
                                   uint32_t mDash, bool smallMontyModulus);

  /// @brief Method MultiplyMontyNIsOne, addr 0x2513be4, size 0x2c, virtual false, abstract: false, final false
  static inline uint32_t MultiplyMontyNIsOne(uint32_t x, uint32_t y, uint32_t m, uint32_t mDash);

  /// @brief Method Negate, addr 0x250eedc, size 0x74, virtual false, abstract: false, final false
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

  /// @brief Method NextProbablePrime, addr 0x2513c10, size 0x150, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* NextProbablePrime();

  /// @brief Method Not, addr 0x250f528, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Not();

  /// @brief Method Or, addr 0x2515250, size 0x278, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Or(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method Pow, addr 0x250d7e8, size 0x1bc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Pow(int32_t exp);

  /// @brief Method ProbablePrime, addr 0x2513e78, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ProbablePrime(int32_t bitLength, ::System::Random* random);

  /// @brief Method QuickPow2Check, addr 0x250f8f4, size 0x24, virtual false, abstract: false, final false
  inline bool QuickPow2Check();

  /// @brief Method RabinMillerTest, addr 0x25114a0, size 0x8, virtual false, abstract: false, final false
  inline bool RabinMillerTest(int32_t certainty, ::System::Random* random);

  /// @brief Method RabinMillerTest, addr 0x25111ec, size 0x2b4, virtual false, abstract: false, final false
  inline bool RabinMillerTest(int32_t certainty, ::System::Random* random, bool randomlySelected);

  /// @brief Method ReduceBarrett, addr 0x2512a8c, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReduceBarrett(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Math::BigInteger* m, ::Org::BouncyCastle::Math::BigInteger* mr,
                                                                     ::Org::BouncyCastle::Math::BigInteger* yu);

  /// @brief Method Remainder, addr 0x2513ee4, size 0x390, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Remainder(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Remainder, addr 0x251153c, size 0x260, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Remainder(::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method Remainder, addr 0x2511180, size 0x6c, virtual false, abstract: false, final false
  inline int32_t Remainder(int32_t m);

  /// @brief Method RemainderWords, addr 0x2512e90, size 0xd4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* RemainderWords(int32_t w);

  /// @brief Method SetBit, addr 0x2513d60, size 0x118, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* SetBit(int32_t n);

  /// @brief Method ShiftLeft, addr 0x25100ac, size 0x184, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ShiftLeft(::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t n);

  /// @brief Method ShiftLeft, addr 0x250e0fc, size 0x12c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ShiftLeft(int32_t n);

  /// @brief Method ShiftLeftOneInPlace, addr 0x2514274, size 0x48, virtual false, abstract: false, final false
  static inline int32_t ShiftLeftOneInPlace(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t carry);

  /// @brief Method ShiftRight, addr 0x25080e0, size 0x220, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ShiftRight(int32_t n);

  /// @brief Method ShiftRightInPlace, addr 0x2510368, size 0x10c, virtual false, abstract: false, final false
  static inline void ShiftRightInPlace(int32_t start, ::ArrayW<int32_t, ::Array<int32_t>*> mag, int32_t n);

  /// @brief Method ShiftRightOneInPlace, addr 0x25102d4, size 0x94, virtual false, abstract: false, final false
  static inline void ShiftRightOneInPlace(int32_t start, ::ArrayW<int32_t, ::Array<int32_t>*> mag);

  /// @brief Method Square, addr 0x251398c, size 0x178, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Square(::ArrayW<int32_t, ::Array<int32_t>*> w, ::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method Square, addr 0x251295c, size 0x130, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Square();

  /// @brief Method SquareMonty, addr 0x2513014, size 0x468, virtual false, abstract: false, final false
  static inline void SquareMonty(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> m, uint32_t mDash, bool smallMontyModulus);

  /// @brief Method Subtract, addr 0x2510230, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Subtract(int32_t xStart, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t yStart, ::ArrayW<int32_t, ::Array<int32_t>*> y);

  /// @brief Method Subtract, addr 0x250efe0, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Subtract(::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method TestBit, addr 0x25110a8, size 0xd8, virtual false, abstract: false, final false
  inline bool TestBit(int32_t n);

  /// @brief Method ToByteArray, addr 0x25142c4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToByteArray, addr 0x25142cc, size 0x37c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray(bool _cordl_unsigned);

  /// @brief Method ToByteArrayUnsigned, addr 0x2514648, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArrayUnsigned();

  /// @brief Method ToString, addr 0x2514650, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2514658, size 0x84c, virtual false, abstract: false, final false
  inline ::StringW ToString(int32_t radix);

  /// @brief Method ToString, addr 0x2514f04, size 0x28c, virtual false, abstract: false, final false
  static inline void ToString(::System::Text::StringBuilder* sb, int32_t radix, ::System::Collections::IList* moduli, int32_t scale, ::Org::BouncyCastle::Math::BigInteger* pos);

  /// @brief Method ValueOf, addr 0x250d718, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ValueOf(int64_t value);

  /// @brief Method Xor, addr 0x25154c8, size 0x260, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Xor(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method ZeroOut, addr 0x25122e4, size 0x20, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x250e9d4, size 0x314, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitLength, int32_t certainty, ::System::Random* random);

  /// @brief Method .ctor, addr 0x250e47c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x250e498, size 0x268, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x250a94c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x250e8a0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(int32_t sign, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x250d498, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(int32_t signum, ::ArrayW<int32_t, ::Array<int32_t>*> mag, bool checkMag);

  /// @brief Method .ctor, addr 0x250da30, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(int32_t sizeInBits, ::System::Random* random);

  /// @brief Method .ctor, addr 0x250dbd4, size 0x528, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t radix);

  /// @brief Method .ctor, addr 0x250dbcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method doSubBigLil, addr 0x2510e5c, size 0xbc, virtual false, abstract: false, final false
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

  /// @brief Method get_BitCount, addr 0x250f568, size 0x104, virtual false, abstract: false, final false
  inline int32_t get_BitCount();

  /// @brief Method get_BitLength, addr 0x2508010, size 0x84, virtual false, abstract: false, final false
  inline int32_t get_BitLength();

  /// @brief Method get_IntValue, addr 0x2508094, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_IntValue();

  /// @brief Method get_IntValueExact, addr 0x2510f18, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_IntValueExact();

  /// @brief Method get_LongValue, addr 0x25083cc, size 0x6c, virtual false, abstract: false, final false
  inline int64_t get_LongValue();

  /// @brief Method get_LongValueExact, addr 0x2511d5c, size 0x68, virtual false, abstract: false, final false
  inline int64_t get_LongValueExact();

  /// @brief Method get_SignValue, addr 0x25142bc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1601 };

  /// @brief Field chunk10 offset 0xffffffff size 0x4
  static constexpr int32_t chunk10{ static_cast<int32_t>(0x13) };

  /// @brief Field chunk16 offset 0xffffffff size 0x4
  static constexpr int32_t chunk16{ static_cast<int32_t>(0x10) };

  /// @brief Field chunk2 offset 0xffffffff size 0x4
  static constexpr int32_t chunk2{ static_cast<int32_t>(0x1) };

  /// @brief Field chunk8 offset 0xffffffff size 0x4
  static constexpr int32_t chunk8{ static_cast<int32_t>(0x1) };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___magnitude) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___sign) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___nBits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___nBitLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::BigInteger, ___mQuote) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::BigInteger, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
NEED_NO_BOX(::Org::BouncyCastle::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::BigInteger*, "Org.BouncyCastle.Math", "BigInteger");
