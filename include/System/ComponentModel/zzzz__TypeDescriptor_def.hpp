#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDescriptor)
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class RefreshEventHandler;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__FilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__IUnimplemented;
}
namespace System::ComponentModel {
class __TypeDescriptor__MemberDescriptorComparer;
}
namespace System::ComponentModel {
class __TypeDescriptor__MergedTypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptionNode;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorComObject;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorInterface;
}
namespace System::Diagnostics {
class BooleanSwitch;
}
namespace System {
class Attribute;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__FilterCacheItem;
}
namespace System::ComponentModel {
class __TypeDescriptor__IUnimplemented;
}
namespace System::ComponentModel {
class __TypeDescriptor__MemberDescriptorComparer;
}
namespace System::ComponentModel {
class __TypeDescriptor__MergedTypeDescriptor;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptionNode;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorComObject;
}
namespace System::ComponentModel {
class __TypeDescriptor__TypeDescriptorInterface;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;
}
namespace GlobalNamespace {
struct __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__FilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__IUnimplemented);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface);
MARK_VAL_T(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor);
MARK_VAL_T(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor);
// Type: ::AttributeFilterCacheItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7491))
// CS Name: ::TypeDescriptor::AttributeFilterCacheItem*
class CORDL_TYPE __TypeDescriptor__AttributeFilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _filter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter))::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _filter;

  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers))::System::Collections::ICollection* FilteredMembers;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__filter();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__filter() const;

  constexpr void __cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  static inline ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                               ::System::Collections::ICollection* filteredMembers);

  /// @brief Method .ctor, addr 0x2937dfc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Collections::ICollection* filteredMembers);

  /// @brief Method IsValid, addr 0x2937d84, size 0x78, virtual false, abstract: false, final false
  inline bool IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__AttributeFilterCacheItem();

public:
  /// @brief Field _filter, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____filter;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ____filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::FilterCacheItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7492))
// CS Name: ::TypeDescriptor::FilterCacheItem*
class CORDL_TYPE __TypeDescriptor__FilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _filterService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filterService, put = __cordl_internal_set__filterService))::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService;

  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers))::System::Collections::ICollection* FilteredMembers;

  constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& __cordl_internal_get__filterService();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::ITypeDescriptorFilterService*> const& __cordl_internal_get__filterService() const;

  constexpr void __cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  static inline ::System::ComponentModel::__TypeDescriptor__FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                                      ::System::Collections::ICollection* filteredMembers);

  /// @brief Method .ctor, addr 0x2937e38, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers);

  /// @brief Method IsValid, addr 0x2937e28, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__FilterCacheItem();

public:
  /// @brief Field _filterService, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::ITypeDescriptorFilterService* ____filterService;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__FilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ____filterService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::IUnimplemented
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7493))
// CS Name: ::TypeDescriptor::IUnimplemented*
class CORDL_TYPE __TypeDescriptor__IUnimplemented {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__IUnimplemented", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__IUnimplemented(__TypeDescriptor__IUnimplemented&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__IUnimplemented", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__IUnimplemented(__TypeDescriptor__IUnimplemented const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
// Type: ::MemberDescriptorComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7494))
// CS Name: ::TypeDescriptor::MemberDescriptorComparer*
class CORDL_TYPE __TypeDescriptor__MemberDescriptorComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* Instance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_Instance(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* value);

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* getStaticF_Instance();

  /// @brief Method Compare, addr 0x293830c, size 0x16c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* left, ::System::Object* right);

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2938478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MemberDescriptorComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::MergedTypeDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7495))
// CS Name: ::TypeDescriptor::MergedTypeDescriptor*
class CORDL_TYPE __TypeDescriptor__MergedTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _primary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__primary, put = __cordl_internal_set__primary))::System::ComponentModel::ICustomTypeDescriptor* _primary;

  /// @brief Field _secondary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary, put = __cordl_internal_set__secondary))::System::ComponentModel::ICustomTypeDescriptor* _secondary;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__primary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__primary() const;

  constexpr void __cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value);

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__secondary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__secondary() const;

  constexpr void __cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value);

  static inline ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                           ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Method .ctor, addr 0x2936548, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x29384e4, size 0x110, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x29385f4, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x293870c, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x2938824, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x293893c, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x2938a54, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x2938b6c, size 0x1b4, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x2938d20, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x2938e38, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x2938f68, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x2939080, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x29391b0, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MergedTypeDescriptor();

public:
  /// @brief Field _primary, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____primary;

  /// @brief Field _secondary, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____secondary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____primary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____secondary) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::DefaultExtendedTypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7496))
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  /// @brief Method .ctor, addr 0x29393fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Object* instance);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x29396c8, size 0x2dc, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x29399a4, size 0x244, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x2939be8, size 0x20c, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x2939df4, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x293a09c, size 0x20c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x293a2a8, size 0x20c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x293a4b4, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x293a75c, size 0x2e0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x293aa3c, size 0x2e8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x293ad24, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x293afcc, size 0x2b0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x293b27c, size 0x1228, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Object* _instance) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor();

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _instance, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, _instance) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DefaultTypeDescriptor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7497))
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  /// @brief Method .ctor, addr 0x293c4a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Type* objectType, ::System::Object* instance);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x293c4b0, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x293c758, size 0x23c, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x293c994, size 0x210, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x293cba4, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x293ce50, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x293d060, size 0x210, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x293d270, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x293d51c, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x293d7c8, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x293da7c, size 0x2ac, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x293dd28, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x293dfdc, size 0x22c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_objectType", ty:
  // "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Type* _objectType,
                                                                         ::System::Object* _instance) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor();

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _objectType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _objectType;

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _objectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, _instance) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TypeDescriptionNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7470))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7498))
// CS Name: ::TypeDescriptor::TypeDescriptionNode*
class CORDL_TYPE __TypeDescriptor__TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using DefaultTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;

  using DefaultExtendedTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* Next;

  /// @brief Field Provider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider))::System::ComponentModel::TypeDescriptionProvider* Provider;

  constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*> const& __cordl_internal_get_Next() const;

  constexpr void __cordl_internal_set_Next(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* value);

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& __cordl_internal_get_Provider() const;

  constexpr void __cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value);

  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

  /// @brief Method .ctor, addr 0x2931a34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

  /// @brief Method GetCache, addr 0x29392e0, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x2939350, size 0xac, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x2939404, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x2939474, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x2939550, size 0x178, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode();

public:
  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* ___Next;

  /// @brief Field Provider, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ___Provider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Provider) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorComObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7499))
// CS Name: ::TypeDescriptor::TypeDescriptorComObject*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorComObject : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorComObject();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7500))
// CS Name: ::TypeDescriptor::TypeDescriptorInterface*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorInterface : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorInterface();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7501))
// CS Name: ::System.ComponentModel::TypeDescriptor*
class CORDL_TYPE TypeDescriptor : public ::System::Object {
public:
  // Declarations
  using TypeDescriptorInterface = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface;

  using TypeDescriptorComObject = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject;

  using TypeDescriptionNode = ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode;

  using MergedTypeDescriptor = ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor;

  using MemberDescriptorComparer = ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer;

  using IUnimplemented = ::System::ComponentModel::__TypeDescriptor__IUnimplemented;

  using FilterCacheItem = ::System::ComponentModel::__TypeDescriptor__FilterCacheItem;

  using AttributeFilterCacheItem = ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem;

  /// @brief Field _providerTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTable, put = setStaticF__providerTable))::System::ComponentModel::WeakHashtable* _providerTable;

  /// @brief Field _providerTypeTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTypeTable, put = setStaticF__providerTypeTable))::System::Collections::Hashtable* _providerTypeTable;

  /// @brief Field _defaultProviders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultProviders, put = setStaticF__defaultProviders))::System::Collections::Hashtable* _defaultProviders;

  /// @brief Field _associationTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__associationTable, put = setStaticF__associationTable))::System::ComponentModel::WeakHashtable* _associationTable;

  /// @brief Field _metadataVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__metadataVersion, put = setStaticF__metadataVersion)) int32_t _metadataVersion;

  /// @brief Field _collisionIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__collisionIndex, put = setStaticF__collisionIndex)) int32_t _collisionIndex;

  /// @brief Field TraceDescriptor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TraceDescriptor, put = setStaticF_TraceDescriptor))::System::Diagnostics::BooleanSwitch* TraceDescriptor;

  /// @brief Field _pipelineInitializeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineInitializeKeys, put = setStaticF__pipelineInitializeKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineInitializeKeys;

  /// @brief Field _pipelineMergeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineMergeKeys, put = setStaticF__pipelineMergeKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineMergeKeys;

  /// @brief Field _pipelineFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineFilterKeys, put = setStaticF__pipelineFilterKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineFilterKeys;

  /// @brief Field _pipelineAttributeFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineAttributeFilterKeys,
                             put = setStaticF__pipelineAttributeFilterKeys))::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineAttributeFilterKeys;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject))::System::Object* _internalSyncObject;

  /// @brief Field Refreshed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Refreshed, put = setStaticF_Refreshed))::System::ComponentModel::RefreshEventHandler* Refreshed;

  static inline void setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value);

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__providerTable();

  static inline void setStaticF__providerTypeTable(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__providerTypeTable();

  static inline void setStaticF__defaultProviders(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__defaultProviders();

  static inline void setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value);

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__associationTable();

  static inline void setStaticF__metadataVersion(int32_t value);

  static inline int32_t getStaticF__metadataVersion();

  static inline void setStaticF__collisionIndex(int32_t value);

  static inline int32_t getStaticF__collisionIndex();

  static inline void setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value);

  static inline ::System::Diagnostics::BooleanSwitch* getStaticF_TraceDescriptor();

  static inline void setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineInitializeKeys();

  static inline void setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineMergeKeys();

  static inline void setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineFilterKeys();

  static inline void setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineAttributeFilterKeys();

  static inline void setStaticF__internalSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF__internalSyncObject();

  static inline void setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value);

  static inline ::System::ComponentModel::RefreshEventHandler* getStaticF_Refreshed();

  /// @brief Method get_ComObjectType, addr 0x2931168, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_ComObjectType();

  /// @brief Method get_InterfaceType, addr 0x29311d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_InterfaceType();

  /// @brief Method get_MetadataVersion, addr 0x2931240, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MetadataVersion();

  /// @brief Method AddProvider, addr 0x2931298, size 0x284, virtual false, abstract: false, final false
  static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method CheckDefaultProvider, addr 0x2932084, size 0x60c, virtual false, abstract: false, final false
  static inline void CheckDefaultProvider(::System::Type* type);

  /// @brief Method FilterMembers, addr 0x2932690, size 0x358, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList* members, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetAssociation, addr 0x2922c80, size 0x6d4, virtual false, abstract: false, final false
  static inline ::System::Object* GetAssociation(::System::Type* type, ::System::Object* primary);

  /// @brief Method GetAttributes, addr 0x2926a94, size 0x15c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType);

  /// @brief Method GetAttributes, addr 0x292f7cc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component);

  /// @brief Method GetAttributes, addr 0x2932b6c, size 0x420, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetCache, addr 0x292b564, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetConverter, addr 0x2936408, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);

  /// @brief Method GetDescriptor, addr 0x2932a78, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::StringW typeName);

  /// @brief Method GetDescriptor, addr 0x2932f8c, size 0x214, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetExtendedDescriptor, addr 0x29331a0, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* component);

  /// @brief Method GetEvents, addr 0x292fa28, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType);

  /// @brief Method GetEvents, addr 0x292f9cc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component);

  /// @brief Method GetEvents, addr 0x2936574, size 0x4e4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                               bool noCustomTypeDesc);

  /// @brief Method GetExtenderCollisionSuffix, addr 0x29370a8, size 0x318, virtual false, abstract: false, final false
  static inline ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member);

  /// @brief Method GetNodeForBaseType, addr 0x29373c0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Type* GetNodeForBaseType(::System::Type* searchType);

  /// @brief Method GetProperties, addr 0x292fbe4, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType);

  /// @brief Method GetProperties, addr 0x292fb8c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component);

  /// @brief Method GetProperties, addr 0x2937494, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x291eb68, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x2937b50, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                      bool noCustomTypeDesc);

  /// @brief Method GetPropertiesImpl, addr 0x2937500, size 0x650, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                          bool noCustomTypeDesc, bool noAttributes);

  /// @brief Method GetProviderRecursive, addr 0x2937bc0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type);

  /// @brief Method GetReflectionType, addr 0x29214c4, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Type* GetReflectionType(::System::Type* type);

  /// @brief Method NodeFor, addr 0x29364f0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type);

  /// @brief Method NodeFor, addr 0x293151c, size 0x518, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type, bool createDelegator);

  /// @brief Method NodeFor, addr 0x29363b0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance);

  /// @brief Method NodeFor, addr 0x2937c18, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance, bool createDelegator);

  /// @brief Method PipelineAttributeFilter, addr 0x2936a58, size 0x650, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Object* instance,
                                                                            ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineFilter, addr 0x29343a0, size 0x18fc, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                   ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineInitialize, addr 0x2935c9c, size 0x714, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineMerge, addr 0x293325c, size 0x1144, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary,
                                                                  ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method RaiseRefresh, addr 0x2937e64, size 0xb0, virtual false, abstract: false, final false
  static inline void RaiseRefresh(::System::Type* type);

  /// @brief Method Refresh, addr 0x2931a5c, size 0x628, virtual false, abstract: false, final false
  static inline void Refresh(::System::Type* type);

  /// @brief Method ShouldHideMember, addr 0x29329e8, size 0x90, virtual false, abstract: false, final false
  static inline bool ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute);

  /// @brief Method SortDescriptorArray, addr 0x2937f14, size 0xd8, virtual false, abstract: false, final false
  static inline void SortDescriptorArray(::System::Collections::IList* infos);

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor(TypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor(TypeDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor*, "System.ComponentModel", "TypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__FilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__FilterCacheItem*, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__IUnimplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__IUnimplemented*, "System.ComponentModel", "TypeDescriptor/IUnimplemented");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorComObject");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorInterface");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor, "System.ComponentModel",
                       "TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");
