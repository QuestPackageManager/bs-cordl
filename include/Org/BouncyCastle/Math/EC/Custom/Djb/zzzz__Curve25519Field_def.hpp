#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Djb/Curve25519Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Curve25519Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519Field*
class CORDL_TYPE Curve25519Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_P, put = setStaticF_P))::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field PExt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PExt, put = setStaticF_PExt))::ArrayW<uint32_t, ::Array<uint32_t>*> PExt;

  /// @brief Method Add, addr 0x12342dc, size 0xb4, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddExt, addr 0x1234404, size 0xbc, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method AddOne, addr 0x1234628, size 0xb0, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddPExtTo, addr 0x12351fc, size 0x164, virtual false, abstract: false, final false
  static inline uint32_t AddPExtTo(::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method AddPTo, addr 0x12350f4, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddPTo(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method FromBigInteger, addr 0x12346d8, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Half, addr 0x1234784, size 0xbc, virtual false, abstract: false, final false
  static inline void Half(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Inv, addr 0x1234840, size 0x288, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IsZero, addr 0x1234ac8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Multiply, addr 0x1234b9c, size 0x88, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MultiplyAddToExt, addr 0x1234e2c, size 0xb8, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Negate, addr 0x1234ee4, size 0x98, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field* New_ctor();

  /// @brief Method Random, addr 0x1233b98, size 0xf8, virtual false, abstract: false, final false
  static inline void Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method RandomMult, addr 0x1233d5c, size 0x6c, virtual false, abstract: false, final false
  static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce, addr 0x1234cf0, size 0x13c, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce27, addr 0x1234f7c, size 0xec, virtual false, abstract: false, final false
  static inline void Reduce27(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Square, addr 0x1234b1c, size 0x80, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareN, addr 0x1234c24, size 0xcc, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubPExtFrom, addr 0x12344c0, size 0x168, virtual false, abstract: false, final false
  static inline int32_t SubPExtFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method SubPFrom, addr 0x1234390, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubPFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Subtract, addr 0x1235068, size 0x8c, virtual false, abstract: false, final false
  static inline void Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubtractExt, addr 0x123516c, size 0x90, virtual false, abstract: false, final false
  static inline void SubtractExt(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Twice, addr 0x1235360, size 0xb4, virtual false, abstract: false, final false
  static inline void Twice(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method .ctor, addr 0x12354e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_P();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_PExt();

  static inline void setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_PExt(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Curve25519Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Curve25519Field(Curve25519Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Curve25519Field(Curve25519Field const&) = delete;

  /// @brief Field P7 offset 0xffffffff size 0x4
  static constexpr uint32_t P7{ static_cast<uint32_t>(0xfffffff0u) };

  /// @brief Field PInv offset 0xffffffff size 0x4
  static constexpr uint32_t PInv{ static_cast<uint32_t>(0xfe100413u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519Field*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519Field");
