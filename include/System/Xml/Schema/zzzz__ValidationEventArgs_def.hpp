#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ValidationEventArgs)
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ValidationEventArgs);
// Dependencies System.EventArgs, System.Xml.Schema.XmlSeverityType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ValidationEventArgs
class CORDL_TYPE ValidationEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Exception)) ::System::Xml::Schema::XmlSchemaException* Exception;

  __declspec(property(get = get_Severity)) ::System::Xml::Schema::XmlSeverityType Severity;

  /// @brief Field ex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ex, put = __cordl_internal_set_ex)) ::System::Xml::Schema::XmlSchemaException* ex;

  /// @brief Field severity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_severity, put = __cordl_internal_set_severity)) ::System::Xml::Schema::XmlSeverityType severity;

  static inline ::System::Xml::Schema::ValidationEventArgs* New_ctor(::System::Xml::Schema::XmlSchemaException* ex);

  static inline ::System::Xml::Schema::ValidationEventArgs* New_ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity);

  constexpr ::System::Xml::Schema::XmlSchemaException* const& __cordl_internal_get_ex() const;

  constexpr ::System::Xml::Schema::XmlSchemaException*& __cordl_internal_get_ex();

  constexpr ::System::Xml::Schema::XmlSeverityType const& __cordl_internal_get_severity() const;

  constexpr ::System::Xml::Schema::XmlSeverityType& __cordl_internal_get_severity();

  constexpr void __cordl_internal_set_ex(::System::Xml::Schema::XmlSchemaException* value);

  constexpr void __cordl_internal_set_severity(::System::Xml::Schema::XmlSeverityType value);

  /// @brief Method .ctor, addr 0x42ae214, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaException* ex);

  /// @brief Method .ctor, addr 0x42ae284, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaException* ex, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method get_Exception, addr 0x42ae300, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaException* get_Exception();

  /// @brief Method get_Severity, addr 0x42ae2f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSeverityType get_Severity();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationEventArgs(ValidationEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationEventArgs(ValidationEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7628 };

  /// @brief Field ex, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaException* ___ex;

  /// @brief Field severity, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSeverityType ___severity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ValidationEventArgs, ___ex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationEventArgs, ___severity) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidationEventArgs, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ValidationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationEventArgs*, "System.Xml.Schema", "ValidationEventArgs");
