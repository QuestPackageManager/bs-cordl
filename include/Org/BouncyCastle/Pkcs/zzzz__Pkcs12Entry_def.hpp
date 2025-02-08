#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs12Entry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Pkcs12Entry)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Entry;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Entry
class CORDL_TYPE Pkcs12Entry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BagAttributeKeys)) ::System::Collections::IEnumerable* BagAttributeKeys;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Collections::IDictionary* attributes;

  /// @brief Method GetBagAttribute, addr 0x25554a4, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetBagAttribute, addr 0x25555a0, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(::StringW oid);

  /// @brief Method GetBagAttributeKeys, addr 0x2555694, size 0x118, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetBagAttributeKeys();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Entry* New_ctor(::System::Collections::IDictionary* attributes);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_attributes();

  constexpr void __cordl_internal_set_attributes(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x2554f64, size 0x540, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attributes);

  /// @brief Method get_BagAttributeKeys, addr 0x255599c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_BagAttributeKeys();

  /// @brief Method get_Item, addr 0x25557ac, size 0xfc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method get_Item, addr 0x25558a8, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(::StringW oid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12Entry(Pkcs12Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12Entry(Pkcs12Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1693 };

  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs12Entry, ___attributes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12Entry, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12Entry);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12Entry*, "Org.BouncyCastle.Pkcs", "Pkcs12Entry");
