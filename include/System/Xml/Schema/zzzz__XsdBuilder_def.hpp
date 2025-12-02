#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdBuilder)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class Stack;
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
class XmlSchemaAll;
}
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaAny;
}
namespace System::Xml::Schema {
class XmlSchemaAppInfo;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroupRef;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaComplexContent;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaDocumentation;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
class XmlSchemaFacet;
}
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaImport;
}
namespace System::Xml::Schema {
class XmlSchemaInclude;
}
namespace System::Xml::Schema {
class XmlSchemaNotation;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaRedefine;
}
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContent;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeList;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeRestriction;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeUnion;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaXPath;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml::Schema {
class XsdBuilder_BuilderNamespaceManager;
}
namespace System::Xml::Schema {
struct XsdBuilder_State;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdAttributeEntry;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdBuildFunction;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdEndChildFunction;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdEntry;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdInitFunction;
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
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XsdBuilder_State;
}
namespace System::Xml::Schema {
class XsdBuilder;
}
namespace System::Xml::Schema {
class XsdBuilder_BuilderNamespaceManager;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdAttributeEntry;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdBuildFunction;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdEndChildFunction;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdEntry;
}
namespace System::Xml::Schema {
class XsdBuilder_XsdInitFunction;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdBuilder_State);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_XsdAttributeEntry);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_XsdBuildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_XsdEndChildFunction);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_XsdEntry);
MARK_REF_PTR_T(::System::Xml::Schema::XsdBuilder_XsdInitFunction);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdBuilder/State
struct CORDL_TYPE XsdBuilder_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XsdBuilder_State_Unwrapped
  enum struct __XsdBuilder_State_Unwrapped : int32_t {
    __E_Root = static_cast<int32_t>(0x0),
    __E_Schema = static_cast<int32_t>(0x1),
    __E_Annotation = static_cast<int32_t>(0x2),
    __E_Include = static_cast<int32_t>(0x3),
    __E_Import = static_cast<int32_t>(0x4),
    __E_Element = static_cast<int32_t>(0x5),
    __E_Attribute = static_cast<int32_t>(0x6),
    __E_AttributeGroup = static_cast<int32_t>(0x7),
    __E_AttributeGroupRef = static_cast<int32_t>(0x8),
    __E_AnyAttribute = static_cast<int32_t>(0x9),
    __E_Group = static_cast<int32_t>(0xa),
    __E_GroupRef = static_cast<int32_t>(0xb),
    __E_All = static_cast<int32_t>(0xc),
    __E_Choice = static_cast<int32_t>(0xd),
    __E_Sequence = static_cast<int32_t>(0xe),
    __E_Any = static_cast<int32_t>(0xf),
    __E_Notation = static_cast<int32_t>(0x10),
    __E_SimpleType = static_cast<int32_t>(0x11),
    __E_ComplexType = static_cast<int32_t>(0x12),
    __E_ComplexContent = static_cast<int32_t>(0x13),
    __E_ComplexContentRestriction = static_cast<int32_t>(0x14),
    __E_ComplexContentExtension = static_cast<int32_t>(0x15),
    __E_SimpleContent = static_cast<int32_t>(0x16),
    __E_SimpleContentExtension = static_cast<int32_t>(0x17),
    __E_SimpleContentRestriction = static_cast<int32_t>(0x18),
    __E_SimpleTypeUnion = static_cast<int32_t>(0x19),
    __E_SimpleTypeList = static_cast<int32_t>(0x1a),
    __E_SimpleTypeRestriction = static_cast<int32_t>(0x1b),
    __E_Unique = static_cast<int32_t>(0x1c),
    __E_Key = static_cast<int32_t>(0x1d),
    __E_KeyRef = static_cast<int32_t>(0x1e),
    __E_Selector = static_cast<int32_t>(0x1f),
    __E_Field = static_cast<int32_t>(0x20),
    __E_MinExclusive = static_cast<int32_t>(0x21),
    __E_MinInclusive = static_cast<int32_t>(0x22),
    __E_MaxExclusive = static_cast<int32_t>(0x23),
    __E_MaxInclusive = static_cast<int32_t>(0x24),
    __E_TotalDigits = static_cast<int32_t>(0x25),
    __E_FractionDigits = static_cast<int32_t>(0x26),
    __E_Length = static_cast<int32_t>(0x27),
    __E_MinLength = static_cast<int32_t>(0x28),
    __E_MaxLength = static_cast<int32_t>(0x29),
    __E_Enumeration = static_cast<int32_t>(0x2a),
    __E_Pattern = static_cast<int32_t>(0x2b),
    __E_WhiteSpace = static_cast<int32_t>(0x2c),
    __E_AppInfo = static_cast<int32_t>(0x2d),
    __E_Documentation = static_cast<int32_t>(0x2e),
    __E_Redefine = static_cast<int32_t>(0x2f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XsdBuilder_State_Unwrapped() const noexcept {
    return static_cast<__XsdBuilder_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdBuilder_State(int32_t value__) noexcept;

  /// @brief Field All value: I32(12)
  static ::System::Xml::Schema::XsdBuilder_State const All;

  /// @brief Field Annotation value: I32(2)
  static ::System::Xml::Schema::XsdBuilder_State const Annotation;

  /// @brief Field Any value: I32(15)
  static ::System::Xml::Schema::XsdBuilder_State const Any;

  /// @brief Field AnyAttribute value: I32(9)
  static ::System::Xml::Schema::XsdBuilder_State const AnyAttribute;

  /// @brief Field AppInfo value: I32(45)
  static ::System::Xml::Schema::XsdBuilder_State const AppInfo;

  /// @brief Field Attribute value: I32(6)
  static ::System::Xml::Schema::XsdBuilder_State const Attribute;

  /// @brief Field AttributeGroup value: I32(7)
  static ::System::Xml::Schema::XsdBuilder_State const AttributeGroup;

  /// @brief Field AttributeGroupRef value: I32(8)
  static ::System::Xml::Schema::XsdBuilder_State const AttributeGroupRef;

  /// @brief Field Choice value: I32(13)
  static ::System::Xml::Schema::XsdBuilder_State const Choice;

  /// @brief Field ComplexContent value: I32(19)
  static ::System::Xml::Schema::XsdBuilder_State const ComplexContent;

  /// @brief Field ComplexContentExtension value: I32(21)
  static ::System::Xml::Schema::XsdBuilder_State const ComplexContentExtension;

  /// @brief Field ComplexContentRestriction value: I32(20)
  static ::System::Xml::Schema::XsdBuilder_State const ComplexContentRestriction;

  /// @brief Field ComplexType value: I32(18)
  static ::System::Xml::Schema::XsdBuilder_State const ComplexType;

  /// @brief Field Documentation value: I32(46)
  static ::System::Xml::Schema::XsdBuilder_State const Documentation;

  /// @brief Field Element value: I32(5)
  static ::System::Xml::Schema::XsdBuilder_State const Element;

  /// @brief Field Enumeration value: I32(42)
  static ::System::Xml::Schema::XsdBuilder_State const Enumeration;

  /// @brief Field Field value: I32(32)
  static ::System::Xml::Schema::XsdBuilder_State const Field;

  /// @brief Field FractionDigits value: I32(38)
  static ::System::Xml::Schema::XsdBuilder_State const FractionDigits;

  /// @brief Field Group value: I32(10)
  static ::System::Xml::Schema::XsdBuilder_State const Group;

  /// @brief Field GroupRef value: I32(11)
  static ::System::Xml::Schema::XsdBuilder_State const GroupRef;

  /// @brief Field Import value: I32(4)
  static ::System::Xml::Schema::XsdBuilder_State const Import;

  /// @brief Field Include value: I32(3)
  static ::System::Xml::Schema::XsdBuilder_State const Include;

  /// @brief Field Key value: I32(29)
  static ::System::Xml::Schema::XsdBuilder_State const Key;

  /// @brief Field KeyRef value: I32(30)
  static ::System::Xml::Schema::XsdBuilder_State const KeyRef;

  /// @brief Field Length value: I32(39)
  static ::System::Xml::Schema::XsdBuilder_State const Length;

  /// @brief Field MaxExclusive value: I32(35)
  static ::System::Xml::Schema::XsdBuilder_State const MaxExclusive;

  /// @brief Field MaxInclusive value: I32(36)
  static ::System::Xml::Schema::XsdBuilder_State const MaxInclusive;

  /// @brief Field MaxLength value: I32(41)
  static ::System::Xml::Schema::XsdBuilder_State const MaxLength;

  /// @brief Field MinExclusive value: I32(33)
  static ::System::Xml::Schema::XsdBuilder_State const MinExclusive;

  /// @brief Field MinInclusive value: I32(34)
  static ::System::Xml::Schema::XsdBuilder_State const MinInclusive;

  /// @brief Field MinLength value: I32(40)
  static ::System::Xml::Schema::XsdBuilder_State const MinLength;

  /// @brief Field Notation value: I32(16)
  static ::System::Xml::Schema::XsdBuilder_State const Notation;

  /// @brief Field Pattern value: I32(43)
  static ::System::Xml::Schema::XsdBuilder_State const Pattern;

  /// @brief Field Redefine value: I32(47)
  static ::System::Xml::Schema::XsdBuilder_State const Redefine;

  /// @brief Field Root value: I32(0)
  static ::System::Xml::Schema::XsdBuilder_State const Root;

  /// @brief Field Schema value: I32(1)
  static ::System::Xml::Schema::XsdBuilder_State const Schema;

  /// @brief Field Selector value: I32(31)
  static ::System::Xml::Schema::XsdBuilder_State const Selector;

  /// @brief Field Sequence value: I32(14)
  static ::System::Xml::Schema::XsdBuilder_State const Sequence;

  /// @brief Field SimpleContent value: I32(22)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleContent;

  /// @brief Field SimpleContentExtension value: I32(23)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleContentExtension;

  /// @brief Field SimpleContentRestriction value: I32(24)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleContentRestriction;

  /// @brief Field SimpleType value: I32(17)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleType;

  /// @brief Field SimpleTypeList value: I32(26)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleTypeList;

  /// @brief Field SimpleTypeRestriction value: I32(27)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleTypeRestriction;

  /// @brief Field SimpleTypeUnion value: I32(25)
  static ::System::Xml::Schema::XsdBuilder_State const SimpleTypeUnion;

  /// @brief Field TotalDigits value: I32(37)
  static ::System::Xml::Schema::XsdBuilder_State const TotalDigits;

  /// @brief Field Unique value: I32(28)
  static ::System::Xml::Schema::XsdBuilder_State const Unique;

  /// @brief Field WhiteSpace value: I32(44)
  static ::System::Xml::Schema::XsdBuilder_State const WhiteSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9819 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdBuilder_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_State, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/XsdBuildFunction
class CORDL_TYPE XsdBuilder_XsdBuildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6050048, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  static inline ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x604ffc8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_XsdBuildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdBuildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_XsdBuildFunction(XsdBuilder_XsdBuildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdBuildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_XsdBuildFunction(XsdBuilder_XsdBuildFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_XsdBuildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/XsdInitFunction
class CORDL_TYPE XsdBuilder_XsdInitFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x60500dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  static inline ::System::Xml::Schema::XsdBuilder_XsdInitFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x605005c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_XsdInitFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdInitFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_XsdInitFunction(XsdBuilder_XsdInitFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdInitFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_XsdInitFunction(XsdBuilder_XsdInitFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_XsdInitFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.MulticastDelegate
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/XsdEndChildFunction
class CORDL_TYPE XsdBuilder_XsdEndChildFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x605016c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::Schema::XsdBuilder* builder);

  static inline ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x60500f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_XsdEndChildFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdEndChildFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_XsdEndChildFunction(XsdBuilder_XsdEndChildFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdEndChildFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_XsdEndChildFunction(XsdBuilder_XsdEndChildFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_XsdEndChildFunction, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.SchemaNames::Token
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/XsdAttributeEntry
class CORDL_TYPE XsdBuilder_XsdAttributeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Attribute, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Attribute, put = __cordl_internal_set_Attribute)) ::System::Xml::Schema::SchemaNames_Token Attribute;

  /// @brief Field BuildFunc, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BuildFunc, put = __cordl_internal_set_BuildFunc)) ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* BuildFunc;

  static inline ::System::Xml::Schema::XsdBuilder_XsdAttributeEntry* New_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build);

  constexpr ::System::Xml::Schema::SchemaNames_Token const& __cordl_internal_get_Attribute() const;

  constexpr ::System::Xml::Schema::SchemaNames_Token& __cordl_internal_get_Attribute();

  constexpr ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* const& __cordl_internal_get_BuildFunc() const;

  constexpr ::System::Xml::Schema::XsdBuilder_XsdBuildFunction*& __cordl_internal_get_BuildFunc();

  constexpr void __cordl_internal_set_Attribute(::System::Xml::Schema::SchemaNames_Token value);

  constexpr void __cordl_internal_set_BuildFunc(::System::Xml::Schema::XsdBuilder_XsdBuildFunction* value);

  /// @brief Method .ctor, addr 0x6050180, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* build);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_XsdAttributeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdAttributeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_XsdAttributeEntry(XsdBuilder_XsdAttributeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdAttributeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_XsdAttributeEntry(XsdBuilder_XsdAttributeEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9823 };

  /// @brief Field Attribute, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaNames_Token ___Attribute;

  /// @brief Field BuildFunc, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XsdBuilder_XsdBuildFunction* ___BuildFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdAttributeEntry, ___Attribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdAttributeEntry, ___BuildFunc) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.SchemaNames::Token, System.Xml.Schema.XsdBuilder::State
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/XsdEntry
class CORDL_TYPE XsdBuilder_XsdEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field Attributes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Attributes,
                      put = __cordl_internal_set_Attributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      Attributes;

  /// @brief Field CurrentState, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentState, put = __cordl_internal_set_CurrentState)) ::System::Xml::Schema::XsdBuilder_State CurrentState;

  /// @brief Field EndChildFunc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_EndChildFunc, put = __cordl_internal_set_EndChildFunc)) ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* EndChildFunc;

  /// @brief Field InitFunc, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InitFunc, put = __cordl_internal_set_InitFunc)) ::System::Xml::Schema::XsdBuilder_XsdInitFunction* InitFunc;

  /// @brief Field Name, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::System::Xml::Schema::SchemaNames_Token Name;

  /// @brief Field NextStates, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NextStates,
                      put = __cordl_internal_set_NextStates)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      NextStates;

  /// @brief Field ParseContent, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ParseContent, put = __cordl_internal_set_ParseContent)) bool ParseContent;

  static inline ::System::Xml::Schema::XsdBuilder_XsdEntry*
  New_ctor(::System::Xml::Schema::SchemaNames_Token n, ::System::Xml::Schema::XsdBuilder_State state,
           ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> nextStates,
           ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> attributes,
           ::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent);

  constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> const& __cordl_internal_get_Attributes() const;

  constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>& __cordl_internal_get_Attributes();

  constexpr ::System::Xml::Schema::XsdBuilder_State const& __cordl_internal_get_CurrentState() const;

  constexpr ::System::Xml::Schema::XsdBuilder_State& __cordl_internal_get_CurrentState();

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* const& __cordl_internal_get_EndChildFunc() const;

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*& __cordl_internal_get_EndChildFunc();

  constexpr ::System::Xml::Schema::XsdBuilder_XsdInitFunction* const& __cordl_internal_get_InitFunc() const;

  constexpr ::System::Xml::Schema::XsdBuilder_XsdInitFunction*& __cordl_internal_get_InitFunc();

  constexpr ::System::Xml::Schema::SchemaNames_Token const& __cordl_internal_get_Name() const;

  constexpr ::System::Xml::Schema::SchemaNames_Token& __cordl_internal_get_Name();

  constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> const& __cordl_internal_get_NextStates() const;

  constexpr ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>& __cordl_internal_get_NextStates();

  constexpr bool const& __cordl_internal_get_ParseContent() const;

  constexpr bool& __cordl_internal_get_ParseContent();

  constexpr void __cordl_internal_set_Attributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  constexpr void __cordl_internal_set_CurrentState(::System::Xml::Schema::XsdBuilder_State value);

  constexpr void __cordl_internal_set_EndChildFunc(::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* value);

  constexpr void __cordl_internal_set_InitFunc(::System::Xml::Schema::XsdBuilder_XsdInitFunction* value);

  constexpr void __cordl_internal_set_Name(::System::Xml::Schema::SchemaNames_Token value);

  constexpr void __cordl_internal_set_NextStates(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  constexpr void __cordl_internal_set_ParseContent(bool value);

  /// @brief Method .ctor, addr 0x605018c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaNames_Token n, ::System::Xml::Schema::XsdBuilder_State state,
                    ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> nextStates,
                    ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> attributes,
                    ::System::Xml::Schema::XsdBuilder_XsdInitFunction* init, ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* end, bool parseContent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_XsdEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_XsdEntry(XsdBuilder_XsdEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_XsdEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_XsdEntry(XsdBuilder_XsdEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9824 };

  /// @brief Field Name, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaNames_Token ___Name;

  /// @brief Field CurrentState, offset: 0x14, size: 0x4, def value: None
  ::System::Xml::Schema::XsdBuilder_State ___CurrentState;

  /// @brief Field NextStates, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> ___NextStates;

  /// @brief Field Attributes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> ___Attributes;

  /// @brief Field InitFunc, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XsdBuilder_XsdInitFunction* ___InitFunc;

  /// @brief Field EndChildFunc, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction* ___EndChildFunc;

  /// @brief Field ParseContent, offset: 0x38, size: 0x1, def value: None
  bool ___ParseContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___CurrentState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___NextStates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___Attributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___InitFunc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___EndChildFunc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_XsdEntry, ___ParseContent) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_XsdEntry, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.XmlNamespaceManager
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder/BuilderNamespaceManager
class CORDL_TYPE XsdBuilder_BuilderNamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  /// @brief Field nsMgr, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_nsMgr, put = __cordl_internal_set_nsMgr)) ::System::Xml::XmlNamespaceManager* nsMgr;

  /// @brief Field reader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Method LookupNamespace, addr 0x60501a8, size 0x60, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  static inline ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager* New_ctor(::System::Xml::XmlNamespaceManager* nsMgr, ::System::Xml::XmlReader* reader);

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_nsMgr() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_nsMgr();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_nsMgr(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x60501a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNamespaceManager* nsMgr, ::System::Xml::XmlReader* reader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder_BuilderNamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_BuilderNamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder_BuilderNamespaceManager(XsdBuilder_BuilderNamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder_BuilderNamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder_BuilderNamespaceManager(XsdBuilder_BuilderNamespaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9825 };

  /// @brief Field nsMgr, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___nsMgr;

  /// @brief Field reader, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager, ___nsMgr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager, ___reader) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.SchemaBuilder
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdBuilder
class CORDL_TYPE XsdBuilder : public ::System::Xml::Schema::SchemaBuilder {
public:
  // Declarations
  using BuilderNamespaceManager = ::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager;

  using State = ::System::Xml::Schema::XsdBuilder_State;

  using XsdAttributeEntry = ::System::Xml::Schema::XsdBuilder_XsdAttributeEntry;

  using XsdBuildFunction = ::System::Xml::Schema::XsdBuilder_XsdBuildFunction;

  using XsdEndChildFunction = ::System::Xml::Schema::XsdBuilder_XsdEndChildFunction;

  using XsdEntry = ::System::Xml::Schema::XsdBuilder_XsdEntry;

  using XsdInitFunction = ::System::Xml::Schema::XsdBuilder_XsdInitFunction;

  /// @brief Field AllSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AllSubelements, put = setStaticF_AllSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      AllSubelements;

  /// @brief Field AnnotatedSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnnotatedSubelements,
                      put = setStaticF_AnnotatedSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      AnnotatedSubelements;

  /// @brief Field AnnotationAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnnotationAttributes,
                      put = setStaticF_AnnotationAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AnnotationAttributes;

  /// @brief Field AnnotationSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnnotationSubelements,
                      put = setStaticF_AnnotationSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      AnnotationSubelements;

  /// @brief Field AnyAttributeAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnyAttributeAttributes,
                      put = setStaticF_AnyAttributeAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AnyAttributeAttributes;

  /// @brief Field AnyAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnyAttributes,
                      put = setStaticF_AnyAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AnyAttributes;

  /// @brief Field AppinfoAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AppinfoAttributes,
                      put = setStaticF_AppinfoAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AppinfoAttributes;

  /// @brief Field AttributeAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AttributeAttributes,
                      put = setStaticF_AttributeAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AttributeAttributes;

  /// @brief Field AttributeGroupAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AttributeGroupAttributes,
                      put = setStaticF_AttributeGroupAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AttributeGroupAttributes;

  /// @brief Field AttributeGroupRefAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AttributeGroupRefAttributes,
                      put = setStaticF_AttributeGroupRefAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      AttributeGroupRefAttributes;

  /// @brief Field AttributeGroupSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AttributeGroupSubelements,
                      put = setStaticF_AttributeGroupSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      AttributeGroupSubelements;

  /// @brief Field AttributeSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AttributeSubelements,
                      put = setStaticF_AttributeSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      AttributeSubelements;

  /// @brief Field ChoiceSequenceSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ChoiceSequenceSubelements,
                      put = setStaticF_ChoiceSequenceSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ChoiceSequenceSubelements;

  /// @brief Field ComplexContentAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexContentAttributes,
                      put = setStaticF_ComplexContentAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ComplexContentAttributes;

  /// @brief Field ComplexContentExtensionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexContentExtensionAttributes,
                      put =
                          setStaticF_ComplexContentExtensionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ComplexContentExtensionAttributes;

  /// @brief Field ComplexContentExtensionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexContentExtensionSubelements,
                      put = setStaticF_ComplexContentExtensionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ComplexContentExtensionSubelements;

  /// @brief Field ComplexContentRestrictionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_ComplexContentRestrictionAttributes,
      put = setStaticF_ComplexContentRestrictionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ComplexContentRestrictionAttributes;

  /// @brief Field ComplexContentRestrictionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexContentRestrictionSubelements,
                      put = setStaticF_ComplexContentRestrictionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ComplexContentRestrictionSubelements;

  /// @brief Field ComplexContentSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexContentSubelements,
                      put = setStaticF_ComplexContentSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ComplexContentSubelements;

  /// @brief Field ComplexTypeAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexTypeAttributes,
                      put = setStaticF_ComplexTypeAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ComplexTypeAttributes;

  /// @brief Field ComplexTypeSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ComplexTypeSubelements,
                      put = setStaticF_ComplexTypeSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ComplexTypeSubelements;

  __declspec(property(get = get_CurrentElement)) ::System::Xml::Schema::SchemaNames_Token CurrentElement;

  /// @brief Field DerivationMethodStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DerivationMethodStrings, put = setStaticF_DerivationMethodStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> DerivationMethodStrings;

  /// @brief Field DerivationMethodValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DerivationMethodValues, put = setStaticF_DerivationMethodValues)) ::ArrayW<int32_t, ::Array<int32_t>*> DerivationMethodValues;

  /// @brief Field DocumentationAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DocumentationAttributes,
                      put = setStaticF_DocumentationAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      DocumentationAttributes;

  /// @brief Field ElementAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ElementAttributes,
                      put = setStaticF_ElementAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ElementAttributes;

  /// @brief Field ElementSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ElementSubelements, put = setStaticF_ElementSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      ElementSubelements;

  /// @brief Field FacetAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FacetAttributes,
                      put = setStaticF_FacetAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      FacetAttributes;

  /// @brief Field FieldAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FieldAttributes,
                      put = setStaticF_FieldAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      FieldAttributes;

  /// @brief Field FormStringValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FormStringValues, put = setStaticF_FormStringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> FormStringValues;

  /// @brief Field GroupAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GroupAttributes,
                      put = setStaticF_GroupAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      GroupAttributes;

  /// @brief Field GroupRefAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GroupRefAttributes,
                      put = setStaticF_GroupRefAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      GroupRefAttributes;

  /// @brief Field GroupSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GroupSubelements, put = setStaticF_GroupSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      GroupSubelements;

  /// @brief Field IdentityConstraintAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdentityConstraintAttributes,
                      put = setStaticF_IdentityConstraintAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      IdentityConstraintAttributes;

  /// @brief Field IdentityConstraintSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdentityConstraintSubelements,
                      put = setStaticF_IdentityConstraintSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      IdentityConstraintSubelements;

  /// @brief Field ImportAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ImportAttributes,
                      put = setStaticF_ImportAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ImportAttributes;

  /// @brief Field IncludeAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IncludeAttributes,
                      put = setStaticF_IncludeAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      IncludeAttributes;

  /// @brief Field NotationAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NotationAttributes,
                      put = setStaticF_NotationAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      NotationAttributes;

  __declspec(property(get = get_ParentContainer)) ::System::Xml::Schema::XmlSchemaObject* ParentContainer;

  __declspec(property(get = get_ParentElement)) ::System::Xml::Schema::SchemaNames_Token ParentElement;

  /// @brief Field ParticleAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ParticleAttributes,
                      put = setStaticF_ParticleAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      ParticleAttributes;

  /// @brief Field ProcessContentsStringValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ProcessContentsStringValues, put = setStaticF_ProcessContentsStringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> ProcessContentsStringValues;

  /// @brief Field RedefineAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RedefineAttributes,
                      put = setStaticF_RedefineAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      RedefineAttributes;

  /// @brief Field RedefineSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RedefineSubelements, put = setStaticF_RedefineSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      RedefineSubelements;

  /// @brief Field SchemaAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaAttributes,
                      put = setStaticF_SchemaAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SchemaAttributes;

  /// @brief Field SchemaElement, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaElement, put = setStaticF_SchemaElement)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SchemaElement;

  /// @brief Field SchemaEntries, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaEntries, put = setStaticF_SchemaEntries)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdEntry*>*>
      SchemaEntries;

  /// @brief Field SchemaSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemaSubelements, put = setStaticF_SchemaSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SchemaSubelements;

  /// @brief Field SelectorAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SelectorAttributes,
                      put = setStaticF_SelectorAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SelectorAttributes;

  /// @brief Field SimpleContentAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentAttributes,
                      put = setStaticF_SimpleContentAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleContentAttributes;

  /// @brief Field SimpleContentExtensionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentExtensionAttributes,
                      put = setStaticF_SimpleContentExtensionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleContentExtensionAttributes;

  /// @brief Field SimpleContentExtensionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentExtensionSubelements,
                      put = setStaticF_SimpleContentExtensionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleContentExtensionSubelements;

  /// @brief Field SimpleContentRestrictionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentRestrictionAttributes,
                      put =
                          setStaticF_SimpleContentRestrictionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleContentRestrictionAttributes;

  /// @brief Field SimpleContentRestrictionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentRestrictionSubelements,
                      put = setStaticF_SimpleContentRestrictionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleContentRestrictionSubelements;

  /// @brief Field SimpleContentSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleContentSubelements,
                      put = setStaticF_SimpleContentSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleContentSubelements;

  /// @brief Field SimpleTypeAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeAttributes,
                      put = setStaticF_SimpleTypeAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleTypeAttributes;

  /// @brief Field SimpleTypeListAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeListAttributes,
                      put = setStaticF_SimpleTypeListAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleTypeListAttributes;

  /// @brief Field SimpleTypeListSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeListSubelements,
                      put = setStaticF_SimpleTypeListSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleTypeListSubelements;

  /// @brief Field SimpleTypeRestrictionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeRestrictionAttributes,
                      put = setStaticF_SimpleTypeRestrictionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleTypeRestrictionAttributes;

  /// @brief Field SimpleTypeRestrictionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeRestrictionSubelements,
                      put = setStaticF_SimpleTypeRestrictionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleTypeRestrictionSubelements;

  /// @brief Field SimpleTypeSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeSubelements,
                      put = setStaticF_SimpleTypeSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleTypeSubelements;

  /// @brief Field SimpleTypeUnionAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeUnionAttributes,
                      put = setStaticF_SimpleTypeUnionAttributes)) ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*>
      SimpleTypeUnionAttributes;

  /// @brief Field SimpleTypeUnionSubelements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypeUnionSubelements,
                      put = setStaticF_SimpleTypeUnionSubelements)) ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*>
      SimpleTypeUnionSubelements;

  /// @brief Field UseStringValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UseStringValues, put = setStaticF_UseStringValues)) ::ArrayW<::StringW, ::Array<::StringW>*> UseStringValues;

  /// @brief Field all, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_all, put = __cordl_internal_set_all)) ::System::Xml::Schema::XmlSchemaAll* all;

  /// @brief Field annotation, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_annotation, put = __cordl_internal_set_annotation)) ::System::Xml::Schema::XmlSchemaAnnotation* annotation;

  /// @brief Field anyAttribute, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field anyElement, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_anyElement, put = __cordl_internal_set_anyElement)) ::System::Xml::Schema::XmlSchemaAny* anyElement;

  /// @brief Field appInfo, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_appInfo, put = __cordl_internal_set_appInfo)) ::System::Xml::Schema::XmlSchemaAppInfo* appInfo;

  /// @brief Field attribute, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attribute, put = __cordl_internal_set_attribute)) ::System::Xml::Schema::XmlSchemaAttribute* attribute;

  /// @brief Field attributeGroup, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeGroup, put = __cordl_internal_set_attributeGroup)) ::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup;

  /// @brief Field attributeGroupRef, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeGroupRef, put = __cordl_internal_set_attributeGroupRef)) ::System::Xml::Schema::XmlSchemaAttributeGroupRef* attributeGroupRef;

  /// @brief Field canIncludeImport, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_canIncludeImport, put = __cordl_internal_set_canIncludeImport)) bool canIncludeImport;

  /// @brief Field choice, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_choice, put = __cordl_internal_set_choice)) ::System::Xml::Schema::XmlSchemaChoice* choice;

  /// @brief Field complexContent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_complexContent, put = __cordl_internal_set_complexContent)) ::System::Xml::Schema::XmlSchemaComplexContent* complexContent;

  /// @brief Field complexContentExtension, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_complexContentExtension,
                      put = __cordl_internal_set_complexContentExtension)) ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexContentExtension;

  /// @brief Field complexContentRestriction, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_complexContentRestriction,
                      put = __cordl_internal_set_complexContentRestriction)) ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexContentRestriction;

  /// @brief Field complexType, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_complexType, put = __cordl_internal_set_complexType)) ::System::Xml::Schema::XmlSchemaComplexType* complexType;

  /// @brief Field containerStack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_containerStack, put = __cordl_internal_set_containerStack)) ::System::Collections::Stack* containerStack;

  /// @brief Field currentEntry, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentEntry, put = __cordl_internal_set_currentEntry)) ::System::Xml::Schema::XsdBuilder_XsdEntry* currentEntry;

  /// @brief Field documentation, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_documentation, put = __cordl_internal_set_documentation)) ::System::Xml::Schema::XmlSchemaDocumentation* documentation;

  /// @brief Field element, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_element, put = __cordl_internal_set_element)) ::System::Xml::Schema::XmlSchemaElement* element;

  /// @brief Field facet, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_facet, put = __cordl_internal_set_facet)) ::System::Xml::Schema::XmlSchemaFacet* facet;

  /// @brief Field group, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_group, put = __cordl_internal_set_group)) ::System::Xml::Schema::XmlSchemaGroup* group;

  /// @brief Field groupRef, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_groupRef, put = __cordl_internal_set_groupRef)) ::System::Xml::Schema::XmlSchemaGroupRef* groupRef;

  /// @brief Field hasChild, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hasChild, put = __cordl_internal_set_hasChild)) bool hasChild;

  /// @brief Field identityConstraint, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_identityConstraint, put = __cordl_internal_set_identityConstraint)) ::System::Xml::Schema::XmlSchemaIdentityConstraint* identityConstraint;

  /// @brief Field import, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_import, put = __cordl_internal_set_import)) ::System::Xml::Schema::XmlSchemaImport* import;

  /// @brief Field include, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_include, put = __cordl_internal_set_include)) ::System::Xml::Schema::XmlSchemaInclude* include;

  /// @brief Field markup, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_markup, put = __cordl_internal_set_markup)) ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup;

  /// @brief Field nameTable, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field namespaceManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceManager, put = __cordl_internal_set_namespaceManager)) ::System::Xml::XmlNamespaceManager* namespaceManager;

  /// @brief Field namespaces, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) ::System::Collections::Hashtable* namespaces;

  /// @brief Field nextEntry, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nextEntry, put = __cordl_internal_set_nextEntry)) ::System::Xml::Schema::XsdBuilder_XsdEntry* nextEntry;

  /// @brief Field notation, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_notation, put = __cordl_internal_set_notation)) ::System::Xml::Schema::XmlSchemaNotation* notation;

  /// @brief Field particle, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle)) ::System::Xml::Schema::XmlSchemaParticle* particle;

  /// @brief Field positionInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo)) ::System::Xml::PositionInfo* positionInfo;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Field redefine, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_redefine, put = __cordl_internal_set_redefine)) ::System::Xml::Schema::XmlSchemaRedefine* redefine;

  /// @brief Field schema, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  /// @brief Field schemaNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames)) ::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Field sequence, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_sequence, put = __cordl_internal_set_sequence)) ::System::Xml::Schema::XmlSchemaSequence* sequence;

  /// @brief Field simpleContent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleContent, put = __cordl_internal_set_simpleContent)) ::System::Xml::Schema::XmlSchemaSimpleContent* simpleContent;

  /// @brief Field simpleContentExtension, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleContentExtension,
                      put = __cordl_internal_set_simpleContentExtension)) ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension;

  /// @brief Field simpleContentRestriction, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleContentRestriction,
                      put = __cordl_internal_set_simpleContentRestriction)) ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleContentRestriction;

  /// @brief Field simpleType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleType, put = __cordl_internal_set_simpleType)) ::System::Xml::Schema::XmlSchemaSimpleType* simpleType;

  /// @brief Field simpleTypeList, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleTypeList, put = __cordl_internal_set_simpleTypeList)) ::System::Xml::Schema::XmlSchemaSimpleTypeList* simpleTypeList;

  /// @brief Field simpleTypeRestriction, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleTypeRestriction, put = __cordl_internal_set_simpleTypeRestriction)) ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* simpleTypeRestriction;

  /// @brief Field simpleTypeUnion, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleTypeUnion, put = __cordl_internal_set_simpleTypeUnion)) ::System::Xml::Schema::XmlSchemaSimpleTypeUnion* simpleTypeUnion;

  /// @brief Field stateHistory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stateHistory, put = __cordl_internal_set_stateHistory)) ::System::Xml::HWStack* stateHistory;

  /// @brief Field unhandledAttributes, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_unhandledAttributes, put = __cordl_internal_set_unhandledAttributes)) ::System::Collections::ArrayList* unhandledAttributes;

  /// @brief Field validationEventHandler, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventHandler, put = __cordl_internal_set_validationEventHandler)) ::System::Xml::Schema::ValidationEventHandler* validationEventHandler;

  /// @brief Field xpath, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_xpath, put = __cordl_internal_set_xpath)) ::System::Xml::Schema::XmlSchemaXPath* xpath;

  /// @brief Field xso, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_xso, put = __cordl_internal_set_xso)) ::System::Xml::Schema::XmlSchemaObject* xso;

  /// @brief Method AddAttribute, addr 0x6047ed0, size 0x238, virtual false, abstract: false, final false
  inline void AddAttribute(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method AddParticle, addr 0x604a730, size 0x324, virtual false, abstract: false, final false
  inline void AddParticle(::System::Xml::Schema::XmlSchemaParticle* particle);

  /// @brief Method BuildAnnotated_Id, addr 0x6047590, size 0x24, virtual false, abstract: false, final false
  static inline void BuildAnnotated_Id(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAnyAttribute_Namespace, addr 0x604a518, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAnyAttribute_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAnyAttribute_ProcessContents, addr 0x604a538, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildAnyAttribute_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAny_Namespace, addr 0x604accc, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAny_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAny_ProcessContents, addr 0x604acec, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildAny_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAppinfo_Source, addr 0x604b7e0, size 0x74, virtual false, abstract: false, final false
  static inline void BuildAppinfo_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttributeGroupRef_Ref, addr 0x604a248, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildAttributeGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttributeGroup_Name, addr 0x604a1b8, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAttributeGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Default, addr 0x6048108, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAttribute_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Fixed, addr 0x6048128, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAttribute_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Form, addr 0x6048148, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildAttribute_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Name, addr 0x604848c, size 0x20, virtual false, abstract: false, final false
  static inline void BuildAttribute_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Ref, addr 0x6048298, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildAttribute_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Type, addr 0x60484ac, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildAttribute_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildAttribute_Use, addr 0x60481f0, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildAttribute_Use(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexContentExtension_Base, addr 0x6049bdc, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildComplexContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexContentRestriction_Base, addr 0x6049cd8, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildComplexContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexContent_Mixed, addr 0x6049a80, size 0x80, virtual false, abstract: false, final false
  static inline void BuildComplexContent_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexType_Abstract, addr 0x6049770, size 0x8c, virtual false, abstract: false, final false
  static inline void BuildComplexType_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexType_Block, addr 0x60497fc, size 0x74, virtual false, abstract: false, final false
  static inline void BuildComplexType_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexType_Final, addr 0x6049870, size 0x74, virtual false, abstract: false, final false
  static inline void BuildComplexType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexType_Mixed, addr 0x60498e4, size 0x84, virtual false, abstract: false, final false
  static inline void BuildComplexType_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildComplexType_Name, addr 0x6049968, size 0x20, virtual false, abstract: false, final false
  static inline void BuildComplexType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildDocumentation_Source, addr 0x604b91c, size 0x74, virtual false, abstract: false, final false
  static inline void BuildDocumentation_Source(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildDocumentation_XmlLang, addr 0x604b990, size 0x138, virtual false, abstract: false, final false
  static inline void BuildDocumentation_XmlLang(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Abstract, addr 0x604861c, size 0x80, virtual false, abstract: false, final false
  static inline void BuildElement_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Block, addr 0x60487b4, size 0x74, virtual false, abstract: false, final false
  static inline void BuildElement_Block(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Default, addr 0x6048828, size 0x20, virtual false, abstract: false, final false
  static inline void BuildElement_Default(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Final, addr 0x604896c, size 0x74, virtual false, abstract: false, final false
  static inline void BuildElement_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Fixed, addr 0x60489e0, size 0x20, virtual false, abstract: false, final false
  static inline void BuildElement_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Form, addr 0x6048848, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildElement_Form(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_MaxOccurs, addr 0x6048a00, size 0x18, virtual false, abstract: false, final false
  static inline void BuildElement_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_MinOccurs, addr 0x6048ae0, size 0x18, virtual false, abstract: false, final false
  static inline void BuildElement_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Name, addr 0x6048bc0, size 0x20, virtual false, abstract: false, final false
  static inline void BuildElement_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Nillable, addr 0x6048be0, size 0x80, virtual false, abstract: false, final false
  static inline void BuildElement_Nillable(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Ref, addr 0x6048c60, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildElement_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_SubstitutionGroup, addr 0x60488f0, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildElement_SubstitutionGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildElement_Type, addr 0x6048cdc, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildElement_Type(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildFacet_Fixed, addr 0x604b1b8, size 0x84, virtual false, abstract: false, final false
  static inline void BuildFacet_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildFacet_Value, addr 0x604b23c, size 0x20, virtual false, abstract: false, final false
  static inline void BuildFacet_Value(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildField_XPath, addr 0x604b650, size 0x20, virtual false, abstract: false, final false
  static inline void BuildField_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildGroupRef_Ref, addr 0x604aa84, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildGroup_Name, addr 0x604a69c, size 0x20, virtual false, abstract: false, final false
  static inline void BuildGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildIdentityConstraint_Name, addr 0x604b394, size 0x20, virtual false, abstract: false, final false
  static inline void BuildIdentityConstraint_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildIdentityConstraint_Refer, addr 0x604b3b4, size 0x130, virtual false, abstract: false, final false
  static inline void BuildIdentityConstraint_Refer(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildImport_Namespace, addr 0x6047d00, size 0x20, virtual false, abstract: false, final false
  static inline void BuildImport_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildImport_SchemaLocation, addr 0x6047d20, size 0x20, virtual false, abstract: false, final false
  static inline void BuildImport_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildInclude_SchemaLocation, addr 0x6047c34, size 0x20, virtual false, abstract: false, final false
  static inline void BuildInclude_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildNotation_Name, addr 0x604ae18, size 0x20, virtual false, abstract: false, final false
  static inline void BuildNotation_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildNotation_Public, addr 0x604ae38, size 0x20, virtual false, abstract: false, final false
  static inline void BuildNotation_Public(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildNotation_System, addr 0x604ae58, size 0x20, virtual false, abstract: false, final false
  static inline void BuildNotation_System(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildParticle_MaxOccurs, addr 0x604aa54, size 0x18, virtual false, abstract: false, final false
  static inline void BuildParticle_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildParticle_MinOccurs, addr 0x604aa6c, size 0x18, virtual false, abstract: false, final false
  static inline void BuildParticle_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildRedefine_SchemaLocation, addr 0x6047df0, size 0x20, virtual false, abstract: false, final false
  static inline void BuildRedefine_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_AttributeFormDefault, addr 0x60475b4, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildSchema_AttributeFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_BlockDefault, addr 0x6047af4, size 0x74, virtual false, abstract: false, final false
  static inline void BuildSchema_BlockDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_ElementFormDefault, addr 0x6047740, size 0xa8, virtual false, abstract: false, final false
  static inline void BuildSchema_ElementFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_FinalDefault, addr 0x6047828, size 0x74, virtual false, abstract: false, final false
  static inline void BuildSchema_FinalDefault(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_TargetNamespace, addr 0x60477e8, size 0x20, virtual false, abstract: false, final false
  static inline void BuildSchema_TargetNamespace(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSchema_Version, addr 0x6047808, size 0x20, virtual false, abstract: false, final false
  static inline void BuildSchema_Version(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSelector_XPath, addr 0x604b584, size 0x20, virtual false, abstract: false, final false
  static inline void BuildSelector_XPath(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleContentExtension_Base, addr 0x6049f28, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildSimpleContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleContentRestriction_Base, addr 0x604a080, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildSimpleContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleTypeList_ItemType, addr 0x6049450, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildSimpleTypeList_ItemType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleTypeRestriction_Base, addr 0x6049578, size 0x7c, virtual false, abstract: false, final false
  static inline void BuildSimpleTypeRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleTypeUnion_MemberTypes, addr 0x60491c4, size 0x1d8, virtual false, abstract: false, final false
  static inline void BuildSimpleTypeUnion_MemberTypes(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleType_Final, addr 0x60490a4, size 0x74, virtual false, abstract: false, final false
  static inline void BuildSimpleType_Final(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method BuildSimpleType_Name, addr 0x6049084, size 0x20, virtual false, abstract: false, final false
  static inline void BuildSimpleType_Name(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method EndAppinfo, addr 0x604b858, size 0x24, virtual false, abstract: false, final false
  static inline void EndAppinfo(::System::Xml::Schema::XsdBuilder* builder);

  /// @brief Method EndChildren, addr 0x60466ac, size 0x3c, virtual true, abstract: false, final false
  inline void EndChildren();

  /// @brief Method EndDocumentation, addr 0x604bac8, size 0x24, virtual false, abstract: false, final false
  static inline void EndDocumentation(::System::Xml::Schema::XsdBuilder* builder);

  /// @brief Method EndRedefine, addr 0x6047e10, size 0x18, virtual false, abstract: false, final false
  static inline void EndRedefine(::System::Xml::Schema::XsdBuilder* builder);

  /// @brief Method GetContainer, addr 0x60467a8, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* GetContainer(::System::Xml::Schema::XsdBuilder_State state);

  /// @brief Method GetNextState, addr 0x6045ba4, size 0x15c, virtual false, abstract: false, final false
  inline bool GetNextState(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method InitAll, addr 0x604ab00, size 0x74, virtual false, abstract: false, final false
  static inline void InitAll(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAnnotation, addr 0x604b670, size 0xd0, virtual false, abstract: false, final false
  static inline void InitAnnotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAny, addr 0x604ac58, size 0x74, virtual false, abstract: false, final false
  static inline void InitAny(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAnyAttribute, addr 0x604a2c4, size 0x254, virtual false, abstract: false, final false
  static inline void InitAnyAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAppinfo, addr 0x604b740, size 0xa0, virtual false, abstract: false, final false
  static inline void InitAppinfo(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAttribute, addr 0x6047e28, size 0xa8, virtual false, abstract: false, final false
  static inline void InitAttribute(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAttributeGroup, addr 0x604a0fc, size 0xbc, virtual false, abstract: false, final false
  static inline void InitAttributeGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitAttributeGroupRef, addr 0x604a1d8, size 0x70, virtual false, abstract: false, final false
  static inline void InitAttributeGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitChoice, addr 0x604ab74, size 0x74, virtual false, abstract: false, final false
  static inline void InitChoice(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitComplexContent, addr 0x6049988, size 0xf8, virtual false, abstract: false, final false
  static inline void InitComplexContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitComplexContentExtension, addr 0x6049b00, size 0xdc, virtual false, abstract: false, final false
  static inline void InitComplexContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitComplexContentRestriction, addr 0x6049c58, size 0x80, virtual false, abstract: false, final false
  static inline void InitComplexContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitComplexType, addr 0x60495f4, size 0x17c, virtual false, abstract: false, final false
  static inline void InitComplexType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitDocumentation, addr 0x604b87c, size 0xa0, virtual false, abstract: false, final false
  static inline void InitDocumentation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitElement, addr 0x6048528, size 0xf4, virtual false, abstract: false, final false
  static inline void InitElement(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitFacet, addr 0x604ae78, size 0x340, virtual false, abstract: false, final false
  static inline void InitFacet(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitField, addr 0x604b5a4, size 0xac, virtual false, abstract: false, final false
  static inline void InitField(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitGroup, addr 0x604a5e0, size 0xbc, virtual false, abstract: false, final false
  static inline void InitGroup(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitGroupRef, addr 0x604a6bc, size 0x74, virtual false, abstract: false, final false
  static inline void InitGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitIdentityConstraint, addr 0x604b25c, size 0x138, virtual false, abstract: false, final false
  static inline void InitIdentityConstraint(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitImport, addr 0x6047c54, size 0xac, virtual false, abstract: false, final false
  static inline void InitImport(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitInclude, addr 0x6047b88, size 0xac, virtual false, abstract: false, final false
  static inline void InitInclude(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitNotation, addr 0x604ad94, size 0x84, virtual false, abstract: false, final false
  static inline void InitNotation(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitRedefine, addr 0x6047d40, size 0xb0, virtual false, abstract: false, final false
  static inline void InitRedefine(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSchema, addr 0x6047b68, size 0x20, virtual false, abstract: false, final false
  static inline void InitSchema(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSelector, addr 0x604b4e4, size 0xa0, virtual false, abstract: false, final false
  static inline void InitSelector(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSequence, addr 0x604abe8, size 0x70, virtual false, abstract: false, final false
  static inline void InitSequence(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleContent, addr 0x6049d54, size 0xf8, virtual false, abstract: false, final false
  static inline void InitSimpleContent(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleContentExtension, addr 0x6049e4c, size 0xdc, virtual false, abstract: false, final false
  static inline void InitSimpleContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleContentRestriction, addr 0x6049fa4, size 0xdc, virtual false, abstract: false, final false
  static inline void InitSimpleContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleType, addr 0x6048d58, size 0x32c, virtual false, abstract: false, final false
  static inline void InitSimpleType(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleTypeList, addr 0x60493a4, size 0xac, virtual false, abstract: false, final false
  static inline void InitSimpleTypeList(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleTypeRestriction, addr 0x60494cc, size 0xac, virtual false, abstract: false, final false
  static inline void InitSimpleTypeRestriction(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method InitSimpleTypeUnion, addr 0x6049118, size 0xac, virtual false, abstract: false, final false
  static inline void InitSimpleTypeUnion(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);

  /// @brief Method IsContentParsed, addr 0x60464b4, size 0x18, virtual true, abstract: false, final false
  inline bool IsContentParsed();

  /// @brief Method IsSkipableElement, addr 0x6045e3c, size 0x24, virtual false, abstract: false, final false
  inline bool IsSkipableElement(::System::Xml::XmlQualifiedName* qname);

  static inline ::System::Xml::Schema::XsdBuilder* New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::XmlSchema* schema,
                                                            ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                            ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  /// @brief Method ParseBlockFinalEnum, addr 0x604789c, size 0x258, virtual false, abstract: false, final false
  inline int32_t ParseBlockFinalEnum(::StringW value, ::StringW attributeName);

  /// @brief Method ParseBoolean, addr 0x604869c, size 0x118, virtual false, abstract: false, final false
  inline bool ParseBoolean(::StringW value, ::StringW attributeName);

  /// @brief Method ParseEnum, addr 0x604765c, size 0xe4, virtual false, abstract: false, final false
  inline int32_t ParseEnum(::StringW value, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> values);

  /// @brief Method ParseQName, addr 0x6048314, size 0x178, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* ParseQName(::StringW value, ::StringW attributeName);

  /// @brief Method ParseUriReference, addr 0x604b854, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW ParseUriReference(::StringW s);

  /// @brief Method Pop, addr 0x60466e8, size 0xc0, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method ProcessAttribute, addr 0x6045f4c, size 0x450, virtual true, abstract: false, final false
  inline void ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value);

  /// @brief Method ProcessCData, addr 0x60464d4, size 0x5c, virtual true, abstract: false, final false
  inline void ProcessCData(::StringW value);

  /// @brief Method ProcessElement, addr 0x6045a84, size 0x120, virtual true, abstract: false, final false
  inline bool ProcessElement(::StringW prefix, ::StringW name, ::StringW ns);

  /// @brief Method ProcessMarkup, addr 0x60464cc, size 0x8, virtual true, abstract: false, final false
  inline void ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup);

  /// @brief Method Push, addr 0x6045d00, size 0x98, virtual false, abstract: false, final false
  inline void Push();

  /// @brief Method RecordPosition, addr 0x6045d98, size 0xa4, virtual false, abstract: false, final false
  inline void RecordPosition();

  /// @brief Method SendValidationEvent, addr 0x604baec, size 0x168, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method SendValidationEvent, addr 0x604639c, size 0x118, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x6045e60, size 0xec, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg);

  /// @brief Method SendValidationEvent, addr 0x604939c, size 0x8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method SendValidationEvent, addr 0x604bc54, size 0xd8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SetContainer, addr 0x60468e0, size 0xb88, virtual false, abstract: false, final false
  inline void SetContainer(::System::Xml::Schema::XsdBuilder_State state, ::System::Object* container);

  /// @brief Method SetMaxOccurs, addr 0x6048a18, size 0xc8, virtual false, abstract: false, final false
  inline void SetMaxOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value);

  /// @brief Method SetMinOccurs, addr 0x6048af8, size 0xc8, virtual false, abstract: false, final false
  inline void SetMinOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::StringW value);

  /// @brief Method StartChildren, addr 0x6046530, size 0x17c, virtual true, abstract: false, final false
  inline void StartChildren();

  constexpr ::System::Xml::Schema::XmlSchemaAll* const& __cordl_internal_get_all() const;

  constexpr ::System::Xml::Schema::XmlSchemaAll*& __cordl_internal_get_all();

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation* const& __cordl_internal_get_annotation() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& __cordl_internal_get_annotation();

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaAny* const& __cordl_internal_get_anyElement() const;

  constexpr ::System::Xml::Schema::XmlSchemaAny*& __cordl_internal_get_anyElement();

  constexpr ::System::Xml::Schema::XmlSchemaAppInfo* const& __cordl_internal_get_appInfo() const;

  constexpr ::System::Xml::Schema::XmlSchemaAppInfo*& __cordl_internal_get_appInfo();

  constexpr ::System::Xml::Schema::XmlSchemaAttribute* const& __cordl_internal_get_attribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAttribute*& __cordl_internal_get_attribute();

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup* const& __cordl_internal_get_attributeGroup() const;

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroup*& __cordl_internal_get_attributeGroup();

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroupRef* const& __cordl_internal_get_attributeGroupRef() const;

  constexpr ::System::Xml::Schema::XmlSchemaAttributeGroupRef*& __cordl_internal_get_attributeGroupRef();

  constexpr bool const& __cordl_internal_get_canIncludeImport() const;

  constexpr bool& __cordl_internal_get_canIncludeImport();

  constexpr ::System::Xml::Schema::XmlSchemaChoice* const& __cordl_internal_get_choice() const;

  constexpr ::System::Xml::Schema::XmlSchemaChoice*& __cordl_internal_get_choice();

  constexpr ::System::Xml::Schema::XmlSchemaComplexContent* const& __cordl_internal_get_complexContent() const;

  constexpr ::System::Xml::Schema::XmlSchemaComplexContent*& __cordl_internal_get_complexContent();

  constexpr ::System::Xml::Schema::XmlSchemaComplexContentExtension* const& __cordl_internal_get_complexContentExtension() const;

  constexpr ::System::Xml::Schema::XmlSchemaComplexContentExtension*& __cordl_internal_get_complexContentExtension();

  constexpr ::System::Xml::Schema::XmlSchemaComplexContentRestriction* const& __cordl_internal_get_complexContentRestriction() const;

  constexpr ::System::Xml::Schema::XmlSchemaComplexContentRestriction*& __cordl_internal_get_complexContentRestriction();

  constexpr ::System::Xml::Schema::XmlSchemaComplexType* const& __cordl_internal_get_complexType() const;

  constexpr ::System::Xml::Schema::XmlSchemaComplexType*& __cordl_internal_get_complexType();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_containerStack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_containerStack();

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry* const& __cordl_internal_get_currentEntry() const;

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry*& __cordl_internal_get_currentEntry();

  constexpr ::System::Xml::Schema::XmlSchemaDocumentation* const& __cordl_internal_get_documentation() const;

  constexpr ::System::Xml::Schema::XmlSchemaDocumentation*& __cordl_internal_get_documentation();

  constexpr ::System::Xml::Schema::XmlSchemaElement* const& __cordl_internal_get_element() const;

  constexpr ::System::Xml::Schema::XmlSchemaElement*& __cordl_internal_get_element();

  constexpr ::System::Xml::Schema::XmlSchemaFacet* const& __cordl_internal_get_facet() const;

  constexpr ::System::Xml::Schema::XmlSchemaFacet*& __cordl_internal_get_facet();

  constexpr ::System::Xml::Schema::XmlSchemaGroup* const& __cordl_internal_get_group() const;

  constexpr ::System::Xml::Schema::XmlSchemaGroup*& __cordl_internal_get_group();

  constexpr ::System::Xml::Schema::XmlSchemaGroupRef* const& __cordl_internal_get_groupRef() const;

  constexpr ::System::Xml::Schema::XmlSchemaGroupRef*& __cordl_internal_get_groupRef();

  constexpr bool const& __cordl_internal_get_hasChild() const;

  constexpr bool& __cordl_internal_get_hasChild();

  constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint* const& __cordl_internal_get_identityConstraint() const;

  constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& __cordl_internal_get_identityConstraint();

  constexpr ::System::Xml::Schema::XmlSchemaImport* const& __cordl_internal_get_import() const;

  constexpr ::System::Xml::Schema::XmlSchemaImport*& __cordl_internal_get_import();

  constexpr ::System::Xml::Schema::XmlSchemaInclude* const& __cordl_internal_get_include() const;

  constexpr ::System::Xml::Schema::XmlSchemaInclude*& __cordl_internal_get_include();

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> const& __cordl_internal_get_markup() const;

  constexpr ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>& __cordl_internal_get_markup();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_namespaceManager() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_namespaceManager();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_namespaces() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_namespaces();

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry* const& __cordl_internal_get_nextEntry() const;

  constexpr ::System::Xml::Schema::XsdBuilder_XsdEntry*& __cordl_internal_get_nextEntry();

  constexpr ::System::Xml::Schema::XmlSchemaNotation* const& __cordl_internal_get_notation() const;

  constexpr ::System::Xml::Schema::XmlSchemaNotation*& __cordl_internal_get_notation();

  constexpr ::System::Xml::Schema::XmlSchemaParticle* const& __cordl_internal_get_particle() const;

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_particle();

  constexpr ::System::Xml::PositionInfo* const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::PositionInfo*& __cordl_internal_get_positionInfo();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::System::Xml::Schema::XmlSchemaRedefine* const& __cordl_internal_get_redefine() const;

  constexpr ::System::Xml::Schema::XmlSchemaRedefine*& __cordl_internal_get_redefine();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr ::System::Xml::Schema::XmlSchemaSequence* const& __cordl_internal_get_sequence() const;

  constexpr ::System::Xml::Schema::XmlSchemaSequence*& __cordl_internal_get_sequence();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContent* const& __cordl_internal_get_simpleContent() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContent*& __cordl_internal_get_simpleContent();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContentExtension* const& __cordl_internal_get_simpleContentExtension() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContentExtension*& __cordl_internal_get_simpleContentExtension();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* const& __cordl_internal_get_simpleContentRestriction() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*& __cordl_internal_get_simpleContentRestriction();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_simpleType() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_simpleType();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList* const& __cordl_internal_get_simpleTypeList() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeList*& __cordl_internal_get_simpleTypeList();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* const& __cordl_internal_get_simpleTypeRestriction() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*& __cordl_internal_get_simpleTypeRestriction();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeUnion* const& __cordl_internal_get_simpleTypeUnion() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeUnion*& __cordl_internal_get_simpleTypeUnion();

  constexpr ::System::Xml::HWStack* const& __cordl_internal_get_stateHistory() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get_stateHistory();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_unhandledAttributes() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_unhandledAttributes();

  constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_validationEventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_validationEventHandler();

  constexpr ::System::Xml::Schema::XmlSchemaXPath* const& __cordl_internal_get_xpath() const;

  constexpr ::System::Xml::Schema::XmlSchemaXPath*& __cordl_internal_get_xpath();

  constexpr ::System::Xml::Schema::XmlSchemaObject* const& __cordl_internal_get_xso() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_xso();

  constexpr void __cordl_internal_set_all(::System::Xml::Schema::XmlSchemaAll* value);

  constexpr void __cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_anyElement(::System::Xml::Schema::XmlSchemaAny* value);

  constexpr void __cordl_internal_set_appInfo(::System::Xml::Schema::XmlSchemaAppInfo* value);

  constexpr void __cordl_internal_set_attribute(::System::Xml::Schema::XmlSchemaAttribute* value);

  constexpr void __cordl_internal_set_attributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* value);

  constexpr void __cordl_internal_set_attributeGroupRef(::System::Xml::Schema::XmlSchemaAttributeGroupRef* value);

  constexpr void __cordl_internal_set_canIncludeImport(bool value);

  constexpr void __cordl_internal_set_choice(::System::Xml::Schema::XmlSchemaChoice* value);

  constexpr void __cordl_internal_set_complexContent(::System::Xml::Schema::XmlSchemaComplexContent* value);

  constexpr void __cordl_internal_set_complexContentExtension(::System::Xml::Schema::XmlSchemaComplexContentExtension* value);

  constexpr void __cordl_internal_set_complexContentRestriction(::System::Xml::Schema::XmlSchemaComplexContentRestriction* value);

  constexpr void __cordl_internal_set_complexType(::System::Xml::Schema::XmlSchemaComplexType* value);

  constexpr void __cordl_internal_set_containerStack(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_currentEntry(::System::Xml::Schema::XsdBuilder_XsdEntry* value);

  constexpr void __cordl_internal_set_documentation(::System::Xml::Schema::XmlSchemaDocumentation* value);

  constexpr void __cordl_internal_set_element(::System::Xml::Schema::XmlSchemaElement* value);

  constexpr void __cordl_internal_set_facet(::System::Xml::Schema::XmlSchemaFacet* value);

  constexpr void __cordl_internal_set_group(::System::Xml::Schema::XmlSchemaGroup* value);

  constexpr void __cordl_internal_set_groupRef(::System::Xml::Schema::XmlSchemaGroupRef* value);

  constexpr void __cordl_internal_set_hasChild(bool value);

  constexpr void __cordl_internal_set_identityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value);

  constexpr void __cordl_internal_set_import(::System::Xml::Schema::XmlSchemaImport* value);

  constexpr void __cordl_internal_set_include(::System::Xml::Schema::XmlSchemaInclude* value);

  constexpr void __cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_namespaces(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_nextEntry(::System::Xml::Schema::XsdBuilder_XsdEntry* value);

  constexpr void __cordl_internal_set_notation(::System::Xml::Schema::XmlSchemaNotation* value);

  constexpr void __cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_redefine(::System::Xml::Schema::XmlSchemaRedefine* value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set_sequence(::System::Xml::Schema::XmlSchemaSequence* value);

  constexpr void __cordl_internal_set_simpleContent(::System::Xml::Schema::XmlSchemaSimpleContent* value);

  constexpr void __cordl_internal_set_simpleContentExtension(::System::Xml::Schema::XmlSchemaSimpleContentExtension* value);

  constexpr void __cordl_internal_set_simpleContentRestriction(::System::Xml::Schema::XmlSchemaSimpleContentRestriction* value);

  constexpr void __cordl_internal_set_simpleType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_simpleTypeList(::System::Xml::Schema::XmlSchemaSimpleTypeList* value);

  constexpr void __cordl_internal_set_simpleTypeRestriction(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* value);

  constexpr void __cordl_internal_set_simpleTypeUnion(::System::Xml::Schema::XmlSchemaSimpleTypeUnion* value);

  constexpr void __cordl_internal_set_stateHistory(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set_unhandledAttributes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_xpath(::System::Xml::Schema::XmlSchemaXPath* value);

  constexpr void __cordl_internal_set_xso(::System::Xml::Schema::XmlSchemaObject* value);

  /// @brief Method .ctor, addr 0x60458e0, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::XmlSchema* schema, ::System::Xml::XmlNameTable* nameTable,
                    ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_AllSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_AnnotatedSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AnnotationAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_AnnotationSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AnyAttributeAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AnyAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AppinfoAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AttributeAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AttributeGroupAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_AttributeGroupRefAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_AttributeGroupSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_AttributeSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ChoiceSequenceSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ComplexContentAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ComplexContentExtensionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ComplexContentExtensionSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ComplexContentRestrictionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ComplexContentRestrictionSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ComplexContentSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ComplexTypeAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ComplexTypeSubelements();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_DerivationMethodStrings();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DerivationMethodValues();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_DocumentationAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ElementAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_ElementSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_FacetAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_FieldAttributes();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_FormStringValues();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_GroupAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_GroupRefAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_GroupSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_IdentityConstraintAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_IdentityConstraintSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ImportAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_IncludeAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_NotationAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_ParticleAttributes();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_ProcessContentsStringValues();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_RedefineAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_RedefineSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SchemaAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SchemaElement();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdEntry*>*> getStaticF_SchemaEntries();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SchemaSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SelectorAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleContentAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleContentExtensionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleContentExtensionSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleContentRestrictionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleContentRestrictionSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleContentSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleTypeAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleTypeListAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleTypeListSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleTypeRestrictionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleTypeRestrictionSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleTypeSubelements();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> getStaticF_SimpleTypeUnionAttributes();

  static inline ::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> getStaticF_SimpleTypeUnionSubelements();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_UseStringValues();

  /// @brief Method get_CurrentElement, addr 0x6047468, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames_Token get_CurrentElement();

  /// @brief Method get_ParentContainer, addr 0x60474fc, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* get_ParentContainer();

  /// @brief Method get_ParentElement, addr 0x6047480, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames_Token get_ParentElement();

  static inline void setStaticF_AllSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_AnnotatedSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_AnnotationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AnnotationSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_AnyAttributeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AnyAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AppinfoAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AttributeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AttributeGroupAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AttributeGroupRefAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_AttributeGroupSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_AttributeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_ChoiceSequenceSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_ComplexContentAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ComplexContentExtensionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ComplexContentExtensionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void
  setStaticF_ComplexContentRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ComplexContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_ComplexContentSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_ComplexTypeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ComplexTypeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_DerivationMethodStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_DerivationMethodValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_DocumentationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ElementAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ElementSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_FacetAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_FieldAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_FormStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_GroupAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_GroupRefAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_GroupSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_IdentityConstraintAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_IdentityConstraintSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_ImportAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_IncludeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_NotationAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ParticleAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_ProcessContentsStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_RedefineAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_RedefineSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SchemaAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SchemaElement(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SchemaEntries(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdEntry*>*> value);

  static inline void setStaticF_SchemaSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SelectorAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleContentAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleContentExtensionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleContentExtensionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void
  setStaticF_SimpleContentRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleContentRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SimpleContentSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SimpleTypeAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleTypeListAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleTypeListSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SimpleTypeRestrictionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleTypeRestrictionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SimpleTypeSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_SimpleTypeUnionAttributes(::ArrayW<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, ::Array<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>*> value);

  static inline void setStaticF_SimpleTypeUnionSubelements(::ArrayW<::System::Xml::Schema::XsdBuilder_State, ::Array<::System::Xml::Schema::XsdBuilder_State>*> value);

  static inline void setStaticF_UseStringValues(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdBuilder(XsdBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdBuilder(XsdBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9826 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field positionInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::PositionInfo* ___positionInfo;

  /// @brief Field currentEntry, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XsdBuilder_XsdEntry* ___currentEntry;

  /// @brief Field nextEntry, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XsdBuilder_XsdEntry* ___nextEntry;

  /// @brief Field hasChild, offset: 0x30, size: 0x1, def value: None
  bool ___hasChild;

  /// @brief Field stateHistory, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::HWStack* ___stateHistory;

  /// @brief Field containerStack, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Stack* ___containerStack;

  /// @brief Field nameTable, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field namespaceManager, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___namespaceManager;

  /// @brief Field canIncludeImport, offset: 0x60, size: 0x1, def value: None
  bool ___canIncludeImport;

  /// @brief Field schema, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  /// @brief Field xso, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___xso;

  /// @brief Field element, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaElement* ___element;

  /// @brief Field anyElement, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAny* ___anyElement;

  /// @brief Field attribute, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttribute* ___attribute;

  /// @brief Field anyAttribute, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field complexType, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaComplexType* ___complexType;

  /// @brief Field simpleType, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___simpleType;

  /// @brief Field complexContent, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaComplexContent* ___complexContent;

  /// @brief Field complexContentExtension, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaComplexContentExtension* ___complexContentExtension;

  /// @brief Field complexContentRestriction, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaComplexContentRestriction* ___complexContentRestriction;

  /// @brief Field simpleContent, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleContent* ___simpleContent;

  /// @brief Field simpleContentExtension, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleContentExtension* ___simpleContentExtension;

  /// @brief Field simpleContentRestriction, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* ___simpleContentRestriction;

  /// @brief Field simpleTypeUnion, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleTypeUnion* ___simpleTypeUnion;

  /// @brief Field simpleTypeList, offset: 0xe0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleTypeList* ___simpleTypeList;

  /// @brief Field simpleTypeRestriction, offset: 0xe8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* ___simpleTypeRestriction;

  /// @brief Field group, offset: 0xf0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroup* ___group;

  /// @brief Field groupRef, offset: 0xf8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroupRef* ___groupRef;

  /// @brief Field all, offset: 0x100, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAll* ___all;

  /// @brief Field choice, offset: 0x108, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaChoice* ___choice;

  /// @brief Field sequence, offset: 0x110, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSequence* ___sequence;

  /// @brief Field particle, offset: 0x118, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___particle;

  /// @brief Field attributeGroup, offset: 0x120, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttributeGroup* ___attributeGroup;

  /// @brief Field attributeGroupRef, offset: 0x128, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAttributeGroupRef* ___attributeGroupRef;

  /// @brief Field notation, offset: 0x130, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaNotation* ___notation;

  /// @brief Field identityConstraint, offset: 0x138, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaIdentityConstraint* ___identityConstraint;

  /// @brief Field xpath, offset: 0x140, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaXPath* ___xpath;

  /// @brief Field include, offset: 0x148, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaInclude* ___include;

  /// @brief Field import, offset: 0x150, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaImport* ___import;

  /// @brief Field annotation, offset: 0x158, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnnotation* ___annotation;

  /// @brief Field appInfo, offset: 0x160, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAppInfo* ___appInfo;

  /// @brief Field documentation, offset: 0x168, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDocumentation* ___documentation;

  /// @brief Field facet, offset: 0x170, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaFacet* ___facet;

  /// @brief Field markup, offset: 0x178, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> ___markup;

  /// @brief Field redefine, offset: 0x180, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaRedefine* ___redefine;

  /// @brief Field validationEventHandler, offset: 0x188, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___validationEventHandler;

  /// @brief Field unhandledAttributes, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___unhandledAttributes;

  /// @brief Field namespaces, offset: 0x198, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___namespaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___positionInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___currentEntry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___nextEntry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___hasChild) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___stateHistory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___containerStack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___nameTable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___schemaNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___namespaceManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___canIncludeImport) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___schema) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___xso) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___element) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___anyElement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___attribute) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___anyAttribute) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___complexType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___complexContent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___complexContentExtension) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___complexContentRestriction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleContent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleContentExtension) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleContentRestriction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleTypeUnion) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleTypeList) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___simpleTypeRestriction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___group) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___groupRef) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___all) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___choice) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___sequence) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___particle) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___attributeGroup) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___attributeGroupRef) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___notation) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___identityConstraint) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___xpath) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___include) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___import) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___annotation) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___appInfo) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___documentation) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___facet) == 0x170, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___markup) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___redefine) == 0x180, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___validationEventHandler) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___unhandledAttributes) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdBuilder, ___namespaces) == 0x198, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdBuilder, 0x1a0>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_State, "System.Xml.Schema", "XsdBuilder/State");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder*, "System.Xml.Schema", "XsdBuilder");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_BuilderNamespaceManager*, "System.Xml.Schema", "XsdBuilder/BuilderNamespaceManager");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_XsdAttributeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*, "System.Xml.Schema", "XsdBuilder/XsdAttributeEntry");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_XsdBuildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_XsdBuildFunction*, "System.Xml.Schema", "XsdBuilder/XsdBuildFunction");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_XsdEndChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_XsdEndChildFunction*, "System.Xml.Schema", "XsdBuilder/XsdEndChildFunction");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_XsdEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_XsdEntry*, "System.Xml.Schema", "XsdBuilder/XsdEntry");
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder_XsdInitFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder_XsdInitFunction*, "System.Xml.Schema", "XsdBuilder/XsdInitFunction");
