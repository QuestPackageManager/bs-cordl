#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaXPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaXPath)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaXPath;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaXPath);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaXPath
class CORDL_TYPE XmlSchemaXPath : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_XPath, put = set_XPath)) ::StringW XPath;

  /// @brief Field xpath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_xpath, put = __cordl_internal_set_xpath)) ::StringW xpath;

  static inline ::System::Xml::Schema::XmlSchemaXPath* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_xpath() const;

  constexpr ::StringW& __cordl_internal_get_xpath();

  constexpr void __cordl_internal_set_xpath(::StringW value);

  /// @brief Method .ctor, addr 0x42bef48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XPath, addr 0x42bef38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XPath();

  /// @brief Method set_XPath, addr 0x42bef40, size 0x8, virtual false, abstract: false, final false
  inline void set_XPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaXPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaXPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaXPath(XmlSchemaXPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaXPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaXPath(XmlSchemaXPath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7698 };

  /// @brief Field xpath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___xpath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaXPath, ___xpath) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaXPath, 0x58>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaXPath);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaXPath*, "System.Xml.Schema", "XmlSchemaXPath");
