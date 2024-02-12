#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP521R1Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP521R1Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP521R1Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1437))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP521R1Field*
class CORDL_TYPE SecP521R1Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_P, put = setStaticF_P))::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  static inline void setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_P();

  /// @brief Method Add, addr 0x102a75c, size 0x110, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddOne, addr 0x102a86c, size 0xe8, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method FromBigInteger, addr 0x102a954, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Half, addr 0x102a9f0, size 0x68, virtual false, abstract: false, final false
  static inline void Half(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Inv, addr 0x102aa58, size 0x2b8, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IsZero, addr 0x102ad10, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Multiply, addr 0x102ade8, size 0x8c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Negate, addr 0x102b0f0, size 0x9c, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Random, addr 0x102a12c, size 0xf8, virtual false, abstract: false, final false
  static inline void Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method RandomMult, addr 0x102a2f4, size 0x6c, virtual false, abstract: false, final false
  static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce, addr 0x102afdc, size 0x114, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce23, addr 0x102b18c, size 0xe4, virtual false, abstract: false, final false
  static inline void Reduce23(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Square, addr 0x102ad64, size 0x84, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareN, addr 0x102ae74, size 0xcc, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Subtract, addr 0x102b2e8, size 0xa0, virtual false, abstract: false, final false
  static inline void Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Twice, addr 0x102b388, size 0x68, virtual false, abstract: false, final false
  static inline void Twice(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ImplMultiply, addr 0x102af40, size 0x9c, virtual false, abstract: false, final false
  static inline void ImplMultiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method ImplSquare, addr 0x102b270, size 0x78, virtual false, abstract: false, final false
  static inline void ImplSquare(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field* New_ctor();

  /// @brief Method .ctor, addr 0x102b484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SecP521R1Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP521R1Field(SecP521R1Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP521R1Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP521R1Field(SecP521R1Field const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP521R1Field();

public:
  /// @brief Field P16 offset 0xffffffff size 0x4
  static constexpr uint32_t P16{ static_cast<uint32_t>(0xffffff81u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field");
