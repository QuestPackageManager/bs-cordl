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
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct ConformanceLevel;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
struct ValidationType;
}
namespace System::Xml {
struct DtdProcessing;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(11414)), TypeDefinitionIndex(TypeDefinitionIndex(11743)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11413)), TypeDefinitionIndex(TypeDefinitionIndex(11445)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 105 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11457)) CS Name: ::System.Xml::XmlReaderSettings*
class CORDL_TYPE XmlReaderSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field useAsync, offset 0x10, size 0x1
  __declspec(property(get = __get_useAsync, put = __set_useAsync)) bool useAsync;

  /// @brief Field nameTable, offset 0x18, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field xmlResolver, offset 0x20, size 0x8
  __declspec(property(get = __get_xmlResolver, put = __set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Field lineNumberOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_lineNumberOffset, put = __set_lineNumberOffset)) int32_t lineNumberOffset;

  /// @brief Field linePositionOffset, offset 0x2c, size 0x4
  __declspec(property(get = __get_linePositionOffset, put = __set_linePositionOffset)) int32_t linePositionOffset;

  /// @brief Field conformanceLevel, offset 0x30, size 0x4
  __declspec(property(get = __get_conformanceLevel, put = __set_conformanceLevel))::System::Xml::ConformanceLevel conformanceLevel;

  /// @brief Field checkCharacters, offset 0x34, size 0x1
  __declspec(property(get = __get_checkCharacters, put = __set_checkCharacters)) bool checkCharacters;

  /// @brief Field maxCharactersInDocument, offset 0x38, size 0x8
  __declspec(property(get = __get_maxCharactersInDocument, put = __set_maxCharactersInDocument)) int64_t maxCharactersInDocument;

  /// @brief Field maxCharactersFromEntities, offset 0x40, size 0x8
  __declspec(property(get = __get_maxCharactersFromEntities, put = __set_maxCharactersFromEntities)) int64_t maxCharactersFromEntities;

  /// @brief Field ignoreWhitespace, offset 0x48, size 0x1
  __declspec(property(get = __get_ignoreWhitespace, put = __set_ignoreWhitespace)) bool ignoreWhitespace;

  /// @brief Field ignorePIs, offset 0x49, size 0x1
  __declspec(property(get = __get_ignorePIs, put = __set_ignorePIs)) bool ignorePIs;

  /// @brief Field ignoreComments, offset 0x4a, size 0x1
  __declspec(property(get = __get_ignoreComments, put = __set_ignoreComments)) bool ignoreComments;

  /// @brief Field dtdProcessing, offset 0x4c, size 0x4
  __declspec(property(get = __get_dtdProcessing, put = __set_dtdProcessing))::System::Xml::DtdProcessing dtdProcessing;

  /// @brief Field validationType, offset 0x50, size 0x4
  __declspec(property(get = __get_validationType, put = __set_validationType))::System::Xml::ValidationType validationType;

  /// @brief Field validationFlags, offset 0x54, size 0x4
  __declspec(property(get = __get_validationFlags, put = __set_validationFlags))::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;

  /// @brief Field schemas, offset 0x58, size 0x8
  __declspec(property(get = __get_schemas, put = __set_schemas))::System::Xml::Schema::XmlSchemaSet* schemas;

  /// @brief Field closeInput, offset 0x60, size 0x1
  __declspec(property(get = __get_closeInput, put = __set_closeInput)) bool closeInput;

  /// @brief Field isReadOnly, offset 0x61, size 0x1
  __declspec(property(get = __get_isReadOnly, put = __set_isReadOnly)) bool isReadOnly;

  /// @brief Field <IsXmlResolverSet>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __get__IsXmlResolverSet_k__BackingField, put = __set__IsXmlResolverSet_k__BackingField)) bool _IsXmlResolverSet_k__BackingField;

  /// @brief Field s_enableLegacyXmlSettings, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_s_enableLegacyXmlSettings, put = setStaticF_s_enableLegacyXmlSettings))::System::Nullable_1<bool> s_enableLegacyXmlSettings;

  __declspec(property(put = set_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(put = set_IsXmlResolverSet)) bool IsXmlResolverSet;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(put = set_LineNumberOffset)) int32_t LineNumberOffset;

  __declspec(property(put = set_LinePositionOffset)) int32_t LinePositionOffset;

  __declspec(property(put = set_ConformanceLevel))::System::Xml::ConformanceLevel ConformanceLevel;

  __declspec(property(put = set_CheckCharacters)) bool CheckCharacters;

  __declspec(property(put = set_MaxCharactersInDocument)) int64_t MaxCharactersInDocument;

  __declspec(property(put = set_MaxCharactersFromEntities)) int64_t MaxCharactersFromEntities;

  __declspec(property(put = set_IgnoreWhitespace)) bool IgnoreWhitespace;

  __declspec(property(put = set_IgnoreProcessingInstructions)) bool IgnoreProcessingInstructions;

  __declspec(property(put = set_IgnoreComments)) bool IgnoreComments;

  __declspec(property(put = set_DtdProcessing))::System::Xml::DtdProcessing DtdProcessing;

  __declspec(property(get = get_ValidationType))::System::Xml::ValidationType ValidationType;

  __declspec(property(get = get_Schemas))::System::Xml::Schema::XmlSchemaSet* Schemas;

  __declspec(property(put = set_ReadOnly)) bool ReadOnly;

  constexpr bool& __get_useAsync();

  constexpr bool const& __get_useAsync() const;

  constexpr void __set_useAsync(bool value);

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr ::System::Xml::XmlResolver*& __get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __get_xmlResolver() const;

  constexpr void __set_xmlResolver(::System::Xml::XmlResolver* value);

  constexpr int32_t& __get_lineNumberOffset();

  constexpr int32_t const& __get_lineNumberOffset() const;

  constexpr void __set_lineNumberOffset(int32_t value);

  constexpr int32_t& __get_linePositionOffset();

  constexpr int32_t const& __get_linePositionOffset() const;

  constexpr void __set_linePositionOffset(int32_t value);

  constexpr ::System::Xml::ConformanceLevel& __get_conformanceLevel();

  constexpr ::System::Xml::ConformanceLevel const& __get_conformanceLevel() const;

  constexpr void __set_conformanceLevel(::System::Xml::ConformanceLevel value);

  constexpr bool& __get_checkCharacters();

  constexpr bool const& __get_checkCharacters() const;

  constexpr void __set_checkCharacters(bool value);

  constexpr int64_t& __get_maxCharactersInDocument();

  constexpr int64_t const& __get_maxCharactersInDocument() const;

  constexpr void __set_maxCharactersInDocument(int64_t value);

  constexpr int64_t& __get_maxCharactersFromEntities();

  constexpr int64_t const& __get_maxCharactersFromEntities() const;

  constexpr void __set_maxCharactersFromEntities(int64_t value);

  constexpr bool& __get_ignoreWhitespace();

  constexpr bool const& __get_ignoreWhitespace() const;

  constexpr void __set_ignoreWhitespace(bool value);

  constexpr bool& __get_ignorePIs();

  constexpr bool const& __get_ignorePIs() const;

  constexpr void __set_ignorePIs(bool value);

  constexpr bool& __get_ignoreComments();

  constexpr bool const& __get_ignoreComments() const;

  constexpr void __set_ignoreComments(bool value);

  constexpr ::System::Xml::DtdProcessing& __get_dtdProcessing();

  constexpr ::System::Xml::DtdProcessing const& __get_dtdProcessing() const;

  constexpr void __set_dtdProcessing(::System::Xml::DtdProcessing value);

  constexpr ::System::Xml::ValidationType& __get_validationType();

  constexpr ::System::Xml::ValidationType const& __get_validationType() const;

  constexpr void __set_validationType(::System::Xml::ValidationType value);

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags& __get_validationFlags();

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags const& __get_validationFlags() const;

  constexpr void __set_validationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value);

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __get_schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& __get_schemas() const;

  constexpr void __set_schemas(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr bool& __get_closeInput();

  constexpr bool const& __get_closeInput() const;

  constexpr void __set_closeInput(bool value);

  constexpr bool& __get_isReadOnly();

  constexpr bool const& __get_isReadOnly() const;

  constexpr void __set_isReadOnly(bool value);

  constexpr bool& __get__IsXmlResolverSet_k__BackingField();

  constexpr bool const& __get__IsXmlResolverSet_k__BackingField() const;

  constexpr void __set__IsXmlResolverSet_k__BackingField(bool value);

  static inline void setStaticF_s_enableLegacyXmlSettings(::System::Nullable_1<bool> value);

  static inline ::System::Nullable_1<bool> getStaticF_s_enableLegacyXmlSettings();

  static inline ::System::Xml::XmlReaderSettings* New_ctor();

  /// @brief Method .ctor addr 0x285a0a4 size 0x20 virtual false final false
  inline void _ctor();

  /// @brief Method set_NameTable addr 0x285a0cc size 0x5c virtual false final false
  inline void set_NameTable(::System::Xml::XmlNameTable* value);

  /// @brief Method set_IsXmlResolverSet addr 0x285a1e0 size 0xc virtual false final false
  inline void set_IsXmlResolverSet(bool value);

  /// @brief Method set_XmlResolver addr 0x285a1ec size 0x64 virtual false final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method GetXmlResolver addr 0x285a250 size 0x8 virtual false final false
  inline ::System::Xml::XmlResolver* GetXmlResolver();

  /// @brief Method set_LineNumberOffset addr 0x285a258 size 0x5c virtual false final false
  inline void set_LineNumberOffset(int32_t value);

  /// @brief Method set_LinePositionOffset addr 0x285a2b4 size 0x5c virtual false final false
  inline void set_LinePositionOffset(int32_t value);

  /// @brief Method set_ConformanceLevel addr 0x285a310 size 0xb0 virtual false final false
  inline void set_ConformanceLevel(::System::Xml::ConformanceLevel value);

  /// @brief Method set_CheckCharacters addr 0x285a3c0 size 0x5c virtual false final false
  inline void set_CheckCharacters(bool value);

  /// @brief Method set_MaxCharactersInDocument addr 0x285a41c size 0xac virtual false final false
  inline void set_MaxCharactersInDocument(int64_t value);

  /// @brief Method set_MaxCharactersFromEntities addr 0x285a4c8 size 0xac virtual false final false
  inline void set_MaxCharactersFromEntities(int64_t value);

  /// @brief Method set_IgnoreWhitespace addr 0x285a574 size 0x5c virtual false final false
  inline void set_IgnoreWhitespace(bool value);

  /// @brief Method set_IgnoreProcessingInstructions addr 0x285a5d0 size 0x5c virtual false final false
  inline void set_IgnoreProcessingInstructions(bool value);

  /// @brief Method set_IgnoreComments addr 0x285a62c size 0x5c virtual false final false
  inline void set_IgnoreComments(bool value);

  /// @brief Method set_DtdProcessing addr 0x285a688 size 0xb0 virtual false final false
  inline void set_DtdProcessing(::System::Xml::DtdProcessing value);

  /// @brief Method get_ValidationType addr 0x285a738 size 0x8 virtual false final false
  inline ::System::Xml::ValidationType get_ValidationType();

  /// @brief Method get_Schemas addr 0x285a740 size 0x6c virtual false final false
  inline ::System::Xml::Schema::XmlSchemaSet* get_Schemas();

  /// @brief Method set_ReadOnly addr 0x285a7ac size 0xc virtual false final false
  inline void set_ReadOnly(bool value);

  /// @brief Method CheckReadOnly addr 0x285a128 size 0xb8 virtual false final false
  inline void CheckReadOnly(::StringW propertyName);

  /// @brief Method Initialize addr 0x285a0c4 size 0x8 virtual false final false
  inline void Initialize();

  /// @brief Method Initialize addr 0x285a7b8 size 0x64 virtual false final false
  inline void Initialize(::System::Xml::XmlResolver* resolver);

  /// @brief Method CreateDefaultResolver addr 0x285a81c size 0x5c virtual false final false
  static inline ::System::Xml::XmlResolver* CreateDefaultResolver();

  /// @brief Method EnableLegacyXmlSettings addr 0x285a878 size 0x100 virtual false final false
  static inline bool EnableLegacyXmlSettings();

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReaderSettings(XmlReaderSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReaderSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReaderSettings(XmlReaderSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReaderSettings();

public:
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

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlReaderSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlReaderSettings*, "System.Xml", "XmlReaderSettings");
