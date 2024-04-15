#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClassMap)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfo;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberAnyAttribute;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberAnyElement;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberAttribute;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberExpandable;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberNamespaces;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Serialization {
class ClassMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::ClassMap);
// Type: System.Xml.Serialization::ClassMap
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::ClassMap*
class CORDL_TYPE ClassMap : public ::System::Xml::Serialization::ObjectMap {
public:
  // Declarations
  __declspec(property(get = get_AllMembers))::System::Collections::ArrayList* AllMembers;

  __declspec(property(get = get_AttributeMembers))::System::Collections::ICollection* AttributeMembers;

  __declspec(property(get = get_DefaultAnyAttributeMember))::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* DefaultAnyAttributeMember;

  __declspec(property(get = get_DefaultAnyElementMember))::System::Xml::Serialization::XmlTypeMapMemberAnyElement* DefaultAnyElementMember;

  __declspec(property(get = get_ElementMembers))::System::Collections::ICollection* ElementMembers;

  __declspec(property(get = get_FlatLists))::System::Collections::ArrayList* FlatLists;

  __declspec(property(get = get_HasSimpleContent)) bool HasSimpleContent;

  __declspec(property(get = get_IsOrderDependentMap)) bool IsOrderDependentMap;

  __declspec(property(get = get_ListMembers))::System::Collections::ArrayList* ListMembers;

  __declspec(property(get = get_NamespaceDeclarations))::System::Xml::Serialization::XmlTypeMapMemberNamespaces* NamespaceDeclarations;

  __declspec(property(get = get_ReturnMember))::System::Xml::Serialization::XmlTypeMapMember* ReturnMember;

  __declspec(property(get = get_SimpleContentBaseType))::System::Xml::XmlQualifiedName* SimpleContentBaseType;

  __declspec(property(get = get_XmlTextCollector))::System::Xml::Serialization::XmlTypeMapMember* XmlTextCollector;

  /// @brief Field _allMembers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__allMembers, put = __cordl_internal_set__allMembers))::System::Collections::ArrayList* _allMembers;

  /// @brief Field _attributeMembers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeMembers, put = __cordl_internal_set__attributeMembers))::System::Collections::Hashtable* _attributeMembers;

  /// @brief Field _attributeMembersArray, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeMembersArray,
                      put = __cordl_internal_set__attributeMembersArray))::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*,
                                                                                  ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> _attributeMembersArray;

  /// @brief Field _canBeSimpleType, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__canBeSimpleType, put = __cordl_internal_set__canBeSimpleType)) bool _canBeSimpleType;

  /// @brief Field _defaultAnyAttribute, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAnyAttribute,
                      put = __cordl_internal_set__defaultAnyAttribute))::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute;

  /// @brief Field _defaultAnyElement, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultAnyElement, put = __cordl_internal_set__defaultAnyElement))::System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement;

  /// @brief Field _elementMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__elementMembers, put = __cordl_internal_set__elementMembers))::System::Collections::ArrayList* _elementMembers;

  /// @brief Field _elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements))::System::Collections::Hashtable* _elements;

  /// @brief Field _flatLists, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__flatLists, put = __cordl_internal_set__flatLists))::System::Collections::ArrayList* _flatLists;

  /// @brief Field _ignoreMemberNamespace, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreMemberNamespace, put = __cordl_internal_set__ignoreMemberNamespace)) bool _ignoreMemberNamespace;

  /// @brief Field _isOrderDependentMap, offset 0x7a, size 0x2
  __declspec(property(get = __cordl_internal_get__isOrderDependentMap, put = __cordl_internal_set__isOrderDependentMap))::System::Nullable_1<bool> _isOrderDependentMap;

  /// @brief Field _listMembers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__listMembers, put = __cordl_internal_set__listMembers))::System::Collections::ArrayList* _listMembers;

  /// @brief Field _membersWithDefault, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__membersWithDefault, put = __cordl_internal_set__membersWithDefault))::System::Collections::ArrayList* _membersWithDefault;

  /// @brief Field _namespaceDeclarations, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__namespaceDeclarations,
                      put = __cordl_internal_set__namespaceDeclarations))::System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations;

  /// @brief Field _returnMember, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__returnMember, put = __cordl_internal_set__returnMember))::System::Xml::Serialization::XmlTypeMapMember* _returnMember;

  /// @brief Field _xmlTextCollector, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlTextCollector, put = __cordl_internal_set__xmlTextCollector))::System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector;

  /// @brief Method AddMember, addr 0x2deff38, size 0xc64, virtual false, abstract: false, final false
  inline void AddMember(::System::Xml::Serialization::XmlTypeMapMember* member);

  /// @brief Method BuildKey, addr 0x2df0b9c, size 0xe0, virtual false, abstract: false, final false
  inline ::StringW BuildKey(::StringW name, ::StringW ns, int32_t explicitOrder);

  /// @brief Method GetAttribute, addr 0x2df0d1c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMemberAttribute* GetAttribute(::StringW name, ::StringW ns);

  /// @brief Method GetElement, addr 0x2df11a0, size 0x3a4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::StringW name, ::StringW ns);

  /// @brief Method GetElement, addr 0x2df0dd8, size 0x3c8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::StringW name, ::StringW ns, int32_t minimalOrder);

  static inline ::System::Xml::Serialization::ClassMap* New_ctor();

  /// @brief Method RegisterFlatList, addr 0x2df0c7c, size 0xa0, virtual false, abstract: false, final false
  inline void RegisterFlatList(::System::Xml::Serialization::XmlTypeMapMemberExpandable* member);

  /// @brief Method SetCanBeSimpleType, addr 0x2df1b3c, size 0xc, virtual false, abstract: false, final false
  inline void SetCanBeSimpleType(bool can);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__allMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__allMembers() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__attributeMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__attributeMembers() const;

  constexpr ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> const&
  __cordl_internal_get__attributeMembersArray() const;

  constexpr ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*>& __cordl_internal_get__attributeMembersArray();

  constexpr bool const& __cordl_internal_get__canBeSimpleType() const;

  constexpr bool& __cordl_internal_get__canBeSimpleType();

  constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*& __cordl_internal_get__defaultAnyAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*> const& __cordl_internal_get__defaultAnyAttribute() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapMemberAnyElement*& __cordl_internal_get__defaultAnyElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*> const& __cordl_internal_get__defaultAnyElement() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__elementMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__elementMembers() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__elements() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__flatLists();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__flatLists() const;

  constexpr bool const& __cordl_internal_get__ignoreMemberNamespace() const;

  constexpr bool& __cordl_internal_get__ignoreMemberNamespace();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isOrderDependentMap() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isOrderDependentMap();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__listMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__listMembers() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__membersWithDefault();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__membersWithDefault() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapMemberNamespaces*& __cordl_internal_get__namespaceDeclarations();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapMemberNamespaces*> const& __cordl_internal_get__namespaceDeclarations() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapMember*& __cordl_internal_get__returnMember();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapMember*> const& __cordl_internal_get__returnMember() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapMember*& __cordl_internal_get__xmlTextCollector();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapMember*> const& __cordl_internal_get__xmlTextCollector() const;

  constexpr void __cordl_internal_set__allMembers(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__attributeMembers(::System::Collections::Hashtable* value);

  constexpr void
  __cordl_internal_set__attributeMembersArray(::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> value);

  constexpr void __cordl_internal_set__canBeSimpleType(bool value);

  constexpr void __cordl_internal_set__defaultAnyAttribute(::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* value);

  constexpr void __cordl_internal_set__defaultAnyElement(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* value);

  constexpr void __cordl_internal_set__elementMembers(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__elements(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__flatLists(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__ignoreMemberNamespace(bool value);

  constexpr void __cordl_internal_set__isOrderDependentMap(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__listMembers(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__membersWithDefault(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__namespaceDeclarations(::System::Xml::Serialization::XmlTypeMapMemberNamespaces* value);

  constexpr void __cordl_internal_set__returnMember(::System::Xml::Serialization::XmlTypeMapMember* value);

  constexpr void __cordl_internal_set__xmlTextCollector(::System::Xml::Serialization::XmlTypeMapMember* value);

  /// @brief Method .ctor, addr 0x2df1bb4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllMembers, addr 0x2df193c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_AllMembers();

  /// @brief Method get_AttributeMembers, addr 0x2de8968, size 0x414, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_AttributeMembers();

  /// @brief Method get_DefaultAnyAttributeMember, addr 0x2df1924, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* get_DefaultAnyAttributeMember();

  /// @brief Method get_DefaultAnyElementMember, addr 0x2df191c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* get_DefaultAnyElementMember();

  /// @brief Method get_ElementMembers, addr 0x2df1934, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* get_ElementMembers();

  /// @brief Method get_FlatLists, addr 0x2df1944, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_FlatLists();

  /// @brief Method get_HasSimpleContent, addr 0x2df1b48, size 0x6c, virtual false, abstract: false, final false
  inline bool get_HasSimpleContent();

  /// @brief Method get_IsOrderDependentMap, addr 0x2df1544, size 0x3d8, virtual false, abstract: false, final false
  inline bool get_IsOrderDependentMap();

  /// @brief Method get_ListMembers, addr 0x2df194c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_ListMembers();

  /// @brief Method get_NamespaceDeclarations, addr 0x2df192c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* get_NamespaceDeclarations();

  /// @brief Method get_ReturnMember, addr 0x2df195c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMember* get_ReturnMember();

  /// @brief Method get_SimpleContentBaseType, addr 0x2df1964, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_SimpleContentBaseType();

  /// @brief Method get_XmlTextCollector, addr 0x2df1954, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMember* get_XmlTextCollector();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClassMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClassMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClassMap(ClassMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClassMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClassMap(ClassMap const&) = delete;

  /// @brief Field _elements, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____elements;

  /// @brief Field _elementMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____elementMembers;

  /// @brief Field _attributeMembers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____attributeMembers;

  /// @brief Field _attributeMembersArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Serialization::XmlTypeMapMemberAttribute*, ::Array<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>*> ____attributeMembersArray;

  /// @brief Field _flatLists, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____flatLists;

  /// @brief Field _allMembers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____allMembers;

  /// @brief Field _membersWithDefault, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____membersWithDefault;

  /// @brief Field _listMembers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____listMembers;

  /// @brief Field _defaultAnyElement, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* ____defaultAnyElement;

  /// @brief Field _defaultAnyAttribute, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* ____defaultAnyAttribute;

  /// @brief Field _namespaceDeclarations, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* ____namespaceDeclarations;

  /// @brief Field _xmlTextCollector, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMember* ____xmlTextCollector;

  /// @brief Field _returnMember, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapMember* ____returnMember;

  /// @brief Field _ignoreMemberNamespace, offset: 0x78, size: 0x1, def value: None
  bool ____ignoreMemberNamespace;

  /// @brief Field _canBeSimpleType, offset: 0x79, size: 0x1, def value: None
  bool ____canBeSimpleType;

  /// @brief Field _isOrderDependentMap, offset: 0x7a, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____isOrderDependentMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::ClassMap, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____elements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____elementMembers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____attributeMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____attributeMembersArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____flatLists) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____allMembers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____membersWithDefault) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____listMembers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____defaultAnyElement) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____defaultAnyAttribute) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____namespaceDeclarations) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____xmlTextCollector) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____returnMember) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____ignoreMemberNamespace) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____canBeSimpleType) == 0x79, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ClassMap, ____isOrderDependentMap) == 0x7a, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::ClassMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ClassMap*, "System.Xml.Serialization", "ClassMap");
