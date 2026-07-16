#pragma once
// IWYU pragma private; include "System/Xml/Schema/StringFacetsChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class StringFacetsChecker;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::StringFacetsChecker*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::StringFacetsChecker*, "System.Xml.Schema", "StringFacetsChecker");
// Dependencies System.Xml.Schema.FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.StringFacetsChecker
class CORDL_TYPE StringFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Field languagePattern, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_languagePattern, put = setStaticF_languagePattern)) ::System::Text::RegularExpressions::Regex* languagePattern;

  /// @brief Method CheckBuiltInFacets, addr 0x61ce370, size 0x2b0, virtual false, abstract: false, final false
  inline ::System::Exception* CheckBuiltInFacets(::StringW s, ::System::Xml::Schema::XmlTypeCode typeCode, bool verifyUri);

  /// @brief Method CheckValueFacets, addr 0x61ce368, size 0x8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x61c1bd4, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::StringW value, ::System::Xml::Schema::XmlSchemaDatatype* datatype, bool verifyUri);

  /// @brief Method CheckValueFacets, addr 0x61ce310, size 0x58, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x61ce620, size 0x1f4, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::StringW value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x61ce814, size 0x5c, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  static inline ::System::Xml::Schema::StringFacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x61b9fc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_languagePattern();

  /// @brief Method get_LanguagePattern, addr 0x61ce250, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Regex* get_LanguagePattern();

  static inline void setStaticF_languagePattern(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringFacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringFacetsChecker(StringFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringFacetsChecker(StringFacetsChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::StringFacetsChecker) == 0x10, "Size mismatch!");

} // namespace System::Xml::Schema
