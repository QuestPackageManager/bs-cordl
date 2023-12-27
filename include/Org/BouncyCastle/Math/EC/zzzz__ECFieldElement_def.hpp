#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECFieldElement)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::ECFieldElement);
// Type: Org.BouncyCastle.Math.EC::ECFieldElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1368))
// CS Name: ::Org.BouncyCastle.Math.EC::ECFieldElement*
class CORDL_TYPE ECFieldElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FieldName))::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_BitLength)) int32_t BitLength;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_IsZero)) bool IsZero;

  /// @brief Method ToBigInteger addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method get_FieldName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Divide addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  /// @brief Method Square addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method Invert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Sqrt addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method get_BitLength addr 0xfce470 size 0x24 virtual true final false
  inline int32_t get_BitLength();

  /// @brief Method get_IsOne addr 0xfce494 size 0x24 virtual true final false
  inline bool get_IsOne();

  /// @brief Method get_IsZero addr 0xfce4b8 size 0x2c virtual true final false
  inline bool get_IsZero();

  /// @brief Method MultiplyMinusProduct addr 0xfce4e4 size 0x5c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                             ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method MultiplyPlusProduct addr 0xfce540 size 0x5c virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::EC::ECFieldElement* x,
                                                                            ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquareMinusProduct addr 0xfce59c size 0x64 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePlusProduct addr 0xfce600 size 0x64 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y);

  /// @brief Method SquarePow addr 0xfce664 size 0x38 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t pow);

  /// @brief Method TestBitZero addr 0xfce69c size 0x28 virtual true final false
  inline bool TestBitZero();

  /// @brief Method Equals addr 0xfce6c4 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xfce750 size 0x74 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method GetHashCode addr 0xfce7c4 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0xfce7ec size 0x28 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetEncoded addr 0xfce814 size 0x58 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Math::EC::ECFieldElement* New_ctor();

  /// @brief Method .ctor addr 0xfce86c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ECFieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECFieldElement(ECFieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECFieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECFieldElement(ECFieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECFieldElement();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::ECFieldElement, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECFieldElement*, "Org.BouncyCastle.Math.EC", "ECFieldElement");
