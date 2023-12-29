#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringFacetsChecker)
namespace System {
class Object;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class StringFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::StringFacetsChecker);
// Type: System.Xml.Schema::StringFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11619))
// CS Name: ::System.Xml.Schema::StringFacetsChecker*
class CORDL_TYPE StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Field languagePattern, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_languagePattern, put = setStaticF_languagePattern))::System::Text::RegularExpressions::Regex* languagePattern;

  static inline void setStaticF_languagePattern(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_languagePattern();

  /// @brief Method get_LanguagePattern addr 0x2744790 size 0xb8 virtual false final false
  static inline ::System::Text::RegularExpressions::Regex* get_LanguagePattern();

  /// @brief Method CheckValueFacets addr 0x2744848 size 0x60 virtual true final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets addr 0x27448a8 size 0x8 virtual true final false
  inline ::System::Exception* CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets addr 0x273cea8 size 0x200 virtual false final false
  inline ::System::Exception* CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype, bool verifyUri);

  /// @brief Method MatchEnumeration addr 0x2744c9c size 0x5c virtual true final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration addr 0x2744ac8 size 0x1d4 virtual false final false
  inline bool MatchEnumeration(::StringW value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckBuiltInFacets addr 0x27448b0 size 0x218 virtual false final false
  inline ::System::Exception* CheckBuiltInFacets(::StringW s, ::System::Xml::Schema::XmlTypeCode typeCode, bool verifyUri);

  static inline ::System::Xml::Schema::StringFacetsChecker* New_ctor();

  /// @brief Method .ctor addr 0x2744cf8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringFacetsChecker(StringFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringFacetsChecker(StringFacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringFacetsChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::StringFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::StringFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::StringFacetsChecker*, "System.Xml.Schema", "StringFacetsChecker");
