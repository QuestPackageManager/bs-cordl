#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT409FieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT409FieldElement)
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
class SecT409FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT409FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT409FieldElement*
class CORDL_TYPE SecT409FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
  // Declarations
  __declspec(property(get = get_FieldName)) ::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_HasFastTrace)) bool HasFastTrace;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_Representation)) int32_t Representation;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint64_t, ::Array<uint64_t>*> x;

  /// @brief Method Add, addr 0x2477c00, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0x2477cc0, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Divide, addr 0x2477f78, size 0x40, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Equals, addr 0x2478398, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x24784b0, size 0x2c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* other);

  /// @brief Method Equals, addr 0x2478424, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method GetHashCode, addr 0x24784dc, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HalfTrace, addr 0x24781f8, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();

  /// @brief Method Invert, addr 0x2478280, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Multiply, addr 0x2477d44, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct, addr 0x2477e04, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct, addr 0x2477e14, size 0x164, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Negate, addr 0x2477fb8, size 0x4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Sqrt, addr 0x24782f8, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Square, addr 0x2477fbc, size 0x78, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct, addr 0x2478034, size 0x10, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct, addr 0x2478044, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePow, addr 0x2478168, size 0x90, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t pow);

  /// @brief Method Subtract, addr 0x2477d38, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method TestBitZero, addr 0x2477b80, size 0x2c, virtual true, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0x2477bac, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method Trace, addr 0x2478278, size 0x8, virtual true, abstract: false, final false
  inline int32_t Trace();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x2477b1c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2477b40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor, addr 0x2477a68, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method get_FieldName, addr 0x2477bb8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0x2477bf8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method get_HasFastTrace, addr 0x2478270, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasFastTrace();

  /// @brief Method get_IsOne, addr 0x2477b68, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero, addr 0x2477b74, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsZero();

  /// @brief Method get_K1, addr 0x2478380, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K1();

  /// @brief Method get_K2, addr 0x2478388, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K2();

  /// @brief Method get_K3, addr 0x2478390, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_K3();

  /// @brief Method get_M, addr 0x2478378, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_M();

  /// @brief Method get_Representation, addr 0x2478370, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Representation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT409FieldElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecT409FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT409FieldElement(SecT409FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT409FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT409FieldElement(SecT409FieldElement const&) = delete;

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___x;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409FieldElement");
