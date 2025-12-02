#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Rfc7748/X25519Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519Field)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X25519Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
class CORDL_TYPE X25519Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field RootNegOne, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RootNegOne, put = setStaticF_RootNegOne)) ::ArrayW<int32_t, ::Array<int32_t>*> RootNegOne;

  /// @brief Method Add, addr 0x33ed37c, size 0x70, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method AddOne, addr 0x33ee0e4, size 0x2c, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method AddOne, addr 0x33ee110, size 0x34, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Apm, addr 0x33ec8f0, size 0x8c, virtual false, abstract: false, final false
  static inline void Apm(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> zp, ::ArrayW<int32_t, ::Array<int32_t>*> zm);

  /// @brief Method CMov, addr 0x33ee24c, size 0x88, virtual false, abstract: false, final false
  static inline void CMov(int32_t cond, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method CNegate, addr 0x33ee2d4, size 0x50, virtual false, abstract: false, final false
  static inline void CNegate(int32_t negate, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method CSwap, addr 0x33edd40, size 0x70, virtual false, abstract: false, final false
  static inline void CSwap(int32_t swap, ::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method Carry, addr 0x33ee144, size 0x108, virtual false, abstract: false, final false
  static inline void Carry(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Copy, addr 0x33edcc8, size 0x78, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Create, addr 0x33ec8a8, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Create();

  /// @brief Method CreateTable, addr 0x33ee324, size 0x50, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CreateTable(int32_t n);

  /// @brief Method Decode, addr 0x33edc18, size 0xb0, virtual false, abstract: false, final false
  static inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Decode128, addr 0x33ee374, size 0x13c, virtual false, abstract: false, final false
  static inline void Decode128(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Decode32, addr 0x33ee4b0, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode, addr 0x33eded4, size 0x88, virtual false, abstract: false, final false
  static inline void Encode(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, int32_t zOff);

  /// @brief Method Encode128, addr 0x33ee518, size 0x128, virtual false, abstract: false, final false
  static inline void Encode128(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode32, addr 0x33ee640, size 0x80, virtual false, abstract: false, final false
  static inline void Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Inv, addr 0x33eddb0, size 0x9c, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method IsZero, addr 0x33ee934, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method IsZeroVar, addr 0x33ee988, size 0x64, virtual false, abstract: false, final false
  static inline bool IsZeroVar(::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method Mul, addr 0x33eccbc, size 0x4e8, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Mul, addr 0x33ed214, size 0x168, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Negate, addr 0x33ee9ec, size 0x58, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field* New_ctor();

  /// @brief Method Normalize, addr 0x33ede4c, size 0x88, virtual false, abstract: false, final false
  static inline void Normalize(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method One, addr 0x33eeaf4, size 0x50, virtual false, abstract: false, final false
  static inline void One(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method PowPm5d8, addr 0x33ee6c0, size 0x1d0, virtual false, abstract: false, final false
  static inline void PowPm5d8(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> rx2, ::ArrayW<int32_t, ::Array<int32_t>*> rz);

  /// @brief Method Reduce, addr 0x33eea44, size 0xb0, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t x);

  /// @brief Method Sqr, addr 0x33ee890, size 0xa4, virtual false, abstract: false, final false
  static inline void Sqr(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t n, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Sqr, addr 0x33ec97c, size 0x340, virtual false, abstract: false, final false
  static inline void Sqr(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method SqrtRatioVar, addr 0x33eeb44, size 0x1d0, virtual false, abstract: false, final false
  static inline bool SqrtRatioVar(::ArrayW<int32_t, ::Array<int32_t>*> u, ::ArrayW<int32_t, ::Array<int32_t>*> v, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Sub, addr 0x33ed1a4, size 0x70, virtual false, abstract: false, final false
  static inline void Sub(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method SubOne, addr 0x33eed14, size 0x2c, virtual false, abstract: false, final false
  static inline void SubOne(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Zero, addr 0x33eed40, size 0x40, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method .ctor, addr 0x33ee0e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_RootNegOne();

  static inline void setStaticF_RootNegOne(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519Field(X25519Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519Field(X25519Field const&) = delete;

  /// @brief Field M24 offset 0xffffffff size 0x4
  static constexpr int32_t M24{ static_cast<int32_t>(0xffffff) };

  /// @brief Field M25 offset 0xffffffff size 0x4
  static constexpr int32_t M25{ static_cast<int32_t>(0x1ffffff) };

  /// @brief Field M26 offset 0xffffffff size 0x4
  static constexpr int32_t M26{ static_cast<int32_t>(0x3ffffff) };

  /// @brief Field Size offset 0xffffffff size 0x4
  static constexpr int32_t Size{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1553 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field");
