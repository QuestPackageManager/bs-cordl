#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Primes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
class Primes_MROutput;
}
namespace Org::BouncyCastle::Math {
class Primes_STOutput;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math {
class Primes;
}
namespace Org::BouncyCastle::Math {
class Primes_MROutput;
}
namespace Org::BouncyCastle::Math {
class Primes_STOutput;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Primes);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Primes_MROutput);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Primes_STOutput);
// Dependencies System.Object
namespace Org::BouncyCastle::Math {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Primes/MROutput
class CORDL_TYPE Primes_MROutput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Factor)) ::Org::BouncyCastle::Math::BigInteger* Factor;

  __declspec(property(get = get_IsNotPrimePower)) bool IsNotPrimePower;

  __declspec(property(get = get_IsProvablyComposite)) bool IsProvablyComposite;

  /// @brief Field mFactor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mFactor, put = __cordl_internal_set_mFactor)) ::Org::BouncyCastle::Math::BigInteger* mFactor;

  /// @brief Field mProvablyComposite, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mProvablyComposite, put = __cordl_internal_set_mProvablyComposite)) bool mProvablyComposite;

  static inline ::Org::BouncyCastle::Math::Primes_MROutput* New_ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor);

  /// @brief Method ProbablyPrime, addr 0x251b66c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_MROutput* ProbablyPrime();

  /// @brief Method ProvablyCompositeNotPrimePower, addr 0x251b75c, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_MROutput* ProvablyCompositeNotPrimePower();

  /// @brief Method ProvablyCompositeWithFactor, addr 0x251b6f8, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_MROutput* ProvablyCompositeWithFactor(::Org::BouncyCastle::Math::BigInteger* factor);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_mFactor() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mFactor();

  constexpr bool const& __cordl_internal_get_mProvablyComposite() const;

  constexpr bool& __cordl_internal_get_mProvablyComposite();

  constexpr void __cordl_internal_set_mFactor(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mProvablyComposite(bool value);

  /// @brief Method .ctor, addr 0x251b6c8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor);

  /// @brief Method get_Factor, addr 0x251b7bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Factor();

  /// @brief Method get_IsNotPrimePower, addr 0x251b7cc, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsNotPrimePower();

  /// @brief Method get_IsProvablyComposite, addr 0x251b7c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsProvablyComposite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Primes_MROutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Primes_MROutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Primes_MROutput(Primes_MROutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Primes_MROutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Primes_MROutput(Primes_MROutput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1602 };

  /// @brief Field mProvablyComposite, offset: 0x10, size: 0x1, def value: None
  bool ___mProvablyComposite;

  /// @brief Field mFactor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::Primes_MROutput, ___mProvablyComposite) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Primes_MROutput, ___mFactor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Primes_MROutput, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
// Dependencies System.Object
namespace Org::BouncyCastle::Math {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Primes/STOutput
class CORDL_TYPE Primes_STOutput : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Prime)) ::Org::BouncyCastle::Math::BigInteger* Prime;

  __declspec(property(get = get_PrimeGenCounter)) int32_t PrimeGenCounter;

  __declspec(property(get = get_PrimeSeed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PrimeSeed;

  /// @brief Field mPrime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mPrime, put = __cordl_internal_set_mPrime)) ::Org::BouncyCastle::Math::BigInteger* mPrime;

  /// @brief Field mPrimeGenCounter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mPrimeGenCounter, put = __cordl_internal_set_mPrimeGenCounter)) int32_t mPrimeGenCounter;

  /// @brief Field mPrimeSeed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPrimeSeed, put = __cordl_internal_set_mPrimeSeed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPrimeSeed;

  static inline ::Org::BouncyCastle::Math::Primes_STOutput* New_ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed, int32_t primeGenCounter);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_mPrime() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_mPrime();

  constexpr int32_t const& __cordl_internal_get_mPrimeGenCounter() const;

  constexpr int32_t& __cordl_internal_get_mPrimeGenCounter();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPrimeSeed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPrimeSeed();

  constexpr void __cordl_internal_set_mPrime(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mPrimeGenCounter(int32_t value);

  constexpr void __cordl_internal_set_mPrimeSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x251b7ec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed, int32_t primeGenCounter);

  /// @brief Method get_Prime, addr 0x251b828, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Prime();

  /// @brief Method get_PrimeGenCounter, addr 0x251b838, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PrimeGenCounter();

  /// @brief Method get_PrimeSeed, addr 0x251b830, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PrimeSeed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Primes_STOutput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Primes_STOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Primes_STOutput(Primes_STOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Primes_STOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Primes_STOutput(Primes_STOutput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1603 };

  /// @brief Field mPrime, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___mPrime;

  /// @brief Field mPrimeSeed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPrimeSeed;

  /// @brief Field mPrimeGenCounter, offset: 0x20, size: 0x4, def value: None
  int32_t ___mPrimeGenCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::Primes_STOutput, ___mPrime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Primes_STOutput, ___mPrimeSeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::Primes_STOutput, ___mPrimeGenCounter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Primes_STOutput, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
// Dependencies System.Object
namespace Org::BouncyCastle::Math {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Primes
class CORDL_TYPE Primes : public ::System::Object {
public:
  // Declarations
  using MROutput = ::Org::BouncyCastle::Math::Primes_MROutput;

  using STOutput = ::Org::BouncyCastle::Math::Primes_STOutput;

  /// @brief Field One, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::Org::BouncyCastle::Math::BigInteger* One;

  /// @brief Field SmallFactorLimit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SmallFactorLimit, put = setStaticF_SmallFactorLimit)) int32_t SmallFactorLimit;

  /// @brief Field Three, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Three, put = setStaticF_Three)) ::Org::BouncyCastle::Math::BigInteger* Three;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Two, put = setStaticF_Two)) ::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Method CheckCandidate, addr 0x251a190, size 0x80, virtual false, abstract: false, final false
  static inline void CheckCandidate(::Org::BouncyCastle::Math::BigInteger* n, ::StringW name);

  /// @brief Method EnhancedMRProbablePrimeTest, addr 0x2519d0c, size 0x484, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_MROutput* EnhancedMRProbablePrimeTest(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                        int32_t iterations);

  /// @brief Method Extract32, addr 0x251b230, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t Extract32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method GenerateSTRandomPrime, addr 0x2519528, size 0x19c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_STOutput* GenerateSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* hash, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> inputSeed);

  /// @brief Method HasAnySmallFactors, addr 0x251a210, size 0x74, virtual false, abstract: false, final false
  static inline bool HasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* candidate);

  /// @brief Method Hash, addr 0x251b0a8, size 0x134, virtual false, abstract: false, final false
  static inline void Hash(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outPos);

  /// @brief Method HashGen, addr 0x251b458, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* HashGen(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t count);

  /// @brief Method ImplHasAnySmallFactors, addr 0x251a284, size 0x8d4, virtual false, abstract: false, final false
  static inline bool ImplHasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ImplMRProbablePrimeToBase, addr 0x251ad84, size 0x16c, virtual false, abstract: false, final false
  static inline bool ImplMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* w, ::Org::BouncyCastle::Math::BigInteger* wSubOne, ::Org::BouncyCastle::Math::BigInteger* m, int32_t a,
                                               ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method ImplSTRandomPrime, addr 0x25196c4, size 0x648, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::Primes_STOutput* ImplSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* d, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> primeSeed);

  /// @brief Method Inc, addr 0x251b1dc, size 0x54, virtual false, abstract: false, final false
  static inline void Inc(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, int32_t c);

  /// @brief Method IsMRProbablePrime, addr 0x251ab58, size 0x22c, virtual false, abstract: false, final false
  static inline bool IsMRProbablePrime(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t iterations);

  /// @brief Method IsMRProbablePrimeToBase, addr 0x251aef0, size 0x1b8, virtual false, abstract: false, final false
  static inline bool IsMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Math::BigInteger* baseValue);

  /// @brief Method IsPrime32, addr 0x251b2f8, size 0x160, virtual false, abstract: false, final false
  static inline bool IsPrime32(uint32_t x);

  static inline ::Org::BouncyCastle::Math::Primes* New_ctor();

  /// @brief Method .ctor, addr 0x251b664, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_One();

  static inline int32_t getStaticF_SmallFactorLimit();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Three();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline void setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_SmallFactorLimit(int32_t value);

  static inline void setStaticF_Three(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Primes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Primes(Primes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Primes(Primes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1604 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Primes, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math
NEED_NO_BOX(::Org::BouncyCastle::Math::Primes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Primes*, "Org.BouncyCastle.Math", "Primes");
NEED_NO_BOX(::Org::BouncyCastle::Math::Primes_MROutput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Primes_MROutput*, "Org.BouncyCastle.Math", "Primes/MROutput");
NEED_NO_BOX(::Org::BouncyCastle::Math::Primes_STOutput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Primes_STOutput*, "Org.BouncyCastle.Math", "Primes/STOutput");
