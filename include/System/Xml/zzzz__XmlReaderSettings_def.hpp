#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
#include "System/Xml/zzzz__ValidationType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReaderSettings)
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml {
struct DtdProcessing;
}
namespace System::Xml {
struct ValidationType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlResolver;
}
// Forward declare root types
namespace System::Xml {
class XmlReaderSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlReaderSettings);
// Type: System.Xml::XmlReaderSettings
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlReaderSettings*
class CORDL_TYPE XmlReaderSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_CheckCharacters)) bool CheckCharacters;

  __declspec(property(put = set_ConformanceLevel))::System::Xml::ConformanceLevel ConformanceLevel;

  __declspec(property(put = set_DtdProcessing))::System::Xml::DtdProcessing DtdProcessing;

  __declspec(property(put = set_IgnoreComments)) bool IgnoreComments;

  __declspec(property(put = set_IgnoreProcessingInstructions)) bool IgnoreProcessingInstructions;

  __declspec(property(put = set_IgnoreWhitespace)) bool IgnoreWhitespace;

  __declspec(property(put = set_IsXmlResolverSet)) bool IsXmlResolverSet;

  __declspec(property(put = set_LineNumberOffset)) int32_t LineNumberOffset;

  __declspec(property(put = set_LinePositionOffset)) int32_t LinePositionOffset;

  __declspec(property(put = set_MaxCharactersFromEntities)) int64_t MaxCharactersFromEntities;

  __declspec(property(put = set_MaxCharactersInDocument)) int64_t MaxCharactersInDocument;

  __declspec(property(put = set_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(put = set_ReadOnly)) bool ReadOnly;

  __declspec(property(get = get_Schemas))::System::Xml::Schema::XmlSchemaSet* Schemas;

  __declspec(property(get = get_ValidationType))::System::Xml::ValidationType ValidationType;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field <IsXmlResolverSet>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__IsXmlResolverSet_k__BackingField, put = __cordl_internal_set__IsXmlResolverSet_k__BackingField)) bool _IsXmlResolverSet_k__BackingField;

  /// @brief Field checkCharacters, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field closeInput, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_closeInput, put = __cordl_internal_set_closeInput)) bool closeInput;

  /// @brief Field conformanceLevel, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_conformanceLevel, put = __cordl_internal_set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field dtdProcessing, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_dtdProcessing, put = __cordl_internal_set_dtdProcessing))::System::Xml::DtdProcessing dtdProcessing;

  /// @brief Field ignoreComments, offset 0x4a, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreComments, put = __cordl_internal_set_ignoreComments)) bool ignoreComments;

  /// @brief Field ignorePIs, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_ignorePIs, put = __cordl_internal_set_ignorePIs)) bool ignorePIs;

  /// @brief Field ignoreWhitespace, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreWhitespace, put = __cordl_internal_set_ignoreWhitespace)) bool ignoreWhitespace;

  /// @brief Field isReadOnly, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field lineNumberOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumberOffset, put = __cordl_internal_set_lineNumberOffset)) int32_t lineNumberOffset;

  /// @brief Field linePositionOffset, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_linePositionOffset, put = __cordl_internal_set_linePositionOffset)) int32_t linePositionOffset;

  /// @brief Field maxCharactersFromEntities, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_maxCharactersFromEntities, put = __cordl_internal_set_maxCharactersFromEntities)) int64_t maxCharactersFromEntities;

  /// @brief Field maxCharactersInDocument, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_maxCharactersInDocument, put = __cordl_internal_set_maxCharactersInDocument)) int64_t maxCharactersInDocument;

  /// @brief Field nameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field s_enableLegacyXmlSettings, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_s_enableLegacyXmlSettings, put = setStaticF_s_enableLegacyXmlSettings))::System::Nullable_1<bool> s_enableLegacyXmlSettings;

  /// @brief Field schemas, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_schemas, put = __cordl_internal_set_schemas))::System::Xml::Schema::XmlSchemaSet* schemas;

  /// @brief Field useAsync, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useAsync, put = __cordl_internal_set_useAsync)) bool useAsync;

  /// @brief Field validationFlags, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_validationFlags, put = __cordl_internal_set_validationFlags))::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;

  /// @brief Field validationType, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_validationType, put = __cordl_internal_set_validationType))::System::Xml::ValidationType validationType;

  /// @brief Field xmlResolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method CheckReadOnly, addr 0x29a5444, size 0xb8, virtual false, abstract: false, final false
  inline void CheckReadOnly(::StringW propertyName);

  /// @brief Method CreateDefaultResolver, addr 0x29a5b38, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlResolver* CreateDefaultResolver();

  /// @brief Method EnableLegacyXmlSettings, addr 0x29a5b94, size 0x100, virtual false, abstract: false, final false
  static inline bool EnableLegacyXmlSettings();

  /// @brief Method GetXmlResolver, addr 0x29a556c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* GetXmlResolver();

  /// @brief Method Initialize, addr 0x29a53e0, size 0x8, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Initialize, addr 0x29a5ad4, size 0x64, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::XmlResolver* resolver);

  static inline ::System::Xml::XmlReaderSettings* New_ctor();

  constexpr bool const& __cordl_internal_get__IsXmlResolverSet_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsXmlResolverSet_k__BackingField();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr bool const& __cordl_internal_get_closeInput() const;

  constexpr bool& __cordl_internal_get_closeInput();

  constexpr ::System::Xml::ConformanceLevel const& __cordl_internal_get_conformanceLevel() const;

  constexpr ::System::Xml::ConformanceLevel& __cordl_internal_get_conformanceLevel();

  constexpr ::System::Xml::DtdProcessing const& __cordl_internal_get_dtdProcessing() const;

  constexpr ::System::Xml::DtdProcessing& __cordl_internal_get_dtdProcessing();

  constexpr bool const& __cordl_internal_get_ignoreComments() const;

  constexpr bool& __cordl_internal_get_ignoreComments();

  constexpr bool const& __cordl_internal_get_ignorePIs() const;

  constexpr bool& __cordl_internal_get_ignorePIs();

  constexpr bool const& __cordl_internal_get_ignoreWhitespace() const;

  constexpr bool& __cordl_internal_get_ignoreWhitespace();

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr int32_t const& __cordl_internal_get_lineNumberOffset() const;

  constexpr int32_t& __cordl_internal_get_lineNumberOffset();

  constexpr int32_t const& __cordl_internal_get_linePositionOffset() const;

  constexpr int32_t& __cordl_internal_get_linePositionOffset();

  constexpr int64_t const& __cordl_internal_get_maxCharactersFromEntities() const;

  constexpr int64_t& __cordl_internal_get_maxCharactersFromEntities();

  constexpr int64_t const& __cordl_internal_get_maxCharactersInDocument() const;

  constexpr int64_t& __cordl_internal_get_maxCharactersInDocument();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __cordl_internal_get_schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& __cordl_internal_get_schemas() const;

  constexpr bool const& __cordl_internal_get_useAsync() const;

  constexpr bool& __cordl_internal_get_useAsync();

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags const& __cordl_internal_get_validationFlags() const;

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags& __cordl_internal_get_validationFlags();

  constexpr ::System::Xml::ValidationType const& __cordl_internal_get_validationType() const;

  constexpr ::System::Xml::ValidationType& __cordl_internal_get_validationType();

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __cordl_internal_get_xmlResolver() const;

  constexpr void __cordl_internal_set__IsXmlResolverSet_k__BackingField(bool value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_closeInput(bool value);

  constexpr void __cordl_internal_set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr void __cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing value);

  constexpr void __cordl_internal_set_ignoreComments(bool value);

  constexpr void __cordl_internal_set_ignorePIs(bool value);

  constexpr void __cordl_internal_set_ignoreWhitespace(bool value);

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_lineNumberOffset(int32_t value);

  constexpr void __cordl_internal_set_linePositionOffset(int32_t value);

  constexpr void __cordl_internal_set_maxCharactersFromEntities(int64_t value);

  constexpr void __cordl_internal_set_maxCharactersInDocument(int64_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_schemas(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr void __cordl_internal_set_useAsync(bool value);

  constexpr void __cordl_internal_set_validationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value);

  constexpr void __cordl_internal_set_validationType(::System::Xml::ValidationType value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x29a53c0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Nullable_1<bool> getStaticF_s_enableLegacyXmlSettings();

  /// @brief Method get_Schemas, addr 0x29a5a5c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSet* get_Schemas();

  /// @brief Method get_ValidationType, addr 0x29a5a54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::ValidationType get_ValidationType();

  static inline void setStaticF_s_enableLegacyXmlSettings(::System::Nullable_1<bool> value);

  /// @brief Method set_CheckCharacters, addr 0x29a56dc, size 0x5c, virtual false, abstract: false, final false
  inline void set_CheckCharacters(bool value);

  /// @brief Method set_ConformanceLevel, addr 0x29a562c, size 0xb0, virtual false, abstract: false, final false
  inline void set_ConformanceLevel(::System::Xml::ConformanceLevel value);

  /// @brief Method set_DtdProcessing, addr 0x29a59a4, size 0xb0, virtual false, abstract: false, final false
  inline void set_DtdProcessing(::System::Xml::DtdProcessing value);

  /// @brief Method set_IgnoreComments, addr 0x29a5948, size 0x5c, virtual false, abstract: false, final false
  inline void set_IgnoreComments(bool value);

  /// @brief Method set_IgnoreProcessingInstructions, addr 0x29a58ec, size 0x5c, virtual false, abstract: false, final false
  inline void set_IgnoreProcessingInstructions(bool value);

  /// @brief Method set_IgnoreWhitespace, addr 0x29a5890, size 0x5c, virtual false, abstract: false, final false
  inline void set_IgnoreWhitespace(bool value);

  /// @brief Method set_IsXmlResolverSet, addr 0x29a54fc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsXmlResolverSet(bool value);

  /// @brief Method set_LineNumberOffset, addr 0x29a5574, size 0x5c, virtual false, abstract: false, final false
  inline void set_LineNumberOffset(int32_t value);

  /// @brief Method set_LinePositionOffset, addr 0x29a55d0, size 0x5c, virtual false, abstract: false, final false
  inline void set_LinePositionOffset(int32_t value);

  /// @brief Method set_MaxCharactersFromEntities, addr 0x29a57e4, size 0xac, virtual false, abstract: false, final false
  inline void set_MaxCharactersFromEntities(int64_t value);

  /// @brief Method set_MaxCharactersInDocument, addr 0x29a5738, size 0xac, virtual false, abstract: false, final false
  inline void set_MaxCharactersInDocument(int64_t value);

  /// @brief Method set_NameTable, addr 0x29a53e8, size 0x5c, virtual false, abstract: false, final false
  inline void set_NameTable(::System::Xml::XmlNameTable* value);

  /// @brief Method set_ReadOnly, addr 0x29a5ac8, size 0xc, virtual false, abstract: false, final false
  inline void set_ReadOnly(bool value);

  /// @brief Method set_XmlResolver, addr 0x29a5508, size 0x64, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReaderSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReaderSettings(XmlReaderSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReaderSettings(XmlReaderSettings const&) = delete;

  /// @brief Field useAsync, offset: 0x10, size: 0x1, def value: None
  bool ___useAsync;

  /// @brief Field nameTable, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field xmlResolver, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  /// @brief Field lineNumberOffset, offset: 0x28, size: 0x4, def value: None
  int32_t ___lineNumberOffset;

  /// @brief Field linePositionOffset, offset: 0x2c, size: 0x4, def value: None
  int32_t ___linePositionOffset;

  /// @brief Field conformanceLevel, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::ConformanceLevel ___conformanceLevel;

  /// @brief Field checkCharacters, offset: 0x34, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field maxCharactersInDocument, offset: 0x38, size: 0x8, def value: None
  int64_t ___maxCharactersInDocument;

  /// @brief Field maxCharactersFromEntities, offset: 0x40, size: 0x8, def value: None
  int64_t ___maxCharactersFromEntities;

  /// @brief Field ignoreWhitespace, offset: 0x48, size: 0x1, def value: None
  bool ___ignoreWhitespace;

  /// @brief Field ignorePIs, offset: 0x49, size: 0x1, def value: None
  bool ___ignorePIs;

  /// @brief Field ignoreComments, offset: 0x4a, size: 0x1, def value: None
  bool ___ignoreComments;

  /// @brief Field dtdProcessing, offset: 0x4c, size: 0x4, def value: None
  ::System::Xml::DtdProcessing ___dtdProcessing;

  /// @brief Field validationType, offset: 0x50, size: 0x4, def value: None
  ::System::Xml::ValidationType ___validationType;

  /// @brief Field validationFlags, offset: 0x54, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaValidationFlags ___validationFlags;

  /// @brief Field schemas, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ___schemas;

  /// @brief Field closeInput, offset: 0x60, size: 0x1, def value: None
  bool ___closeInput;

  /// @brief Field isReadOnly, offset: 0x61, size: 0x1, def value: None
  bool ___isReadOnly;

  /// @brief Field <IsXmlResolverSet>k__BackingField, offset: 0x62, size: 0x1, def value: None
  bool ____IsXmlResolverSet_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlReaderSettings, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___useAsync) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___nameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___xmlResolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___lineNumberOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___linePositionOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___conformanceLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___checkCharacters) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___maxCharactersInDocument) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___maxCharactersFromEntities) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___ignoreWhitespace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___ignorePIs) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___ignoreComments) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___dtdProcessing) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___validationType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___validationFlags) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___schemas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___closeInput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ___isReadOnly) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlReaderSettings, ____IsXmlResolverSet_k__BackingField) == 0x62, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlReaderSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReaderSettings*, "System.Xml", "XmlReaderSettings");
