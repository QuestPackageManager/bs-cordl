#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaAttDef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaAttDef)
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
struct __SchemaAttDef__Reserve;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __SchemaAttDef__Reserve;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__SchemaAttDef__Reserve);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaAttDef);
// Type: ::Reserve
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::SchemaAttDef::Reserve
struct CORDL_TYPE __SchemaAttDef__Reserve {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SchemaAttDef__Reserve_Unwrapped
  enum struct ____SchemaAttDef__Reserve_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_XmlSpace = static_cast<int32_t>(0x1),
    __E_XmlLang = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SchemaAttDef__Reserve_Unwrapped() const noexcept {
    return static_cast<____SchemaAttDef__Reserve_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SchemaAttDef__Reserve();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SchemaAttDef__Reserve(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const None;

  /// @brief Field XmlLang value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const XmlLang;

  /// @brief Field XmlSpace value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__SchemaAttDef__Reserve const XmlSpace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__SchemaAttDef__Reserve, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__SchemaAttDef__Reserve, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::SchemaAttDef
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::SchemaAttDef*
class CORDL_TYPE SchemaAttDef : public ::System::Xml::Schema::SchemaDeclBase {
public:
  // Declarations
  using Reserve = ::System::Xml::Schema::__SchemaAttDef__Reserve;

  __declspec(property(get = get_DefaultValueChecked)) bool DefaultValueChecked;

  __declspec(property(get = get_DefaultValueExpanded, put = set_DefaultValueExpanded))::StringW DefaultValueExpanded;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::SchemaAttDef* Empty;

  __declspec(property(get = get_LineNumber, put = set_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition, put = set_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_Reserved, put = set_Reserved))::System::Xml::Schema::__SchemaAttDef__Reserve Reserved;

  __declspec(property(get = get_SchemaAttribute, put = set_SchemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal)) bool System_Xml_IDtdAttributeInfo_IsDeclaredInExternal;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsNonCDataType)) bool System_Xml_IDtdAttributeInfo_IsNonCDataType;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_IsXmlAttribute)) bool System_Xml_IDtdAttributeInfo_IsXmlAttribute;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LineNumber)) int32_t System_Xml_IDtdAttributeInfo_LineNumber;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LinePosition)) int32_t System_Xml_IDtdAttributeInfo_LinePosition;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_LocalName))::StringW System_Xml_IDtdAttributeInfo_LocalName;

  __declspec(property(get = System_Xml_IDtdAttributeInfo_get_Prefix))::StringW System_Xml_IDtdAttributeInfo_Prefix;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded))::StringW System_Xml_IDtdDefaultAttributeInfo_DefaultValueExpanded;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped))::System::Object* System_Xml_IDtdDefaultAttributeInfo_DefaultValueTyped;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber)) int32_t System_Xml_IDtdDefaultAttributeInfo_ValueLineNumber;

  __declspec(property(get = System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition)) int32_t System_Xml_IDtdDefaultAttributeInfo_ValueLinePosition;

  __declspec(property(get = get_TokenizedType, put = set_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_ValueLineNumber, put = set_ValueLineNumber)) int32_t ValueLineNumber;

  __declspec(property(get = get_ValueLinePosition, put = set_ValueLinePosition)) int32_t ValueLinePosition;

  /// @brief Field defExpanded, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_defExpanded, put = __cordl_internal_set_defExpanded))::StringW defExpanded;

  /// @brief Field defaultValueChecked, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_defaultValueChecked, put = __cordl_internal_set_defaultValueChecked)) bool defaultValueChecked;

  /// @brief Field lineNum, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNum, put = __cordl_internal_set_lineNum)) int32_t lineNum;

  /// @brief Field linePos, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_linePos, put = __cordl_internal_set_linePos)) int32_t linePos;

  /// @brief Field reserved, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_reserved, put = __cordl_internal_set_reserved))::System::Xml::Schema::__SchemaAttDef__Reserve reserved;

  /// @brief Field schemaAttribute, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaAttribute, put = __cordl_internal_set_schemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;

  /// @brief Field valueLineNum, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_valueLineNum, put = __cordl_internal_set_valueLineNum)) int32_t valueLineNum;

  /// @brief Field valueLinePos, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_valueLinePos, put = __cordl_internal_set_valueLinePos)) int32_t valueLinePos;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeInfo"
  constexpr operator ::System::Xml::IDtdAttributeInfo*() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdDefaultAttributeInfo"
  constexpr operator ::System::Xml::IDtdDefaultAttributeInfo*() noexcept;

  /// @brief Method CheckXmlSpace, addr 0x2debed4, size 0x26c, virtual false, abstract: false, final false
  inline void CheckXmlSpace(::System::Xml::IValidationEventHandling* validationEventHandling);

  /// @brief Method Clone, addr 0x2dec140, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* Clone();

  static inline ::System::Xml::Schema::SchemaAttDef* New_ctor();

  static inline ::System::Xml::Schema::SchemaAttDef* New_ctor(::System::Xml::XmlQualifiedName* name);

  static inline ::System::Xml::Schema::SchemaAttDef* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsDeclaredInExternal, addr 0x2debd6c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsNonCDataType, addr 0x2debd20, size 0x2c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsNonCDataType();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_IsXmlAttribute, addr 0x2debd74, size 0x10, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdAttributeInfo_get_IsXmlAttribute();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LineNumber, addr 0x2debd10, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdAttributeInfo_get_LineNumber();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LinePosition, addr 0x2debd18, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdAttributeInfo_get_LinePosition();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_LocalName, addr 0x2debcf4, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IDtdAttributeInfo_get_LocalName();

  /// @brief Method System.Xml.IDtdAttributeInfo.get_Prefix, addr 0x2debcec, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IDtdAttributeInfo_get_Prefix();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueExpanded, addr 0x2debd84, size 0x54, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_DefaultValueTyped, addr 0x2debe2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLineNumber, addr 0x2debe34, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber();

  /// @brief Method System.Xml.IDtdDefaultAttributeInfo.get_ValueLinePosition, addr 0x2debe3c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition();

  constexpr ::StringW const& __cordl_internal_get_defExpanded() const;

  constexpr ::StringW& __cordl_internal_get_defExpanded();

  constexpr bool const& __cordl_internal_get_defaultValueChecked() const;

  constexpr bool& __cordl_internal_get_defaultValueChecked();

  constexpr int32_t const& __cordl_internal_get_lineNum() const;

  constexpr int32_t& __cordl_internal_get_lineNum();

  constexpr int32_t const& __cordl_internal_get_linePos() const;

  constexpr int32_t& __cordl_internal_get_linePos();

  constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve const& __cordl_internal_get_reserved() const;

  constexpr ::System::Xml::Schema::__SchemaAttDef__Reserve& __cordl_internal_get_reserved();

  constexpr ::System::Xml::Schema::XmlSchemaAttribute*& __cordl_internal_get_schemaAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttribute*> const& __cordl_internal_get_schemaAttribute() const;

  constexpr int32_t const& __cordl_internal_get_valueLineNum() const;

  constexpr int32_t& __cordl_internal_get_valueLineNum();

  constexpr int32_t const& __cordl_internal_get_valueLinePos() const;

  constexpr int32_t& __cordl_internal_get_valueLinePos();

  constexpr void __cordl_internal_set_defExpanded(::StringW value);

  constexpr void __cordl_internal_set_defaultValueChecked(bool value);

  constexpr void __cordl_internal_set_lineNum(int32_t value);

  constexpr void __cordl_internal_set_linePos(int32_t value);

  constexpr void __cordl_internal_set_reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value);

  constexpr void __cordl_internal_set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  constexpr void __cordl_internal_set_valueLineNum(int32_t value);

  constexpr void __cordl_internal_set_valueLinePos(int32_t value);

  /// @brief Method .ctor, addr 0x2debce4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2debcd8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name);

  /// @brief Method .ctor, addr 0x2debcd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  static inline ::System::Xml::Schema::SchemaAttDef* getStaticF_Empty();

  /// @brief Method get_DefaultValueChecked, addr 0x2debebc, size 0x8, virtual false, abstract: false, final false
  inline bool get_DefaultValueChecked();

  /// @brief Method get_DefaultValueExpanded, addr 0x2debdd8, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DefaultValueExpanded();

  /// @brief Method get_LineNumber, addr 0x2debe54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x2debe44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_Reserved, addr 0x2debeac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::__SchemaAttDef__Reserve get_Reserved();

  /// @brief Method get_SchemaAttribute, addr 0x2debec4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method get_TokenizedType, addr 0x2debd4c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_ValueLineNumber, addr 0x2debe74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueLineNumber();

  /// @brief Method get_ValueLinePosition, addr 0x2debe64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ValueLinePosition();

  /// @brief Convert to "::System::Xml::IDtdAttributeInfo"
  constexpr ::System::Xml::IDtdAttributeInfo* i___System__Xml__IDtdAttributeInfo() noexcept;

  /// @brief Convert to "::System::Xml::IDtdDefaultAttributeInfo"
  constexpr ::System::Xml::IDtdDefaultAttributeInfo* i___System__Xml__IDtdDefaultAttributeInfo() noexcept;

  static inline void setStaticF_Empty(::System::Xml::Schema::SchemaAttDef* value);

  /// @brief Method set_DefaultValueExpanded, addr 0x2debe84, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValueExpanded(::StringW value);

  /// @brief Method set_LineNumber, addr 0x2debe5c, size 0x8, virtual false, abstract: false, final false
  inline void set_LineNumber(int32_t value);

  /// @brief Method set_LinePosition, addr 0x2debe4c, size 0x8, virtual false, abstract: false, final false
  inline void set_LinePosition(int32_t value);

  /// @brief Method set_Reserved, addr 0x2debeb4, size 0x8, virtual false, abstract: false, final false
  inline void set_Reserved(::System::Xml::Schema::__SchemaAttDef__Reserve value);

  /// @brief Method set_SchemaAttribute, addr 0x2debecc, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaAttribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  /// @brief Method set_TokenizedType, addr 0x2debe8c, size 0x20, virtual false, abstract: false, final false
  inline void set_TokenizedType(::System::Xml::XmlTokenizedType value);

  /// @brief Method set_ValueLineNumber, addr 0x2debe7c, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueLineNumber(int32_t value);

  /// @brief Method set_ValueLinePosition, addr 0x2debe6c, size 0x8, virtual false, abstract: false, final false
  inline void set_ValueLinePosition(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaAttDef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaAttDef(SchemaAttDef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaAttDef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaAttDef(SchemaAttDef const&) = delete;

  /// @brief Field defExpanded, offset: 0x60, size: 0x8, def value: None
  ::StringW ___defExpanded;

  /// @brief Field lineNum, offset: 0x68, size: 0x4, def value: None
  int32_t ___lineNum;

  /// @brief Field linePos, offset: 0x6c, size: 0x4, def value: None
  int32_t ___linePos;

  /// @brief Field valueLineNum, offset: 0x70, size: 0x4, def value: None
  int32_t ___valueLineNum;

  /// @brief Field valueLinePos, offset: 0x74, size: 0x4, def value: None
  int32_t ___valueLinePos;

  /// @brief Field reserved, offset: 0x78, size: 0x4, def value: None
  ::System::Xml::Schema::__SchemaAttDef__Reserve ___reserved;

  /// @brief Field defaultValueChecked, offset: 0x7c, size: 0x1, def value: None
  bool ___defaultValueChecked;

  /// @brief Field schemaAttribute, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttribute* ___schemaAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaAttDef, 0x88>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___defExpanded) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___lineNum) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___linePos) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___valueLineNum) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___valueLinePos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___reserved) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___defaultValueChecked) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaAttDef, ___schemaAttribute) == 0x80, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__SchemaAttDef__Reserve, "System.Xml.Schema", "SchemaAttDef/Reserve");
NEED_NO_BOX(::System::Xml::Schema::SchemaAttDef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaAttDef*, "System.Xml.Schema", "SchemaAttDef");
