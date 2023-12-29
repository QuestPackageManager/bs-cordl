#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpFieldElement)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
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
// Type: Org.BouncyCastle.Math.EC::FpFieldElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1569))
// CS Name: ::Org.BouncyCastle.Math.EC::FpFieldElement*
class CORDL_TYPE FpFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
  // Declarations
  /// @brief Field q, offset 0x10, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field r, offset 0x18, size 0x8
  __declspec(property(get = __get_r, put = __set_r))::Org::BouncyCastle::Math::BigInteger* r;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Math::BigInteger* x;

  __declspec(property(get = get_FieldName))::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_r();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_r() const;

  constexpr void __set_r(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method CalculateResidue addr 0xfdbbec size 0x124 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateResidue(::Org::BouncyCastle::Math::BigInteger* p);

  static inline ::Org::BouncyCastle::Math::EC::FpFieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor addr 0xfdd460 size 0x38 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::FpFieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor addr 0xfdbfc0 size 0xbc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ToBigInteger addr 0xfdd498 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method get_FieldName addr 0xfdd4a0 size 0x40 virtual true final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize addr 0xfdd4e0 size 0x1c virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method get_Q addr 0xfdd4fc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method Add addr 0xfdd504 size 0xbc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne addr 0xfdd5c0 size 0xec virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Subtract addr 0xfdd6ac size 0xbc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Multiply addr 0xfdd768 size 0xbc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct addr 0xfdd824 size 0x12c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct addr 0xfdd950 size 0x1a8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Divide addr 0xfddaf8 size 0xd4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate addr 0xfddbcc size 0xa0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  /// @brief Method Square addr 0xfddc6c size 0x98 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct addr 0xfddd04 size 0x110 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct addr 0xfdde14 size 0x18c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Invert addr 0xfddfa0 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Sqrt addr 0xfde034 size 0x5e0 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method CheckSqrt addr 0xfde614 size 0x58 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* CheckSqrt(::Org::BouncyCastle::Math::EC::ECFieldElement* z);

  /// @brief Method LucasSequence addr 0xfde66c size 0x53c virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  LucasSequence(::Org::BouncyCastle::Math::BigInteger* P, ::Org::BouncyCastle::Math::BigInteger* Q, ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method ModAdd addr 0xfdeba8 size 0x64 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModAdd(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method ModDouble addr 0xfdec0c size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModDouble(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModHalf addr 0xfdec74 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModHalf(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModHalfAbs addr 0xfdecd4 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModHalfAbs(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModInverse addr 0xfded34 size 0xd0 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModInverse(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModMult addr 0xfdee04 size 0x3c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModMult(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method ModReduce addr 0xfdee40 size 0x310 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModReduce(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method ModSubtract addr 0xfdf150 size 0x44 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ModSubtract(::Org::BouncyCastle::Math::BigInteger* x1, ::Org::BouncyCastle::Math::BigInteger* x2);

  /// @brief Method Equals addr 0xfdf194 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xfdf23c size 0x5c virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::FpFieldElement* other);

  /// @brief Method GetHashCode addr 0xfdf298 size 0x44 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpFieldElement(FpFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpFieldElement(FpFieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpFieldElement();

public:
  /// @brief Field q, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field r, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___r;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpFieldElement, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___q) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___r) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::FpFieldElement, ___x) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpFieldElement*, "Org.BouncyCastle.Math.EC", "FpFieldElement");
