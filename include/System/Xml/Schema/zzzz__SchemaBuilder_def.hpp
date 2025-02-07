#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaBuilder)
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaBuilder);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaBuilder
class CORDL_TYPE SchemaBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Method EndChildren, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndChildren();

  /// @brief Method IsContentParsed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsContentParsed();

  static inline ::System::Xml::Schema::SchemaBuilder* New_ctor();

  /// @brief Method ProcessAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method ProcessCData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessCData(::StringW value);

  /// @brief Method ProcessElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ProcessElement(::StringW prefix, ::StringW name, ::StringW ns);

  /// @brief Method ProcessMarkup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup);

  /// @brief Method StartChildren, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartChildren();

  /// @brief Method .ctor, addr 0x427cd80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaBuilder(SchemaBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaBuilder(SchemaBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaBuilder, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaBuilder*, "System.Xml.Schema", "SchemaBuilder");
