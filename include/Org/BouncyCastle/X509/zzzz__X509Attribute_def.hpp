#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509Attribute)
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Attribute;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509Attribute);
// Type: Org.BouncyCastle.X509::X509Attribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1859))
// CS Name: ::Org.BouncyCastle.X509::X509Attribute*
class CORDL_TYPE X509Attribute : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field attr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attr, put = __cordl_internal_set_attr))::Org::BouncyCastle::Asn1::X509::AttributeX509* attr;

  __declspec(property(get = get_Oid))::StringW Oid;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeX509*& __cordl_internal_get_attr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeX509*> const& __cordl_internal_get_attr() const;

  constexpr void __cordl_internal_set_attr(::Org::BouncyCastle::Asn1::X509::AttributeX509* value);

  static inline ::Org::BouncyCastle::X509::X509Attribute* New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* at);

  /// @brief Method .ctor, addr 0x11a5b0c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* at);

  static inline ::Org::BouncyCastle::X509::X509Attribute* New_ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x11a5b40, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::X509::X509Attribute* New_ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method .ctor, addr 0x11a5c24, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method get_Oid, addr 0x11a5d08, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Oid();

  /// @brief Method GetValues, addr 0x11a5d2c, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> GetValues();

  /// @brief Method ToAsn1Object, addr 0x11a5e3c, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "X509Attribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Attribute(X509Attribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Attribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Attribute(X509Attribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Attribute();

public:
  /// @brief Field attr, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeX509* ___attr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509Attribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509Attribute, ___attr) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509Attribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509Attribute*, "Org.BouncyCastle.X509", "X509Attribute");
