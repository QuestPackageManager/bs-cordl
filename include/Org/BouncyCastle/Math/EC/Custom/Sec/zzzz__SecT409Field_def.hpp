#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT409Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT409Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT409Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
class CORDL_TYPE SecT409Field : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x3405960, size 0x168, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddExt, addr 0x3405ac8, size 0x70, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> yy, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method AddOne, addr 0x3405b38, size 0xe0, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddTo, addr 0x3405c18, size 0x114, virtual false, abstract: false, final false
  static inline void AddTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method FromBigInteger, addr 0x3405d2c, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method HalfTrace, addr 0x3405d3c, size 0x90, virtual false, abstract: false, final false
  static inline void HalfTrace(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplCompactExt, addr 0x34066e8, size 0x12c, virtual false, abstract: false, final false
  static inline void ImplCompactExt(::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplExpand, addr 0x3406814, size 0xe8, virtual false, abstract: false, final false
  static inline void ImplExpand(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplMultiply, addr 0x3406314, size 0xd4, virtual false, abstract: false, final false
  static inline void ImplMultiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplMulwAcc, addr 0x34068fc, size 0x1e8, virtual false, abstract: false, final false
  static inline void ImplMulwAcc(::ArrayW<uint64_t, ::Array<uint64_t>*> xs, uint64_t y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ImplSquare, addr 0x3405dcc, size 0x10c, virtual false, abstract: false, final false
  static inline void ImplSquare(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method Invert, addr 0x3406038, size 0x1d0, virtual false, abstract: false, final false
  static inline void Invert(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply, addr 0x34062c8, size 0x4c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method MultiplyAddToExt, addr 0x34063e8, size 0x50, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field* New_ctor();

  /// @brief Method Reduce, addr 0x3405ed8, size 0x160, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Reduce39, addr 0x3406438, size 0x80, virtual false, abstract: false, final false
  static inline void Reduce39(::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Sqrt, addr 0x34064b8, size 0x1c4, virtual false, abstract: false, final false
  static inline void Sqrt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Square, addr 0x3406208, size 0x40, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method SquareAddToExt, addr 0x340667c, size 0x44, virtual false, abstract: false, final false
  static inline void SquareAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method SquareN, addr 0x3406248, size 0x80, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t n, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Trace, addr 0x34066c0, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t Trace(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor, addr 0x3406ae4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT409Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecT409Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT409Field(SecT409Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT409Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT409Field(SecT409Field const&) = delete;

  /// @brief Field M25 offset 0xffffffff size 0x8
  static constexpr uint64_t M25{ static_cast<uint64_t>(0x1ffffffu) };

  /// @brief Field M59 offset 0xffffffff size 0x8
  static constexpr uint64_t M59{ static_cast<uint64_t>(0x7ffffffffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1499 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409Field");
