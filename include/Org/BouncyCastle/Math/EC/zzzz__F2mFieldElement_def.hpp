#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/F2mFieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(F2mFieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::F2mFieldElement);
// Dependencies Org.BouncyCastle.Math.EC.AbstractF2mFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.F2mFieldElement
class CORDL_TYPE F2mFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
  // Declarations
  __declspec(property(get = get_BitLength)) int32_t BitLength;

  __declspec(property(get = get_FieldName)) ::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_Representation)) int32_t Representation;

  /// @brief Field ks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ks, put = __cordl_internal_set_ks)) ::ArrayW<int32_t, ::Array<int32_t>*> ks;

  /// @brief Field m, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m)) int32_t m;

  /// @brief Field representation, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_representation, put = __cordl_internal_set_representation)) int32_t representation;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Org::BouncyCastle::Math::EC::LongArray* x;

  /// @brief Method Add, addr 0x24d2b98, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0x24d2dd8, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method CheckFieldElements, addr 0x24d2a18, size 0x180, virtual false, abstract: false, final false
  static inline void CheckFieldElements(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Divide, addr 0x24d3b84, size 0x40, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Equals, addr 0x24d4860, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x24d4908, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::F2mFieldElement* other);

  /// @brief Method GetHashCode, addr 0x24d49d0, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Invert, addr 0x24d4270, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Multiply, addr 0x24d2f84, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct, addr 0x24d34b0, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct, addr 0x24d34c0, size 0x194, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Negate, addr 0x24d3bc4, size 0x4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::EC::LongArray* x);

  /// @brief Method Sqrt, addr 0x24d4770, size 0x58, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Square, addr 0x24d3bc8, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct, addr 0x24d3dec, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct, addr 0x24d3dfc, size 0x150, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePow, addr 0x24d4098, size 0xa0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t pow);

  /// @brief Method Subtract, addr 0x24d2f78, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method TestBitZero, addr 0x24d2744, size 0x3c, virtual true, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0x24d27b4, size 0x18, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_ks() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_ks();

  constexpr int32_t const& __cordl_internal_get_m() const;

  constexpr int32_t& __cordl_internal_get_m();

  constexpr int32_t const& __cordl_internal_get_representation() const;

  constexpr int32_t& __cordl_internal_get_representation();

  constexpr ::Org::BouncyCastle::Math::EC::LongArray* const& __cordl_internal_get_x() const;

  constexpr ::Org::BouncyCastle::Math::EC::LongArray*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_ks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m(int32_t value);

  constexpr void __cordl_internal_set_representation(int32_t value);

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Math::EC::LongArray* value);

  /// @brief Method .ctor, addr 0x24d2580, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor, addr 0x24cfa50, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor, addr 0x24d0480, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::EC::LongArray* x);

  /// @brief Method get_BitLength, addr 0x24d2590, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_BitLength();

  /// @brief Method get_FieldName, addr 0x24d29d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0x24d2a10, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_IsOne, addr 0x24d2648, size 0x18, virtual true, abstract: false, final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero, addr 0x24d26d0, size 0x18, virtual true, abstract: false, final false
  inline bool get_IsZero();

  /// @brief Method get_K1, addr 0x24d47d8, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_K1();

  /// @brief Method get_K2, addr 0x24d4800, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_K2();

  /// @brief Method get_K3, addr 0x24d4830, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_K3();

  /// @brief Method get_M, addr 0x24d47d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_M();

  /// @brief Method get_Representation, addr 0x24d47c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Representation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr F2mFieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  F2mFieldElement(F2mFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  F2mFieldElement(F2mFieldElement const&) = delete;

  /// @brief Field Gnb offset 0xffffffff size 0x4
  static constexpr int32_t Gnb{ static_cast<int32_t>(0x1) };

  /// @brief Field Ppb offset 0xffffffff size 0x4
  static constexpr int32_t Ppb{ static_cast<int32_t>(0x3) };

  /// @brief Field Tpb offset 0xffffffff size 0x4
  static constexpr int32_t Tpb{ static_cast<int32_t>(0x2) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1570 };

  /// @brief Field representation, offset: 0x10, size: 0x4, def value: None
  int32_t ___representation;

  /// @brief Field m, offset: 0x14, size: 0x4, def value: None
  int32_t ___m;

  /// @brief Field ks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ks;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::LongArray* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mFieldElement, ___representation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mFieldElement, ___m) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mFieldElement, ___ks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::F2mFieldElement, ___x) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::F2mFieldElement, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mFieldElement*, "Org.BouncyCastle.Math.EC", "F2mFieldElement");
