#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224R1FieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP224R1FieldElement)
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
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224R1FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement);
// Dependencies Org.BouncyCastle.Math.EC.AbstractFpFieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
class CORDL_TYPE SecP224R1FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
  // Declarations
  __declspec(property(get = get_FieldName)) ::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  /// @brief Field Q, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Q, put = setStaticF_Q)) ::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Method Add, addr 0x24739c4, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0x2473ab0, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Divide, addr 0x2473d28, size 0xf4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Equals, addr 0x2474450, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2474568, size 0x2c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* other);

  /// @brief Method Equals, addr 0x24744dc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method GetHashCode, addr 0x2474594, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invert, addr 0x2473f5c, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method IsSquare, addr 0x24741b0, size 0xec, virtual false, abstract: false, final false
  static inline bool IsSquare(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Multiply, addr 0x2473c3c, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate, addr 0x2473e1c, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* New_ctor();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* New_ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method RM, addr 0x247464c, size 0x118, virtual false, abstract: false, final false
  static inline void RM(::ArrayW<uint32_t, ::Array<uint32_t>*> nc, ::ArrayW<uint32_t, ::Array<uint32_t>*> d0, ::ArrayW<uint32_t, ::Array<uint32_t>*> e0, ::ArrayW<uint32_t, ::Array<uint32_t>*> d1,
                        ::ArrayW<uint32_t, ::Array<uint32_t>*> e1, ::ArrayW<uint32_t, ::Array<uint32_t>*> f1, ::ArrayW<uint32_t, ::Array<uint32_t>*> t);

  /// @brief Method RP, addr 0x2474764, size 0x124, virtual false, abstract: false, final false
  static inline void RP(::ArrayW<uint32_t, ::Array<uint32_t>*> nc, ::ArrayW<uint32_t, ::Array<uint32_t>*> d1, ::ArrayW<uint32_t, ::Array<uint32_t>*> e1, ::ArrayW<uint32_t, ::Array<uint32_t>*> f1,
                        ::ArrayW<uint32_t, ::Array<uint32_t>*> t);

  /// @brief Method RS, addr 0x2474888, size 0xd0, virtual false, abstract: false, final false
  static inline void RS(::ArrayW<uint32_t, ::Array<uint32_t>*> d, ::ArrayW<uint32_t, ::Array<uint32_t>*> e, ::ArrayW<uint32_t, ::Array<uint32_t>*> f, ::ArrayW<uint32_t, ::Array<uint32_t>*> t);

  /// @brief Method Sqrt, addr 0x2473ffc, size 0x1b4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Square, addr 0x2473ebc, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method Subtract, addr 0x2473b50, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method TestBitZero, addr 0x24738f0, size 0x24, virtual true, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0x2473914, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method TrySqrt, addr 0x247429c, size 0x1b4, virtual false, abstract: false, final false
  static inline bool TrySqrt(::ArrayW<uint32_t, ::Array<uint32_t>*> nc, ::ArrayW<uint32_t, ::Array<uint32_t>*> r, ::ArrayW<uint32_t, ::Array<uint32_t>*> t);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x24738b4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2472104, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method .ctor, addr 0x2471afc, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Q();

  /// @brief Method get_FieldName, addr 0x2473920, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0x2473960, size 0x64, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_IsOne, addr 0x24738e4, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero, addr 0x24738d8, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsZero();

  static inline void setStaticF_Q(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP224R1FieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP224R1FieldElement(SecP224R1FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP224R1FieldElement(SecP224R1FieldElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1418 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement, ___x) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement");
