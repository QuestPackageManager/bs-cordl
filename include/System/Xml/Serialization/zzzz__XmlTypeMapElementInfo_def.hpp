#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapElementInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTypeMapElementInfo)
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapElementInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapElementInfo);
// Dependencies System.Object, System.Xml.Schema.XmlSchemaForm
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeMapElementInfo
class CORDL_TYPE XmlTypeMapElementInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChoiceValue, put = set_ChoiceValue)) ::System::Object* ChoiceValue;

  __declspec(property(get = get_DataTypeName)) ::StringW DataTypeName;

  __declspec(property(get = get_DataTypeNamespace)) ::StringW DataTypeNamespace;

  __declspec(property(get = get_ElementName, put = set_ElementName)) ::StringW ElementName;

  __declspec(property(get = get_ExplicitOrder, put = set_ExplicitOrder)) int32_t ExplicitOrder;

  __declspec(property(get = get_Form, put = set_Form)) ::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsTextElement, put = set_IsTextElement)) bool IsTextElement;

  __declspec(property(get = get_IsUnnamedAnyElement, put = set_IsUnnamedAnyElement)) bool IsUnnamedAnyElement;

  __declspec(property(get = get_MappedType, put = set_MappedType)) ::System::Xml::Serialization::XmlTypeMapping* MappedType;

  __declspec(property(get = get_Member)) ::System::Xml::Serialization::XmlTypeMapMember* Member;

  __declspec(property(get = get_MultiReferenceType)) bool MultiReferenceType;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(put = set_NestingLevel)) int32_t NestingLevel;

  __declspec(property(get = get_TypeData)) ::System::Xml::Serialization::TypeData* TypeData;

  __declspec(property(get = get_WrappedElement, put = set_WrappedElement)) bool WrappedElement;

  /// @brief Field _choiceValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceValue, put = __cordl_internal_set__choiceValue)) ::System::Object* _choiceValue;

  /// @brief Field _elementName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__elementName, put = __cordl_internal_set__elementName)) ::StringW _elementName;

  /// @brief Field _explicitOrder, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__explicitOrder, put = __cordl_internal_set__explicitOrder)) int32_t _explicitOrder;

  /// @brief Field _form, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__form, put = __cordl_internal_set__form)) ::System::Xml::Schema::XmlSchemaForm _form;

  /// @brief Field _isNullable, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isNullable, put = __cordl_internal_set__isNullable)) bool _isNullable;

  /// @brief Field _mappedType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mappedType, put = __cordl_internal_set__mappedType)) ::System::Xml::Serialization::XmlTypeMapping* _mappedType;

  /// @brief Field _member, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__member, put = __cordl_internal_set__member)) ::System::Xml::Serialization::XmlTypeMapMember* _member;

  /// @brief Field _namespace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__namespace, put = __cordl_internal_set__namespace)) ::StringW _namespace;

  /// @brief Field _nestingLevel, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__nestingLevel, put = __cordl_internal_set__nestingLevel)) int32_t _nestingLevel;

  /// @brief Field _type, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Xml::Serialization::TypeData* _type;

  /// @brief Field _wrappedElement, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__wrappedElement, put = __cordl_internal_set__wrappedElement)) bool _wrappedElement;

  /// @brief Method Equals, addr 0x438f704, size 0x138, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x438f83c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Serialization::XmlTypeMapElementInfo* New_ctor(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* type);

  constexpr ::System::Object* const& __cordl_internal_get__choiceValue() const;

  constexpr ::System::Object*& __cordl_internal_get__choiceValue();

  constexpr ::StringW const& __cordl_internal_get__elementName() const;

  constexpr ::StringW& __cordl_internal_get__elementName();

  constexpr int32_t const& __cordl_internal_get__explicitOrder() const;

  constexpr int32_t& __cordl_internal_get__explicitOrder();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get__form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get__form();

  constexpr bool const& __cordl_internal_get__isNullable() const;

  constexpr bool& __cordl_internal_get__isNullable();

  constexpr ::System::Xml::Serialization::XmlTypeMapping* const& __cordl_internal_get__mappedType() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get__mappedType();

  constexpr ::System::Xml::Serialization::XmlTypeMapMember* const& __cordl_internal_get__member() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapMember*& __cordl_internal_get__member();

  constexpr ::StringW const& __cordl_internal_get__namespace() const;

  constexpr ::StringW& __cordl_internal_get__namespace();

  constexpr int32_t const& __cordl_internal_get__nestingLevel() const;

  constexpr int32_t& __cordl_internal_get__nestingLevel();

  constexpr ::System::Xml::Serialization::TypeData* const& __cordl_internal_get__type() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get__type();

  constexpr bool const& __cordl_internal_get__wrappedElement() const;

  constexpr bool& __cordl_internal_get__wrappedElement();

  constexpr void __cordl_internal_set__choiceValue(::System::Object* value);

  constexpr void __cordl_internal_set__elementName(::StringW value);

  constexpr void __cordl_internal_set__explicitOrder(int32_t value);

  constexpr void __cordl_internal_set__form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set__isNullable(bool value);

  constexpr void __cordl_internal_set__mappedType(::System::Xml::Serialization::XmlTypeMapping* value);

  constexpr void __cordl_internal_set__member(::System::Xml::Serialization::XmlTypeMapMember* value);

  constexpr void __cordl_internal_set__namespace(::StringW value);

  constexpr void __cordl_internal_set__nestingLevel(int32_t value);

  constexpr void __cordl_internal_set__type(::System::Xml::Serialization::TypeData* value);

  constexpr void __cordl_internal_set__wrappedElement(bool value);

  /// @brief Method .ctor, addr 0x438f39c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* type);

  /// @brief Method get_ChoiceValue, addr 0x438f450, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ChoiceValue();

  /// @brief Method get_DataTypeName, addr 0x438c544, size 0x30, virtual false, abstract: false, final false
  inline ::StringW get_DataTypeName();

  /// @brief Method get_DataTypeNamespace, addr 0x438c574, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_DataTypeNamespace();

  /// @brief Method get_ElementName, addr 0x438f460, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ElementName();

  /// @brief Method get_ExplicitOrder, addr 0x438f6f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ExplicitOrder();

  /// @brief Method get_Form, addr 0x438f480, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_IsNullable, addr 0x438f4a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_IsTextElement, addr 0x438f4f8, size 0x4c, virtual false, abstract: false, final false
  inline bool get_IsTextElement();

  /// @brief Method get_IsUnnamedAnyElement, addr 0x438f600, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsUnnamedAnyElement();

  /// @brief Method get_MappedType, addr 0x438f490, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* get_MappedType();

  /// @brief Method get_Member, addr 0x438f4b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMember* get_Member();

  /// @brief Method get_MultiReferenceType, addr 0x438f4c4, size 0x20, virtual false, abstract: false, final false
  inline bool get_MultiReferenceType();

  /// @brief Method get_Namespace, addr 0x438f470, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_TypeData, addr 0x438f448, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_TypeData();

  /// @brief Method get_WrappedElement, addr 0x438f4e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_WrappedElement();

  /// @brief Method set_ChoiceValue, addr 0x438f458, size 0x8, virtual false, abstract: false, final false
  inline void set_ChoiceValue(::System::Object* value);

  /// @brief Method set_ElementName, addr 0x438f468, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementName(::StringW value);

  /// @brief Method set_ExplicitOrder, addr 0x438f6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_ExplicitOrder(int32_t value);

  /// @brief Method set_Form, addr 0x438f488, size 0x8, virtual false, abstract: false, final false
  inline void set_Form(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_IsNullable, addr 0x438f4a8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

  /// @brief Method set_IsTextElement, addr 0x438f544, size 0xbc, virtual false, abstract: false, final false
  inline void set_IsTextElement(bool value);

  /// @brief Method set_IsUnnamedAnyElement, addr 0x438f654, size 0xa0, virtual false, abstract: false, final false
  inline void set_IsUnnamedAnyElement(bool value);

  /// @brief Method set_MappedType, addr 0x438f498, size 0x8, virtual false, abstract: false, final false
  inline void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* value);

  /// @brief Method set_Namespace, addr 0x438f478, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_NestingLevel, addr 0x438f4bc, size 0x8, virtual false, abstract: false, final false
  inline void set_NestingLevel(int32_t value);

  /// @brief Method set_WrappedElement, addr 0x438f4ec, size 0xc, virtual false, abstract: false, final false
  inline void set_WrappedElement(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapElementInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapElementInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapElementInfo(XmlTypeMapElementInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapElementInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapElementInfo(XmlTypeMapElementInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7456 };

  /// @brief Field _elementName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____elementName;

  /// @brief Field _namespace, offset: 0x18, size: 0x8, def value: None
  ::StringW ____namespace;

  /// @brief Field _form, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ____form;

  /// @brief Field _member, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMember* ____member;

  /// @brief Field _choiceValue, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____choiceValue;

  /// @brief Field _isNullable, offset: 0x38, size: 0x1, def value: None
  bool ____isNullable;

  /// @brief Field _nestingLevel, offset: 0x3c, size: 0x4, def value: None
  int32_t ____nestingLevel;

  /// @brief Field _mappedType, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapping* ____mappedType;

  /// @brief Field _type, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ____type;

  /// @brief Field _wrappedElement, offset: 0x50, size: 0x1, def value: None
  bool ____wrappedElement;

  /// @brief Field _explicitOrder, offset: 0x54, size: 0x4, def value: None
  int32_t ____explicitOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____elementName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____namespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____form) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____member) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____choiceValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____isNullable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____nestingLevel) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____mappedType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____type) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____wrappedElement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapElementInfo, ____explicitOrder) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapElementInfo, 0x58>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapElementInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapElementInfo*, "System.Xml.Serialization", "XmlTypeMapElementInfo");
