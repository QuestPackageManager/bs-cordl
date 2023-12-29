#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT409FieldElement)
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
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT409FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT409FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1500))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT409FieldElement*
class CORDL_TYPE SecT409FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint64_t, ::Array<uint64_t>*> x;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  __declspec(property(get = get_FieldName))::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_HasFastTrace)) bool HasFastTrace;

  __declspec(property(get = get_Representation)) int32_t Representation;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_x();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor addr 0xfb8aa8 size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor();

  /// @brief Method .ctor addr 0xfb8b60 size 0x24 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor addr 0xfb8b84 size 0x28 virtual false final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method get_IsOne addr 0xfb8bac size 0xc virtual true final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero addr 0xfb8bb8 size 0xc virtual true final false
  inline bool get_IsZero();

  /// @brief Method TestBitZero addr 0xfb8bc4 size 0x2c virtual true final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger addr 0xfb8bf0 size 0xc virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method get_FieldName addr 0xfb8bfc size 0x40 virtual true final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize addr 0xfb8c3c size 0x8 virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method Add addr 0xfb8c44 size 0xc4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne addr 0xfb8d08 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Subtract addr 0xfb8d88 size 0xc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Multiply addr 0xfb8d94 size 0xc4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct addr 0xfb8e58 size 0x10 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct addr 0xfb8e68 size 0x168 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Divide addr 0xfb8fd0 size 0x40 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate addr 0xfb9010 size 0x4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  /// @brief Method Square addr 0xfb9014 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct addr 0xfb9094 size 0x10 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct addr 0xfb90a4 size 0x128 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePow addr 0xfb91cc size 0x98 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t pow);

  /// @brief Method HalfTrace addr 0xfb9264 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace();

  /// @brief Method get_HasFastTrace addr 0xfb92e4 size 0x8 virtual true final false
  inline bool get_HasFastTrace();

  /// @brief Method Trace addr 0xfb92ec size 0x8 virtual true final false
  inline int32_t Trace();

  /// @brief Method Invert addr 0xfb92f4 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Sqrt addr 0xfb9374 size 0x80 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method get_Representation addr 0xfb93f4 size 0x8 virtual true final false
  inline int32_t get_Representation();

  /// @brief Method get_M addr 0xfb93fc size 0x8 virtual true final false
  inline int32_t get_M();

  /// @brief Method get_K1 addr 0xfb9404 size 0x8 virtual true final false
  inline int32_t get_K1();

  /// @brief Method get_K2 addr 0xfb940c size 0x8 virtual true final false
  inline int32_t get_K2();

  /// @brief Method get_K3 addr 0xfb9414 size 0x8 virtual true final false
  inline int32_t get_K3();

  /// @brief Method Equals addr 0xfb941c size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xfb94a8 size 0x8c virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method Equals addr 0xfb9534 size 0x2c virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement* other);

  /// @brief Method GetHashCode addr 0xfb9560 size 0x74 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "SecT409FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT409FieldElement(SecT409FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT409FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT409FieldElement(SecT409FieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT409FieldElement();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409FieldElement");
