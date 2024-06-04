#pragma once
// IWYU pragma private; include "System/Xml/Schema/XdrBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
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
namespace System::Xml::Schema {
struct __SchemaNames__Token;
}
namespace System::Xml::Schema {
class __XdrBuilder__AttributeContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__DeclBaseInfo;
}
namespace System::Xml::Schema {
class __XdrBuilder__ElementContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__GroupContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrAttributeEntry;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrBeginChildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrBuildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrEndChildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrEntry;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrInitFunction;
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
class __XdrBuilder__AttributeContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__DeclBaseInfo;
}
namespace System::Xml::Schema {
class __XdrBuilder__ElementContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__GroupContent;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrAttributeEntry;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrBeginChildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrBuildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrEndChildFunction;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrEntry;
}
namespace System::Xml::Schema {
class __XdrBuilder__XdrInitFunction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XdrBuilder);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__AttributeContent);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__ElementContent);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__GroupContent);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrBuildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrEntry);
MARK_REF_PTR_T(::System::Xml::Schema::__XdrBuilder__XdrInitFunction);
// Type: ::DeclBaseInfo
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::DeclBaseInfo*
class CORDL_TYPE __XdrBuilder__DeclBaseInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Attdef, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__Attdef, put = __cordl_internal_set__Attdef))::System::Xml::Schema::SchemaAttDef* _Attdef;

  /// @brief Field _Checking, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__Checking, put = __cordl_internal_set__Checking)) bool _Checking;

  /// @brief Field _Default, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Default, put = __cordl_internal_set__Default))::System::Object* _Default;

  /// @brief Field _ElementDecl, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDecl, put = __cordl_internal_set__ElementDecl))::System::Xml::Schema::SchemaElementDecl* _ElementDecl;

  /// @brief Field _MaxOccurs, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__MaxOccurs, put = __cordl_internal_set__MaxOccurs)) uint32_t _MaxOccurs;

  /// @brief Field _MinOccurs, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__MinOccurs, put = __cordl_internal_set__MinOccurs)) uint32_t _MinOccurs;

  /// @brief Field _Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name))::System::Xml::XmlQualifiedName* _Name;

  /// @brief Field _Next, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Next, put = __cordl_internal_set__Next))::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* _Next;

  /// @brief Field _Prefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Prefix, put = __cordl_internal_set__Prefix))::StringW _Prefix;

  /// @brief Field _Revises, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Revises, put = __cordl_internal_set__Revises))::System::Object* _Revises;

  /// @brief Field _TypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeName, put = __cordl_internal_set__TypeName))::System::Xml::XmlQualifiedName* _TypeName;

  /// @brief Field _TypePrefix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__TypePrefix, put = __cordl_internal_set__TypePrefix))::StringW _TypePrefix;

  static inline ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* New_ctor();

  /// @brief Method Reset, addr 0x2e266a8, size 0x7c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get__Attdef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaAttDef*> const& __cordl_internal_get__Attdef() const;

  constexpr bool const& __cordl_internal_get__Checking() const;

  constexpr bool& __cordl_internal_get__Checking();

  constexpr ::System::Object*& __cordl_internal_get__Default();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Default() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get__ElementDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaElementDecl*> const& __cordl_internal_get__ElementDecl() const;

  constexpr uint32_t const& __cordl_internal_get__MaxOccurs() const;

  constexpr uint32_t& __cordl_internal_get__MaxOccurs();

  constexpr uint32_t const& __cordl_internal_get__MinOccurs() const;

  constexpr uint32_t& __cordl_internal_get__MinOccurs();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__Name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get__Name() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*& __cordl_internal_get__Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*> const& __cordl_internal_get__Next() const;

  constexpr ::StringW const& __cordl_internal_get__Prefix() const;

  constexpr ::StringW& __cordl_internal_get__Prefix();

  constexpr ::System::Object*& __cordl_internal_get__Revises();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Revises() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__TypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get__TypeName() const;

  constexpr ::StringW const& __cordl_internal_get__TypePrefix() const;

  constexpr ::StringW& __cordl_internal_get__TypePrefix();

  constexpr void __cordl_internal_set__Attdef(::System::Xml::Schema::SchemaAttDef* value);

  constexpr void __cordl_internal_set__Checking(bool value);

  constexpr void __cordl_internal_set__Default(::System::Object* value);

  constexpr void __cordl_internal_set__ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set__MaxOccurs(uint32_t value);

  constexpr void __cordl_internal_set__MinOccurs(uint32_t value);

  constexpr void __cordl_internal_set__Name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set__Next(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* value);

  constexpr void __cordl_internal_set__Prefix(::StringW value);

  constexpr void __cordl_internal_set__Revises(::System::Object* value);

  constexpr void __cordl_internal_set__TypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set__TypePrefix(::StringW value);

  /// @brief Method .ctor, addr 0x2e26254, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__DeclBaseInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__DeclBaseInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__DeclBaseInfo(__XdrBuilder__DeclBaseInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__DeclBaseInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__DeclBaseInfo(__XdrBuilder__DeclBaseInfo const&) = delete;

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
  ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* ____Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Prefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____TypeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____TypePrefix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Default) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Revises) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____MaxOccurs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____MinOccurs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Checking) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____ElementDecl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Attdef) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo, ____Next) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::GroupContent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::GroupContent*
class CORDL_TYPE __XdrBuilder__GroupContent : public ::System::Object {
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

  /// @brief Method Copy, addr 0x2e23264, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::__XdrBuilder__GroupContent* Copy(::System::Xml::Schema::__XdrBuilder__GroupContent* other);

  /// @brief Method Copy, addr 0x2e294a4, size 0x28, virtual false, abstract: false, final false
  static inline void Copy(::System::Xml::Schema::__XdrBuilder__GroupContent* from, ::System::Xml::Schema::__XdrBuilder__GroupContent* to);

  static inline ::System::Xml::Schema::__XdrBuilder__GroupContent* New_ctor();

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

  /// @brief Method .ctor, addr 0x2e21df0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__GroupContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__GroupContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__GroupContent(__XdrBuilder__GroupContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__GroupContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__GroupContent(__XdrBuilder__GroupContent const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__GroupContent, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__GroupContent, ____MinVal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__GroupContent, ____MaxVal) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__GroupContent, ____HasMaxAttr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__GroupContent, ____HasMinAttr) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__GroupContent, ____Order) == 0x1c, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::ElementContent
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::ElementContent*
class CORDL_TYPE __XdrBuilder__ElementContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AllowDataType, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowDataType, put = __cordl_internal_set__AllowDataType)) bool _AllowDataType;

  /// @brief Field _AttDefList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AttDefList, put = __cordl_internal_set__AttDefList))::System::Collections::Hashtable* _AttDefList;

  /// @brief Field _ContentAttr, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ContentAttr, put = __cordl_internal_set__ContentAttr)) int32_t _ContentAttr;

  /// @brief Field _ElementDecl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDecl, put = __cordl_internal_set__ElementDecl))::System::Xml::Schema::SchemaElementDecl* _ElementDecl;

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

  static inline ::System::Xml::Schema::__XdrBuilder__ElementContent* New_ctor();

  constexpr bool const& __cordl_internal_get__AllowDataType() const;

  constexpr bool& __cordl_internal_get__AllowDataType();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__AttDefList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__AttDefList() const;

  constexpr int32_t const& __cordl_internal_get__ContentAttr() const;

  constexpr int32_t& __cordl_internal_get__ContentAttr();

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get__ElementDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaElementDecl*> const& __cordl_internal_get__ElementDecl() const;

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

  /// @brief Method .ctor, addr 0x2e21de0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__ElementContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__ElementContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__ElementContent(__XdrBuilder__ElementContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__ElementContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__ElementContent(__XdrBuilder__ElementContent const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__ElementContent, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____ElementDecl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____ContentAttr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____OrderAttr) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____MasterGroupRequired) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____ExistTerminal) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____AllowDataType) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____HasDataType) == 0x23, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____HasType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____EnumerationRequired) == 0x25, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____MinVal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____MaxVal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____MaxLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____MinLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__ElementContent, ____AttDefList) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::AttributeContent
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::AttributeContent*
class CORDL_TYPE __XdrBuilder__AttributeContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AttDef, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__AttDef, put = __cordl_internal_set__AttDef))::System::Xml::Schema::SchemaAttDef* _AttDef;

  /// @brief Field _Default, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Default, put = __cordl_internal_set__Default))::System::Object* _Default;

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
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name))::System::Xml::XmlQualifiedName* _Name;

  /// @brief Field _Prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Prefix, put = __cordl_internal_set__Prefix))::StringW _Prefix;

  /// @brief Field _Required, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__Required, put = __cordl_internal_set__Required)) bool _Required;

  static inline ::System::Xml::Schema::__XdrBuilder__AttributeContent* New_ctor();

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get__AttDef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaAttDef*> const& __cordl_internal_get__AttDef() const;

  constexpr ::System::Object*& __cordl_internal_get__Default();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__Default() const;

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

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__Name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get__Name() const;

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

  /// @brief Method .ctor, addr 0x2e21de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__AttributeContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__AttributeContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__AttributeContent(__XdrBuilder__AttributeContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__AttributeContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__AttributeContent(__XdrBuilder__AttributeContent const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__AttributeContent, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____AttDef) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____Name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____Prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____Required) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____MinVal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____MaxVal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____MaxLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____MinLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____EnumerationRequired) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____HasDataType) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____Global) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__AttributeContent, ____Default) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrBuildFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrBuildFunction*
class CORDL_TYPE __XdrBuilder__XdrBuildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2e294cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  static inline ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2e29050, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrBuildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrBuildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrBuildFunction(__XdrBuilder__XdrBuildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrBuildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrBuildFunction(__XdrBuilder__XdrBuildFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrBuildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrInitFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrInitFunction*
class CORDL_TYPE __XdrBuilder__XdrInitFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2e294e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  static inline ::System::Xml::Schema::__XdrBuilder__XdrInitFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2e29224, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrInitFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrInitFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrInitFunction(__XdrBuilder__XdrInitFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrInitFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrInitFunction(__XdrBuilder__XdrInitFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrInitFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrBeginChildFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrBeginChildFunction*
class CORDL_TYPE __XdrBuilder__XdrBeginChildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2e294f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder);

  static inline ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2e292fc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrBeginChildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrBeginChildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrBeginChildFunction(__XdrBuilder__XdrBeginChildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrBeginChildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrBeginChildFunction(__XdrBuilder__XdrBeginChildFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrEndChildFunction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrEndChildFunction*
class CORDL_TYPE __XdrBuilder__XdrEndChildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2e29508, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XdrBuilder* builder);

  static inline ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2e293d0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrEndChildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrEndChildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrEndChildFunction(__XdrBuilder__XdrEndChildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrEndChildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrEndChildFunction(__XdrBuilder__XdrEndChildFunction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrAttributeEntry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrAttributeEntry*
class CORDL_TYPE __XdrBuilder__XdrAttributeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Attribute, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Attribute, put = __cordl_internal_set__Attribute))::System::Xml::Schema::__SchemaNames__Token _Attribute;

  /// @brief Field _BuildFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BuildFunc, put = __cordl_internal_set__BuildFunc))::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* _BuildFunc;

  /// @brief Field _Datatype, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Datatype, put = __cordl_internal_set__Datatype))::System::Xml::Schema::XmlSchemaDatatype* _Datatype;

  /// @brief Field _SchemaFlags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__SchemaFlags, put = __cordl_internal_set__SchemaFlags)) int32_t _SchemaFlags;

  static inline ::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry* New_ctor(::System::Xml::Schema::__SchemaNames__Token a, ::System::Xml::XmlTokenizedType ttype,
                                                                                 ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* build);

  static inline ::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry* New_ctor(::System::Xml::Schema::__SchemaNames__Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                                 ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* build);

  constexpr ::System::Xml::Schema::__SchemaNames__Token const& __cordl_internal_get__Attribute() const;

  constexpr ::System::Xml::Schema::__SchemaNames__Token& __cordl_internal_get__Attribute();

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction*& __cordl_internal_get__BuildFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrBuildFunction*> const& __cordl_internal_get__BuildFunc() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __cordl_internal_get__Datatype();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> const& __cordl_internal_get__Datatype() const;

  constexpr int32_t const& __cordl_internal_get__SchemaFlags() const;

  constexpr int32_t& __cordl_internal_get__SchemaFlags();

  constexpr void __cordl_internal_set__Attribute(::System::Xml::Schema::__SchemaNames__Token value);

  constexpr void __cordl_internal_set__BuildFunc(::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* value);

  constexpr void __cordl_internal_set__Datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr void __cordl_internal_set__SchemaFlags(int32_t value);

  /// @brief Method .ctor, addr 0x2e29128, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::__SchemaNames__Token a, ::System::Xml::XmlTokenizedType ttype, ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* build);

  /// @brief Method .ctor, addr 0x2e29170, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::__SchemaNames__Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags, ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* build);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrAttributeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrAttributeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrAttributeEntry(__XdrBuilder__XdrAttributeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrAttributeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrAttributeEntry(__XdrBuilder__XdrAttributeEntry const&) = delete;

  /// @brief Field _Attribute, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::__SchemaNames__Token ____Attribute;

  /// @brief Field _SchemaFlags, offset: 0x14, size: 0x4, def value: None
  int32_t ____SchemaFlags;

  /// @brief Field _Datatype, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ____Datatype;

  /// @brief Field _BuildFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction* ____BuildFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry, ____Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry, ____SchemaFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry, ____Datatype) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry, ____BuildFunc) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::XdrEntry
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::XdrBuilder::XdrEntry*
class CORDL_TYPE __XdrBuilder__XdrEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AllowText, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowText, put = __cordl_internal_set__AllowText)) bool _AllowText;

  /// @brief Field _Attributes, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__Attributes,
               put = __cordl_internal_set__Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> _Attributes;

  /// @brief Field _BeginChildFunc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__BeginChildFunc, put = __cordl_internal_set__BeginChildFunc))::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* _BeginChildFunc;

  /// @brief Field _EndChildFunc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__EndChildFunc, put = __cordl_internal_set__EndChildFunc))::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* _EndChildFunc;

  /// @brief Field _InitFunc, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__InitFunc, put = __cordl_internal_set__InitFunc))::System::Xml::Schema::__XdrBuilder__XdrInitFunction* _InitFunc;

  /// @brief Field _Name, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Name, put = __cordl_internal_set__Name))::System::Xml::Schema::__SchemaNames__Token _Name;

  /// @brief Field _NextStates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__NextStates, put = __cordl_internal_set__NextStates))::ArrayW<int32_t, ::Array<int32_t>*> _NextStates;

  static inline ::System::Xml::Schema::__XdrBuilder__XdrEntry*
  New_ctor(::System::Xml::Schema::__SchemaNames__Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
           ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> attributes,
           ::System::Xml::Schema::__XdrBuilder__XdrInitFunction* init, ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* begin, ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* end,
           bool fText);

  constexpr bool const& __cordl_internal_get__AllowText() const;

  constexpr bool& __cordl_internal_get__AllowText();

  constexpr ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> const& __cordl_internal_get__Attributes() const;

  constexpr ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*>& __cordl_internal_get__Attributes();

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction*& __cordl_internal_get__BeginChildFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction*> const& __cordl_internal_get__BeginChildFunc() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction*& __cordl_internal_get__EndChildFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction*> const& __cordl_internal_get__EndChildFunc() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrInitFunction*& __cordl_internal_get__InitFunc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrInitFunction*> const& __cordl_internal_get__InitFunc() const;

  constexpr ::System::Xml::Schema::__SchemaNames__Token const& __cordl_internal_get__Name() const;

  constexpr ::System::Xml::Schema::__SchemaNames__Token& __cordl_internal_get__Name();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__NextStates() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__NextStates();

  constexpr void __cordl_internal_set__AllowText(bool value);

  constexpr void __cordl_internal_set__Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  constexpr void __cordl_internal_set__BeginChildFunc(::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* value);

  constexpr void __cordl_internal_set__EndChildFunc(::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* value);

  constexpr void __cordl_internal_set__InitFunc(::System::Xml::Schema::__XdrBuilder__XdrInitFunction* value);

  constexpr void __cordl_internal_set__Name(::System::Xml::Schema::__SchemaNames__Token value);

  constexpr void __cordl_internal_set__NextStates(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2e291bc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::__SchemaNames__Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
                    ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> attributes,
                    ::System::Xml::Schema::__XdrBuilder__XdrInitFunction* init, ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* begin,
                    ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* end, bool fText);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XdrBuilder__XdrEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XdrBuilder__XdrEntry(__XdrBuilder__XdrEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XdrBuilder__XdrEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XdrBuilder__XdrEntry(__XdrBuilder__XdrEntry const&) = delete;

  /// @brief Field _Name, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::__SchemaNames__Token ____Name;

  /// @brief Field _NextStates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____NextStates;

  /// @brief Field _Attributes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> ____Attributes;

  /// @brief Field _InitFunc, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__XdrInitFunction* ____InitFunc;

  /// @brief Field _BeginChildFunc, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction* ____BeginChildFunc;

  /// @brief Field _EndChildFunc, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction* ____EndChildFunc;

  /// @brief Field _AllowText, offset: 0x40, size: 0x1, def value: None
  bool ____AllowText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XdrBuilder__XdrEntry, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____NextStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____Attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____InitFunc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____BeginChildFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____EndChildFunc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XdrBuilder__XdrEntry, ____AllowText) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XdrBuilder
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XdrBuilder*
class CORDL_TYPE XdrBuilder : public ::System::Xml::Schema::SchemaBuilder {
public:
  // Declarations
  using AttributeContent = ::System::Xml::Schema::__XdrBuilder__AttributeContent;

  using DeclBaseInfo = ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo;

  using ElementContent = ::System::Xml::Schema::__XdrBuilder__ElementContent;

  using GroupContent = ::System::Xml::Schema::__XdrBuilder__GroupContent;

  using XdrAttributeEntry = ::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry;

  using XdrBeginChildFunction = ::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction;

  using XdrBuildFunction = ::System::Xml::Schema::__XdrBuilder__XdrBuildFunction;

  using XdrEndChildFunction = ::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction;

  using XdrEntry = ::System::Xml::Schema::__XdrBuilder__XdrEntry;

  using XdrInitFunction = ::System::Xml::Schema::__XdrBuilder__XdrInitFunction;

  /// @brief Field S_SchemaEntries, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_SchemaEntries,
                             put = setStaticF_S_SchemaEntries))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrEntry*>*> S_SchemaEntries;

  /// @brief Field S_XDR_AttributeDataType_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_AttributeDataType_Attributes,
                             put = setStaticF_S_XDR_AttributeDataType_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                           ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_AttributeDataType_Attributes;

  /// @brief Field S_XDR_AttributeType_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_AttributeType_Attributes,
                             put = setStaticF_S_XDR_AttributeType_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                       ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_AttributeType_Attributes;

  /// @brief Field S_XDR_AttributeType_SubElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_AttributeType_SubElements, put = setStaticF_S_XDR_AttributeType_SubElements))::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_AttributeType_SubElements;

  /// @brief Field S_XDR_Attribute_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Attribute_Attributes,
                             put = setStaticF_S_XDR_Attribute_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                   ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_Attribute_Attributes;

  /// @brief Field S_XDR_ElementDataType_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_ElementDataType_Attributes,
                             put = setStaticF_S_XDR_ElementDataType_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                         ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_ElementDataType_Attributes;

  /// @brief Field S_XDR_ElementType_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_ElementType_Attributes,
                             put = setStaticF_S_XDR_ElementType_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                     ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_ElementType_Attributes;

  /// @brief Field S_XDR_ElementType_SubElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_ElementType_SubElements, put = setStaticF_S_XDR_ElementType_SubElements))::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_ElementType_SubElements;

  /// @brief Field S_XDR_Element_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Element_Attributes,
                             put = setStaticF_S_XDR_Element_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                                 ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_Element_Attributes;

  /// @brief Field S_XDR_Group_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Group_Attributes,
                             put = setStaticF_S_XDR_Group_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                               ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_Group_Attributes;

  /// @brief Field S_XDR_Group_SubElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Group_SubElements, put = setStaticF_S_XDR_Group_SubElements))::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Group_SubElements;

  /// @brief Field S_XDR_Root_Attributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Root_Attributes,
                             put = setStaticF_S_XDR_Root_Attributes))::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*,
                                                                              ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> S_XDR_Root_Attributes;

  /// @brief Field S_XDR_Root_Element, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Root_Element, put = setStaticF_S_XDR_Root_Element))::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Root_Element;

  /// @brief Field S_XDR_Root_SubElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S_XDR_Root_SubElements, put = setStaticF_S_XDR_Root_SubElements))::ArrayW<int32_t, ::Array<int32_t>*> S_XDR_Root_SubElements;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field _AttributeDef, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__AttributeDef, put = __cordl_internal_set__AttributeDef))::System::Xml::Schema::__XdrBuilder__AttributeContent* _AttributeDef;

  /// @brief Field _BaseDecl, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseDecl, put = __cordl_internal_set__BaseDecl))::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* _BaseDecl;

  /// @brief Field _CurNsMgr, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__CurNsMgr, put = __cordl_internal_set__CurNsMgr))::System::Xml::XmlNamespaceManager* _CurNsMgr;

  /// @brief Field _CurState, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CurState, put = __cordl_internal_set__CurState))::System::Xml::Schema::__XdrBuilder__XdrEntry* _CurState;

  /// @brief Field _ElementDef, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__ElementDef, put = __cordl_internal_set__ElementDef))::System::Xml::Schema::__XdrBuilder__ElementContent* _ElementDef;

  /// @brief Field _GroupDef, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupDef, put = __cordl_internal_set__GroupDef))::System::Xml::Schema::__XdrBuilder__GroupContent* _GroupDef;

  /// @brief Field _GroupStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__GroupStack, put = __cordl_internal_set__GroupStack))::System::Xml::HWStack* _GroupStack;

  /// @brief Field _NameTable, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__NameTable, put = __cordl_internal_set__NameTable))::System::Xml::XmlNameTable* _NameTable;

  /// @brief Field _NextState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__NextState, put = __cordl_internal_set__NextState))::System::Xml::Schema::__XdrBuilder__XdrEntry* _NextState;

  /// @brief Field _SchemaInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SchemaInfo, put = __cordl_internal_set__SchemaInfo))::System::Xml::Schema::SchemaInfo* _SchemaInfo;

  /// @brief Field _SchemaNames, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__SchemaNames, put = __cordl_internal_set__SchemaNames))::System::Xml::Schema::SchemaNames* _SchemaNames;

  /// @brief Field _StateHistory, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__StateHistory, put = __cordl_internal_set__StateHistory))::System::Xml::HWStack* _StateHistory;

  /// @brief Field _TargetNamespace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TargetNamespace, put = __cordl_internal_set__TargetNamespace))::StringW _TargetNamespace;

  /// @brief Field _Text, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__Text, put = __cordl_internal_set__Text))::StringW _Text;

  /// @brief Field _UndeclaredElements, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__UndeclaredElements, put = __cordl_internal_set__UndeclaredElements))::System::Collections::Hashtable* _UndeclaredElements;

  /// @brief Field _UndefinedAttributeTypes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__UndefinedAttributeTypes,
                      put = __cordl_internal_set__UndefinedAttributeTypes))::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* _UndefinedAttributeTypes;

  /// @brief Field _XdrName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__XdrName, put = __cordl_internal_set__XdrName))::StringW _XdrName;

  /// @brief Field _XdrPrefix, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__XdrPrefix, put = __cordl_internal_set__XdrPrefix))::StringW _XdrPrefix;

  /// @brief Field _contentValidator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__contentValidator, put = __cordl_internal_set__contentValidator))::System::Xml::Schema::ParticleContentValidator* _contentValidator;

  /// @brief Field _reader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::Xml::XmlReader* _reader;

  /// @brief Field positionInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo))::System::Xml::PositionInfo* positionInfo;

  /// @brief Field validationEventHandler, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventHandler, put = __cordl_internal_set_validationEventHandler))::System::Xml::Schema::ValidationEventHandler* validationEventHandler;

  /// @brief Field xmlResolver, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method AddOrder, addr 0x2e25d40, size 0xc0, virtual false, abstract: false, final false
  inline void AddOrder();

  /// @brief Method CheckDatatype, addr 0x2e2544c, size 0x144, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* CheckDatatype(::StringW str);

  /// @brief Method CheckDefaultAttValue, addr 0x2e259ec, size 0xf0, virtual false, abstract: false, final false
  inline void CheckDefaultAttValue(::System::Xml::Schema::SchemaAttDef* attDef);

  /// @brief Method CompareMinMaxLength, addr 0x2e24e68, size 0x88, virtual false, abstract: false, final false
  static inline void CompareMinMaxLength(uint32_t cMin, uint32_t cMax, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method EndChildren, addr 0x2e23158, size 0x3c, virtual true, abstract: false, final false
  inline void EndChildren();

  /// @brief Method GetContent, addr 0x2e23d8c, size 0x188, virtual false, abstract: false, final false
  inline int32_t GetContent(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetModel, addr 0x2e23fb4, size 0xdc, virtual false, abstract: false, final false
  inline bool GetModel(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetNextState, addr 0x2e220ec, size 0x19c, virtual false, abstract: false, final false
  inline bool GetNextState(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetOrder, addr 0x2e2413c, size 0x124, virtual false, abstract: false, final false
  inline int32_t GetOrder(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method HandleMinMax, addr 0x2e261ac, size 0x30, virtual false, abstract: false, final false
  static inline void HandleMinMax(::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax);

  /// @brief Method IsContentParsed, addr 0x2e23044, size 0x8, virtual true, abstract: false, final false
  inline bool IsContentParsed();

  /// @brief Method IsGlobal, addr 0x2e22818, size 0xc, virtual false, abstract: false, final false
  inline bool IsGlobal(int32_t flags);

  /// @brief Method IsSkipableAttribute, addr 0x2e22dec, size 0x138, virtual false, abstract: false, final false
  inline bool IsSkipableAttribute(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method IsSkipableElement, addr 0x2e222d0, size 0xc0, virtual false, abstract: false, final false
  inline bool IsSkipableElement(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method IsXdrSchema, addr 0x2e22824, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsXdrSchema(::StringW uri);

  /// @brief Method IsYes, addr 0x2e2527c, size 0x100, virtual false, abstract: false, final false
  static inline bool IsYes(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method LoadSchema, addr 0x2e228dc, size 0x510, virtual false, abstract: false, final false
  inline bool LoadSchema(::StringW uri);

  static inline ::System::Xml::Schema::XdrBuilder* New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo,
                                                            ::StringW targetNamspace, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                            ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  /// @brief Method ParseDtMaxLength, addr 0x2e2456c, size 0x138, virtual false, abstract: false, final false
  static inline void ParseDtMaxLength(ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseDtMinLength, addr 0x2e24718, size 0x138, virtual false, abstract: false, final false
  static inline void ParseDtMinLength(ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseInteger, addr 0x2e26da8, size 0x38, virtual false, abstract: false, final false
  static inline bool ParseInteger(::StringW str, ByRef<uint32_t> n);

  /// @brief Method ParseMaxOccurs, addr 0x2e25fe0, size 0x128, virtual false, abstract: false, final false
  static inline uint32_t ParseMaxOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method ParseMinOccurs, addr 0x2e25e74, size 0xf8, virtual false, abstract: false, final false
  static inline uint32_t ParseMinOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method Pop, addr 0x2e23194, size 0x80, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method PopGroupInfo, addr 0x2e232d0, size 0x80, virtual false, abstract: false, final false
  inline void PopGroupInfo();

  /// @brief Method ProcessAttribute, addr 0x2e22478, size 0x3a0, virtual true, abstract: false, final false
  inline void ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method ProcessCData, addr 0x2e230ac, size 0x74, virtual true, abstract: false, final false
  inline void ProcessCData(::StringW value);

  /// @brief Method ProcessElement, addr 0x2e21df8, size 0x134, virtual true, abstract: false, final false
  inline bool ProcessElement(::StringW prefix, ::StringW name, ::StringW ns);

  /// @brief Method ProcessMarkup, addr 0x2e2304c, size 0x60, virtual true, abstract: false, final false
  inline void ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup);

  /// @brief Method Push, addr 0x2e22288, size 0x48, virtual false, abstract: false, final false
  inline void Push();

  /// @brief Method PushGroupInfo, addr 0x2e23214, size 0x50, virtual false, abstract: false, final false
  inline void PushGroupInfo();

  /// @brief Method SendValidationEvent, addr 0x2e24360, size 0x60, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code);

  /// @brief Method SendValidationEvent, addr 0x2e22f2c, size 0x118, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x2e22390, size 0xe8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg);

  /// @brief Method SendValidationEvent, addr 0x2e272d4, size 0xcc, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SetAttributePresence, addr 0x2e25adc, size 0x50, virtual false, abstract: false, final false
  inline void SetAttributePresence(::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired);

  /// @brief Method StartChildren, addr 0x2e23120, size 0x38, virtual true, abstract: false, final false
  inline void StartChildren();

  /// @brief Method XDR_BeginAttribute, addr 0x2e263d8, size 0x2b4, virtual false, abstract: false, final false
  static inline void XDR_BeginAttribute(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginAttributeType, addr 0x2e25758, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_BeginAttributeType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginElementType, addr 0x2e24850, size 0x2dc, virtual false, abstract: false, final false
  static inline void XDR_BeginElementType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BeginRoot, addr 0x2e23420, size 0xdc, virtual false, abstract: false, final false
  static inline void XDR_BeginRoot(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_BuildAttributeType_Default, addr 0x2e2537c, size 0x20, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtMaxLength, addr 0x2e25670, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtMinLength, addr 0x2e256e4, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtType, addr 0x2e2539c, size 0xb0, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_DtValues, addr 0x2e25590, size 0xe0, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_Name, addr 0x2e24fd8, size 0x22c, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttributeType_Required, addr 0x2e25204, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_BuildAttributeType_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Default, addr 0x2e263b8, size 0x20, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Required, addr 0x2e26334, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildAttribute_Type, addr 0x2e26270, size 0xc4, virtual false, abstract: false, final false
  static inline void XDR_BuildAttribute_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Content, addr 0x2e23cf0, size 0x9c, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Content(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtMaxLength, addr 0x2e244f8, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtMinLength, addr 0x2e246a4, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtType, addr 0x2e24260, size 0x100, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_DtValues, addr 0x2e24418, size 0xe0, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Model, addr 0x2e23f14, size 0xa0, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Model(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Name, addr 0x2e23b54, size 0x19c, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElementType_Order, addr 0x2e24090, size 0xac, virtual false, abstract: false, final false
  static inline void XDR_BuildElementType_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_MaxOccurs, addr 0x2e25f6c, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_MinOccurs, addr 0x2e25e00, size 0x74, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildElement_Type, addr 0x2e25bb8, size 0x188, virtual false, abstract: false, final false
  static inline void XDR_BuildElement_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_MaxOccurs, addr 0x2e2694c, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_MinOccurs, addr 0x2e268c8, size 0x84, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildGroup_Order, addr 0x2e267dc, size 0xec, virtual false, abstract: false, final false
  static inline void XDR_BuildGroup_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildRoot_ID, addr 0x2e2341c, size 0x4, virtual false, abstract: false, final false
  static inline void XDR_BuildRoot_ID(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_BuildRoot_Name, addr 0x2e23390, size 0x8c, virtual false, abstract: false, final false
  static inline void XDR_BuildRoot_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix);

  /// @brief Method XDR_CheckAttributeDefault, addr 0x2e239b0, size 0xa4, virtual false, abstract: false, final false
  inline void XDR_CheckAttributeDefault(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* decl, ::System::Xml::Schema::SchemaAttDef* pAttdef);

  /// @brief Method XDR_EndAttribute, addr 0x2e2668c, size 0x1c, virtual false, abstract: false, final false
  static inline void XDR_EndAttribute(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndAttributeDtType, addr 0x2e26cc8, size 0xe0, virtual false, abstract: false, final false
  static inline void XDR_EndAttributeDtType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndAttributeType, addr 0x2e257d0, size 0x1c4, virtual false, abstract: false, final false
  static inline void XDR_EndAttributeType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElement, addr 0x2e26108, size 0xa4, virtual false, abstract: false, final false
  static inline void XDR_EndElement(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElementDtType, addr 0x2e26b9c, size 0xc0, virtual false, abstract: false, final false
  static inline void XDR_EndElementDtType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndElementType, addr 0x2e24b2c, size 0x33c, virtual false, abstract: false, final false
  static inline void XDR_EndElementType(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndGroup, addr 0x2e269d0, size 0x130, virtual false, abstract: false, final false
  static inline void XDR_EndGroup(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_EndRoot, addr 0x2e234fc, size 0x4b4, virtual false, abstract: false, final false
  static inline void XDR_EndRoot(::System::Xml::Schema::XdrBuilder* builder);

  /// @brief Method XDR_InitAttribute, addr 0x2e261dc, size 0x78, virtual false, abstract: false, final false
  static inline void XDR_InitAttribute(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitAttributeDtType, addr 0x2e26c5c, size 0x6c, virtual false, abstract: false, final false
  static inline void XDR_InitAttributeDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitAttributeType, addr 0x2e24ef0, size 0xe8, virtual false, abstract: false, final false
  static inline void XDR_InitAttributeType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElement, addr 0x2e25b2c, size 0x8c, virtual false, abstract: false, final false
  static inline void XDR_InitElement(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElementDtType, addr 0x2e26b00, size 0x9c, virtual false, abstract: false, final false
  static inline void XDR_InitElementDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitElementType, addr 0x2e23a54, size 0x100, virtual false, abstract: false, final false
  static inline void XDR_InitElementType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitGroup, addr 0x2e26724, size 0xb8, virtual false, abstract: false, final false
  static inline void XDR_InitGroup(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  /// @brief Method XDR_InitRoot, addr 0x2e23350, size 0x40, virtual false, abstract: false, final false
  static inline void XDR_InitRoot(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj);

  constexpr ::System::Xml::Schema::__XdrBuilder__AttributeContent*& __cordl_internal_get__AttributeDef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__AttributeContent*> const& __cordl_internal_get__AttributeDef() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*& __cordl_internal_get__BaseDecl();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*> const& __cordl_internal_get__BaseDecl() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get__CurNsMgr();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get__CurNsMgr() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrEntry*& __cordl_internal_get__CurState();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrEntry*> const& __cordl_internal_get__CurState() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__ElementContent*& __cordl_internal_get__ElementDef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__ElementContent*> const& __cordl_internal_get__ElementDef() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__GroupContent*& __cordl_internal_get__GroupDef();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__GroupContent*> const& __cordl_internal_get__GroupDef() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get__GroupStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& __cordl_internal_get__GroupStack() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get__NameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get__NameTable() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__XdrEntry*& __cordl_internal_get__NextState();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__XdrEntry*> const& __cordl_internal_get__NextState() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get__SchemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __cordl_internal_get__SchemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get__SchemaNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaNames*> const& __cordl_internal_get__SchemaNames() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get__StateHistory();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& __cordl_internal_get__StateHistory() const;

  constexpr ::StringW const& __cordl_internal_get__TargetNamespace() const;

  constexpr ::StringW& __cordl_internal_get__TargetNamespace();

  constexpr ::StringW const& __cordl_internal_get__Text() const;

  constexpr ::StringW& __cordl_internal_get__Text();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__UndeclaredElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__UndeclaredElements() const;

  constexpr ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*& __cordl_internal_get__UndefinedAttributeTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*> const& __cordl_internal_get__UndefinedAttributeTypes() const;

  constexpr ::StringW const& __cordl_internal_get__XdrName() const;

  constexpr ::StringW& __cordl_internal_get__XdrName();

  constexpr ::StringW const& __cordl_internal_get__XdrPrefix() const;

  constexpr ::StringW& __cordl_internal_get__XdrPrefix();

  constexpr ::System::Xml::Schema::ParticleContentValidator*& __cordl_internal_get__contentValidator();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ParticleContentValidator*> const& __cordl_internal_get__contentValidator() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get__reader() const;

  constexpr ::System::Xml::PositionInfo*& __cordl_internal_get_positionInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::PositionInfo*> const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_validationEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __cordl_internal_get_validationEventHandler() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __cordl_internal_get_xmlResolver() const;

  constexpr void __cordl_internal_set__AttributeDef(::System::Xml::Schema::__XdrBuilder__AttributeContent* value);

  constexpr void __cordl_internal_set__BaseDecl(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* value);

  constexpr void __cordl_internal_set__CurNsMgr(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set__CurState(::System::Xml::Schema::__XdrBuilder__XdrEntry* value);

  constexpr void __cordl_internal_set__ElementDef(::System::Xml::Schema::__XdrBuilder__ElementContent* value);

  constexpr void __cordl_internal_set__GroupDef(::System::Xml::Schema::__XdrBuilder__GroupContent* value);

  constexpr void __cordl_internal_set__GroupStack(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set__NameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set__NextState(::System::Xml::Schema::__XdrBuilder__XdrEntry* value);

  constexpr void __cordl_internal_set__SchemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set__SchemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set__StateHistory(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set__TargetNamespace(::StringW value);

  constexpr void __cordl_internal_set__Text(::StringW value);

  constexpr void __cordl_internal_set__UndeclaredElements(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__UndefinedAttributeTypes(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* value);

  constexpr void __cordl_internal_set__XdrName(::StringW value);

  constexpr void __cordl_internal_set__XdrPrefix(::StringW value);

  constexpr void __cordl_internal_set__contentValidator(::System::Xml::Schema::ParticleContentValidator* value);

  constexpr void __cordl_internal_set__reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value);

  constexpr void __cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x2e21bdc, size 0x204, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace,
                    ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrEntry*>*> getStaticF_S_SchemaEntries();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_AttributeDataType_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_AttributeType_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_AttributeType_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_Attribute_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_ElementDataType_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_ElementType_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_ElementType_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_Element_Attributes();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_Group_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Group_SubElements();

  static inline ::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> getStaticF_S_XDR_Root_Attributes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Root_Element();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_S_XDR_Root_SubElements();

  static inline void setStaticF_S_SchemaEntries(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrEntry*>*> value);

  static inline void
  setStaticF_S_XDR_AttributeDataType_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void
  setStaticF_S_XDR_AttributeType_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_AttributeType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Attribute_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void
  setStaticF_S_XDR_ElementDataType_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void
  setStaticF_S_XDR_ElementType_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_ElementType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Element_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Group_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Group_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Root_Attributes(::ArrayW<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, ::Array<::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*>*> value);

  static inline void setStaticF_S_XDR_Root_Element(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_S_XDR_Root_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_XmlResolver, addr 0x2e22f24, size 0x8, virtual false, abstract: false, final false
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
  ::System::Xml::Schema::__XdrBuilder__XdrEntry* ____CurState;

  /// @brief Field _NextState, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__XdrEntry* ____NextState;

  /// @brief Field _StateHistory, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::HWStack* ____StateHistory;

  /// @brief Field _GroupStack, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::HWStack* ____GroupStack;

  /// @brief Field _XdrName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____XdrName;

  /// @brief Field _XdrPrefix, offset: 0x60, size: 0x8, def value: None
  ::StringW ____XdrPrefix;

  /// @brief Field _ElementDef, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__ElementContent* ____ElementDef;

  /// @brief Field _GroupDef, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__GroupContent* ____GroupDef;

  /// @brief Field _AttributeDef, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__AttributeContent* ____AttributeDef;

  /// @brief Field _UndefinedAttributeTypes, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* ____UndefinedAttributeTypes;

  /// @brief Field _BaseDecl, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::__XdrBuilder__DeclBaseInfo* ____BaseDecl;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrBuilder, 0xc8>, "Size mismatch!");

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

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder*, "System.Xml.Schema", "XdrBuilder");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__AttributeContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__AttributeContent*, "System.Xml.Schema", "XdrBuilder/AttributeContent");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__DeclBaseInfo*, "System.Xml.Schema", "XdrBuilder/DeclBaseInfo");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__ElementContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__ElementContent*, "System.Xml.Schema", "XdrBuilder/ElementContent");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__GroupContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__GroupContent*, "System.Xml.Schema", "XdrBuilder/GroupContent");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrAttributeEntry*, "System.Xml.Schema", "XdrBuilder/XdrAttributeEntry");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrBeginChildFunction*, "System.Xml.Schema", "XdrBuilder/XdrBeginChildFunction");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrBuildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrBuildFunction*, "System.Xml.Schema", "XdrBuilder/XdrBuildFunction");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrEndChildFunction*, "System.Xml.Schema", "XdrBuilder/XdrEndChildFunction");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrEntry*, "System.Xml.Schema", "XdrBuilder/XdrEntry");
NEED_NO_BOX(::System::Xml::Schema::__XdrBuilder__XdrInitFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XdrBuilder__XdrInitFunction*, "System.Xml.Schema", "XdrBuilder/XdrInitFunction");
