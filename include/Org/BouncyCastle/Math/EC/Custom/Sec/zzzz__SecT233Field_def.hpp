#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT233Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT233Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT233Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field
class CORDL_TYPE SecT233Field : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x249d0ac, size 0xd8, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddExt, addr 0x249d184, size 0x198, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> yy, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method AddOne, addr 0x249d31c, size 0x8c, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddTo, addr 0x249d3a8, size 0xa8, virtual false, abstract: false, final false
  static inline void AddTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method FromBigInteger, addr 0x249d450, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method HalfTrace, addr 0x249d460, size 0x8c, virtual false, abstract: false, final false
  static inline void HalfTrace(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplCompactExt, addr 0x249e054, size 0xb0, virtual false, abstract: false, final false
  static inline void ImplCompactExt(::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplExpand, addr 0x249e104, size 0x8c, virtual false, abstract: false, final false
  static inline void ImplExpand(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplMultiply, addr 0x249d93c, size 0x374, virtual false, abstract: false, final false
  static inline void ImplMultiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplMulwAcc, addr 0x249e190, size 0x19c, virtual false, abstract: false, final false
  static inline void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ImplSquare, addr 0x249d4ec, size 0x9c, virtual false, abstract: false, final false
  static inline void ImplSquare(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method Invert, addr 0x249d684, size 0x1b4, virtual false, abstract: false, final false
  static inline void Invert(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply, addr 0x249d874, size 0x4c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method MultiplyAddToExt, addr 0x249dcb0, size 0x50, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field* New_ctor();

  /// @brief Method Reduce, addr 0x249d588, size 0xfc, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Reduce23, addr 0x249dd00, size 0x80, virtual false, abstract: false, final false
  static inline void Reduce23(::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Sqrt, addr 0x249dd80, size 0x25c, virtual false, abstract: false, final false
  static inline void Sqrt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Square, addr 0x249d838, size 0x3c, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method SquareAddToExt, addr 0x249dfdc, size 0x40, virtual false, abstract: false, final false
  static inline void SquareAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method SquareN, addr 0x249d8c0, size 0x7c, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t n, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Trace, addr 0x249e01c, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t Trace(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor, addr 0x249e32c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT233Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecT233Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT233Field(SecT233Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT233Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT233Field(SecT233Field const&) = delete;

  /// @brief Field M41 offset 0xffffffff size 0x8
  static constexpr uint64_t M41{ static_cast<uint64_t>(0x1ffffffffffu) };

  /// @brief Field M59 offset 0xffffffff size 0x8
  static constexpr uint64_t M59{ static_cast<uint64_t>(0x7ffffffffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT233Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT233Field");
