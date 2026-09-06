#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace Mono::Math {
class BigInteger_Kernel;
}
namespace Mono::Math {
class BigInteger_ModulusRing;
}
namespace Mono::Math {
struct BigInteger_Sign;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Math {
struct BigInteger_Sign;
}
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math {
class BigInteger_Kernel;
}
namespace Mono::Math {
class BigInteger_ModulusRing;
}
// Write type traits
MARK_VAL_T(::Mono::Math::BigInteger_Sign);
MARK_REF_T(::Mono::Math::BigInteger*);
MARK_REF_T(::Mono::Math::BigInteger_Kernel*);
MARK_REF_T(::Mono::Math::BigInteger_ModulusRing*);
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger_Sign, "Mono.Math", "BigInteger/Sign");
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger_Kernel*, "Mono.Math", "BigInteger/Kernel");
DEFINE_IL2CPP_CLASS(::Mono::Math::BigInteger_ModulusRing*, "Mono.Math", "BigInteger/ModulusRing");
// Dependencies
namespace Mono::Math {
// Is value type: true
// CS Name: Mono.Math.BigInteger/Sign
struct CORDL_TYPE BigInteger_Sign {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BigInteger_Sign_Unwrapped
  enum struct __BigInteger_Sign_Unwrapped : int32_t {
    __E_Negative = static_cast<int32_t>(0xffffffff),
    __E_Zero = static_cast<int32_t>(0x0),
    __E_Positive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BigInteger_Sign_Unwrapped() const noexcept {
    return static_cast<__BigInteger_Sign_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger_Sign();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr BigInteger_Sign(int32_t value__) noexcept;

  /// @brief Field Negative value: I32(-1)
  static ::Mono::Math::BigInteger_Sign const Negative;

  /// @brief Field Positive value: I32(1)
  static ::Mono::Math::BigInteger_Sign const Positive;

  /// @brief Field Zero value: I32(0)
  static ::Mono::Math::BigInteger_Sign const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19341 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Math::BigInteger_Sign, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Mono::Math::BigInteger_Sign) == 0x4, "Size mismatch!");

} // namespace Mono::Math
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger/ModulusRing
class CORDL_TYPE BigInteger_ModulusRing : public ::System::Object {
public:
  // Declarations
  /// @brief Field constant, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_constant, put = __cordl_internal_set_constant)) ::Mono::Math::BigInteger* constant;

  /// @brief Field mod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mod, put = __cordl_internal_set_mod)) ::Mono::Math::BigInteger* mod;

  /// @brief Method BarrettReduction, addr 0x5aaa6a8, size 0x25c, virtual false, abstract: false, final false
  inline void BarrettReduction(::Mono::Math::BigInteger* x);

  /// @brief Method Difference, addr 0x5aaae34, size 0x170, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  /// @brief Method Multiply, addr 0x5aaacb4, size 0x180, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  static inline ::Mono::Math::BigInteger_ModulusRing* New_ctor(::Mono::Math::BigInteger* modulus);

  /// @brief Method Pow, addr 0x5aaa47c, size 0x108, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* k);

  /// [CLSCompliant(false)]
  /// @brief Method Pow, addr 0x5aaafa4, size 0x74, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* Pow(uint32_t b, ::Mono::Math::BigInteger* exp);

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_constant() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_constant();

  constexpr ::Mono::Math::BigInteger* const& __cordl_internal_get_mod() const;

  constexpr ::Mono::Math::BigInteger*& __cordl_internal_get_mod();

  constexpr void __cordl_internal_set_constant(::Mono::Math::BigInteger* value);

  constexpr void __cordl_internal_set_mod(::Mono::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x5aaa3b0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* modulus);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger_ModulusRing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigInteger_ModulusRing", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger_ModulusRing(BigInteger_ModulusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger_ModulusRing", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger_ModulusRing(BigInteger_ModulusRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19342 };

  /// @brief Field mod, offset: 0x10, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___mod;

  /// @brief Field constant, offset: 0x18, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___constant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Math::BigInteger_ModulusRing, ___mod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger_ModulusRing, ___constant) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Math::BigInteger_ModulusRing) == 0x20, "Size mismatch!");

} // namespace Mono::Math
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger/Kernel
class CORDL_TYPE BigInteger_Kernel : public ::System::Object {
public:
  // Declarations
  /// @brief Method Compare, addr 0x5aa8908, size 0x144, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger_Sign Compare(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method DwordDivMod, addr 0x5aab018, size 0x194, virtual false, abstract: false, final false
  static inline ::ArrayW<::Mono::Math::BigInteger*> DwordDivMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method DwordMod, addr 0x5aa8bfc, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t DwordMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method LeftShift, addr 0x5aa91dc, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method MinusEq, addr 0x5aaaa14, size 0x100, virtual false, abstract: false, final false
  static inline void MinusEq(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method Multiply, addr 0x5aa90f4, size 0xe4, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t> y, uint32_t yOffset, uint32_t yLen, ::ArrayW<uint32_t> d, uint32_t dOffset);

  /// @brief Method MultiplyMod2p32pmod, addr 0x5aaa904, size 0x110, virtual false, abstract: false, final false
  static inline void MultiplyMod2p32pmod(::ArrayW<uint32_t> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOffest, int32_t yLen, ::ArrayW<uint32_t> d, int32_t dOffset, int32_t mod);

  /// @brief Method PlusEq, addr 0x5aaab14, size 0x1a0, virtual false, abstract: false, final false
  static inline void PlusEq(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method RightShift, addr 0x5aa93c0, size 0x180, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method SingleByteDivideInPlace, addr 0x5aa9c98, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t SingleByteDivideInPlace(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method Subtract, addr 0x5aa8a4c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method modInverse, addr 0x5aa9e90, size 0x520, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* modInverse(::Mono::Math::BigInteger* bi, ::Mono::Math::BigInteger* modulus);

  /// @brief Method modInverse, addr 0x5aab1ac, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t modInverse(::Mono::Math::BigInteger* bi, uint32_t modulus);

  /// @brief Method multiByteDivide, addr 0x5aa8c64, size 0x470, virtual false, abstract: false, final false
  static inline ::ArrayW<::Mono::Math::BigInteger*> multiByteDivide(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger_Kernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigInteger_Kernel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger_Kernel(BigInteger_Kernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger_Kernel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger_Kernel(BigInteger_Kernel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Math::BigInteger_Kernel) == 0x10, "Size mismatch!");

} // namespace Mono::Math
// Dependencies System.Object
namespace Mono::Math {
// Is value type: false
// CS Name: Mono.Math.BigInteger
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  using Kernel = ::Mono::Math::BigInteger_Kernel;

  using ModulusRing = ::Mono::Math::BigInteger_ModulusRing;

  using Sign = ::Mono::Math::BigInteger_Sign;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<uint32_t> data;

  /// @brief Field length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) uint32_t length;

  /// @brief Field rng, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rng, put = setStaticF_rng)) ::System::Security::Cryptography::RandomNumberGenerator* rng;

  /// @brief Field smallPrimes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_smallPrimes, put = setStaticF_smallPrimes)) ::ArrayW<uint32_t> smallPrimes;

  /// @brief Method BitCount, addr 0x5aa3d24, size 0x6c, virtual false, abstract: false, final false
  inline int32_t BitCount();

  /// @brief Method Clear, addr 0x5aa4608, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Equals, addr 0x5aa9d68, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GeneratePseudoPrime, addr 0x5aa3a58, size 0x60, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t bits);

  /// @brief Method GenerateRandom, addr 0x5aa9754, size 0x60, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits);

  /// @brief Method GenerateRandom, addr 0x5aa95ec, size 0x168, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits, ::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method GetBytes, addr 0x5aa4988, size 0x140, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> GetBytes();

  /// @brief Method GetHashCode, addr 0x5aa9d0c, size 0x54, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Incr2, addr 0x5aaa588, size 0x88, virtual false, abstract: false, final false
  inline void Incr2();

  /// @brief Method LowestSetBit, addr 0x5aa98c4, size 0x80, virtual false, abstract: false, final false
  inline int32_t LowestSetBit();

  /// @brief Method ModInverse, addr 0x5aa3f90, size 0x4, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* modulus);

  /// @brief Method ModPow, addr 0x5aa44d0, size 0x7c, virtual false, abstract: false, final false
  inline ::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger* exp, ::Mono::Math::BigInteger* n);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi);

  /// @brief [CLSCompliant(false)]
  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  static inline ::Mono::Math::BigInteger* New_ctor(::ArrayW<uint8_t> inData);

  /// @brief [CLSCompliant(false)]
  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger_Sign sign, uint32_t len);

  /// @brief [CLSCompliant(false)]
  static inline ::Mono::Math::BigInteger* New_ctor(uint32_t ui);

  /// @brief Method Normalize, addr 0x5aa87c4, size 0x58, virtual false, abstract: false, final false
  inline void Normalize();

  /// [CLSCompliant(false)]
  /// @brief Method SetBit, addr 0x5aa9848, size 0x8, virtual false, abstract: false, final false
  inline void SetBit(uint32_t bitNum);

  /// [CLSCompliant(false)]
  /// @brief Method SetBit, addr 0x5aa9850, size 0x74, virtual false, abstract: false, final false
  inline void SetBit(uint32_t bitNum, bool value);

  /// @brief Method TestBit, addr 0x5aa97b4, size 0x94, virtual false, abstract: false, final false
  inline bool TestBit(int32_t bitNum);

  /// @brief Method ToString, addr 0x5aa9d60, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x5aa99f8, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW ToString(uint32_t radix);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x5aa9a54, size 0x244, virtual false, abstract: false, final false
  inline ::StringW ToString(uint32_t radix, ::StringW characterSet);

  constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<uint32_t>& __cordl_internal_get_data();

  constexpr uint32_t const& __cordl_internal_get_length() const;

  constexpr uint32_t& __cordl_internal_get_length();

  constexpr void __cordl_internal_set_data(::ArrayW<uint32_t> value);

  constexpr void __cordl_internal_set_length(uint32_t value);

  /// @brief Method .ctor, addr 0x5aa863c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* bi);

  /// [CLSCompliant(false)]
  /// @brief Method .ctor, addr 0x5aa86f0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  /// @brief Method .ctor, addr 0x5aa42c0, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> inData);

  /// [CLSCompliant(false)]
  /// @brief Method .ctor, addr 0x5aa85d0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Math::BigInteger_Sign sign, uint32_t len);

  /// [CLSCompliant(false)]
  /// @brief Method .ctor, addr 0x5aa881c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(uint32_t ui);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng();

  static inline ::ArrayW<uint32_t> getStaticF_smallPrimes();

  /// @brief Method get_Rng, addr 0x5aa9540, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng();

  /// @brief Method op_Division, addr 0x5aa90d4, size 0x20, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Equality, addr 0x5aa40f0, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// [CLSCompliant(false)]
  /// @brief Method op_Equality, addr 0x5aa889c, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_GreaterThan, addr 0x5aa99b0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x5aa99c8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Implicit, addr 0x5aa3da4, size 0xa8, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(int32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method op_Implicit, addr 0x5aa39fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(uint32_t value);

  /// @brief Method op_Inequality, addr 0x5aa3abc, size 0xbc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// [CLSCompliant(false)]
  /// @brief Method op_Inequality, addr 0x5aa9944, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_LeftShift, addr 0x5aa91d8, size 0x4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_LessThan, addr 0x5aa3d90, size 0x14, virtual false, abstract: false, final false
  static inline bool op_LessThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_LessThanOrEqual, addr 0x5aa99e0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Modulus, addr 0x5aa3f94, size 0x24, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Modulus(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// [CLSCompliant(false)]
  /// @brief Method op_Modulus, addr 0x5aa3ab8, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t op_Modulus(::Mono::Math::BigInteger* bi, uint32_t ui);

  /// @brief Method op_Multiply, addr 0x5aa3b78, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_RightShift, addr 0x5aa93bc, size 0x4, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_Subtraction, addr 0x5aa3e4c, size 0x144, virtual false, abstract: false, final false
  static inline ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline void setStaticF_smallPrimes(::ArrayW<uint32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger(BigInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger(BigInteger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19344 };

  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  uint32_t ___length;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Math::BigInteger, ___length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Math::BigInteger, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Math::BigInteger) == 0x20, "Size mismatch!");

} // namespace Mono::Math
