#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaEntity)
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaEntity;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaEntity);
// Type: System.Xml.Schema::SchemaEntity
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11633))
// CS Name: ::System.Xml.Schema::SchemaEntity*
class CORDL_TYPE SchemaEntity : public ::System::Object {
public:
  // Declarations
  /// @brief Field qname, offset 0x10, size 0x8
  __declspec(property(get = __get_qname, put = __set_qname))::System::Xml::XmlQualifiedName* qname;

  /// @brief Field url, offset 0x18, size 0x8
  __declspec(property(get = __get_url, put = __set_url))::StringW url;

  /// @brief Field pubid, offset 0x20, size 0x8
  __declspec(property(get = __get_pubid, put = __set_pubid))::StringW pubid;

  /// @brief Field text, offset 0x28, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::StringW text;

  /// @brief Field ndata, offset 0x30, size 0x8
  __declspec(property(get = __get_ndata, put = __set_ndata))::System::Xml::XmlQualifiedName* ndata;

  /// @brief Field lineNumber, offset 0x38, size 0x4
  __declspec(property(get = __get_lineNumber, put = __set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0x3c, size 0x4
  __declspec(property(get = __get_linePosition, put = __set_linePosition)) int32_t linePosition;

  /// @brief Field isParameter, offset 0x40, size 0x1
  __declspec(property(get = __get_isParameter, put = __set_isParameter)) bool isParameter;

  /// @brief Field isExternal, offset 0x41, size 0x1
  __declspec(property(get = __get_isExternal, put = __set_isExternal)) bool isExternal;

  /// @brief Field parsingInProgress, offset 0x42, size 0x1
  __declspec(property(get = __get_parsingInProgress, put = __set_parsingInProgress)) bool parsingInProgress;

  /// @brief Field isDeclaredInExternal, offset 0x43, size 0x1
  __declspec(property(get = __get_isDeclaredInExternal, put = __set_isDeclaredInExternal)) bool isDeclaredInExternal;

  /// @brief Field baseURI, offset 0x48, size 0x8
  __declspec(property(get = __get_baseURI, put = __set_baseURI))::StringW baseURI;

  /// @brief Field declaredURI, offset 0x50, size 0x8
  __declspec(property(get = __get_declaredURI, put = __set_declaredURI))::StringW declaredURI;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_Name))::StringW System_Xml_IDtdEntityInfo_Name;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_IsExternal)) bool System_Xml_IDtdEntityInfo_IsExternal;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal)) bool System_Xml_IDtdEntityInfo_IsDeclaredInExternal;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_IsUnparsedEntity)) bool System_Xml_IDtdEntityInfo_IsUnparsedEntity;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_IsParameterEntity)) bool System_Xml_IDtdEntityInfo_IsParameterEntity;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_BaseUriString))::StringW System_Xml_IDtdEntityInfo_BaseUriString;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_DeclaredUriString))::StringW System_Xml_IDtdEntityInfo_DeclaredUriString;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_SystemId))::StringW System_Xml_IDtdEntityInfo_SystemId;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_PublicId))::StringW System_Xml_IDtdEntityInfo_PublicId;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_Text))::StringW System_Xml_IDtdEntityInfo_Text;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_LineNumber)) int32_t System_Xml_IDtdEntityInfo_LineNumber;

  __declspec(property(get = System_Xml_IDtdEntityInfo_get_LinePosition)) int32_t System_Xml_IDtdEntityInfo_LinePosition;

  __declspec(property(get = get_Name))::System::Xml::XmlQualifiedName* Name;

  __declspec(property(get = get_Url, put = set_Url))::StringW Url;

  __declspec(property(get = get_Pubid, put = set_Pubid))::StringW Pubid;

  __declspec(property(get = get_IsExternal, put = set_IsExternal)) bool IsExternal;

  __declspec(property(get = get_DeclaredInExternal, put = set_DeclaredInExternal)) bool DeclaredInExternal;

  __declspec(property(get = get_NData, put = set_NData))::System::Xml::XmlQualifiedName* NData;

  __declspec(property(get = get_Text, put = set_Text))::StringW Text;

  __declspec(property(get = get_Line, put = set_Line)) int32_t Line;

  __declspec(property(get = get_Pos, put = set_Pos)) int32_t Pos;

  __declspec(property(get = get_BaseURI, put = set_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_ParsingInProgress, put = set_ParsingInProgress)) bool ParsingInProgress;

  __declspec(property(get = get_DeclaredURI, put = set_DeclaredURI))::StringW DeclaredURI;

  /// @brief Convert operator to "::System::Xml::IDtdEntityInfo"
  constexpr operator ::System::Xml::IDtdEntityInfo*() noexcept;

  constexpr ::System::Xml::XmlQualifiedName*& __get_qname();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_qname() const;

  constexpr void __set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW& __get_url();

  constexpr ::StringW const& __get_url() const;

  constexpr void __set_url(::StringW value);

  constexpr ::StringW& __get_pubid();

  constexpr ::StringW const& __get_pubid() const;

  constexpr void __set_pubid(::StringW value);

  constexpr ::StringW& __get_text();

  constexpr ::StringW const& __get_text() const;

  constexpr void __set_text(::StringW value);

  constexpr ::System::Xml::XmlQualifiedName*& __get_ndata();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_ndata() const;

  constexpr void __set_ndata(::System::Xml::XmlQualifiedName* value);

  constexpr int32_t& __get_lineNumber();

  constexpr int32_t const& __get_lineNumber() const;

  constexpr void __set_lineNumber(int32_t value);

  constexpr int32_t& __get_linePosition();

  constexpr int32_t const& __get_linePosition() const;

  constexpr void __set_linePosition(int32_t value);

  constexpr bool& __get_isParameter();

  constexpr bool const& __get_isParameter() const;

  constexpr void __set_isParameter(bool value);

  constexpr bool& __get_isExternal();

  constexpr bool const& __get_isExternal() const;

  constexpr void __set_isExternal(bool value);

  constexpr bool& __get_parsingInProgress();

  constexpr bool const& __get_parsingInProgress() const;

  constexpr void __set_parsingInProgress(bool value);

  constexpr bool& __get_isDeclaredInExternal();

  constexpr bool const& __get_isDeclaredInExternal() const;

  constexpr void __set_isDeclaredInExternal(bool value);

  constexpr ::StringW& __get_baseURI();

  constexpr ::StringW const& __get_baseURI() const;

  constexpr void __set_baseURI(::StringW value);

  constexpr ::StringW& __get_declaredURI();

  constexpr ::StringW const& __get_declaredURI() const;

  constexpr void __set_declaredURI(::StringW value);

  static inline ::System::Xml::Schema::SchemaEntity* New_ctor(::System::Xml::XmlQualifiedName* qname, bool isParameter);

  /// @brief Method .ctor addr 0x27471b0 size 0x84 virtual false final false
  inline void _ctor(::System::Xml::XmlQualifiedName* qname, bool isParameter);

  /// @brief Method System.Xml.IDtdEntityInfo.get_Name addr 0x2747234 size 0x1c virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_Name();

  /// @brief Method System.Xml.IDtdEntityInfo.get_IsExternal addr 0x2747250 size 0x8 virtual true final true
  inline bool System_Xml_IDtdEntityInfo_get_IsExternal();

  /// @brief Method System.Xml.IDtdEntityInfo.get_IsDeclaredInExternal addr 0x2747258 size 0x8 virtual true final true
  inline bool System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal();

  /// @brief Method System.Xml.IDtdEntityInfo.get_IsUnparsedEntity addr 0x2747260 size 0x28 virtual true final true
  inline bool System_Xml_IDtdEntityInfo_get_IsUnparsedEntity();

  /// @brief Method System.Xml.IDtdEntityInfo.get_IsParameterEntity addr 0x2747288 size 0x8 virtual true final true
  inline bool System_Xml_IDtdEntityInfo_get_IsParameterEntity();

  /// @brief Method System.Xml.IDtdEntityInfo.get_BaseUriString addr 0x2747290 size 0x54 virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_BaseUriString();

  /// @brief Method System.Xml.IDtdEntityInfo.get_DeclaredUriString addr 0x2747338 size 0x54 virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_DeclaredUriString();

  /// @brief Method System.Xml.IDtdEntityInfo.get_SystemId addr 0x27473e0 size 0x8 virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_SystemId();

  /// @brief Method System.Xml.IDtdEntityInfo.get_PublicId addr 0x27473e8 size 0x8 virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_PublicId();

  /// @brief Method System.Xml.IDtdEntityInfo.get_Text addr 0x27473f0 size 0x8 virtual true final true
  inline ::StringW System_Xml_IDtdEntityInfo_get_Text();

  /// @brief Method System.Xml.IDtdEntityInfo.get_LineNumber addr 0x27473f8 size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdEntityInfo_get_LineNumber();

  /// @brief Method System.Xml.IDtdEntityInfo.get_LinePosition addr 0x2747400 size 0x8 virtual true final true
  inline int32_t System_Xml_IDtdEntityInfo_get_LinePosition();

  /// @brief Method get_Name addr 0x2747408 size 0x8 virtual false final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  /// @brief Method get_Url addr 0x2747410 size 0x8 virtual false final false
  inline ::StringW get_Url();

  /// @brief Method set_Url addr 0x2747418 size 0x10 virtual false final false
  inline void set_Url(::StringW value);

  /// @brief Method get_Pubid addr 0x2747428 size 0x8 virtual false final false
  inline ::StringW get_Pubid();

  /// @brief Method set_Pubid addr 0x2747430 size 0x8 virtual false final false
  inline void set_Pubid(::StringW value);

  /// @brief Method get_IsExternal addr 0x2747438 size 0x8 virtual false final false
  inline bool get_IsExternal();

  /// @brief Method set_IsExternal addr 0x2747440 size 0xc virtual false final false
  inline void set_IsExternal(bool value);

  /// @brief Method get_DeclaredInExternal addr 0x274744c size 0x8 virtual false final false
  inline bool get_DeclaredInExternal();

  /// @brief Method set_DeclaredInExternal addr 0x2747454 size 0xc virtual false final false
  inline void set_DeclaredInExternal(bool value);

  /// @brief Method get_NData addr 0x2747460 size 0x8 virtual false final false
  inline ::System::Xml::XmlQualifiedName* get_NData();

  /// @brief Method set_NData addr 0x2747468 size 0x8 virtual false final false
  inline void set_NData(::System::Xml::XmlQualifiedName* value);

  /// @brief Method get_Text addr 0x2747470 size 0x8 virtual false final false
  inline ::StringW get_Text();

  /// @brief Method set_Text addr 0x2747478 size 0xc virtual false final false
  inline void set_Text(::StringW value);

  /// @brief Method get_Line addr 0x2747484 size 0x8 virtual false final false
  inline int32_t get_Line();

  /// @brief Method set_Line addr 0x274748c size 0x8 virtual false final false
  inline void set_Line(int32_t value);

  /// @brief Method get_Pos addr 0x2747494 size 0x8 virtual false final false
  inline int32_t get_Pos();

  /// @brief Method set_Pos addr 0x274749c size 0x8 virtual false final false
  inline void set_Pos(int32_t value);

  /// @brief Method get_BaseURI addr 0x27472e4 size 0x54 virtual false final false
  inline ::StringW get_BaseURI();

  /// @brief Method set_BaseURI addr 0x27474a4 size 0x8 virtual false final false
  inline void set_BaseURI(::StringW value);

  /// @brief Method get_ParsingInProgress addr 0x27474ac size 0x8 virtual false final false
  inline bool get_ParsingInProgress();

  /// @brief Method set_ParsingInProgress addr 0x27474b4 size 0xc virtual false final false
  inline void set_ParsingInProgress(bool value);

  /// @brief Method get_DeclaredURI addr 0x274738c size 0x54 virtual false final false
  inline ::StringW get_DeclaredURI();

  /// @brief Method set_DeclaredURI addr 0x27474c0 size 0x8 virtual false final false
  inline void set_DeclaredURI(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "SchemaEntity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaEntity(SchemaEntity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaEntity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaEntity(SchemaEntity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaEntity();

public:
  /// @brief Field qname, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  /// @brief Field url, offset: 0x18, size: 0x8, def value: None
  ::StringW ___url;

  /// @brief Field pubid, offset: 0x20, size: 0x8, def value: None
  ::StringW ___pubid;

  /// @brief Field text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field ndata, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___ndata;

  /// @brief Field lineNumber, offset: 0x38, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0x3c, size: 0x4, def value: None
  int32_t ___linePosition;

  /// @brief Field isParameter, offset: 0x40, size: 0x1, def value: None
  bool ___isParameter;

  /// @brief Field isExternal, offset: 0x41, size: 0x1, def value: None
  bool ___isExternal;

  /// @brief Field parsingInProgress, offset: 0x42, size: 0x1, def value: None
  bool ___parsingInProgress;

  /// @brief Field isDeclaredInExternal, offset: 0x43, size: 0x1, def value: None
  bool ___isDeclaredInExternal;

  /// @brief Field baseURI, offset: 0x48, size: 0x8, def value: None
  ::StringW ___baseURI;

  /// @brief Field declaredURI, offset: 0x50, size: 0x8, def value: None
  ::StringW ___declaredURI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaEntity, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___qname) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___url) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___pubid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___ndata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___lineNumber) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___linePosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___isParameter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___isExternal) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___parsingInProgress) == 0x42, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___isDeclaredInExternal) == 0x43, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___baseURI) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaEntity, ___declaredURI) == 0x50, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaEntity*, "System.Xml.Schema", "SchemaEntity");
