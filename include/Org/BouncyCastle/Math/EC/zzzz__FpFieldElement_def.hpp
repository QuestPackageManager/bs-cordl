#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/FpFieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpFieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::FpFieldElement);
// Dependencies Org.BouncyCastle.Math.EC.AbstractFpFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.FpFieldElement
class CORDL_TYPE FpFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
  // Declarations
  __declspec(property(get = get_FieldName)) ::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field q, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q)) ::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field r, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) ::Org::BouncyCastle::Math::BigInteger* r;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Org::BouncyCastle::Math::BigInteger* x;

  /// @brief Method Add, addr 0x24ce1ec, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0x24ce2a4, size 0xe8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method CalculateResidue, addr 0x24cc948, size 0x12c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateResidue(::Org::BouncyCastle::Math::BigInteger* p);

  /// @brief Method CheckSqrt, addr 0x24cf2d4, size 0x58, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CheckSqrt(::Org::BouncyCastle::Math::EC::ECFieldElement* z);

  /// @brief Method Divide, addr 0x24ce7d0, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Equals, addr 0x24cfe5c, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x24cff04, size 0x5c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::FpFieldElement* other);

  /// @brief Method GetHashCode, addr 0x24cff60, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invert, addr 0x24cec60, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method LucasSequence, addr 0x24cf32c, size 0x53c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  LucasSequence(::Org::BouncyCastle::Math::BigInteger* P, ::Org::BouncyCastle::Math::BigInteger* Q, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method ModAdd, addr 0x24cf868, size 0x64, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModAdd(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method ModDouble, addr 0x24cf8cc, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModDouble(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModHalf, addr 0x24cf934, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModHalf(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModHalfAbs, addr 0x24cf994, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModHalfAbs(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModInverse, addr 0x24cf9f4, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInverse(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModMult, addr 0x24cfac4, size 0x3c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModMult(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method ModReduce, addr 0x24cfb00, size 0x318, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModReduce(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModSubtract, addr 0x24cfe18, size 0x44, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModSubtract(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method Multiply, addr 0x24ce444, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct, addr 0x24ce4fc, size 0x130, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct, addr 0x24ce62c, size 0x1a4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Negate, addr 0x24ce8a0, size 0x9c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  static inline ::Org::BouncyCastle::Math::EC::FpFieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::FpFieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Sqrt, addr 0x24cecec, size 0x5e8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Square, addr 0x24ce93c, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct, addr 0x24ce9cc, size 0x10c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct, addr 0x24cead8, size 0x188, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Subtract, addr 0x24ce38c, size 0xb8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method ToBigInteger, addr 0x24ce180, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_q() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_q();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_r() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_r();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_x() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_r(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x24ccd08, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor, addr 0x24ce148, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_FieldName, addr 0x24ce188, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0x24ce1c8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Q, addr 0x24ce1e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpFieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpFieldElement(FpFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpFieldElement(FpFieldElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1569 };

  /// @brief Field q, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field r, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___r;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___q) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___r) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___x) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpFieldElement, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpFieldElement*, "Org.BouncyCastle.Math.EC", "FpFieldElement");
