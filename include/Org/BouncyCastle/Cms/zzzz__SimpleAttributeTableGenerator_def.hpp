#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleAttributeTableGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SimpleAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator);
// Type: Org.BouncyCastle.Cms::SimpleAttributeTableGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::SimpleAttributeTableGenerator*
class CORDL_TYPE SimpleAttributeTableGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept;

  /// @brief Method GetAttributes, addr 0x1471588, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* parameters);

  static inline ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __cordl_internal_get_attributes() const;

  constexpr void __cordl_internal_set_attributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  /// @brief Method .ctor, addr 0x1471560, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes);

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleAttributeTableGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleAttributeTableGenerator(SimpleAttributeTableGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleAttributeTableGenerator(SimpleAttributeTableGenerator const&) = delete;

  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator, ___attributes) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*, "Org.BouncyCastle.Cms", "SimpleAttributeTableGenerator");
