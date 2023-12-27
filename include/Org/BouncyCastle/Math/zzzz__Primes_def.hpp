#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Primes)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math {
class __Primes__STOutput;
}
namespace Org::BouncyCastle::Math {
class __Primes__MROutput;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math {
class Primes;
}
namespace Org::BouncyCastle::Math {
class __Primes__MROutput;
}
namespace Org::BouncyCastle::Math {
class __Primes__STOutput;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Primes);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::__Primes__MROutput);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::__Primes__STOutput);
// Type: ::MROutput
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1602))
// CS Name: ::Primes::MROutput*
class CORDL_TYPE __Primes__MROutput : public ::System::Object {
public:
  // Declarations
  /// @brief Field mProvablyComposite, offset 0x10, size 0x1
  __declspec(property(get = __get_mProvablyComposite, put = __set_mProvablyComposite)) bool mProvablyComposite;

  /// @brief Field mFactor, offset 0x18, size 0x8
  __declspec(property(get = __get_mFactor, put = __set_mFactor))::Org::BouncyCastle::Math::BigInteger* mFactor;

  __declspec(property(get = get_Factor))::Org::BouncyCastle::Math::BigInteger* Factor;

  __declspec(property(get = get_IsProvablyComposite)) bool IsProvablyComposite;

  __declspec(property(get = get_IsNotPrimePower)) bool IsNotPrimePower;

  constexpr bool& __get_mProvablyComposite();

  constexpr bool const& __get_mProvablyComposite() const;

  constexpr void __set_mProvablyComposite(bool value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_mFactor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_mFactor() const;

  constexpr void __set_mFactor(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method ProbablyPrime addr 0x109b608 size 0x64 virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__MROutput* ProbablyPrime();

  /// @brief Method ProvablyCompositeWithFactor addr 0x109b69c size 0x6c virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__MROutput* ProvablyCompositeWithFactor(::Org::BouncyCastle::Math::BigInteger* factor);

  /// @brief Method ProvablyCompositeNotPrimePower addr 0x109b708 size 0x68 virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__MROutput* ProvablyCompositeNotPrimePower();

  static inline ::Org::BouncyCastle::Math::__Primes__MROutput* New_ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor);

  /// @brief Method .ctor addr 0x109b66c size 0x30 virtual false final false
  inline void _ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor);

  /// @brief Method get_Factor addr 0x109b770 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Factor();

  /// @brief Method get_IsProvablyComposite addr 0x109b778 size 0x8 virtual false final false
  inline bool get_IsProvablyComposite();

  /// @brief Method get_IsNotPrimePower addr 0x109b780 size 0x20 virtual false final false
  inline bool get_IsNotPrimePower();

  // Ctor Parameters [CppParam { name: "", ty: "__Primes__MROutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Primes__MROutput(__Primes__MROutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Primes__MROutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Primes__MROutput(__Primes__MROutput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Primes__MROutput();

public:
  /// @brief Field mProvablyComposite, offset: 0x10, size: 0x1, def value: None
  bool ___mProvablyComposite;

  /// @brief Field mFactor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::__Primes__MROutput, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
// Type: ::STOutput
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1603))
// CS Name: ::Primes::STOutput*
class CORDL_TYPE __Primes__STOutput : public ::System::Object {
public:
  // Declarations
  /// @brief Field mPrime, offset 0x10, size 0x8
  __declspec(property(get = __get_mPrime, put = __set_mPrime))::Org::BouncyCastle::Math::BigInteger* mPrime;

  /// @brief Field mPrimeSeed, offset 0x18, size 0x8
  __declspec(property(get = __get_mPrimeSeed, put = __set_mPrimeSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> mPrimeSeed;

  /// @brief Field mPrimeGenCounter, offset 0x20, size 0x4
  __declspec(property(get = __get_mPrimeGenCounter, put = __set_mPrimeGenCounter)) int32_t mPrimeGenCounter;

  __declspec(property(get = get_Prime))::Org::BouncyCastle::Math::BigInteger* Prime;

  __declspec(property(get = get_PrimeSeed))::ArrayW<uint8_t, ::Array<uint8_t>*> PrimeSeed;

  __declspec(property(get = get_PrimeGenCounter)) int32_t PrimeGenCounter;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_mPrime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_mPrime() const;

  constexpr void __set_mPrime(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPrimeSeed();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPrimeSeed() const;

  constexpr void __set_mPrimeSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mPrimeGenCounter();

  constexpr int32_t const& __get_mPrimeGenCounter() const;

  constexpr void __set_mPrimeGenCounter(int32_t value);

  static inline ::Org::BouncyCastle::Math::__Primes__STOutput* New_ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed, int32_t primeGenCounter);

  /// @brief Method .ctor addr 0x109b7a0 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed, int32_t primeGenCounter);

  /// @brief Method get_Prime addr 0x109b7dc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime();

  /// @brief Method get_PrimeSeed addr 0x109b7e4 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PrimeSeed();

  /// @brief Method get_PrimeGenCounter addr 0x109b7ec size 0x8 virtual false final false
  inline int32_t get_PrimeGenCounter();

  // Ctor Parameters [CppParam { name: "", ty: "__Primes__STOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Primes__STOutput(__Primes__STOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Primes__STOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Primes__STOutput(__Primes__STOutput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Primes__STOutput();

public:
  /// @brief Field mPrime, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mPrime;

  /// @brief Field mPrimeSeed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPrimeSeed;

  /// @brief Field mPrimeGenCounter, offset: 0x20, size: 0x4, def value: None
  int32_t ___mPrimeGenCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::__Primes__STOutput, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
// Type: Org.BouncyCastle.Math::Primes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1604))
// CS Name: ::Org.BouncyCastle.Math::Primes*
class CORDL_TYPE Primes : public ::System::Object {
public:
  // Declarations
  using STOutput = ::Org::BouncyCastle::Math::__Primes__STOutput;

  using MROutput = ::Org::BouncyCastle::Math::__Primes__MROutput;

  /// @brief Field SmallFactorLimit, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SmallFactorLimit, put = setStaticF_SmallFactorLimit)) int32_t SmallFactorLimit;

  /// @brief Field One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_One, put = setStaticF_One))::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field Three, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Three, put = setStaticF_Three))::Org::BouncyCastle::Math::BigInteger* Three;

  static inline void setStaticF_SmallFactorLimit(int32_t value);

  static inline int32_t getStaticF_SmallFactorLimit();

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline void setStaticF_Three(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Three();

  /// @brief Method GenerateSTRandomPrime addr 0x10994a8 size 0x1ac virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__STOutput* GenerateSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* hash, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> inputSeed);

  /// @brief Method EnhancedMRProbablePrimeTest addr 0x1099c88 size 0x48c virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__MROutput* EnhancedMRProbablePrimeTest(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                           int32_t iterations);

  /// @brief Method HasAnySmallFactors addr 0x109a198 size 0x74 virtual false final false
  static inline bool HasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* candidate);

  /// @brief Method IsMRProbablePrime addr 0x109aaf0 size 0x234 virtual false final false
  static inline bool IsMRProbablePrime(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t iterations);

  /// @brief Method IsMRProbablePrimeToBase addr 0x109ae90 size 0x1bc virtual false final false
  static inline bool IsMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Math::BigInteger* baseValue);

  /// @brief Method CheckCandidate addr 0x109a114 size 0x84 virtual false final false
  static inline void CheckCandidate(::Org::BouncyCastle::Math::BigInteger* n, ::StringW name);

  /// @brief Method ImplHasAnySmallFactors addr 0x109a20c size 0x8e4 virtual false final false
  static inline bool ImplHasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ImplMRProbablePrimeToBase addr 0x109ad24 size 0x16c virtual false final false
  static inline bool ImplMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* w, ::Org::BouncyCastle::Math::BigInteger* wSubOne, ::Org::BouncyCastle::Math::BigInteger* m, int32_t a,
                                               ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method ImplSTRandomPrime addr 0x1099654 size 0x634 virtual false final false
  static inline ::Org::BouncyCastle::Math::__Primes__STOutput* ImplSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* d, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed);

  /// @brief Method Extract32 addr 0x109b1d8 size 0xc0 virtual false final false
  static inline uint32_t Extract32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method Hash addr 0x109b04c size 0x134 virtual false final false
  static inline void Hash(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outPos);

  /// @brief Method HashGen addr 0x109b3f0 size 0x180 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* HashGen(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t count);

  /// @brief Method Inc addr 0x109b180 size 0x58 virtual false final false
  static inline void Inc(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t c);

  /// @brief Method IsPrime32 addr 0x109b298 size 0x158 virtual false final false
  static inline bool IsPrime32(uint32_t x);

  static inline ::Org::BouncyCastle::Math::Primes* New_ctor();

  /// @brief Method .ctor addr 0x109b600 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Primes(Primes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Primes(Primes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Primes();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Primes, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
NEED_NO_BOX(::Org::BouncyCastle::Math::Primes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Primes*, "Org.BouncyCastle.Math", "Primes");
NEED_NO_BOX(::Org::BouncyCastle::Math::__Primes__MROutput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::__Primes__MROutput*, "Org.BouncyCastle.Math", "Primes/MROutput");
NEED_NO_BOX(::Org::BouncyCastle::Math::__Primes__STOutput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::__Primes__STOutput*, "Org.BouncyCastle.Math", "Primes/STOutput");
