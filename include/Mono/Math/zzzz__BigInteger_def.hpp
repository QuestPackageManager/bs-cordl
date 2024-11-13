#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace Mono::Math {
class __BigInteger__Kernel;
}
namespace Mono::Math {
class __BigInteger__ModulusRing;
}
namespace Mono::Math {
struct __BigInteger__Sign;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Math {
struct __BigInteger__Sign;
}
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math {
class __BigInteger__Kernel;
}
namespace Mono::Math {
class __BigInteger__ModulusRing;
}
// Write type traits
MARK_VAL_T(::Mono::Math::__BigInteger__Sign);
MARK_REF_PTR_T(::Mono::Math::BigInteger);
MARK_REF_PTR_T(::Mono::Math::__BigInteger__Kernel);
MARK_REF_PTR_T(::Mono::Math::__BigInteger__ModulusRing);
// Type: ::Sign
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: true
// CS Name: ::BigInteger::Sign
struct CORDL_TYPE __BigInteger__Sign {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BigInteger__Sign_Unwrapped
  enum struct ____BigInteger__Sign_Unwrapped : int32_t {
    __E_Negative = static_cast<int32_t>(0xffffffff),
    __E_Zero = static_cast<int32_t>(0x0),
    __E_Positive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BigInteger__Sign_Unwrapped() const noexcept {
    return static_cast<____BigInteger__Sign_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__Sign();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BigInteger__Sign(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Negative value: static_cast<int32_t>(0xffffffff)
  static ::Mono::Math::__BigInteger__Sign const Negative;

  /// @brief Field Positive value: static_cast<int32_t>(0x1)
  static ::Mono::Math::__BigInteger__Sign const Positive;

  /// @brief Field Zero value: static_cast<int32_t>(0x0)
  static ::Mono::Math::__BigInteger__Sign const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2287 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__Sign, 0x4>, "Size mismatch!");

static_assert(offsetof(::Mono::Math::__BigInteger__Sign, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Math
// Type: ::ModulusRing
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// CS Name: ::BigInteger::ModulusRing*
class CORDL_TYPE __BigInteger__ModulusRing : public ::System::Object {
public:
  // Declarations
  /// @brief Field constant, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_constant, put = __cordl_internal_set_constant)) ::Mono::Math::BigInteger* constant;

  /// @brief Field mod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mod, put = __cordl_internal_set_mod)) ::Mono::Math::BigInteger* mod;

  /// @brief Method BarrettReduction, addr 0x3c0bc98, size 0x258, virtual false, abstract: false, final false
  inline void BarrettReduction(::Mono::Math::BigInteger* x);

  /// @brief Method Difference, addr 0x3c0c468, size 0x1b4, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  /// @brief Method Multiply, addr 0x3c0c2ec, size 0x17c, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  static inline ::Mono::Math::__BigInteger__ModulusRing* New_ctor(::Mono::Math::BigInteger* modulus);

  /// @brief Method Pow, addr 0x3c0ba24, size 0x104, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* k);

  /// @brief Method Pow, addr 0x3c0c61c, size 0x70, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Pow(uint32_t b, ::Mono::Math::BigInteger* exp);

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_constant();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_constant() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_mod();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __cordl_internal_get_mod() const;

  constexpr void __cordl_internal_set_constant(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mod(::Mono::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x3c0b950, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* modulus);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__ModulusRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__ModulusRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BigInteger__ModulusRing(__BigInteger__ModulusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__ModulusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BigInteger__ModulusRing(__BigInteger__ModulusRing const&) = delete;

  /// @brief Field mod, offset: 0x10, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___mod;

  /// @brief Field constant, offset: 0x18, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___constant;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__ModulusRing, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Math::__BigInteger__ModulusRing, ___mod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::__BigInteger__ModulusRing, ___constant) == 0x18, "Offset mismatch!");

} // namespace Mono::Math
// Type: ::Kernel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// CS Name: ::BigInteger::Kernel*
class CORDL_TYPE __BigInteger__Kernel : public ::System::Object {
public:
  // Declarations
  /// @brief Method Compare, addr 0x3c09d30, size 0x144, virtual false, abstract: false, final false
  static inline ::Mono::Math::__BigInteger__Sign Compare(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method DwordDivMod, addr 0x3c0c68c, size 0x188, virtual false, abstract: false, final false
  static inline ::ArrayW<::Mono::Math::BigInteger*, ::Array<::Mono::Math::BigInteger*>*> DwordDivMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method DwordMod, addr 0x3c0a038, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t DwordMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method LeftShift, addr 0x3c0a6f4, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method MinusEq, addr 0x3c0c02c, size 0x130, virtual false, abstract: false, final false
  static inline void MinusEq(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method Multiply, addr 0x3c0a504, size 0xfc, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, uint32_t yOffset, uint32_t yLen,
                              ::ArrayW<uint32_t, ::Array<uint32_t>*> d, uint32_t dOffset);

  /// @brief Method MultiplyByDword, addr 0x3c0a600, size 0xf0, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* MultiplyByDword(::Mono::Math::BigInteger* n, uint32_t f);

  /// @brief Method MultiplyMod2p32pmod, addr 0x3c0bef0, size 0x13c, virtual false, abstract: false, final false
  static inline void MultiplyMod2p32pmod(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOffest, int32_t yLen,
                                         ::ArrayW<uint32_t, ::Array<uint32_t>*> d, int32_t dOffset, int32_t mod);

  /// @brief Method PlusEq, addr 0x3c0c15c, size 0x190, virtual false, abstract: false, final false
  static inline void PlusEq(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method RightShift, addr 0x3c0a8dc, size 0x178, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method SingleByteDivideInPlace, addr 0x3c0b200, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t SingleByteDivideInPlace(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method Subtract, addr 0x3c09e74, size 0x1c4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method modInverse, addr 0x3c0b458, size 0x4f8, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* modInverse(::Mono::Math::BigInteger* bi, ::Mono::Math::BigInteger* modulus);

  /// @brief Method modInverse, addr 0x3c0c814, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t modInverse(::Mono::Math::BigInteger* bi, uint32_t modulus);

  /// @brief Method multiByteDivide, addr 0x3c0a09c, size 0x468, virtual false, abstract: false, final false
  static inline ::ArrayW<::Mono::Math::BigInteger*, ::Array<::Mono::Math::BigInteger*>*> multiByteDivide(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__Kernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__Kernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BigInteger__Kernel(__BigInteger__Kernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__Kernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BigInteger__Kernel(__BigInteger__Kernel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2289 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__Kernel, 0x10>, "Size mismatch!");

} // namespace Mono::Math
// Type: Mono.Math::BigInteger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// CS Name: ::Mono.Math::BigInteger*
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  using Kernel = ::Mono::Math::__BigInteger__Kernel;

  using ModulusRing = ::Mono::Math::__BigInteger__ModulusRing;

  using Sign = ::Mono::Math::__BigInteger__Sign;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint32_t, ::Array<uint32_t>*> data;

  /// @brief Field length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) uint32_t length;

  /// @brief Field rng, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rng, put = setStaticF_rng)) ::System::Security::Cryptography::RandomNumberGenerator* rng;

  /// @brief Field smallPrimes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_smallPrimes, put = setStaticF_smallPrimes)) ::ArrayW<uint32_t, ::Array<uint32_t>*> smallPrimes;

  /// @brief Method BitCount, addr 0x3c049d8, size 0x6c, virtual false, abstract: false, final false
  inline int32_t BitCount();

  /// @brief Method Clear, addr 0x3c052c4, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Equals, addr 0x3c0b310, size 0x148, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GeneratePseudoPrime, addr 0x3c04710, size 0x6c, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t bits);

  /// @brief Method GenerateRandom, addr 0x3c085f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits);

  /// @brief Method GenerateRandom, addr 0x3c0aafc, size 0x160, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits, ::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method GetBytes, addr 0x3c0563c, size 0x134, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method GetHashCode, addr 0x3c0b2b0, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Incr2, addr 0x3c0bb7c, size 0x88, virtual false, abstract: false, final false
  inline void Incr2();

  /// @brief Method IsProbablePrime, addr 0x3c087f0, size 0x1a8, virtual false, abstract: false, final false
  inline bool IsProbablePrime();

  /// @brief Method LowestSetBit, addr 0x3c0aed4, size 0x7c, virtual false, abstract: false, final false
  inline int32_t LowestSetBit();

  /// @brief Method ModInverse, addr 0x3c04c68, size 0x4, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* modulus);

  /// @brief Method ModPow, addr 0x3c0519c, size 0x78, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger* exp, ::Mono::Math::BigInteger* n);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  static inline ::Mono::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::__BigInteger__Sign sign, uint32_t len);

  static inline ::Mono::Math::BigInteger* New_ctor(uint32_t ui);

  /// @brief Method Normalize, addr 0x3c09c50, size 0x58, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method Randomize, addr 0x3c08654, size 0x5c, virtual false, abstract: false, final false
  inline void Randomize();

  /// @brief Method Randomize, addr 0x3c0ac5c, size 0x180, virtual false, abstract: false, final false
  inline void Randomize(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method SetBit, addr 0x3c0ae70, size 0x8, virtual false, abstract: false, final false
  inline void SetBit(uint32_t bitNum);

  /// @brief Method SetBit, addr 0x3c0ae78, size 0x5c, virtual false, abstract: false, final false
  inline void SetBit(uint32_t bitNum, bool value);

  /// @brief Method TestBit, addr 0x3c0addc, size 0x94, virtual false, abstract: false, final false
  inline bool TestBit(int32_t bitNum);

  /// @brief Method TestBit, addr 0x3c08a88, size 0x3c, virtual false, abstract: false, final false
  inline bool TestBit(uint32_t bitNum);

  /// @brief Method ToString, addr 0x3c0b308, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3c0af68, size 0x58, virtual false, abstract: false, final false
  inline ::StringW ToString(uint32_t radix);

  /// @brief Method ToString, addr 0x3c0afc0, size 0x240, virtual false, abstract: false, final false
  inline ::StringW ToString(uint32_t radix, ::StringW characterSet);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_data();

  constexpr uint32_t const& __cordl_internal_get_length() const;

  constexpr uint32_t& __cordl_internal_get_length();

  constexpr void __cordl_internal_set_data(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_length(uint32_t value);

  /// @brief Method .ctor, addr 0x3c09abc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* bi);

  /// @brief Method .ctor, addr 0x3c09b7c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  /// @brief Method .ctor, addr 0x3c04f8c, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  /// @brief Method .ctor, addr 0x3c09a48, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::__BigInteger__Sign sign, uint32_t len);

  /// @brief Method .ctor, addr 0x3c09ca8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(uint32_t ui);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_smallPrimes();

  /// @brief Method get_Rng, addr 0x3c0aa54, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng();

  /// @brief Method op_Division, addr 0x3c08ac4, size 0x28, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Equality, addr 0x3c04dd4, size 0xb0, virtual false, abstract: false, final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Equality, addr 0x3c086b0, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_GreaterThan, addr 0x3c0af50, size 0x18, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3c0871c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Implicit, addr 0x3c04a58, size 0xa4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(int32_t value);

  /// @brief Method op_Implicit, addr 0x3c046b8, size 0x58, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(uint32_t value);

  /// @brief Method op_Inequality, addr 0x3c04780, size 0xb0, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Inequality, addr 0x3c08eb4, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_LeftShift, addr 0x3c0a6f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_LessThan, addr 0x3c04a44, size 0x14, virtual false, abstract: false, final false
  static inline bool op_LessThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_LessThanOrEqual, addr 0x3c08aec, size 0x18, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Modulus, addr 0x3c04c6c, size 0x2c, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Modulus(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Modulus, addr 0x3c0477c, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t op_Modulus(::Mono::Math::BigInteger* bi, uint32_t ui);

  /// @brief Method op_Multiply, addr 0x3c08998, size 0xf0, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi, int32_t i);

  /// @brief Method op_Multiply, addr 0x3c04830, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_RightShift, addr 0x3c0a8d8, size 0x4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_Subtraction, addr 0x3c04afc, size 0x16c, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline void setStaticF_smallPrimes(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

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

  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  uint32_t ___length;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2290 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::BigInteger, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger, ___length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger, ___data) == 0x18, "Offset mismatch!");

} // namespace Mono::Math
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__Sign, "Mono.Math", "BigInteger/Sign");
NEED_NO_BOX(::Mono::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
NEED_NO_BOX(::Mono::Math::__BigInteger__Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__Kernel*, "Mono.Math", "BigInteger/Kernel");
NEED_NO_BOX(::Mono::Math::__BigInteger__ModulusRing);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__ModulusRing*, "Mono.Math", "BigInteger/ModulusRing");
