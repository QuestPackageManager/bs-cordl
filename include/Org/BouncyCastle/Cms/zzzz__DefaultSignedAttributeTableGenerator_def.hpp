#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultSignedAttributeTableGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultSignedAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator);
// Type: Org.BouncyCastle.Cms::DefaultSignedAttributeTableGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(667))
// CS Name: ::Org.BouncyCastle.Cms::DefaultSignedAttributeTableGenerator*
class CORDL_TYPE DefaultSignedAttributeTableGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field table, offset 0x10, size 0x8
  __declspec(property(get = __get_table, put = __set_table))::System::Collections::IDictionary* table;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept;

  constexpr ::System::Collections::IDictionary*& __get_table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_table() const;

  constexpr void __set_table(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x11ea238, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable);

  /// @brief Method .ctor, addr 0x11ea720, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable);

  /// @brief Method createStandardAttributeTable, addr 0x1200934, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Hashtable* createStandardAttributeTable(::System::Collections::IDictionary* parameters);

  /// @brief Method DoCreateStandardAttributeTable, addr 0x12009b4, size 0x710, virtual false, abstract: false, final false
  inline void DoCreateStandardAttributeTable(::System::Collections::IDictionary* parameters, ::System::Collections::IDictionary* std);

  /// @brief Method GetAttributes, addr 0x12010c4, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignedAttributeTableGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignedAttributeTableGenerator(DefaultSignedAttributeTableGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignedAttributeTableGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignedAttributeTableGenerator(DefaultSignedAttributeTableGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignedAttributeTableGenerator();

public:
  /// @brief Field table, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator, ___table) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*, "Org.BouncyCastle.Cms", "DefaultSignedAttributeTableGenerator");
