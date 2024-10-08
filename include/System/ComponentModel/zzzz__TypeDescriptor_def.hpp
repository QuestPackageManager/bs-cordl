#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
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
class IServiceProvider;
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::AttributeFilterCacheItem*
class CORDL_TYPE __TypeDescriptor__AttributeFilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter)) ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _filter;

  /// @brief Method IsValid, addr 0x4400c34, size 0x8c, virtual false, abstract: false, final false
  inline bool IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  static inline ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                               ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__filter() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__filter();

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method .ctor, addr 0x4400cc0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__AttributeFilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__AttributeFilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__AttributeFilterCacheItem(__TypeDescriptor__AttributeFilterCacheItem const&) = delete;

  /// @brief Field _filter, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____filter;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ____filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::FilterCacheItem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::FilterCacheItem*
class CORDL_TYPE __TypeDescriptor__FilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filterService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filterService, put = __cordl_internal_set__filterService)) ::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService;

  /// @brief Method IsValid, addr 0x4400cec, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);

  static inline ::System::ComponentModel::__TypeDescriptor__FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                                      ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& __cordl_internal_get__filterService();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::ITypeDescriptorFilterService*> const& __cordl_internal_get__filterService() const;

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value);

  /// @brief Method .ctor, addr 0x4400cfc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__FilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__FilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__FilterCacheItem(__TypeDescriptor__FilterCacheItem const&) = delete;

  /// @brief Field _filterService, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::ITypeDescriptorFilterService* ____filterService;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__FilterCacheItem, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ____filterService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__FilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::IUnimplemented
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9419 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
// Type: ::MemberDescriptorComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::MemberDescriptorComparer*
class CORDL_TYPE __TypeDescriptor__MemberDescriptorComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* Instance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x440122c, size 0x11c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* left, ::System::Object* right);

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* New_ctor();

  /// @brief Method .ctor, addr 0x4401348, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_Instance(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MemberDescriptorComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MemberDescriptorComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MemberDescriptorComparer(__TypeDescriptor__MemberDescriptorComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::MergedTypeDescriptor
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::MergedTypeDescriptor*
class CORDL_TYPE __TypeDescriptor__MergedTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _primary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__primary, put = __cordl_internal_set__primary)) ::System::ComponentModel::ICustomTypeDescriptor* _primary;

  /// @brief Field _secondary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary, put = __cordl_internal_set__secondary)) ::System::ComponentModel::ICustomTypeDescriptor* _secondary;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  static inline ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                           ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x44013ac, size 0x110, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x44014bc, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x44015d4, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x44016ec, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x4401804, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x440191c, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x4401a34, size 0x1b0, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x4401be4, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x4401cfc, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4401e2c, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4401f44, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x4402074, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__primary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__primary() const;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__secondary();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const& __cordl_internal_get__secondary() const;

  constexpr void __cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value);

  constexpr void __cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value);

  /// @brief Method .ctor, addr 0x43ff294, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__MergedTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__MergedTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__MergedTypeDescriptor(__TypeDescriptor__MergedTypeDescriptor const&) = delete;

  /// @brief Field _primary, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____primary;

  /// @brief Field _secondary, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____secondary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____primary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor, ____secondary) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::DefaultExtendedTypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x44026d0, size 0x2d4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x44029a4, size 0x23c, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x4402be0, size 0x204, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x4402de4, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x4403084, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x4403288, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x440348c, size 0x29c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x4403728, size 0x2d8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x4403a00, size 0x2e0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4403ce0, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4403f80, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x4404228, size 0x220, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x4402430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Object* _instance) noexcept;

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _instance, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9422 };

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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor
struct CORDL_TYPE __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x4404448, size 0x29c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x44046e4, size 0x230, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x4404914, size 0x204, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x4404b18, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x4404db8, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x4404fbc, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x44051c0, size 0x29c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x440545c, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x44056fc, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x44059a4, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4405c44, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x4405eec, size 0x21c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x44026c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Type* objectType, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_objectType", ty:
  // "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr __TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Type* _objectType,
                                                                         ::System::Object* _instance) noexcept;

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node;

  /// @brief Field _objectType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _objectType;

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _instance;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9423 };

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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptionNode*
class CORDL_TYPE __TypeDescriptor__TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using DefaultExtendedTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor;

  using DefaultTypeDescriptor = ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* Next;

  /// @brief Field Provider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider)) ::System::ComponentModel::TypeDescriptionProvider* Provider;

  /// @brief Method CreateInstance, addr 0x44021a4, size 0x178, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x440231c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x4402388, size 0xa8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x4402438, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x44024a4, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x440257c, size 0x148, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

  constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*> const& __cordl_internal_get_Next() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const& __cordl_internal_get_Provider() const;

  constexpr void __cordl_internal_set_Next(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* value);

  constexpr void __cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value);

  /// @brief Method .ctor, addr 0x43fa55c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptionNode(__TypeDescriptor__TypeDescriptionNode const&) = delete;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* ___Next;

  /// @brief Field Provider, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ___Provider;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode, ___Provider) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorComObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptorComObject*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorComObject : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorComObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorComObject(__TypeDescriptor__TypeDescriptorComObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::TypeDescriptorInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::TypeDescriptor::TypeDescriptorInterface*
class CORDL_TYPE __TypeDescriptor__TypeDescriptorInterface : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeDescriptor__TypeDescriptorInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptor__TypeDescriptorInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeDescriptor__TypeDescriptorInterface(__TypeDescriptor__TypeDescriptorInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9426 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::TypeDescriptor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::TypeDescriptor*
class CORDL_TYPE TypeDescriptor : public ::System::Object {
public:
  // Declarations
  using AttributeFilterCacheItem = ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem;

  using FilterCacheItem = ::System::ComponentModel::__TypeDescriptor__FilterCacheItem;

  using IUnimplemented = ::System::ComponentModel::__TypeDescriptor__IUnimplemented;

  using MemberDescriptorComparer = ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer;

  using MergedTypeDescriptor = ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor;

  using TypeDescriptionNode = ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode;

  using TypeDescriptorComObject = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject;

  using TypeDescriptorInterface = ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface;

  /// @brief Field Refreshed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Refreshed, put = setStaticF_Refreshed)) ::System::ComponentModel::RefreshEventHandler* Refreshed;

  /// @brief Field TraceDescriptor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TraceDescriptor, put = setStaticF_TraceDescriptor)) ::System::Diagnostics::BooleanSwitch* TraceDescriptor;

  /// @brief Field _associationTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__associationTable, put = setStaticF__associationTable)) ::System::ComponentModel::WeakHashtable* _associationTable;

  /// @brief Field _collisionIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__collisionIndex, put = setStaticF__collisionIndex)) int32_t _collisionIndex;

  /// @brief Field _defaultProviders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultProviders, put = setStaticF__defaultProviders)) ::System::Collections::Hashtable* _defaultProviders;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject)) ::System::Object* _internalSyncObject;

  /// @brief Field _metadataVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__metadataVersion, put = setStaticF__metadataVersion)) int32_t _metadataVersion;

  /// @brief Field _pipelineAttributeFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineAttributeFilterKeys, put = setStaticF__pipelineAttributeFilterKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*>
      _pipelineAttributeFilterKeys;

  /// @brief Field _pipelineFilterKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineFilterKeys, put = setStaticF__pipelineFilterKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineFilterKeys;

  /// @brief Field _pipelineInitializeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineInitializeKeys, put = setStaticF__pipelineInitializeKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineInitializeKeys;

  /// @brief Field _pipelineMergeKeys, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pipelineMergeKeys, put = setStaticF__pipelineMergeKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineMergeKeys;

  /// @brief Field _providerTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTable, put = setStaticF__providerTable)) ::System::ComponentModel::WeakHashtable* _providerTable;

  /// @brief Field _providerTypeTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__providerTypeTable, put = setStaticF__providerTypeTable)) ::System::Collections::Hashtable* _providerTypeTable;

  /// @brief Method AddProvider, addr 0x43f9e04, size 0x26c, virtual false, abstract: false, final false
  static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method CheckDefaultProvider, addr 0x43fab94, size 0x61c, virtual false, abstract: false, final false
  static inline void CheckDefaultProvider(::System::Type* type);

  /// @brief Method CreateInstance, addr 0x43fb1b0, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FilterMembers, addr 0x43fb4c4, size 0x358, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList* members, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetAssociation, addr 0x43ea72c, size 0x69c, virtual false, abstract: false, final false
  static inline ::System::Object* GetAssociation(::System::Type* type, ::System::Object* primary);

  /// @brief Method GetAttributes, addr 0x43f77bc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component);

  /// @brief Method GetAttributes, addr 0x43fb990, size 0x414, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetAttributes, addr 0x43ee50c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType);

  /// @brief Method GetCache, addr 0x43f35e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetConverter, addr 0x43ff1ac, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);

  /// @brief Method GetDescriptor, addr 0x43fbda4, size 0x208, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetDescriptor, addr 0x43fb8ac, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::StringW typeName);

  /// @brief Method GetEvents, addr 0x43f79c0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component);

  /// @brief Method GetEvents, addr 0x43ff2c0, size 0x4f0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                               bool noCustomTypeDesc);

  /// @brief Method GetEvents, addr 0x43f7a1c, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType);

  /// @brief Method GetExtendedDescriptor, addr 0x43fbfac, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* component);

  /// @brief Method GetExtenderCollisionSuffix, addr 0x43ffe08, size 0x318, virtual false, abstract: false, final false
  static inline ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member);

  /// @brief Method GetNodeForBaseType, addr 0x4400120, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Type* GetNodeForBaseType(::System::Type* searchType);

  /// @brief Method GetProperties, addr 0x43f7b7c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component);

  /// @brief Method GetProperties, addr 0x44008b8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x4400920, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                      bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x44001f4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x43f7bd4, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType);

  /// @brief Method GetPropertiesImpl, addr 0x4400260, size 0x658, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                          bool noCustomTypeDesc, bool noAttributes);

  /// @brief Method GetProviderRecursive, addr 0x4400990, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type);

  /// @brief Method GetReflectionType, addr 0x44009e8, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Type* GetReflectionType(::System::Type* type);

  /// @brief Method NodeFor, addr 0x43ff154, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance);

  /// @brief Method NodeFor, addr 0x4400ad0, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Object* instance, bool createDelegator);

  /// @brief Method NodeFor, addr 0x43fb46c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type);

  /// @brief Method NodeFor, addr 0x43fa070, size 0x4ec, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* NodeFor(::System::Type* type, bool createDelegator);

  /// @brief Method PipelineAttributeFilter, addr 0x43ff7b0, size 0x658, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Object* instance,
                                                                            ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineFilter, addr 0x43fd1a8, size 0x1898, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                   ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineInitialize, addr 0x43fea40, size 0x714, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineMerge, addr 0x43fc064, size 0x1144, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary,
                                                                  ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method RaiseRefresh, addr 0x4400d28, size 0xac, virtual false, abstract: false, final false
  static inline void RaiseRefresh(::System::Type* type);

  /// @brief Method Refresh, addr 0x43fa584, size 0x610, virtual false, abstract: false, final false
  static inline void Refresh(::System::Type* type);

  /// @brief Method ShouldHideMember, addr 0x43fb81c, size 0x90, virtual false, abstract: false, final false
  static inline bool ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute);

  /// @brief Method SortDescriptorArray, addr 0x4400dd4, size 0xd4, virtual false, abstract: false, final false
  static inline void SortDescriptorArray(::System::Collections::IList* infos);

  static inline ::System::ComponentModel::RefreshEventHandler* getStaticF_Refreshed();

  static inline ::System::Diagnostics::BooleanSwitch* getStaticF_TraceDescriptor();

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__associationTable();

  static inline int32_t getStaticF__collisionIndex();

  static inline ::System::Collections::Hashtable* getStaticF__defaultProviders();

  static inline ::System::Object* getStaticF__internalSyncObject();

  static inline int32_t getStaticF__metadataVersion();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineAttributeFilterKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineFilterKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineInitializeKeys();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF__pipelineMergeKeys();

  static inline ::System::ComponentModel::WeakHashtable* getStaticF__providerTable();

  static inline ::System::Collections::Hashtable* getStaticF__providerTypeTable();

  /// @brief Method get_ComObjectType, addr 0x43f9cd4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_ComObjectType();

  /// @brief Method get_InterfaceType, addr 0x43f9d40, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_InterfaceType();

  /// @brief Method get_MetadataVersion, addr 0x43f9dac, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_MetadataVersion();

  static inline void setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value);

  static inline void setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value);

  static inline void setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value);

  static inline void setStaticF__collisionIndex(int32_t value);

  static inline void setStaticF__defaultProviders(::System::Collections::Hashtable* value);

  static inline void setStaticF__internalSyncObject(::System::Object* value);

  static inline void setStaticF__metadataVersion(int32_t value);

  static inline void setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  static inline void setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value);

  static inline void setStaticF__providerTypeTable(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor(TypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor(TypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9427 };

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
