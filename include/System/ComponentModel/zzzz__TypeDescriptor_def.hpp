#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeDescriptor)
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
struct TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor;
}
namespace System::ComponentModel {
struct TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class TypeDescriptor_AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_FilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_IUnimplemented;
}
namespace System::ComponentModel {
class TypeDescriptor_MemberDescriptorComparer;
}
namespace System::ComponentModel {
class TypeDescriptor_MergedTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptionNode;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorComObject;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorInterface;
}
namespace System::ComponentModel {
class WeakHashtable;
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
class TypeDescriptor_AttributeFilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_FilterCacheItem;
}
namespace System::ComponentModel {
class TypeDescriptor_IUnimplemented;
}
namespace System::ComponentModel {
class TypeDescriptor_MemberDescriptorComparer;
}
namespace System::ComponentModel {
class TypeDescriptor_MergedTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptionNode;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorComObject;
}
namespace System::ComponentModel {
class TypeDescriptor_TypeDescriptorInterface;
}
namespace System::ComponentModel {
struct TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor;
}
namespace System::ComponentModel {
struct TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_FilterCacheItem);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_IUnimplemented);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject);
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface);
MARK_VAL_T(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor);
MARK_VAL_T(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor);
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/AttributeFilterCacheItem
class CORDL_TYPE TypeDescriptor_AttributeFilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter)) ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _filter;

  /// @brief Method IsValid, addr 0x4478008, size 0x8c, virtual false, abstract: false, final false
  inline bool IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter);

  static inline ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                            ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__filter() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__filter();

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  /// @brief Method .ctor, addr 0x4478094, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_AttributeFilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeFilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_AttributeFilterCacheItem(TypeDescriptor_AttributeFilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_AttributeFilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_AttributeFilterCacheItem(TypeDescriptor_AttributeFilterCacheItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9452 };

  /// @brief Field _filter, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____filter;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem, ____filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/FilterCacheItem
class CORDL_TYPE TypeDescriptor_FilterCacheItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field FilteredMembers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FilteredMembers, put = __cordl_internal_set_FilteredMembers)) ::System::Collections::ICollection* FilteredMembers;

  /// @brief Field _filterService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__filterService, put = __cordl_internal_set__filterService)) ::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService;

  /// @brief Method IsValid, addr 0x44780c0, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService);

  static inline ::System::ComponentModel::TypeDescriptor_FilterCacheItem* New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                                   ::System::Collections::ICollection* filteredMembers);

  constexpr ::System::Collections::ICollection* const& __cordl_internal_get_FilteredMembers() const;

  constexpr ::System::Collections::ICollection*& __cordl_internal_get_FilteredMembers();

  constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService* const& __cordl_internal_get__filterService() const;

  constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& __cordl_internal_get__filterService();

  constexpr void __cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value);

  constexpr void __cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value);

  /// @brief Method .ctor, addr 0x44780d0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService, ::System::Collections::ICollection* filteredMembers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_FilterCacheItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_FilterCacheItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_FilterCacheItem(TypeDescriptor_FilterCacheItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_FilterCacheItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_FilterCacheItem(TypeDescriptor_FilterCacheItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9453 };

  /// @brief Field _filterService, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::ITypeDescriptorFilterService* ____filterService;

  /// @brief Field FilteredMembers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ICollection* ___FilteredMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_FilterCacheItem, ____filterService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_FilterCacheItem, ___FilteredMembers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_FilterCacheItem, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/IUnimplemented
class CORDL_TYPE TypeDescriptor_IUnimplemented {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_IUnimplemented", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_IUnimplemented(TypeDescriptor_IUnimplemented const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
// Dependencies System.Collections.IComparer, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
class CORDL_TYPE TypeDescriptor_MemberDescriptorComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* Instance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Method Compare, addr 0x4478600, size 0x11c, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* left, ::System::Object* right);

  static inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* New_ctor();

  /// @brief Method .ctor, addr 0x447871c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  static inline void setStaticF_Instance(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_MemberDescriptorComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MemberDescriptorComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_MemberDescriptorComparer(TypeDescriptor_MemberDescriptorComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MemberDescriptorComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_MemberDescriptorComparer(TypeDescriptor_MemberDescriptorComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.ICustomTypeDescriptor, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
class CORDL_TYPE TypeDescriptor_MergedTypeDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _primary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__primary, put = __cordl_internal_set__primary)) ::System::ComponentModel::ICustomTypeDescriptor* _primary;

  /// @brief Field _secondary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__secondary, put = __cordl_internal_set__secondary)) ::System::ComponentModel::ICustomTypeDescriptor* _secondary;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  static inline ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor* New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                        ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x4478780, size 0x110, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x4478890, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x44789a8, size 0x118, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x4478ac0, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x4478bd8, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x4478cf0, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x4478e08, size 0x1b0, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x4478fb8, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x44790d0, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4479200, size 0x118, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x4479318, size 0x130, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x4479448, size 0x130, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& __cordl_internal_get__primary() const;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__primary();

  constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& __cordl_internal_get__secondary() const;

  constexpr ::System::ComponentModel::ICustomTypeDescriptor*& __cordl_internal_get__secondary();

  constexpr void __cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value);

  constexpr void __cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value);

  /// @brief Method .ctor, addr 0x4476668, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_MergedTypeDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MergedTypeDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_MergedTypeDescriptor(TypeDescriptor_MergedTypeDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_MergedTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_MergedTypeDescriptor(TypeDescriptor_MergedTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9456 };

  /// @brief Field _primary, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____primary;

  /// @brief Field _secondary, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::ICustomTypeDescriptor* ____secondary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor, ____primary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor, ____secondary) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.ICustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct CORDL_TYPE TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x4479aa4, size 0x2d4, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x4479d78, size 0x23c, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x4479fb4, size 0x204, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x447a1b8, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x447a458, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x447a65c, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x447a860, size 0x29c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x447aafc, size 0x2d8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x447add4, size 0x2e0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x447b0b4, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x447b354, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x447b5fc, size 0x220, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x4479804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node, ::System::Object* _instance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node;

  /// @brief Field _instance, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor, _instance) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.ICustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct CORDL_TYPE TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor {
public:
  // Declarations
  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x447b81c, size 0x29c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x447bab8, size 0x230, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x447bce8, size 0x204, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x447beec, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x447c18c, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x447c390, size 0x204, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x447c594, size 0x29c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x447c830, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x447cad0, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x447cd78, size 0x2a0, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x447d018, size 0x2a8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x447d2c0, size 0x21c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method .ctor, addr 0x4479a98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* node, ::System::Type* objectType, ::System::Object* instance);

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor();

  // Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*", modifiers: "", def_value: None }, CppParam { name: "_objectType", ty:
  // "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node, ::System::Type* _objectType,
                                                                     ::System::Object* _instance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9458 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _node, offset: 0x0, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* _node;

  /// @brief Field _objectType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* _objectType;

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _objectType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, _instance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptionNode
class CORDL_TYPE TypeDescriptor_TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using DefaultExtendedTypeDescriptor = ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor;

  using DefaultTypeDescriptor = ::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* Next;

  /// @brief Field Provider, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider)) ::System::ComponentModel::TypeDescriptionProvider* Provider;

  /// @brief Method CreateInstance, addr 0x4479578, size 0x178, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetCache, addr 0x44796f0, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x447975c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x447980c, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetReflectionType, addr 0x4479878, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeDescriptor, addr 0x4479950, size 0x148, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

  constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* const& __cordl_internal_get_Next() const;

  constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*& __cordl_internal_get_Next();

  constexpr ::System::ComponentModel::TypeDescriptionProvider* const& __cordl_internal_get_Provider() const;

  constexpr ::System::ComponentModel::TypeDescriptionProvider*& __cordl_internal_get_Provider();

  constexpr void __cordl_internal_set_Next(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* value);

  constexpr void __cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value);

  /// @brief Method .ctor, addr 0x4471930, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::TypeDescriptionProvider* provider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_TypeDescriptionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_TypeDescriptionNode(TypeDescriptor_TypeDescriptionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_TypeDescriptionNode(TypeDescriptor_TypeDescriptionNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9459 };

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* ___Next;

  /// @brief Field Provider, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::TypeDescriptionProvider* ___Provider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode, ___Provider) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode, 0x30>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
class CORDL_TYPE TypeDescriptor_TypeDescriptorComObject : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_TypeDescriptorComObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_TypeDescriptorComObject(TypeDescriptor_TypeDescriptorComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_TypeDescriptorComObject(TypeDescriptor_TypeDescriptorComObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
class CORDL_TYPE TypeDescriptor_TypeDescriptorInterface : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeDescriptor_TypeDescriptorInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeDescriptor_TypeDescriptorInterface(TypeDescriptor_TypeDescriptorInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeDescriptor_TypeDescriptorInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeDescriptor_TypeDescriptorInterface(TypeDescriptor_TypeDescriptorInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9461 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.TypeDescriptor
class CORDL_TYPE TypeDescriptor : public ::System::Object {
public:
  // Declarations
  using AttributeFilterCacheItem = ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem;

  using FilterCacheItem = ::System::ComponentModel::TypeDescriptor_FilterCacheItem;

  using IUnimplemented = ::System::ComponentModel::TypeDescriptor_IUnimplemented;

  using MemberDescriptorComparer = ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer;

  using MergedTypeDescriptor = ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor;

  using TypeDescriptionNode = ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode;

  using TypeDescriptorComObject = ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject;

  using TypeDescriptorInterface = ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface;

  /// @brief Field Refreshed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Refreshed, put = setStaticF_Refreshed)) ::System::ComponentModel::RefreshEventHandler* Refreshed;

  /// @brief Field TraceDescriptor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TraceDescriptor, put = setStaticF_TraceDescriptor)) ::System::Diagnostics::BooleanSwitch* TraceDescriptor;

  /// @brief Field _associationTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__associationTable, put = setStaticF__associationTable)) ::System::ComponentModel::WeakHashtable* _associationTable;

  /// @brief Field _collisionIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__collisionIndex, put = setStaticF__collisionIndex)) int32_t _collisionIndex;

  /// @brief Field _defaultProviders, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultProviders, put = setStaticF__defaultProviders)) ::System::Collections::Hashtable* _defaultProviders;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject)) ::System::Object* _internalSyncObject;

  /// @brief Field _metadataVersion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__metadataVersion, put = setStaticF__metadataVersion)) int32_t _metadataVersion;

  /// @brief Field _pipelineAttributeFilterKeys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pipelineAttributeFilterKeys, put = setStaticF__pipelineAttributeFilterKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineAttributeFilterKeys;

  /// @brief Field _pipelineFilterKeys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pipelineFilterKeys, put = setStaticF__pipelineFilterKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineFilterKeys;

  /// @brief Field _pipelineInitializeKeys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pipelineInitializeKeys, put = setStaticF__pipelineInitializeKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineInitializeKeys;

  /// @brief Field _pipelineMergeKeys, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pipelineMergeKeys, put = setStaticF__pipelineMergeKeys)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> _pipelineMergeKeys;

  /// @brief Field _providerTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__providerTable, put = setStaticF__providerTable)) ::System::ComponentModel::WeakHashtable* _providerTable;

  /// @brief Field _providerTypeTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__providerTypeTable, put = setStaticF__providerTypeTable)) ::System::Collections::Hashtable* _providerTypeTable;

  /// @brief Method AddProvider, addr 0x44711d8, size 0x26c, virtual false, abstract: false, final false
  static inline void AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type);

  /// @brief Method CheckDefaultProvider, addr 0x4471f68, size 0x61c, virtual false, abstract: false, final false
  static inline void CheckDefaultProvider(::System::Type* type);

  /// @brief Method CreateInstance, addr 0x4472584, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method FilterMembers, addr 0x4472898, size 0x358, virtual false, abstract: false, final false
  static inline ::System::Collections::ArrayList* FilterMembers(::System::Collections::IList* members, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetAssociation, addr 0x4461b00, size 0x69c, virtual false, abstract: false, final false
  static inline ::System::Object* GetAssociation(::System::Type* type, ::System::Object* primary);

  /// @brief Method GetAttributes, addr 0x446eb90, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component);

  /// @brief Method GetAttributes, addr 0x4472d64, size 0x414, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetAttributes, addr 0x44658e0, size 0x158, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* componentType);

  /// @brief Method GetCache, addr 0x446a9b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetConverter, addr 0x4476580, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);

  /// @brief Method GetDescriptor, addr 0x4473178, size 0x208, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetDescriptor, addr 0x4472c80, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetDescriptor(::System::Type* type, ::StringW typeName);

  /// @brief Method GetEvents, addr 0x446ed94, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component);

  /// @brief Method GetEvents, addr 0x4476694, size 0x4f0, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                               bool noCustomTypeDesc);

  /// @brief Method GetEvents, addr 0x446edf0, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* componentType);

  /// @brief Method GetExtendedDescriptor, addr 0x4473380, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedDescriptor(::System::Object* component);

  /// @brief Method GetExtenderCollisionSuffix, addr 0x44771dc, size 0x318, virtual false, abstract: false, final false
  static inline ::StringW GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member);

  /// @brief Method GetNodeForBaseType, addr 0x44774f4, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Type* GetNodeForBaseType(::System::Type* searchType);

  /// @brief Method GetProperties, addr 0x446ef50, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component);

  /// @brief Method GetProperties, addr 0x4477c8c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0x4477cf4, size 0x70, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                      bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x44775c8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Object* component, bool noCustomTypeDesc);

  /// @brief Method GetProperties, addr 0x446efa8, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* componentType);

  /// @brief Method GetPropertiesImpl, addr 0x4477634, size 0x658, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::PropertyDescriptorCollection* GetPropertiesImpl(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                          bool noCustomTypeDesc, bool noAttributes);

  /// @brief Method GetProviderRecursive, addr 0x4477d64, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptionProvider* GetProviderRecursive(::System::Type* type);

  /// @brief Method GetReflectionType, addr 0x4477dbc, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Type* GetReflectionType(::System::Type* type);

  /// @brief Method NodeFor, addr 0x4476528, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Object* instance);

  /// @brief Method NodeFor, addr 0x4477ea4, size 0x164, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Object* instance, bool createDelegator);

  /// @brief Method NodeFor, addr 0x4472840, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type* type);

  /// @brief Method NodeFor, addr 0x4471444, size 0x4ec, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* NodeFor(::System::Type* type, bool createDelegator);

  /// @brief Method PipelineAttributeFilter, addr 0x4476b84, size 0x658, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter, ::System::Object* instance,
                                                                            ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineFilter, addr 0x447457c, size 0x1898, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                   ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineInitialize, addr 0x4475e14, size 0x714, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Collections::IDictionary* cache);

  /// @brief Method PipelineMerge, addr 0x4473438, size 0x1144, virtual false, abstract: false, final false
  static inline ::System::Collections::ICollection* PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary, ::System::Collections::ICollection* secondary,
                                                                  ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method RaiseRefresh, addr 0x44780fc, size 0xac, virtual false, abstract: false, final false
  static inline void RaiseRefresh(::System::Type* type);

  /// @brief Method Refresh, addr 0x4471958, size 0x610, virtual false, abstract: false, final false
  static inline void Refresh(::System::Type* type);

  /// @brief Method ShouldHideMember, addr 0x4472bf0, size 0x90, virtual false, abstract: false, final false
  static inline bool ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute);

  /// @brief Method SortDescriptorArray, addr 0x44781a8, size 0xd4, virtual false, abstract: false, final false
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

  /// @brief Method get_ComObjectType, addr 0x44710a8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_ComObjectType();

  /// @brief Method get_InterfaceType, addr 0x4471114, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* get_InterfaceType();

  /// @brief Method get_MetadataVersion, addr 0x4471180, size 0x58, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9462 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptor, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor*, "System.ComponentModel", "TypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*, "System.ComponentModel", "TypeDescriptor/AttributeFilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_FilterCacheItem);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_FilterCacheItem*, "System.ComponentModel", "TypeDescriptor/FilterCacheItem");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_IUnimplemented);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_IUnimplemented*, "System.ComponentModel", "TypeDescriptor/IUnimplemented");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*, "System.ComponentModel", "TypeDescriptor/MergedTypeDescriptor");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorComObject");
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*, "System.ComponentModel", "TypeDescriptor/TypeDescriptorInterface");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultExtendedTypeDescriptor, "System.ComponentModel",
                       "TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionNode_TypeDescriptor_DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");
