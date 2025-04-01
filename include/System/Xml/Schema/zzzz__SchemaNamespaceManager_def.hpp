#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaNamespaceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaNamespaceManager)
namespace System::Xml::Schema {
class XmlSchemaObject;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaNamespaceManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaNamespaceManager);
// Dependencies System.Xml.XmlNamespaceManager
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaNamespaceManager
class CORDL_TYPE SchemaNamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  /// @brief Field node, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::System::Xml::Schema::XmlSchemaObject* node;

  /// @brief Method LookupNamespace, addr 0x4293ae0, size 0x130, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x4293c10, size 0x3fc, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::Schema::SchemaNamespaceManager* New_ctor(::System::Xml::Schema::XmlSchemaObject* node);

  constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_node() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_node();

  constexpr void __cordl_internal_set_node(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method .ctor, addr 0x4293ab8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaObject* node);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaNamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaNamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaNamespaceManager(SchemaNamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaNamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaNamespaceManager(SchemaNamespaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7626 };

  /// @brief Field node, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaNamespaceManager, ___node) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaNamespaceManager, 0x58>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNamespaceManager*, "System.Xml.Schema", "SchemaNamespaceManager");
