#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X500/Rdn.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rdn)
namespace Org::BouncyCastle::Asn1::X500 {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X500 {
class Rdn;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X500::Rdn);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X500 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X500.Rdn
class CORDL_TYPE Rdn : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsMultiValued)) bool IsMultiValued;

  /// @brief Field values, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::Org::BouncyCastle::Asn1::Asn1Set* values;

  /// @brief Method GetFirst, addr 0x24fdcd0, size 0x50, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* GetFirst();

  /// @brief Method GetInstance, addr 0x24fd9d0, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* GetInstance(::System::Object* obj);

  /// @brief Method GetTypesAndValues, addr 0x24fdd20, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> GetTypesAndValues();

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> aAndVs);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::X500::Rdn* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* values);

  /// @brief Method ToAsn1Object, addr 0x24fde14, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_values() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_values(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x24fdc10, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>*> aAndVs);

  /// @brief Method .ctor, addr 0x24fdb9c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV);

  /// @brief Method .ctor, addr 0x24fda70, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x24fd9a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* values);

  /// @brief Method get_Count, addr 0x24fdcb0, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsMultiValued, addr 0x24fdc84, size 0x2c, virtual true, abstract: false, final false
  inline bool get_IsMultiValued();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rdn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rdn(Rdn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rdn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rdn(Rdn const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 326 };

  /// @brief Field values, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X500::Rdn, ___values) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X500::Rdn, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X500
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X500::Rdn);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X500::Rdn*, "Org.BouncyCastle.Asn1.X500", "Rdn");
