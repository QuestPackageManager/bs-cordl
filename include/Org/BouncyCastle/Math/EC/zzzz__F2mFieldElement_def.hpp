#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(F2mFieldElement)
namespace Org::BouncyCastle::Math::EC {
class LongArray;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::F2mFieldElement);
// Type: Org.BouncyCastle.Math.EC::F2mFieldElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1570))
// CS Name: ::Org.BouncyCastle.Math.EC::F2mFieldElement*
class CORDL_TYPE F2mFieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
  // Declarations
  /// @brief Field representation, offset 0x10, size 0x4
  __declspec(property(get = __get_representation, put = __set_representation)) int32_t representation;

  /// @brief Field m, offset 0x14, size 0x4
  __declspec(property(get = __get_m, put = __set_m)) int32_t m;

  /// @brief Field ks, offset 0x18, size 0x8
  __declspec(property(get = __get_ks, put = __set_ks))::ArrayW<int32_t, ::Array<int32_t>*> ks;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::Org::BouncyCastle::Math::EC::LongArray* x;

  __declspec(property(get = get_BitLength)) int32_t BitLength;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  __declspec(property(get = get_FieldName))::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_Representation)) int32_t Representation;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  constexpr int32_t& __get_representation();

  constexpr int32_t const& __get_representation() const;

  constexpr void __set_representation(int32_t value);

  constexpr int32_t& __get_m();

  constexpr int32_t const& __get_m() const;

  constexpr void __set_m(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_ks();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_ks() const;

  constexpr void __set_ks(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::Org::BouncyCastle::Math::EC::LongArray*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::LongArray*> const& __get_x() const;

  constexpr void __set_x(::Org::BouncyCastle::Math::EC::LongArray* value);

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor addr 0x104dc1c size 0x208 virtual false final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor addr 0x105074c size 0x10 virtual false final false
  inline void _ctor(int32_t m, int32_t k, ::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::F2mFieldElement* New_ctor(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::EC::LongArray* x);

  /// @brief Method .ctor addr 0x104e654 size 0x58 virtual false final false
  inline void _ctor(int32_t m, ::ArrayW<int32_t, ::Array<int32_t>*> ks, ::Org::BouncyCastle::Math::EC::LongArray* x);

  /// @brief Method get_BitLength addr 0x105075c size 0x18 virtual true final false
  inline int32_t get_BitLength();

  /// @brief Method get_IsOne addr 0x1050818 size 0x18 virtual true final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero addr 0x1050890 size 0x54 virtual true final false
  inline bool get_IsZero();

  /// @brief Method TestBitZero addr 0x1050930 size 0x3c virtual true final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger addr 0x10509a0 size 0x18 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method get_FieldName addr 0x1050bcc size 0x40 virtual true final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize addr 0x1050c0c size 0x8 virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method CheckFieldElements addr 0x1050c14 size 0x18c virtual false final false
  static inline void CheckFieldElements(::Org::BouncyCastle::Math::EC::ECFieldElement* a, ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Add addr 0x1050da0 size 0xd8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne addr 0x1050fec size 0x8c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Subtract addr 0x1051194 size 0xc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Multiply addr 0x10511a0 size 0xd4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method MultiplyMinusProduct addr 0x10516c4 size 0x10 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct addr 0x10516d4 size 0x198 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method Divide addr 0x1051d7c size 0x40 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate addr 0x1051dbc size 0x4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  /// @brief Method Square addr 0x1051dc0 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method SquareMinusProduct addr 0x1051fe4 size 0x10 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct addr 0x1051ff4 size 0x154 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePow addr 0x1052298 size 0xa4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t pow);

  /// @brief Method Invert addr 0x1052470 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Sqrt addr 0x1052984 size 0x7c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method get_Representation addr 0x1052a00 size 0x8 virtual false final false
  inline int32_t get_Representation();

  /// @brief Method get_M addr 0x1052a08 size 0x8 virtual false final false
  inline int32_t get_M();

  /// @brief Method get_K1 addr 0x1052a10 size 0x28 virtual false final false
  inline int32_t get_K1();

  /// @brief Method get_K2 addr 0x1052a38 size 0x30 virtual false final false
  inline int32_t get_K2();

  /// @brief Method get_K3 addr 0x1052a68 size 0x30 virtual false final false
  inline int32_t get_K3();

  /// @brief Method Equals addr 0x1052a98 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x1052b40 size 0xc8 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::F2mFieldElement* other);

  /// @brief Method GetHashCode addr 0x1052c08 size 0x8c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  F2mFieldElement(F2mFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "F2mFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  F2mFieldElement(F2mFieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr F2mFieldElement();

public:
  /// @brief Field representation, offset: 0x10, size: 0x4, def value: None
  int32_t ___representation;

  /// @brief Field m, offset: 0x14, size: 0x4, def value: None
  int32_t ___m;

  /// @brief Field ks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ks;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::LongArray* ___x;

  /// @brief Field Gnb offset 0xffffffff size 0x4
  static constexpr int32_t Gnb{ static_cast<int32_t>(0x1) };

  /// @brief Field Tpb offset 0xffffffff size 0x4
  static constexpr int32_t Tpb{ static_cast<int32_t>(0x2) };

  /// @brief Field Ppb offset 0xffffffff size 0x4
  static constexpr int32_t Ppb{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::F2mFieldElement, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mFieldElement*, "Org.BouncyCastle.Math.EC", "F2mFieldElement");
