#pragma once
// IWYU pragma private; include "System/Xml/Schema/XdrBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XdrBuilder)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class ParticleContentValidator;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
struct SchemaNames_Token;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XdrBuilder_AttributeContent;
}
namespace System::Xml::Schema {
class XdrBuilder_DeclBaseInfo;
}
namespace System::Xml::Schema {
class XdrBuilder_ElementContent;
}
namespace System::Xml::Schema {
class XdrBuilder_GroupContent;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrAttributeEntry;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrBeginChildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrBuildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrEndChildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrEntry;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrInitFunction;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class HWStack;
}
namespace System::Xml {
class PositionInfo;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XdrBuilder;
}
namespace System::Xml::Schema {
class XdrBuilder_AttributeContent;
}
namespace System::Xml::Schema {
class XdrBuilder_DeclBaseInfo;
}
namespace System::Xml::Schema {
class XdrBuilder_ElementContent;
}
namespace System::Xml::Schema {
class XdrBuilder_GroupContent;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrAttributeEntry;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrBeginChildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrBuildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrEndChildFunction;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrEntry;
}
namespace System::Xml::Schema {
class XdrBuilder_XdrInitFunction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_AttributeContent);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_DeclBaseInfo);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_ElementContent);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_GroupContent);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrBuildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrEndChildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrEntry);
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder_XdrInitFunction);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/DeclBaseInfo
class CORDL_TYPE XdrBuilder_DeclBaseInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Attdef, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Attdef, put = __cordl_internal_set__Attdef)) ::System::Xml::Schema::SchemaAttDef* _Attdef;

  /// @brief Field _Checking, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__Checking, put = __cordl_internal_set__Checking)) bool _Checking;

  /// @brief Field _Default, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Default, put = __cordl_internal_set__Default)) ::System::Object* _Default;

  /// @brief Field _ElementDecl, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDecl, put = __cordl_internal_set__ElementDecl)) ::System::Xml::Schema::SchemaElementDecl* _ElementDecl;

  /// @brief Field _MaxOccurs, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxOccurs, put = __cordl_internal_set__MaxOccurs)) uint32_t _MaxOccurs;

  /// @brief Field _MinOccurs, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__MinOccurs, put = __cordl_internal_set__MinOccurs)) uint32_t _MinOccurs;

  /// @brief Field _Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name)) ::System::Xml::XmlQualifiedName* _Name;

  /// @brief Field _Next, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Next, put = __cordl_internal_set__Next)) ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _Next;

  /// @brief Field _Prefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Prefix, put = __cordl_internal_set__Prefix)) ::StringW _Prefix;

  /// @brief Field _Revises, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Revises, put = __cordl_internal_set__Revises)) ::System::Object* _Revises;

  /// @brief Field _TypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeName, put = __cordl_internal_set__TypeName)) ::System::Xml::XmlQualifiedName* _TypeName;

  /// @brief Field _TypePrefix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__TypePrefix, put = __cordl_internal_set__TypePrefix)) ::StringW _TypePrefix;

  static inline ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* New_ctor();

  /// @brief Method Reset, addr 0x42b1570, size 0x7c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Xml::Schema::SchemaAttDef* const& __cordl_internal_get__Attdef() const;

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get__Attdef();

  constexpr bool const& __cordl_internal_get__Checking() const;

  constexpr bool& __cordl_internal_get__Checking();

  constexpr ::System::Object* const& __cordl_internal_get__Default() const;

  constexpr ::System::Object*& __cordl_internal_get__Default();

  constexpr ::System::Xml::Schema::SchemaElementDecl* const& __cordl_internal_get__ElementDecl() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get__ElementDecl();

  constexpr uint32_t const& __cordl_internal_get__MaxOccurs() const;

  constexpr uint32_t& __cordl_internal_get__MaxOccurs();

  constexpr uint32_t const& __cordl_internal_get__MinOccurs() const;

  constexpr uint32_t& __cordl_internal_get__MinOccurs();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get__Name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__Name();

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& __cordl_internal_get__Next() const;

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& __cordl_internal_get__Next();

  constexpr ::StringW const& __cordl_internal_get__Prefix() const;

  constexpr ::StringW& __cordl_internal_get__Prefix();

  constexpr ::System::Object* const& __cordl_internal_get__Revises() const;

  constexpr ::System::Object*& __cordl_internal_get__Revises();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get__TypeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__TypeName();

  constexpr ::StringW const& __cordl_internal_get__TypePrefix() const;

  constexpr ::StringW& __cordl_internal_get__TypePrefix();

  constexpr void __cordl_internal_set__Attdef(::System::Xml::Schema::SchemaAttDef* value);

  constexpr void __cordl_internal_set__Checking(bool value);

  constexpr void __cordl_internal_set__Default(::System::Object* value);

  constexpr void __cordl_internal_set__ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set__MaxOccurs(uint32_t value);

  constexpr void __cordl_internal_set__MinOccurs(uint32_t value);

  constexpr void __cordl_internal_set__Name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set__Next(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value);

  constexpr void __cordl_internal_set__Prefix(::StringW value);

  constexpr void __cordl_internal_set__Revises(::System::Object* value);

  constexpr void __cordl_internal_set__TypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set__TypePrefix(::StringW value);

  /// @brief Method .ctor, addr 0x42b111c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_DeclBaseInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_DeclBaseInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_DeclBaseInfo(XdrBuilder_DeclBaseInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_DeclBaseInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_DeclBaseInfo(XdrBuilder_DeclBaseInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7634 };

  /// @brief Field _Name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ____Name;

  /// @brief Field _Prefix, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Prefix;

  /// @brief Field _TypeName, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ____TypeName;

  /// @brief Field _TypePrefix, offset: 0x28, size: 0x8, def value: None
  ::StringW ____TypePrefix;

  /// @brief Field _Default, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____Default;

  /// @brief Field _Revises, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____Revises;

  /// @brief Field _MaxOccurs, offset: 0x40, size: 0x4, def value: None
  uint32_t ____MaxOccurs;

  /// @brief Field _MinOccurs, offset: 0x44, size: 0x4, def value: None
  uint32_t ____MinOccurs;

  /// @brief Field _Checking, offset: 0x48, size: 0x1, def value: None
  bool ____Checking;

  /// @brief Field _ElementDecl, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ____ElementDecl;

  /// @brief Field _Attdef, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaAttDef* ____Attdef;

  /// @brief Field _Next, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* ____Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Prefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____TypeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____TypePrefix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Default) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Revises) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____MaxOccurs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____MinOccurs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Checking) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____ElementDecl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Attdef) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_DeclBaseInfo, ____Next) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_DeclBaseInfo, 0x68>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/GroupContent
class CORDL_TYPE XdrBuilder_GroupContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _HasMaxAttr, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__HasMaxAttr, put = __cordl_internal_set__HasMaxAttr)) bool _HasMaxAttr;

  /// @brief Field _HasMinAttr, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__HasMinAttr, put = __cordl_internal_set__HasMinAttr)) bool _HasMinAttr;

  /// @brief Field _MaxVal, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxVal, put = __cordl_internal_set__MaxVal)) uint32_t _MaxVal;

  /// @brief Field _MinVal, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__MinVal, put = __cordl_internal_set__MinVal)) uint32_t _MinVal;

  /// @brief Field _Order, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__Order, put = __cordl_internal_set__Order)) int32_t _Order;

  /// @brief Method Copy, addr 0x42ae178, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XdrBuilder_GroupContent* Copy(::System::Xml::Schema::XdrBuilder_GroupContent* other);

  /// @brief Method Copy, addr 0x42b3d4c, size 0x28, virtual false, abstract: false, final false
  static inline void Copy(::System::Xml::Schema::XdrBuilder_GroupContent* from, ::System::Xml::Schema::XdrBuilder_GroupContent* to);

  static inline ::System::Xml::Schema::XdrBuilder_GroupContent* New_ctor();

  constexpr bool const& __cordl_internal_get__HasMaxAttr() const;

  constexpr bool& __cordl_internal_get__HasMaxAttr();

  constexpr bool const& __cordl_internal_get__HasMinAttr() const;

  constexpr bool& __cordl_internal_get__HasMinAttr();

  constexpr uint32_t const& __cordl_internal_get__MaxVal() const;

  constexpr uint32_t& __cordl_internal_get__MaxVal();

  constexpr uint32_t const& __cordl_internal_get__MinVal() const;

  constexpr uint32_t& __cordl_internal_get__MinVal();

  constexpr int32_t const& __cordl_internal_get__Order() const;

  constexpr int32_t& __cordl_internal_get__Order();

  constexpr void __cordl_internal_set__HasMaxAttr(bool value);

  constexpr void __cordl_internal_set__HasMinAttr(bool value);

  constexpr void __cordl_internal_set__MaxVal(uint32_t value);

  constexpr void __cordl_internal_set__MinVal(uint32_t value);

  constexpr void __cordl_internal_set__Order(int32_t value);

  /// @brief Method .ctor, addr 0x42acdb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_GroupContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_GroupContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_GroupContent(XdrBuilder_GroupContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_GroupContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_GroupContent(XdrBuilder_GroupContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7635 };

  /// @brief Field _MinVal, offset: 0x10, size: 0x4, def value: None
  uint32_t ____MinVal;

  /// @brief Field _MaxVal, offset: 0x14, size: 0x4, def value: None
  uint32_t ____MaxVal;

  /// @brief Field _HasMaxAttr, offset: 0x18, size: 0x1, def value: None
  bool ____HasMaxAttr;

  /// @brief Field _HasMinAttr, offset: 0x19, size: 0x1, def value: None
  bool ____HasMinAttr;

  /// @brief Field _Order, offset: 0x1c, size: 0x4, def value: None
  int32_t ____Order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_GroupContent, ____MinVal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_GroupContent, ____MaxVal) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_GroupContent, ____HasMaxAttr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_GroupContent, ____HasMinAttr) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_GroupContent, ____Order) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_GroupContent, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/ElementContent
class CORDL_TYPE XdrBuilder_ElementContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AllowDataType, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowDataType, put = __cordl_internal_set__AllowDataType)) bool _AllowDataType;

  /// @brief Field _AttDefList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AttDefList, put = __cordl_internal_set__AttDefList)) ::System::Collections::Hashtable* _AttDefList;

  /// @brief Field _ContentAttr, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ContentAttr, put = __cordl_internal_set__ContentAttr)) int32_t _ContentAttr;

  /// @brief Field _ElementDecl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDecl, put = __cordl_internal_set__ElementDecl)) ::System::Xml::Schema::SchemaElementDecl* _ElementDecl;

  /// @brief Field _EnumerationRequired, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__EnumerationRequired, put = __cordl_internal_set__EnumerationRequired)) bool _EnumerationRequired;

  /// @brief Field _ExistTerminal, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__ExistTerminal, put = __cordl_internal_set__ExistTerminal)) bool _ExistTerminal;

  /// @brief Field _HasDataType, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__HasDataType, put = __cordl_internal_set__HasDataType)) bool _HasDataType;

  /// @brief Field _HasType, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__HasType, put = __cordl_internal_set__HasType)) bool _HasType;

  /// @brief Field _MasterGroupRequired, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__MasterGroupRequired, put = __cordl_internal_set__MasterGroupRequired)) bool _MasterGroupRequired;

  /// @brief Field _MaxLength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxLength, put = __cordl_internal_set__MaxLength)) uint32_t _MaxLength;

  /// @brief Field _MaxVal, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxVal, put = __cordl_internal_set__MaxVal)) uint32_t _MaxVal;

  /// @brief Field _MinLength, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__MinLength, put = __cordl_internal_set__MinLength)) uint32_t _MinLength;

  /// @brief Field _MinVal, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__MinVal, put = __cordl_internal_set__MinVal)) uint32_t _MinVal;

  /// @brief Field _OrderAttr, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__OrderAttr, put = __cordl_internal_set__OrderAttr)) int32_t _OrderAttr;

  static inline ::System::Xml::Schema::XdrBuilder_ElementContent* New_ctor();

  constexpr bool const& __cordl_internal_get__AllowDataType() const;

  constexpr bool& __cordl_internal_get__AllowDataType();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__AttDefList() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__AttDefList();

  constexpr int32_t const& __cordl_internal_get__ContentAttr() const;

  constexpr int32_t& __cordl_internal_get__ContentAttr();

  constexpr ::System::Xml::Schema::SchemaElementDecl* const& __cordl_internal_get__ElementDecl() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get__ElementDecl();

  constexpr bool const& __cordl_internal_get__EnumerationRequired() const;

  constexpr bool& __cordl_internal_get__EnumerationRequired();

  constexpr bool const& __cordl_internal_get__ExistTerminal() const;

  constexpr bool& __cordl_internal_get__ExistTerminal();

  constexpr bool const& __cordl_internal_get__HasDataType() const;

  constexpr bool& __cordl_internal_get__HasDataType();

  constexpr bool const& __cordl_internal_get__HasType() const;

  constexpr bool& __cordl_internal_get__HasType();

  constexpr bool const& __cordl_internal_get__MasterGroupRequired() const;

  constexpr bool& __cordl_internal_get__MasterGroupRequired();

  constexpr uint32_t const& __cordl_internal_get__MaxLength() const;

  constexpr uint32_t& __cordl_internal_get__MaxLength();

  constexpr uint32_t const& __cordl_internal_get__MaxVal() const;

  constexpr uint32_t& __cordl_internal_get__MaxVal();

  constexpr uint32_t const& __cordl_internal_get__MinLength() const;

  constexpr uint32_t& __cordl_internal_get__MinLength();

  constexpr uint32_t const& __cordl_internal_get__MinVal() const;

  constexpr uint32_t& __cordl_internal_get__MinVal();

  constexpr int32_t const& __cordl_internal_get__OrderAttr() const;

  constexpr int32_t& __cordl_internal_get__OrderAttr();

  constexpr void __cordl_internal_set__AllowDataType(bool value);

  constexpr void __cordl_internal_set__AttDefList(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__ContentAttr(int32_t value);

  constexpr void __cordl_internal_set__ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set__EnumerationRequired(bool value);

  constexpr void __cordl_internal_set__ExistTerminal(bool value);

  constexpr void __cordl_internal_set__HasDataType(bool value);

  constexpr void __cordl_internal_set__HasType(bool value);

  constexpr void __cordl_internal_set__MasterGroupRequired(bool value);

  constexpr void __cordl_internal_set__MaxLength(uint32_t value);

  constexpr void __cordl_internal_set__MaxVal(uint32_t value);

  constexpr void __cordl_internal_set__MinLength(uint32_t value);

  constexpr void __cordl_internal_set__MinVal(uint32_t value);

  constexpr void __cordl_internal_set__OrderAttr(int32_t value);

  /// @brief Method .ctor, addr 0x42acda8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_ElementContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_ElementContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_ElementContent(XdrBuilder_ElementContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_ElementContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_ElementContent(XdrBuilder_ElementContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7636 };

  /// @brief Field _ElementDecl, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ____ElementDecl;

  /// @brief Field _ContentAttr, offset: 0x18, size: 0x4, def value: None
  int32_t ____ContentAttr;

  /// @brief Field _OrderAttr, offset: 0x1c, size: 0x4, def value: None
  int32_t ____OrderAttr;

  /// @brief Field _MasterGroupRequired, offset: 0x20, size: 0x1, def value: None
  bool ____MasterGroupRequired;

  /// @brief Field _ExistTerminal, offset: 0x21, size: 0x1, def value: None
  bool ____ExistTerminal;

  /// @brief Field _AllowDataType, offset: 0x22, size: 0x1, def value: None
  bool ____AllowDataType;

  /// @brief Field _HasDataType, offset: 0x23, size: 0x1, def value: None
  bool ____HasDataType;

  /// @brief Field _HasType, offset: 0x24, size: 0x1, def value: None
  bool ____HasType;

  /// @brief Field _EnumerationRequired, offset: 0x25, size: 0x1, def value: None
  bool ____EnumerationRequired;

  /// @brief Field _MinVal, offset: 0x28, size: 0x4, def value: None
  uint32_t ____MinVal;

  /// @brief Field _MaxVal, offset: 0x2c, size: 0x4, def value: None
  uint32_t ____MaxVal;

  /// @brief Field _MaxLength, offset: 0x30, size: 0x4, def value: None
  uint32_t ____MaxLength;

  /// @brief Field _MinLength, offset: 0x34, size: 0x4, def value: None
  uint32_t ____MinLength;

  /// @brief Field _AttDefList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____AttDefList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____ElementDecl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____ContentAttr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____OrderAttr) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____MasterGroupRequired) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____ExistTerminal) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____AllowDataType) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____HasDataType) == 0x23, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____HasType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____EnumerationRequired) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____MinVal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____MaxVal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____MaxLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____MinLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_ElementContent, ____AttDefList) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_ElementContent, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/AttributeContent
class CORDL_TYPE XdrBuilder_AttributeContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AttDef, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AttDef, put = __cordl_internal_set__AttDef)) ::System::Xml::Schema::SchemaAttDef* _AttDef;

  /// @brief Field _Default, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Default, put = __cordl_internal_set__Default)) ::System::Object* _Default;

  /// @brief Field _EnumerationRequired, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__EnumerationRequired, put = __cordl_internal_set__EnumerationRequired)) bool _EnumerationRequired;

  /// @brief Field _Global, offset 0x3e, size 0x1
  __declspec(property(get = __cordl_internal_get__Global, put = __cordl_internal_set__Global)) bool _Global;

  /// @brief Field _HasDataType, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get__HasDataType, put = __cordl_internal_set__HasDataType)) bool _HasDataType;

  /// @brief Field _MaxLength, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxLength, put = __cordl_internal_set__MaxLength)) uint32_t _MaxLength;

  /// @brief Field _MaxVal, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxVal, put = __cordl_internal_set__MaxVal)) uint32_t _MaxVal;

  /// @brief Field _MinLength, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__MinLength, put = __cordl_internal_set__MinLength)) uint32_t _MinLength;

  /// @brief Field _MinVal, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__MinVal, put = __cordl_internal_set__MinVal)) uint32_t _MinVal;

  /// @brief Field _Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name)) ::System::Xml::XmlQualifiedName* _Name;

  /// @brief Field _Prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Prefix, put = __cordl_internal_set__Prefix)) ::StringW _Prefix;

  /// @brief Field _Required, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__Required, put = __cordl_internal_set__Required)) bool _Required;

  static inline ::System::Xml::Schema::XdrBuilder_AttributeContent* New_ctor();

  constexpr ::System::Xml::Schema::SchemaAttDef* const& __cordl_internal_get__AttDef() const;

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get__AttDef();

  constexpr ::System::Object* const& __cordl_internal_get__Default() const;

  constexpr ::System::Object*& __cordl_internal_get__Default();

  constexpr bool const& __cordl_internal_get__EnumerationRequired() const;

  constexpr bool& __cordl_internal_get__EnumerationRequired();

  constexpr bool const& __cordl_internal_get__Global() const;

  constexpr bool& __cordl_internal_get__Global();

  constexpr bool const& __cordl_internal_get__HasDataType() const;

  constexpr bool& __cordl_internal_get__HasDataType();

  constexpr uint32_t const& __cordl_internal_get__MaxLength() const;

  constexpr uint32_t& __cordl_internal_get__MaxLength();

  constexpr uint32_t const& __cordl_internal_get__MaxVal() const;

  constexpr uint32_t& __cordl_internal_get__MaxVal();

  constexpr uint32_t const& __cordl_internal_get__MinLength() const;

  constexpr uint32_t& __cordl_internal_get__MinLength();

  constexpr uint32_t const& __cordl_internal_get__MinVal() const;

  constexpr uint32_t& __cordl_internal_get__MinVal();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get__Name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__Name();

  constexpr ::StringW const& __cordl_internal_get__Prefix() const;

  constexpr ::StringW& __cordl_internal_get__Prefix();

  constexpr bool const& __cordl_internal_get__Required() const;

  constexpr bool& __cordl_internal_get__Required();

  constexpr void __cordl_internal_set__AttDef(::System::Xml::Schema::SchemaAttDef* value);

  constexpr void __cordl_internal_set__Default(::System::Object* value);

  constexpr void __cordl_internal_set__EnumerationRequired(bool value);

  constexpr void __cordl_internal_set__Global(bool value);

  constexpr void __cordl_internal_set__HasDataType(bool value);

  constexpr void __cordl_internal_set__MaxLength(uint32_t value);

  constexpr void __cordl_internal_set__MaxVal(uint32_t value);

  constexpr void __cordl_internal_set__MinLength(uint32_t value);

  constexpr void __cordl_internal_set__MinVal(uint32_t value);

  constexpr void __cordl_internal_set__Name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set__Prefix(::StringW value);

  constexpr void __cordl_internal_set__Required(bool value);

  /// @brief Method .ctor, addr 0x42acdb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_AttributeContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_AttributeContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_AttributeContent(XdrBuilder_AttributeContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_AttributeContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_AttributeContent(XdrBuilder_AttributeContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7637 };

  /// @brief Field _AttDef, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaAttDef* ____AttDef;

  /// @brief Field _Name, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ____Name;

  /// @brief Field _Prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Prefix;

  /// @brief Field _Required, offset: 0x28, size: 0x1, def value: None
  bool ____Required;

  /// @brief Field _MinVal, offset: 0x2c, size: 0x4, def value: None
  uint32_t ____MinVal;

  /// @brief Field _MaxVal, offset: 0x30, size: 0x4, def value: None
  uint32_t ____MaxVal;

  /// @brief Field _MaxLength, offset: 0x34, size: 0x4, def value: None
  uint32_t ____MaxLength;

  /// @brief Field _MinLength, offset: 0x38, size: 0x4, def value: None
  uint32_t ____MinLength;

  /// @brief Field _EnumerationRequired, offset: 0x3c, size: 0x1, def value: None
  bool ____EnumerationRequired;

  /// @brief Field _HasDataType, offset: 0x3d, size: 0x1, def value: None
  bool ____HasDataType;

  /// @brief Field _Global, offset: 0x3e, size: 0x1, def value: None
  bool ____Global;

  /// @brief Field _Default, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____Default;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____AttDef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____Prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____Required) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____MinVal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____MaxVal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____MaxLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____MinLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____EnumerationRequired) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____HasDataType) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____Global) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_AttributeContent, ____Default) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_AttributeContent, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrBuildFunction
class CORDL_TYPE XdrBuilder_XdrBuildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x42b3d74, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  static inline ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x42b39d8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrBuildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrBuildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrBuildFunction(XdrBuilder_XdrBuildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrBuildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrBuildFunction(XdrBuilder_XdrBuildFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrBuildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrInitFunction
class CORDL_TYPE XdrBuilder_XdrInitFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x42b3d88, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  static inline ::System::Xml::Schema::XdrBuilder_XdrInitFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x42b3b74, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrInitFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrInitFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrInitFunction(XdrBuilder_XdrInitFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrInitFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrInitFunction(XdrBuilder_XdrInitFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrInitFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrBeginChildFunction
class CORDL_TYPE XdrBuilder_XdrBeginChildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x42b3d9c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder);

  static inline ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x42b3c14, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrBeginChildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrBeginChildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrBeginChildFunction(XdrBuilder_XdrBeginChildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrBeginChildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrBeginChildFunction(XdrBuilder_XdrBeginChildFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrEndChildFunction
class CORDL_TYPE XdrBuilder_XdrEndChildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x42b3db0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder);

  static inline ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x42b3cb0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrEndChildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrEndChildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrEndChildFunction(XdrBuilder_XdrEndChildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrEndChildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrEndChildFunction(XdrBuilder_XdrEndChildFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.SchemaNames::Token
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrAttributeEntry
class CORDL_TYPE XdrBuilder_XdrAttributeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Attribute, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Attribute, put = __cordl_internal_set__Attribute)) ::System::Xml::Schema::SchemaNames_Token _Attribute;

  /// @brief Field _BuildFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BuildFunc, put = __cordl_internal_set__BuildFunc)) ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* _BuildFunc;

  /// @brief Field _Datatype, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Datatype, put = __cordl_internal_set__Datatype)) ::System::Xml::Schema::XmlSchemaDatatype* _Datatype;

  /// @brief Field _SchemaFlags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__SchemaFlags, put = __cordl_internal_set__SchemaFlags)) int32_t _SchemaFlags;

  static inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* New_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype,
                                                                              ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);

  static inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* New_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                              ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);

  constexpr ::System::Xml::Schema::SchemaNames_Token const& __cordl_internal_get__Attribute() const;

  constexpr ::System::Xml::Schema::SchemaNames_Token& __cordl_internal_get__Attribute();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* const& __cordl_internal_get__BuildFunc() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*& __cordl_internal_get__BuildFunc();

  constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& __cordl_internal_get__Datatype() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __cordl_internal_get__Datatype();

  constexpr int32_t const& __cordl_internal_get__SchemaFlags() const;

  constexpr int32_t& __cordl_internal_get__SchemaFlags();

  constexpr void __cordl_internal_set__Attribute(::System::Xml::Schema::SchemaNames_Token value);

  constexpr void __cordl_internal_set__BuildFunc(::System::Xml::Schema::XdrBuilder_XdrBuildFunction* value);

  constexpr void __cordl_internal_set__Datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr void __cordl_internal_set__SchemaFlags(int32_t value);

  /// @brief Method .ctor, addr 0x42b3a78, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);

  /// @brief Method .ctor, addr 0x42b3ac0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrAttributeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrAttributeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrAttributeEntry(XdrBuilder_XdrAttributeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrAttributeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrAttributeEntry(XdrBuilder_XdrAttributeEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7642 };

  /// @brief Field _Attribute, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaNames_Token ____Attribute;

  /// @brief Field _SchemaFlags, offset: 0x14, size: 0x4, def value: None
  int32_t ____SchemaFlags;

  /// @brief Field _Datatype, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ____Datatype;

  /// @brief Field _BuildFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* ____BuildFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry, ____Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry, ____SchemaFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry, ____Datatype) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry, ____BuildFunc) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.SchemaNames::Token
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder/XdrEntry
class CORDL_TYPE XdrBuilder_XdrEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AllowText, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowText, put = __cordl_internal_set__AllowText)) bool _AllowText;

  /// @brief Field _Attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Attributes,
                      put = __cordl_internal_set__Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      _Attributes;

  /// @brief Field _BeginChildFunc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__BeginChildFunc, put = __cordl_internal_set__BeginChildFunc)) ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* _BeginChildFunc;

  /// @brief Field _EndChildFunc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__EndChildFunc, put = __cordl_internal_set__EndChildFunc)) ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* _EndChildFunc;

  /// @brief Field _InitFunc, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InitFunc, put = __cordl_internal_set__InitFunc)) ::System::Xml::Schema::XdrBuilder_XdrInitFunction* _InitFunc;

  /// @brief Field _Name, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name)) ::System::Xml::Schema::SchemaNames_Token _Name;

  /// @brief Field _NextStates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__NextStates, put = __cordl_internal_set__NextStates)) ::ArrayW<int32_t, ::Array<int32_t>*> _NextStates;

  static inline ::System::Xml::Schema::XdrBuilder_XdrEntry*
  New_ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
           ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> attributes,
           ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end,
           bool fText);

  constexpr bool const& __cordl_internal_get__AllowText() const;

  constexpr bool& __cordl_internal_get__AllowText();

  constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> const& __cordl_internal_get__Attributes() const;

  constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>& __cordl_internal_get__Attributes();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* const& __cordl_internal_get__BeginChildFunc() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*& __cordl_internal_get__BeginChildFunc();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* const& __cordl_internal_get__EndChildFunc() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*& __cordl_internal_get__EndChildFunc();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction* const& __cordl_internal_get__InitFunc() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction*& __cordl_internal_get__InitFunc();

  constexpr ::System::Xml::Schema::SchemaNames_Token const& __cordl_internal_get__Name() const;

  constexpr ::System::Xml::Schema::SchemaNames_Token& __cordl_internal_get__Name();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__NextStates() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__NextStates();

  constexpr void __cordl_internal_set__AllowText(bool value);

  constexpr void __cordl_internal_set__Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  constexpr void __cordl_internal_set__BeginChildFunc(::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* value);

  constexpr void __cordl_internal_set__EndChildFunc(::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* value);

  constexpr void __cordl_internal_set__InitFunc(::System::Xml::Schema::XdrBuilder_XdrInitFunction* value);

  constexpr void __cordl_internal_set__Name(::System::Xml::Schema::SchemaNames_Token value);

  constexpr void __cordl_internal_set__NextStates(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x42b3b0c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
                    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> attributes,
                    ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end,
                    bool fText);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder_XdrEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder_XdrEntry(XdrBuilder_XdrEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder_XdrEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder_XdrEntry(XdrBuilder_XdrEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7643 };

  /// @brief Field _Name, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaNames_Token ____Name;

  /// @brief Field _NextStates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____NextStates;

  /// @brief Field _Attributes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> ____Attributes;

  /// @brief Field _InitFunc, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrInitFunction* ____InitFunc;

  /// @brief Field _BeginChildFunc, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* ____BeginChildFunc;

  /// @brief Field _EndChildFunc, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* ____EndChildFunc;

  /// @brief Field _AllowText, offset: 0x40, size: 0x1, def value: None
  bool ____AllowText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____NextStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____Attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____InitFunc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____BeginChildFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____EndChildFunc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder_XdrEntry, ____AllowText) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder_XdrEntry, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.SchemaBuilder
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XdrBuilder
class CORDL_TYPE XdrBuilder : public ::System::Xml::Schema::SchemaBuilder {
public:
  // Declarations
  using AttributeContent = ::System::Xml::Schema::XdrBuilder_AttributeContent;

  using DeclBaseInfo = ::System::Xml::Schema::XdrBuilder_DeclBaseInfo;

  using ElementContent = ::System::Xml::Schema::XdrBuilder_ElementContent;

  using GroupContent = ::System::Xml::Schema::XdrBuilder_GroupContent;

  using XdrAttributeEntry = ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry;

  using XdrBeginChildFunction = ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction;

  using XdrBuildFunction = ::System::Xml::Schema::XdrBuilder_XdrBuildFunction;

  using XdrEndChildFunction = ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction;

  using XdrEntry = ::System::Xml::Schema::XdrBuilder_XdrEntry;

  using XdrInitFunction = ::System::Xml::Schema::XdrBuilder_XdrInitFunction;

  /// @brief Field S_SchemaEntries, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_SchemaEntries, put = setStaticF_S_SchemaEntries)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*>
      S_SchemaEntries;

  /// @brief Field S_XDR_AttributeDataType_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_AttributeDataType_Attributes,
                      put =
                          setStaticF_S_XDR_AttributeDataType_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_AttributeDataType_Attributes;

  /// @brief Field S_XDR_AttributeType_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_AttributeType_Attributes,
                      put = setStaticF_S_XDR_AttributeType_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_AttributeType_Attributes;

  /// @brief Field S_XDR_AttributeType_SubElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_AttributeType_SubElements, put = setStaticF_S_XDR_AttributeType_SubElements)) ::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_AttributeType_SubElements;

  /// @brief Field S_XDR_Attribute_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Attribute_Attributes,
                      put = setStaticF_S_XDR_Attribute_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_Attribute_Attributes;

  /// @brief Field S_XDR_ElementDataType_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_ElementDataType_Attributes,
                      put = setStaticF_S_XDR_ElementDataType_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_ElementDataType_Attributes;

  /// @brief Field S_XDR_ElementType_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_ElementType_Attributes,
                      put = setStaticF_S_XDR_ElementType_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_ElementType_Attributes;

  /// @brief Field S_XDR_ElementType_SubElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_ElementType_SubElements, put = setStaticF_S_XDR_ElementType_SubElements)) ::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_ElementType_SubElements;

  /// @brief Field S_XDR_Element_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Element_Attributes,
                      put = setStaticF_S_XDR_Element_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_Element_Attributes;

  /// @brief Field S_XDR_Group_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Group_Attributes,
                      put = setStaticF_S_XDR_Group_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_Group_Attributes;

  /// @brief Field S_XDR_Group_SubElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Group_SubElements, put = setStaticF_S_XDR_Group_SubElements)) ::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Group_SubElements;

  /// @brief Field S_XDR_Root_Attributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Root_Attributes,
                      put = setStaticF_S_XDR_Root_Attributes)) ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
      S_XDR_Root_Attributes;

  /// @brief Field S_XDR_Root_Element, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Root_Element, put = setStaticF_S_XDR_Root_Element)) ::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Root_Element;

  /// @brief Field S_XDR_Root_SubElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S_XDR_Root_SubElements, put = setStaticF_S_XDR_Root_SubElements)) ::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Root_SubElements;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field _AttributeDef, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeDef, put = __cordl_internal_set__AttributeDef)) ::System::Xml::Schema::XdrBuilder_AttributeContent* _AttributeDef;

  /// @brief Field _BaseDecl, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseDecl, put = __cordl_internal_set__BaseDecl)) ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _BaseDecl;

  /// @brief Field _CurNsMgr, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__CurNsMgr, put = __cordl_internal_set__CurNsMgr)) ::System::Xml::XmlNamespaceManager* _CurNsMgr;

  /// @brief Field _CurState, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CurState, put = __cordl_internal_set__CurState)) ::System::Xml::Schema::XdrBuilder_XdrEntry* _CurState;

  /// @brief Field _ElementDef, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDef, put = __cordl_internal_set__ElementDef)) ::System::Xml::Schema::XdrBuilder_ElementContent* _ElementDef;

  /// @brief Field _GroupDef, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupDef, put = __cordl_internal_set__GroupDef)) ::System::Xml::Schema::XdrBuilder_GroupContent* _GroupDef;

  /// @brief Field _GroupStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupStack, put = __cordl_internal_set__GroupStack)) ::System::Xml::HWStack* _GroupStack;

  /// @brief Field _NameTable, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__NameTable, put = __cordl_internal_set__NameTable)) ::System::Xml::XmlNameTable* _NameTable;

  /// @brief Field _NextState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__NextState, put = __cordl_internal_set__NextState)) ::System::Xml::Schema::XdrBuilder_XdrEntry* _NextState;

  /// @brief Field _SchemaInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SchemaInfo, put = __cordl_internal_set__SchemaInfo)) ::System::Xml::Schema::SchemaInfo* _SchemaInfo;

  /// @brief Field _SchemaNames, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__SchemaNames, put = __cordl_internal_set__SchemaNames)) ::System::Xml::Schema::SchemaNames* _SchemaNames;

  /// @brief Field _StateHistory, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__StateHistory, put = __cordl_internal_set__StateHistory)) ::System::Xml::HWStack* _StateHistory;

  /// @brief Field _TargetNamespace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetNamespace, put = __cordl_internal_set__TargetNamespace)) ::StringW _TargetNamespace;

  /// @brief Field _Text, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__Text, put = __cordl_internal_set__Text)) ::StringW _Text;

  /// @brief Field _UndeclaredElements, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__UndeclaredElements, put = __cordl_internal_set__UndeclaredElements)) ::System::Collections::Hashtable* _UndeclaredElements;

  /// @brief Field _UndefinedAttributeTypes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__UndefinedAttributeTypes,
                      put = __cordl_internal_set__UndefinedAttributeTypes)) ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _UndefinedAttributeTypes;

  /// @brief Field _XdrName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__XdrName, put = __cordl_internal_set__XdrName)) ::StringW _XdrName;

  /// @brief Field _XdrPrefix, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__XdrPrefix, put = __cordl_internal_set__XdrPrefix)) ::StringW _XdrPrefix;

  /// @brief Field _contentValidator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__contentValidator, put = __cordl_internal_set__contentValidator)) ::System::Xml::Schema::ParticleContentValidator* _contentValidator;

  /// @brief Field _reader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::System::Xml::XmlReader* _reader;

  /// @brief Field positionInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo)) ::System::Xml::PositionInfo* positionInfo;

  /// @brief Field validationEventHandler, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventHandler, put = __cordl_internal_set_validationEventHandler)) ::System::Xml::Schema::ValidationEventHandler* validationEventHandler;

  /// @brief Field xmlResolver, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method AddOrder, addr 0x42b0c0c, size 0xbc, virtual false, abstract: false, final false
  inline void AddOrder();

  /// @brief Method CheckDatatype, addr 0x42b0328, size 0x144, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* CheckDatatype(::StringW str);

  /// @brief Method CheckDefaultAttValue, addr 0x42b08bc, size 0xf0, virtual false, abstract: false, final false
  inline void CheckDefaultAttValue(::System::Xml::Schema::SchemaAttDef* attDef);

  /// @brief Method CompareMinMaxLength, addr 0x42afd58, size 0x80, virtual false, abstract: false, final false
  static inline void CompareMinMaxLength(uint32_t cMin, uint32_t cMax, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method EndChildren, addr 0x42ae06c, size 0x3c, virtual true, abstract: false, final false
  inline void EndChildren();

  /// @brief Method GetContent, addr 0x42aec88, size 0x188, virtual false, abstract: false, final false
  inline int32_t GetContent(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetModel, addr 0x42aeeb0, size 0xdc, virtual false, abstract: false, final false
  inline bool GetModel(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetNextState, addr 0x42ad0ac, size 0x19c, virtual false, abstract: false, final false
  inline bool GetNextState(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetOrder, addr 0x42af038, size 0x124, virtual false, abstract: false, final false
  inline int32_t GetOrder(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method HandleMinMax, addr 0x42b1074, size 0x30, virtual false, abstract: false, final false
  static inline void HandleMinMax(::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax);

  /// @brief Method IsContentParsed, addr 0x42adf60, size 0x8, virtual true, abstract: false, final false
  inline bool IsContentParsed();

  /// @brief Method IsGlobal, addr 0x42ad7ac, size 0xc, virtual false, abstract: false, final false
  inline bool IsGlobal(int32_t flags);

  /// @brief Method IsSkipableAttribute, addr 0x42add0c, size 0x138, virtual false, abstract: false, final false
  inline bool IsSkipableAttribute(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method IsSkipableElement, addr 0x42ad290, size 0xc0, virtual false, abstract: false, final false
  inline bool IsSkipableElement(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method IsXdrSchema, addr 0x42ad7b8, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsXdrSchema(::StringW uri);

  /// @brief Method IsYes, addr 0x42b0158, size 0x100, virtual false, abstract: false, final false
  static inline bool IsYes(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method LoadSchema, addr 0x42ad870, size 0x49c, virtual false, abstract: false, final false
  inline bool LoadSchema(::StringW uri);

  static inline ::System::Xml::Schema::XdrBuilder* New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo,
                                                            ::StringW targetNamspace, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                            ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  /// @brief Method ParseDtMaxLength, addr 0x42af460, size 0x138, virtual false, abstract: false, final false
  static inline void ParseDtMaxLength(::ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseDtMinLength, addr 0x42af608, size 0x138, virtual false, abstract: false, final false
  static inline void ParseDtMinLength(::ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseInteger, addr 0x42b1c70, size 0x38, virtual false, abstract: false, final false
  static inline bool ParseInteger(::StringW str, ::ByRef<uint32_t> n);

  /// @brief Method ParseMaxOccurs, addr 0x42b0ea8, size 0x128, virtual false, abstract: false, final false
  static inline uint32_t ParseMaxOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseMinOccurs, addr 0x42b0d3c, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ParseMinOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method Pop, addr 0x42ae0a8, size 0x80, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method PopGroupInfo, addr 0x42ae1dc, size 0x80, virtual false, abstract: false, final false
  inline void PopGroupInfo();

  /// @brief Method ProcessAttribute, addr 0x42ad434, size 0x378, virtual true, abstract: false, final false
  inline void ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method ProcessCData, addr 0x42adfc0, size 0x74, virtual true, abstract: false, final false
  inline void ProcessCData(::StringW value);

  /// @brief Method ProcessElement, addr 0x42acdc0, size 0x130, virtual true, abstract: false, final false
  inline bool ProcessElement(::StringW prefix, ::StringW name, ::StringW ns);

  /// @brief Method ProcessMarkup, addr 0x42adf68, size 0x58, virtual true, abstract: false, final false
  inline void ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup);

  /// @brief Method Push, addr 0x42ad248, size 0x48, virtual false, abstract: false, final false
  inline void Push();

  /// @brief Method PushGroupInfo, addr 0x42ae128, size 0x50, virtual false, abstract: false, final false
  inline void PushGroupInfo();

  /// @brief Method SendValidationEvent, addr 0x42af25c, size 0x60, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code);

  /// @brief Method SendValidationEvent, addr 0x42ade4c, size 0x114, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x42ad350, size 0xe4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg);

  /// @brief Method SendValidationEvent, addr 0x42b217c, size 0xc8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SetAttributePresence, addr 0x42b09ac, size 0x50, virtual false, abstract: false, final false
  inline void SetAttributePresence(::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired);

  /// @brief Method StartChildren, addr 0x42ae034, size 0x38, virtual true, abstract: false, final false
  inline void StartChildren();

  /// @brief Method XDR_BeginAttribute, addr 0x42b12a0, size 0x2b4, virtual false, abstract: false, final false
  static inline void XDR_BeginAttribute(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginAttributeType, addr 0x42b0628, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_BeginAttributeType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginElementType, addr 0x42af740, size 0x2e4, virtual false, abstract: false, final false
  static inline void XDR_BeginElementType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginRoot, addr 0x42ae32c, size 0xd8, virtual false, abstract: false, final false
  static inline void XDR_BeginRoot(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BuildAttributeType_Default, addr 0x42b0258, size 0x20, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtMaxLength, addr 0x42b0548, size 0x70, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtMinLength, addr 0x42b05b8, size 0x70, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtType, addr 0x42b0278, size 0xb0, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtValues, addr 0x42b046c, size 0xdc, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_Name, addr 0x42afebc, size 0x224, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_Required, addr 0x42b00e0, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Default, addr 0x42b1280, size 0x20, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Required, addr 0x42b11fc, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Type, addr 0x42b1138, size 0xc4, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Content, addr 0x42aebec, size 0x9c, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Content(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtMaxLength, addr 0x42af3f0, size 0x70, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtMinLength, addr 0x42af598, size 0x70, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtType, addr 0x42af15c, size 0x100, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtValues, addr 0x42af314, size 0xdc, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Model, addr 0x42aee10, size 0xa0, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Model(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Name, addr 0x42aea50, size 0x19c, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Order, addr 0x42aef8c, size 0xac, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_MaxOccurs, addr 0x42b0e34, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_MinOccurs, addr 0x42b0cc8, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_Type, addr 0x42b0a88, size 0x184, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_MaxOccurs, addr 0x42b1814, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_MinOccurs, addr 0x42b1790, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_Order, addr 0x42b16a4, size 0xec, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildRoot_ID, addr 0x42ae328, size 0x4, virtual false, abstract: false, final false
  static inline void XDR_BuildRoot_ID(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildRoot_Name, addr 0x42ae29c, size 0x8c, virtual false, abstract: false, final false
  static inline void XDR_BuildRoot_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_CheckAttributeDefault, addr 0x42ae8b4, size 0xa4, virtual false, abstract: false, final false
  inline void XDR_CheckAttributeDefault(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, ::System::Xml::Schema::SchemaAttDef* pAttdef);

  /// @brief Method XDR_EndAttribute, addr 0x42b1554, size 0x1c, virtual false, abstract: false, final false
  static inline void XDR_EndAttribute(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndAttributeDtType, addr 0x42b1b90, size 0xe0, virtual false, abstract: false, final false
  static inline void XDR_EndAttributeDtType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndAttributeType, addr 0x42b06a0, size 0x1c4, virtual false, abstract: false, final false
  static inline void XDR_EndAttributeType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElement, addr 0x42b0fd0, size 0xa4, virtual false, abstract: false, final false
  static inline void XDR_EndElement(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElementDtType, addr 0x42b1a64, size 0xc0, virtual false, abstract: false, final false
  static inline void XDR_EndElementDtType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElementType, addr 0x42afa24, size 0x334, virtual false, abstract: false, final false
  static inline void XDR_EndElementType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndGroup, addr 0x42b1898, size 0x130, virtual false, abstract: false, final false
  static inline void XDR_EndGroup(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndRoot, addr 0x42ae404, size 0x4b0, virtual false, abstract: false, final false
  static inline void XDR_EndRoot(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_InitAttribute, addr 0x42b10a4, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_InitAttribute(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitAttributeDtType, addr 0x42b1b24, size 0x6c, virtual false, abstract: false, final false
  static inline void XDR_InitAttributeDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitAttributeType, addr 0x42afdd8, size 0xe4, virtual false, abstract: false, final false
  static inline void XDR_InitAttributeType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElement, addr 0x42b09fc, size 0x8c, virtual false, abstract: false, final false
  static inline void XDR_InitElement(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElementDtType, addr 0x42b19c8, size 0x9c, virtual false, abstract: false, final false
  static inline void XDR_InitElementDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElementType, addr 0x42ae958, size 0xf8, virtual false, abstract: false, final false
  static inline void XDR_InitElementType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitGroup, addr 0x42b15ec, size 0xb8, virtual false, abstract: false, final false
  static inline void XDR_InitGroup(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitRoot, addr 0x42ae25c, size 0x40, virtual false, abstract: false, final false
  static inline void XDR_InitRoot(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent* const& __cordl_internal_get__AttributeDef() const;

  constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent*& __cordl_internal_get__AttributeDef();

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& __cordl_internal_get__BaseDecl() const;

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& __cordl_internal_get__BaseDecl();

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get__CurNsMgr() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get__CurNsMgr();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry* const& __cordl_internal_get__CurState() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry*& __cordl_internal_get__CurState();

  constexpr ::System::Xml::Schema::XdrBuilder_ElementContent* const& __cordl_internal_get__ElementDef() const;

  constexpr ::System::Xml::Schema::XdrBuilder_ElementContent*& __cordl_internal_get__ElementDef();

  constexpr ::System::Xml::Schema::XdrBuilder_GroupContent* const& __cordl_internal_get__GroupDef() const;

  constexpr ::System::Xml::Schema::XdrBuilder_GroupContent*& __cordl_internal_get__GroupDef();

  constexpr ::System::Xml::HWStack* const& __cordl_internal_get__GroupStack() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get__GroupStack();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get__NameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get__NameTable();

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry* const& __cordl_internal_get__NextState() const;

  constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry*& __cordl_internal_get__NextState();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get__SchemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get__SchemaInfo();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get__SchemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get__SchemaNames();

  constexpr ::System::Xml::HWStack* const& __cordl_internal_get__StateHistory() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get__StateHistory();

  constexpr ::StringW const& __cordl_internal_get__TargetNamespace() const;

  constexpr ::StringW& __cordl_internal_get__TargetNamespace();

  constexpr ::StringW const& __cordl_internal_get__Text() const;

  constexpr ::StringW& __cordl_internal_get__Text();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__UndeclaredElements() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__UndeclaredElements();

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& __cordl_internal_get__UndefinedAttributeTypes() const;

  constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& __cordl_internal_get__UndefinedAttributeTypes();

  constexpr ::StringW const& __cordl_internal_get__XdrName() const;

  constexpr ::StringW& __cordl_internal_get__XdrName();

  constexpr ::StringW const& __cordl_internal_get__XdrPrefix() const;

  constexpr ::StringW& __cordl_internal_get__XdrPrefix();

  constexpr ::System::Xml::Schema::ParticleContentValidator* const& __cordl_internal_get__contentValidator() const;

  constexpr ::System::Xml::Schema::ParticleContentValidator*& __cordl_internal_get__contentValidator();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get__reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get__reader();

  constexpr ::System::Xml::PositionInfo* const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::PositionInfo*& __cordl_internal_get_positionInfo();

  constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_validationEventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_validationEventHandler();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr void __cordl_internal_set__AttributeDef(::System::Xml::Schema::XdrBuilder_AttributeContent* value);

  constexpr void __cordl_internal_set__BaseDecl(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value);

  constexpr void __cordl_internal_set__CurNsMgr(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set__CurState(::System::Xml::Schema::XdrBuilder_XdrEntry* value);

  constexpr void __cordl_internal_set__ElementDef(::System::Xml::Schema::XdrBuilder_ElementContent* value);

  constexpr void __cordl_internal_set__GroupDef(::System::Xml::Schema::XdrBuilder_GroupContent* value);

  constexpr void __cordl_internal_set__GroupStack(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set__NameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set__NextState(::System::Xml::Schema::XdrBuilder_XdrEntry* value);

  constexpr void __cordl_internal_set__SchemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set__SchemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set__StateHistory(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set__TargetNamespace(::StringW value);

  constexpr void __cordl_internal_set__Text(::StringW value);

  constexpr void __cordl_internal_set__UndeclaredElements(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__UndefinedAttributeTypes(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value);

  constexpr void __cordl_internal_set__XdrName(::StringW value);

  constexpr void __cordl_internal_set__XdrPrefix(::StringW value);

  constexpr void __cordl_internal_set__contentValidator(::System::Xml::Schema::ParticleContentValidator* value);

  constexpr void __cordl_internal_set__reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value);

  constexpr void __cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x42acbbc, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace,
                    ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*> getStaticF_S_SchemaEntries();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_AttributeDataType_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_AttributeType_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_AttributeType_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_Attribute_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_ElementDataType_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_ElementType_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_ElementType_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_Element_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_Group_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Group_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> getStaticF_S_XDR_Root_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Root_Element();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Root_SubElements();

  static inline void setStaticF_S_SchemaEntries(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*> value);

  static inline void
  setStaticF_S_XDR_AttributeDataType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_AttributeType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_AttributeType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Attribute_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_ElementDataType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_ElementType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_ElementType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Element_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Group_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Group_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Root_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Root_Element(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Root_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_XmlResolver, addr 0x42ade44, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrBuilder(XdrBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrBuilder(XdrBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7644 };

  /// @brief Field _SchemaInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ____SchemaInfo;

  /// @brief Field _TargetNamespace, offset: 0x18, size: 0x8, def value: None
  ::StringW ____TargetNamespace;

  /// @brief Field _reader, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlReader* ____reader;

  /// @brief Field positionInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::PositionInfo* ___positionInfo;

  /// @brief Field _contentValidator, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::ParticleContentValidator* ____contentValidator;

  /// @brief Field _CurState, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrEntry* ____CurState;

  /// @brief Field _NextState, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_XdrEntry* ____NextState;

  /// @brief Field _StateHistory, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::HWStack* ____StateHistory;

  /// @brief Field _GroupStack, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::HWStack* ____GroupStack;

  /// @brief Field _XdrName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____XdrName;

  /// @brief Field _XdrPrefix, offset: 0x60, size: 0x8, def value: None
  ::StringW ____XdrPrefix;

  /// @brief Field _ElementDef, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_ElementContent* ____ElementDef;

  /// @brief Field _GroupDef, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_GroupContent* ____GroupDef;

  /// @brief Field _AttributeDef, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_AttributeContent* ____AttributeDef;

  /// @brief Field _UndefinedAttributeTypes, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* ____UndefinedAttributeTypes;

  /// @brief Field _BaseDecl, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* ____BaseDecl;

  /// @brief Field _NameTable, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ____NameTable;

  /// @brief Field _SchemaNames, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ____SchemaNames;

  /// @brief Field _CurNsMgr, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ____CurNsMgr;

  /// @brief Field _Text, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____Text;

  /// @brief Field validationEventHandler, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___validationEventHandler;

  /// @brief Field _UndeclaredElements, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____UndeclaredElements;

  /// @brief Field xmlResolver, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____SchemaInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____TargetNamespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ___positionInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____contentValidator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____CurState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____NextState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____StateHistory) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____GroupStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____XdrName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____XdrPrefix) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____ElementDef) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____GroupDef) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____AttributeDef) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____UndefinedAttributeTypes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____BaseDecl) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____NameTable) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____SchemaNames) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____CurNsMgr) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____Text) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ___validationEventHandler) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ____UndeclaredElements) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrBuilder, ___xmlResolver) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder, 0xc8>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder*, "System.Xml.Schema", "XdrBuilder");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_AttributeContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_AttributeContent*, "System.Xml.Schema", "XdrBuilder/AttributeContent");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_DeclBaseInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_DeclBaseInfo*, "System.Xml.Schema", "XdrBuilder/DeclBaseInfo");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_ElementContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_ElementContent*, "System.Xml.Schema", "XdrBuilder/ElementContent");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_GroupContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_GroupContent*, "System.Xml.Schema", "XdrBuilder/GroupContent");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, "System.Xml.Schema", "XdrBuilder/XdrAttributeEntry");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*, "System.Xml.Schema", "XdrBuilder/XdrBeginChildFunction");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrBuildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrBuildFunction*, "System.Xml.Schema", "XdrBuilder/XdrBuildFunction");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrEndChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*, "System.Xml.Schema", "XdrBuilder/XdrEndChildFunction");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrEntry*, "System.Xml.Schema", "XdrBuilder/XdrEntry");
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder_XdrInitFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder_XdrInitFunction*, "System.Xml.Schema", "XdrBuilder/XdrInitFunction");
