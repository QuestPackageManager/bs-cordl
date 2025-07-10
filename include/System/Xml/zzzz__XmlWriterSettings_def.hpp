#pragma once
// IWYU pragma private; include "System/Xml/XmlWriterSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__NamespaceHandling_def.hpp"
#include "System/Xml/zzzz__NewLineHandling_def.hpp"
#include "System/Xml/zzzz__TriState_def.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlWriterSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct NamespaceHandling;
}
namespace System::Xml {
struct NewLineHandling;
}
namespace System::Xml {
struct TriState;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlWriterSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlWriterSettings);
// Dependencies System.Object, System.Xml.ConformanceLevel, System.Xml.NamespaceHandling, System.Xml.NewLineHandling, System.Xml.TriState, System.Xml.XmlOutputMethod, System.Xml.XmlStandalone
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlWriterSettings
class CORDL_TYPE XmlWriterSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Async)) bool Async;

  __declspec(property(get = get_AutoXmlDeclaration)) bool AutoXmlDeclaration;

  __declspec(property(get = get_CDataSectionElements)) ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* CDataSectionElements;

  __declspec(property(get = get_CheckCharacters)) bool CheckCharacters;

  __declspec(property(get = get_CloseOutput)) bool CloseOutput;

  __declspec(property(get = get_ConformanceLevel, put = set_ConformanceLevel)) ::System::Xml::ConformanceLevel ConformanceLevel;

  __declspec(property(get = get_DoNotEscapeUriAttributes)) bool DoNotEscapeUriAttributes;

  __declspec(property(get = get_DocTypePublic)) ::StringW DocTypePublic;

  __declspec(property(get = get_DocTypeSystem)) ::StringW DocTypeSystem;

  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  __declspec(property(get = get_Indent, put = set_Indent)) bool Indent;

  __declspec(property(get = get_IndentChars)) ::StringW IndentChars;

  __declspec(property(get = get_IndentInternal)) ::System::Xml::TriState IndentInternal;

  __declspec(property(get = get_IsQuerySpecific)) bool IsQuerySpecific;

  __declspec(property(get = get_MediaType)) ::StringW MediaType;

  __declspec(property(get = get_MergeCDataSections)) bool MergeCDataSections;

  __declspec(property(get = get_NamespaceHandling, put = set_NamespaceHandling)) ::System::Xml::NamespaceHandling NamespaceHandling;

  __declspec(property(get = get_NewLineChars)) ::StringW NewLineChars;

  __declspec(property(get = get_NewLineHandling)) ::System::Xml::NewLineHandling NewLineHandling;

  __declspec(property(get = get_NewLineOnAttributes)) bool NewLineOnAttributes;

  __declspec(property(get = get_OmitXmlDeclaration, put = set_OmitXmlDeclaration)) bool OmitXmlDeclaration;

  __declspec(property(get = get_OutputMethod, put = set_OutputMethod)) ::System::Xml::XmlOutputMethod OutputMethod;

  __declspec(property(put = set_ReadOnly)) bool ReadOnly;

  __declspec(property(get = get_Standalone)) ::System::Xml::XmlStandalone Standalone;

  __declspec(property(get = get_WriteEndDocumentOnClose)) bool WriteEndDocumentOnClose;

  /// @brief Field autoXmlDecl, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get_autoXmlDecl, put = __cordl_internal_set_autoXmlDecl)) bool autoXmlDecl;

  /// @brief Field cdataSections, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cdataSections, put = __cordl_internal_set_cdataSections)) ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* cdataSections;

  /// @brief Field checkCharacters, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field closeOutput, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_closeOutput, put = __cordl_internal_set_closeOutput)) bool closeOutput;

  /// @brief Field conformanceLevel, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_conformanceLevel, put = __cordl_internal_set_conformanceLevel)) ::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field doNotEscapeUriAttributes, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_doNotEscapeUriAttributes, put = __cordl_internal_set_doNotEscapeUriAttributes)) bool doNotEscapeUriAttributes;

  /// @brief Field docTypePublic, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_docTypePublic, put = __cordl_internal_set_docTypePublic)) ::StringW docTypePublic;

  /// @brief Field docTypeSystem, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_docTypeSystem, put = __cordl_internal_set_docTypeSystem)) ::StringW docTypeSystem;

  /// @brief Field encoding, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field indent, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_indent, put = __cordl_internal_set_indent)) ::System::Xml::TriState indent;

  /// @brief Field indentChars, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_indentChars, put = __cordl_internal_set_indentChars)) ::StringW indentChars;

  /// @brief Field isReadOnly, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field mediaType, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mediaType, put = __cordl_internal_set_mediaType)) ::StringW mediaType;

  /// @brief Field mergeCDataSections, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_mergeCDataSections, put = __cordl_internal_set_mergeCDataSections)) bool mergeCDataSections;

  /// @brief Field namespaceHandling, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_namespaceHandling, put = __cordl_internal_set_namespaceHandling)) ::System::Xml::NamespaceHandling namespaceHandling;

  /// @brief Field newLineChars, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newLineChars, put = __cordl_internal_set_newLineChars)) ::StringW newLineChars;

  /// @brief Field newLineHandling, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_newLineHandling, put = __cordl_internal_set_newLineHandling)) ::System::Xml::NewLineHandling newLineHandling;

  /// @brief Field newLineOnAttributes, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_newLineOnAttributes, put = __cordl_internal_set_newLineOnAttributes)) bool newLineOnAttributes;

  /// @brief Field omitXmlDecl, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_omitXmlDecl, put = __cordl_internal_set_omitXmlDecl)) bool omitXmlDecl;

  /// @brief Field outputMethod, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_outputMethod, put = __cordl_internal_set_outputMethod)) ::System::Xml::XmlOutputMethod outputMethod;

  /// @brief Field standalone, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_standalone, put = __cordl_internal_set_standalone)) ::System::Xml::XmlStandalone standalone;

  /// @brief Field useAsync, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useAsync, put = __cordl_internal_set_useAsync)) bool useAsync;

  /// @brief Field writeEndDocumentOnClose, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_writeEndDocumentOnClose, put = __cordl_internal_set_writeEndDocumentOnClose)) bool writeEndDocumentOnClose;

  /// @brief Method CheckReadOnly, addr 0x432d12c, size 0xb4, virtual false, abstract: false, final false
  inline void CheckReadOnly(::StringW propertyName);

  /// @brief Method Clone, addr 0x432d408, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriterSettings* Clone();

  /// @brief Method CreateWriter, addr 0x432c7f0, size 0x478, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* CreateWriter(::System::IO::Stream* output);

  /// @brief Method CreateWriter, addr 0x432ccd0, size 0x2fc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlWriter* CreateWriter(::System::IO::TextWriter* output);

  /// @brief Method Initialize, addr 0x432cfd4, size 0xe0, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::System::Xml::XmlWriterSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_autoXmlDecl() const;

  constexpr bool& __cordl_internal_get_autoXmlDecl();

  constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* const& __cordl_internal_get_cdataSections() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*& __cordl_internal_get_cdataSections();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr bool const& __cordl_internal_get_closeOutput() const;

  constexpr bool& __cordl_internal_get_closeOutput();

  constexpr ::System::Xml::ConformanceLevel const& __cordl_internal_get_conformanceLevel() const;

  constexpr ::System::Xml::ConformanceLevel& __cordl_internal_get_conformanceLevel();

  constexpr bool const& __cordl_internal_get_doNotEscapeUriAttributes() const;

  constexpr bool& __cordl_internal_get_doNotEscapeUriAttributes();

  constexpr ::StringW const& __cordl_internal_get_docTypePublic() const;

  constexpr ::StringW& __cordl_internal_get_docTypePublic();

  constexpr ::StringW const& __cordl_internal_get_docTypeSystem() const;

  constexpr ::StringW& __cordl_internal_get_docTypeSystem();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::System::Xml::TriState const& __cordl_internal_get_indent() const;

  constexpr ::System::Xml::TriState& __cordl_internal_get_indent();

  constexpr ::StringW const& __cordl_internal_get_indentChars() const;

  constexpr ::StringW& __cordl_internal_get_indentChars();

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr ::StringW const& __cordl_internal_get_mediaType() const;

  constexpr ::StringW& __cordl_internal_get_mediaType();

  constexpr bool const& __cordl_internal_get_mergeCDataSections() const;

  constexpr bool& __cordl_internal_get_mergeCDataSections();

  constexpr ::System::Xml::NamespaceHandling const& __cordl_internal_get_namespaceHandling() const;

  constexpr ::System::Xml::NamespaceHandling& __cordl_internal_get_namespaceHandling();

  constexpr ::StringW const& __cordl_internal_get_newLineChars() const;

  constexpr ::StringW& __cordl_internal_get_newLineChars();

  constexpr ::System::Xml::NewLineHandling const& __cordl_internal_get_newLineHandling() const;

  constexpr ::System::Xml::NewLineHandling& __cordl_internal_get_newLineHandling();

  constexpr bool const& __cordl_internal_get_newLineOnAttributes() const;

  constexpr bool& __cordl_internal_get_newLineOnAttributes();

  constexpr bool const& __cordl_internal_get_omitXmlDecl() const;

  constexpr bool& __cordl_internal_get_omitXmlDecl();

  constexpr ::System::Xml::XmlOutputMethod const& __cordl_internal_get_outputMethod() const;

  constexpr ::System::Xml::XmlOutputMethod& __cordl_internal_get_outputMethod();

  constexpr ::System::Xml::XmlStandalone const& __cordl_internal_get_standalone() const;

  constexpr ::System::Xml::XmlStandalone& __cordl_internal_get_standalone();

  constexpr bool const& __cordl_internal_get_useAsync() const;

  constexpr bool& __cordl_internal_get_useAsync();

  constexpr bool const& __cordl_internal_get_writeEndDocumentOnClose() const;

  constexpr bool& __cordl_internal_get_writeEndDocumentOnClose();

  constexpr void __cordl_internal_set_autoXmlDecl(bool value);

  constexpr void __cordl_internal_set_cdataSections(::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_closeOutput(bool value);

  constexpr void __cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr void __cordl_internal_set_doNotEscapeUriAttributes(bool value);

  constexpr void __cordl_internal_set_docTypePublic(::StringW value);

  constexpr void __cordl_internal_set_docTypeSystem(::StringW value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_indent(::System::Xml::TriState value);

  constexpr void __cordl_internal_set_indentChars(::StringW value);

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_mediaType(::StringW value);

  constexpr void __cordl_internal_set_mergeCDataSections(bool value);

  constexpr void __cordl_internal_set_namespaceHandling(::System::Xml::NamespaceHandling value);

  constexpr void __cordl_internal_set_newLineChars(::StringW value);

  constexpr void __cordl_internal_set_newLineHandling(::System::Xml::NewLineHandling value);

  constexpr void __cordl_internal_set_newLineOnAttributes(bool value);

  constexpr void __cordl_internal_set_omitXmlDecl(bool value);

  constexpr void __cordl_internal_set_outputMethod(::System::Xml::XmlOutputMethod value);

  constexpr void __cordl_internal_set_standalone(::System::Xml::XmlStandalone value);

  constexpr void __cordl_internal_set_useAsync(bool value);

  constexpr void __cordl_internal_set_writeEndDocumentOnClose(bool value);

  /// @brief Method .ctor, addr 0x432c76c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Async, addr 0x432d0b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Async();

  /// @brief Method get_AutoXmlDeclaration, addr 0x432d508, size 0x8, virtual false, abstract: false, final false
  inline bool get_AutoXmlDeclaration();

  /// @brief Method get_CDataSectionElements, addr 0x432d4d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* get_CDataSectionElements();

  /// @brief Method get_CheckCharacters, addr 0x432d334, size 0x8, virtual false, abstract: false, final false
  inline bool get_CheckCharacters();

  /// @brief Method get_CloseOutput, addr 0x432d278, size 0x8, virtual false, abstract: false, final false
  inline bool get_CloseOutput();

  /// @brief Method get_ConformanceLevel, addr 0x432d280, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::ConformanceLevel get_ConformanceLevel();

  /// @brief Method get_DoNotEscapeUriAttributes, addr 0x432d4d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_DoNotEscapeUriAttributes();

  /// @brief Method get_DocTypePublic, addr 0x432d4f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DocTypePublic();

  /// @brief Method get_DocTypeSystem, addr 0x432d4f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DocTypeSystem();

  /// @brief Method get_Encoding, addr 0x432d0bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_Indent, addr 0x432d1f0, size 0x10, virtual false, abstract: false, final false
  inline bool get_Indent();

  /// @brief Method get_IndentChars, addr 0x432d268, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IndentChars();

  /// @brief Method get_IndentInternal, addr 0x432d510, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::TriState get_IndentInternal();

  /// @brief Method get_IsQuerySpecific, addr 0x432d518, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsQuerySpecific();

  /// @brief Method get_MediaType, addr 0x432d4e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MediaType();

  /// @brief Method get_MergeCDataSections, addr 0x432d4e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_MergeCDataSections();

  /// @brief Method get_NamespaceHandling, addr 0x432d33c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::NamespaceHandling get_NamespaceHandling();

  /// @brief Method get_NewLineChars, addr 0x432d1e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NewLineChars();

  /// @brief Method get_NewLineHandling, addr 0x432d1e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::NewLineHandling get_NewLineHandling();

  /// @brief Method get_NewLineOnAttributes, addr 0x432d270, size 0x8, virtual false, abstract: false, final false
  inline bool get_NewLineOnAttributes();

  /// @brief Method get_OmitXmlDeclaration, addr 0x432d0c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_OmitXmlDeclaration();

  /// @brief Method get_OutputMethod, addr 0x432d3f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlOutputMethod get_OutputMethod();

  /// @brief Method get_Standalone, addr 0x432d500, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlStandalone get_Standalone();

  /// @brief Method get_WriteEndDocumentOnClose, addr 0x432d3f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_WriteEndDocumentOnClose();

  /// @brief Method set_ConformanceLevel, addr 0x432d288, size 0xac, virtual false, abstract: false, final false
  inline void set_ConformanceLevel(::System::Xml::ConformanceLevel value);

  /// @brief Method set_Indent, addr 0x432d200, size 0x68, virtual false, abstract: false, final false
  inline void set_Indent(bool value);

  /// @brief Method set_NamespaceHandling, addr 0x432d344, size 0xac, virtual false, abstract: false, final false
  inline void set_NamespaceHandling(::System::Xml::NamespaceHandling value);

  /// @brief Method set_OmitXmlDeclaration, addr 0x432d0cc, size 0x60, virtual false, abstract: false, final false
  inline void set_OmitXmlDeclaration(bool value);

  /// @brief Method set_OutputMethod, addr 0x432d400, size 0x8, virtual false, abstract: false, final false
  inline void set_OutputMethod(::System::Xml::XmlOutputMethod value);

  /// @brief Method set_ReadOnly, addr 0x432d588, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadOnly(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlWriterSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlWriterSettings(XmlWriterSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlWriterSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlWriterSettings(XmlWriterSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7279 };

  /// @brief Field useAsync, offset: 0x10, size: 0x1, def value: None
  bool ___useAsync;

  /// @brief Field encoding, offset: 0x18, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field omitXmlDecl, offset: 0x20, size: 0x1, def value: None
  bool ___omitXmlDecl;

  /// @brief Field newLineHandling, offset: 0x24, size: 0x4, def value: None
  ::System::Xml::NewLineHandling ___newLineHandling;

  /// @brief Field newLineChars, offset: 0x28, size: 0x8, def value: None
  ::StringW ___newLineChars;

  /// @brief Field indent, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::TriState ___indent;

  /// @brief Field indentChars, offset: 0x38, size: 0x8, def value: None
  ::StringW ___indentChars;

  /// @brief Field newLineOnAttributes, offset: 0x40, size: 0x1, def value: None
  bool ___newLineOnAttributes;

  /// @brief Field closeOutput, offset: 0x41, size: 0x1, def value: None
  bool ___closeOutput;

  /// @brief Field namespaceHandling, offset: 0x44, size: 0x4, def value: None
  ::System::Xml::NamespaceHandling ___namespaceHandling;

  /// @brief Field conformanceLevel, offset: 0x48, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  /// @brief Field checkCharacters, offset: 0x4c, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field writeEndDocumentOnClose, offset: 0x4d, size: 0x1, def value: None
  bool ___writeEndDocumentOnClose;

  /// @brief Field outputMethod, offset: 0x50, size: 0x4, def value: None
  ::System::Xml::XmlOutputMethod ___outputMethod;

  /// @brief Field cdataSections, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* ___cdataSections;

  /// @brief Field doNotEscapeUriAttributes, offset: 0x60, size: 0x1, def value: None
  bool ___doNotEscapeUriAttributes;

  /// @brief Field mergeCDataSections, offset: 0x61, size: 0x1, def value: None
  bool ___mergeCDataSections;

  /// @brief Field mediaType, offset: 0x68, size: 0x8, def value: None
  ::StringW ___mediaType;

  /// @brief Field docTypeSystem, offset: 0x70, size: 0x8, def value: None
  ::StringW ___docTypeSystem;

  /// @brief Field docTypePublic, offset: 0x78, size: 0x8, def value: None
  ::StringW ___docTypePublic;

  /// @brief Field standalone, offset: 0x80, size: 0x4, def value: None
  ::System::Xml::XmlStandalone ___standalone;

  /// @brief Field autoXmlDecl, offset: 0x84, size: 0x1, def value: None
  bool ___autoXmlDecl;

  /// @brief Field isReadOnly, offset: 0x85, size: 0x1, def value: None
  bool ___isReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlWriterSettings, ___useAsync) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___omitXmlDecl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___newLineHandling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___newLineChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___indent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___indentChars) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___newLineOnAttributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___closeOutput) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___namespaceHandling) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___conformanceLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___checkCharacters) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___writeEndDocumentOnClose) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___outputMethod) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___cdataSections) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___doNotEscapeUriAttributes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___mergeCDataSections) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___mediaType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___docTypeSystem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___docTypePublic) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___standalone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___autoXmlDecl) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlWriterSettings, ___isReadOnly) == 0x85, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlWriterSettings, 0x88>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlWriterSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlWriterSettings*, "System.Xml", "XmlWriterSettings");
