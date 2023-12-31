#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9FieldElement)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9FieldElement);
// Type: Org.BouncyCastle.Asn1.X9::X9FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(445))
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9FieldElement*
class CORDL_TYPE X9FieldElement : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field f, offset 0x10, size 0x8
  __declspec(property(get = __get_f, put = __set_f))::Org::BouncyCastle::Math::EC::ECFieldElement* f;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::EC::ECFieldElement* Value;

  constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& __get_f();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECFieldElement*> const& __get_f() const;

  constexpr void __set_f(::Org::BouncyCastle::Math::EC::ECFieldElement* value);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* New_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* f);

  /// @brief Method .ctor, addr 0x11b0cdc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* f);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  /// @brief Method .ctor, addr 0x11b2020, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  static inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  /// @brief Method .ctor, addr 0x11b20f4, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  /// @brief Method get_Value, addr 0x11b21f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* get_Value();

  /// @brief Method ToAsn1Object, addr 0x11b21f8, size 0xb0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "X9FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9FieldElement(X9FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9FieldElement(X9FieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9FieldElement();

public:
  /// @brief Field f, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECFieldElement* ___f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9FieldElement, ___f) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldElement*, "Org.BouncyCastle.Asn1.X9", "X9FieldElement");
