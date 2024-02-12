#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeList)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeList);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11636))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11637))
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeList*
class CORDL_TYPE XmlSchemaSimpleTypeList : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
  // Declarations
  /// @brief Field itemTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_itemTypeName, put = __cordl_internal_set_itemTypeName))::System::Xml::XmlQualifiedName* itemTypeName;

  /// @brief Field itemType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_itemType, put = __cordl_internal_set_itemType))::System::Xml::Schema::XmlSchemaSimpleType* itemType;

  /// @brief Field baseItemType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_baseItemType, put = __cordl_internal_set_baseItemType))::System::Xml::Schema::XmlSchemaSimpleType* baseItemType;

  __declspec(property(put = set_ItemType))::System::Xml::Schema::XmlSchemaSimpleType* ItemType;

  __declspec(property(get = get_BaseItemType, put = set_BaseItemType))::System::Xml::Schema::XmlSchemaSimpleType* BaseItemType;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_itemTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_itemTypeName() const;

  constexpr void __cordl_internal_set_itemTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_itemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& __cordl_internal_get_itemType() const;

  constexpr void __cordl_internal_set_itemType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_baseItemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& __cordl_internal_get_baseItemType() const;

  constexpr void __cordl_internal_set_baseItemType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_ItemType, addr 0x28cb764, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method get_BaseItemType, addr 0x28cb76c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType();

  /// @brief Method set_BaseItemType, addr 0x28cb774, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline ::System::Xml::Schema::XmlSchemaSimpleTypeList* New_ctor();

  /// @brief Method .ctor, addr 0x28cb77c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleTypeList();

public:
  /// @brief Field itemTypeName, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___itemTypeName;

  /// @brief Field itemType, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___itemType;

  /// @brief Field baseItemType, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___baseItemType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeList, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeList, ___itemTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeList, ___itemType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeList, ___baseItemType) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeList*, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
