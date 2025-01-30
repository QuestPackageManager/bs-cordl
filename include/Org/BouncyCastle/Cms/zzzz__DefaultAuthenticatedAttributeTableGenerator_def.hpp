#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/DefaultAuthenticatedAttributeTableGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultAuthenticatedAttributeTableGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultAuthenticatedAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator);
// Dependencies Org.BouncyCastle.Cms.CmsAttributeTableGenerator, System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.DefaultAuthenticatedAttributeTableGenerator
class CORDL_TYPE DefaultAuthenticatedAttributeTableGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table)) ::System::Collections::IDictionary* table;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept;

  /// @brief Method CreateStandardAttributeTable, addr 0x267478c, size 0x52c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* CreateStandardAttributeTable(::System::Collections::IDictionary* parameters);

  /// @brief Method GetAttributes, addr 0x2674cb8, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* parameters);

  static inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_table() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_table();

  constexpr void __cordl_internal_set_table(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x26746a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x267470c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable);

  /// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
  constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultAuthenticatedAttributeTableGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 666 };

  /// @brief Field table, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator, ___table) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*, "Org.BouncyCastle.Cms", "DefaultAuthenticatedAttributeTableGenerator");
