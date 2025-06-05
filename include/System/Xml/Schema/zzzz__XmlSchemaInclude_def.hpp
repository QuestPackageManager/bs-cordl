#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInclude.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaInclude)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInclude;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInclude);
// Dependencies System.Xml.Schema.XmlSchemaExternal
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaInclude
class CORDL_TYPE XmlSchemaInclude : public ::System::Xml::Schema::XmlSchemaExternal {
public:
  // Declarations
  /// @brief Field annotation, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_annotation, put = __cordl_internal_set_annotation)) ::System::Xml::Schema::XmlSchemaAnnotation* annotation;

  /// @brief Method AddAnnotation, addr 0x42bf41c, size 0x8, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  static inline ::System::Xml::Schema::XmlSchemaInclude* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation* const& __cordl_internal_get_annotation() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& __cordl_internal_get_annotation();

  constexpr void __cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  /// @brief Method .ctor, addr 0x42bf3fc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInclude();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInclude", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInclude(XmlSchemaInclude&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInclude", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInclude(XmlSchemaInclude const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7703 };

  /// @brief Field annotation, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnnotation* ___annotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaInclude, ___annotation) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInclude, 0x70>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInclude);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInclude*, "System.Xml.Schema", "XmlSchemaInclude");
