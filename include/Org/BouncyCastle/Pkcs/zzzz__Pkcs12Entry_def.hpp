#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Pkcs12Entry)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Entry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
// Type: Org.BouncyCastle.Pkcs::Pkcs12Entry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1693))
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs12Entry*
class CORDL_TYPE Pkcs12Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::System::Collections::IDictionary* attributes;

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Item))::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_BagAttributeKeys))::System::Collections::IEnumerable* BagAttributeKeys;

  constexpr ::System::Collections::IDictionary*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_attributes() const;

  constexpr void __set_attributes(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Entry* New_ctor(::System::Collections::IDictionary* attributes);

  /// @brief Method .ctor, addr 0x10d53d0, size 0x54c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attributes);

  /// @brief Method GetBagAttribute, addr 0x10d591c, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetBagAttribute, addr 0x10d5a18, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::StringW oid);

  /// @brief Method GetBagAttributeKeys, addr 0x10d5b0c, size 0x118, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetBagAttributeKeys();

  /// @brief Method get_Item, addr 0x10d5c24, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method get_Item, addr 0x10d5d20, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::StringW oid);

  /// @brief Method get_BagAttributeKeys, addr 0x10d5e14, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_BagAttributeKeys();

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12Entry(Pkcs12Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12Entry(Pkcs12Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12Entry();

public:
  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12Entry, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Entry, ___attributes) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12Entry*, "Org.BouncyCastle.Pkcs", "Pkcs12Entry");
