#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDocumentation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaDocumentation)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaDocumentation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaDocumentation);
// Dependencies System.Xml.Schema.XmlSchemaObject
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaDocumentation
class CORDL_TYPE XmlSchemaDocumentation : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(put = set_Language)) ::StringW Language;

  __declspec(property(put = set_Markup)) ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> Markup;

  __declspec(property(put = set_Source)) ::StringW Source;

  /// @brief Field language, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_language, put = __cordl_internal_set_language)) ::StringW language;

  /// @brief Field languageType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_languageType, put = setStaticF_languageType)) ::System::Xml::Schema::XmlSchemaSimpleType* languageType;

  /// @brief Field markup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_markup, put = __cordl_internal_set_markup)) ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup;

  /// @brief Field source, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::StringW source;

  static inline ::System::Xml::Schema::XmlSchemaDocumentation* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_language() const;

  constexpr ::StringW& __cordl_internal_get_language();

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> const& __cordl_internal_get_markup() const;

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>& __cordl_internal_get_markup();

  constexpr ::StringW const& __cordl_internal_get_source() const;

  constexpr ::StringW& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_language(::StringW value);

  constexpr void __cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value);

  constexpr void __cordl_internal_set_source(::StringW value);

  /// @brief Method .ctor, addr 0x42bdaa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_languageType();

  static inline void setStaticF_languageType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_Language, addr 0x42bd9c8, size 0xd0, virtual false, abstract: false, final false
  inline void set_Language(::StringW value);

  /// @brief Method set_Markup, addr 0x42bda98, size 0x8, virtual false, abstract: false, final false
  inline void set_Markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value);

  /// @brief Method set_Source, addr 0x42bd9c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Source(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaDocumentation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDocumentation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaDocumentation(XmlSchemaDocumentation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDocumentation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaDocumentation(XmlSchemaDocumentation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7674 };

  /// @brief Field source, offset: 0x38, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field language, offset: 0x40, size: 0x8, def value: None
  ::StringW ___language;

  /// @brief Field markup, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> ___markup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaDocumentation, ___source) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaDocumentation, ___language) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaDocumentation, ___markup) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaDocumentation, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaDocumentation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDocumentation*, "System.Xml.Schema", "XmlSchemaDocumentation");
