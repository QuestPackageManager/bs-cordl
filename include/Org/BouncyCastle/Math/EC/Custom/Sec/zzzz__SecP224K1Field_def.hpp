#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224K1Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP224K1Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224K1Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224K1Field
class CORDL_TYPE SecP224K1Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_P, put = setStaticF_P)) ::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field PExt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PExt, put = setStaticF_PExt)) ::ArrayW<uint32_t, ::Array<uint32_t>*> PExt;

  /// @brief Field PExtInv, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PExtInv, put = setStaticF_PExtInv)) ::ArrayW<uint32_t, ::Array<uint32_t>*> PExtInv;

  /// @brief Method Add, addr 0x33c82b8, size 0xdc, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddExt, addr 0x33c8394, size 0x13c, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method AddOne, addr 0x33c84d0, size 0xd8, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method FromBigInteger, addr 0x33c85a8, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Half, addr 0x33c8678, size 0xcc, virtual false, abstract: false, final false
  static inline void Half(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Inv, addr 0x33c8744, size 0x32c, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IsZero, addr 0x33c8a70, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Multiply, addr 0x33c8b48, size 0x8c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MultiplyAddToExt, addr 0x33c8da4, size 0x138, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Negate, addr 0x33c8edc, size 0xb4, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field* New_ctor();

  /// @brief Method Random, addr 0x33c7c90, size 0xe0, virtual false, abstract: false, final false
  static inline void Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method RandomMult, addr 0x33c7e0c, size 0x78, virtual false, abstract: false, final false
  static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce, addr 0x33c8ca4, size 0x100, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce32, addr 0x33c8f90, size 0xe0, virtual false, abstract: false, final false
  static inline void Reduce32(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Square, addr 0x33c8ac4, size 0x84, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareN, addr 0x33c8bd4, size 0xd0, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Subtract, addr 0x33c9070, size 0x34, virtual false, abstract: false, final false
  static inline void Subtract(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubtractExt, addr 0x33c90a4, size 0xe8, virtual false, abstract: false, final false
  static inline void SubtractExt(::ArrayW<uint32_t, ::Array<uint32_t>*> xx, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Twice, addr 0x33c918c, size 0xdc, virtual false, abstract: false, final false
  static inline void Twice(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method .ctor, addr 0x33c9380, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_P();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_PExt();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_PExtInv();

  static inline void setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_PExt(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_PExtInv(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP224K1Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecP224K1Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP224K1Field(SecP224K1Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP224K1Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP224K1Field(SecP224K1Field const&) = delete;

  /// @brief Field P6 offset 0xffffffff size 0x4
  static constexpr uint32_t P6{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field PExt13 offset 0xffffffff size 0x4
  static constexpr uint32_t PExt13{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field PInv33 offset 0xffffffff size 0x4
  static constexpr uint32_t PInv33{ static_cast<uint32_t>(0x1a93u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224K1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224K1Field");
