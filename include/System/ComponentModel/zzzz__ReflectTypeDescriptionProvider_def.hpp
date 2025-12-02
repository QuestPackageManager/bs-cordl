#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectTypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectTypeDescriptionProvider)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EditorAttribute;
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
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class ReflectTypeDescriptionProvider_ReflectedTypeData;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Attribute;
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
class ReflectTypeDescriptionProvider;
}
namespace System::ComponentModel {
class ReflectTypeDescriptionProvider_ReflectedTypeData;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectTypeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData);
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
class CORDL_TYPE ReflectTypeDescriptionProvider_ReflectedTypeData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsPopulated)) bool IsPopulated;

  /// @brief Field _attributes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes)) ::System::ComponentModel::AttributeCollection* _attributes;

  /// @brief Field _converter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__converter, put = __cordl_internal_set__converter)) ::System::ComponentModel::TypeConverter* _converter;

  /// @brief Field _editorCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__editorCount, put = __cordl_internal_set__editorCount)) int32_t _editorCount;

  /// @brief Field _editorTypes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__editorTypes, put = __cordl_internal_set__editorTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _editorTypes;

  /// @brief Field _editors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__editors, put = __cordl_internal_set__editors)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _editors;

  /// @brief Field _events, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__events, put = __cordl_internal_set__events)) ::System::ComponentModel::EventDescriptorCollection* _events;

  /// @brief Field _properties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties)) ::System::ComponentModel::PropertyDescriptorCollection* _properties;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Method GetAttributes, addr 0x61b85b0, size 0x514, virtual false, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  /// @brief Method GetClassName, addr 0x61b8e68, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetClassName(::System::Object* instance);

  /// @brief Method GetComponentName, addr 0x61b8eac, size 0x1b4, virtual false, abstract: false, final false
  inline ::StringW GetComponentName(::System::Object* instance);

  /// @brief Method GetConverter, addr 0x61b9084, size 0x488, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* instance);

  /// @brief Method GetDefaultEvent, addr 0x61b9530, size 0x190, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* instance);

  /// @brief Method GetDefaultProperty, addr 0x61b96e4, size 0x190, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* instance);

  /// @brief Method GetEditor, addr 0x61b98a8, size 0x5e8, virtual false, abstract: false, final false
  inline ::System::Object* GetEditor(::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetEditorAttribute, addr 0x61bf2a8, size 0x36c, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::EditorAttribute* GetEditorAttribute(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0x61ba2a4, size 0x31c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents();

  /// @brief Method GetProperties, addr 0x61bcc94, size 0x31c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();

  /// @brief Method GetTypeFromName, addr 0x61bedb4, size 0x190, virtual false, abstract: false, final false
  inline ::System::Type* GetTypeFromName(::StringW typeName);

  static inline ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* New_ctor(::System::Type* type);

  /// @brief Method Refresh, addr 0x61be228, size 0x18, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::System::ComponentModel::AttributeCollection* const& __cordl_internal_get__attributes() const;

  constexpr ::System::ComponentModel::AttributeCollection*& __cordl_internal_get__attributes();

  constexpr ::System::ComponentModel::TypeConverter* const& __cordl_internal_get__converter() const;

  constexpr ::System::ComponentModel::TypeConverter*& __cordl_internal_get__converter();

  constexpr int32_t const& __cordl_internal_get__editorCount() const;

  constexpr int32_t& __cordl_internal_get__editorCount();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get__editorTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get__editorTypes();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get__editors() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get__editors();

  constexpr ::System::ComponentModel::EventDescriptorCollection* const& __cordl_internal_get__events() const;

  constexpr ::System::ComponentModel::EventDescriptorCollection*& __cordl_internal_get__events();

  constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& __cordl_internal_get__properties() const;

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__properties();

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__attributes(::System::ComponentModel::AttributeCollection* value);

  constexpr void __cordl_internal_set__converter(::System::ComponentModel::TypeConverter* value);

  constexpr void __cordl_internal_set__editorCount(int32_t value);

  constexpr void __cordl_internal_set__editorTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set__editors(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set__events(::System::ComponentModel::EventDescriptorCollection* value);

  constexpr void __cordl_internal_set__properties(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x61bcfb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_IsPopulated, addr 0x61bd0f8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsPopulated();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectTypeDescriptionProvider_ReflectedTypeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider_ReflectedTypeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectTypeDescriptionProvider_ReflectedTypeData(ReflectTypeDescriptionProvider_ReflectedTypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider_ReflectedTypeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectTypeDescriptionProvider_ReflectedTypeData(ReflectTypeDescriptionProvider_ReflectedTypeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11296 };

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  /// @brief Field _attributes, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::AttributeCollection* ____attributes;

  /// @brief Field _events, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::EventDescriptorCollection* ____events;

  /// @brief Field _properties, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____properties;

  /// @brief Field _converter, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::TypeConverter* ____converter;

  /// @brief Field _editors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ____editors;

  /// @brief Field _editorTypes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____editorTypes;

  /// @brief Field _editorCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____editorCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____attributes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____events) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____properties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____converter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____editors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____editorTypes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, ____editorCount) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData, 0x50>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.ComponentModel.TypeDescriptionProvider, System.Guid
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReflectTypeDescriptionProvider
class CORDL_TYPE ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using ReflectedTypeData = ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData;

  /// @brief Field _attributeCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__attributeCache, put = setStaticF__attributeCache)) ::System::Collections::Hashtable* _attributeCache;

  /// @brief Field _dictionaryKey, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__dictionaryKey, put = setStaticF__dictionaryKey)) ::System::Object* _dictionaryKey;

  /// @brief Field _editorTables, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__editorTables, put = setStaticF__editorTables)) ::System::Collections::Hashtable* _editorTables;

  /// @brief Field _eventCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__eventCache, put = setStaticF__eventCache)) ::System::Collections::Hashtable* _eventCache;

  /// @brief Field _extendedPropertyCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__extendedPropertyCache, put = setStaticF__extendedPropertyCache)) ::System::Collections::Hashtable* _extendedPropertyCache;

  /// @brief Field _extenderPropertiesKey, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__extenderPropertiesKey, put = setStaticF__extenderPropertiesKey)) ::System::Guid _extenderPropertiesKey;

  /// @brief Field _extenderProviderKey, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__extenderProviderKey, put = setStaticF__extenderProviderKey)) ::System::Guid _extenderProviderKey;

  /// @brief Field _extenderProviderPropertiesKey, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__extenderProviderPropertiesKey, put = setStaticF__extenderProviderPropertiesKey)) ::System::Guid _extenderProviderPropertiesKey;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject)) ::System::Object* _internalSyncObject;

  /// @brief Field _intrinsicNullableKey, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__intrinsicNullableKey, put = setStaticF__intrinsicNullableKey)) ::System::Object* _intrinsicNullableKey;

  /// @brief Field _intrinsicReferenceKey, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__intrinsicReferenceKey, put = setStaticF__intrinsicReferenceKey)) ::System::Object* _intrinsicReferenceKey;

  /// @brief Field _intrinsicTypeConverters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__intrinsicTypeConverters, put = setStaticF__intrinsicTypeConverters)) ::System::Collections::Hashtable* _intrinsicTypeConverters;

  /// @brief Field _propertyCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__propertyCache, put = setStaticF__propertyCache)) ::System::Collections::Hashtable* _propertyCache;

  /// @brief Field _skipInterfaceAttributeList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__skipInterfaceAttributeList, put = setStaticF__skipInterfaceAttributeList)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _skipInterfaceAttributeList;

  /// @brief Field _typeConstructor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__typeConstructor, put = setStaticF__typeConstructor)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _typeConstructor;

  /// @brief Field _typeData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__typeData, put = __cordl_internal_set__typeData)) ::System::Collections::Hashtable* _typeData;

  /// @brief Method CreateInstance, addr 0x61b8220, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* objectType, ::System::Type* callingType);

  /// @brief Method CreateInstance, addr 0x61b8084, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetAttributes, addr 0x61b8328, size 0x1c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* type);

  /// @brief Method GetCache, addr 0x61b8ac4, size 0x374, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetClassName, addr 0x61b8e38, size 0x30, virtual false, abstract: false, final false
  inline ::StringW GetClassName(::System::Type* type);

  /// @brief Method GetComponentName, addr 0x61b8e88, size 0x24, virtual false, abstract: false, final false
  inline ::StringW GetComponentName(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetConverter, addr 0x61b9060, size 0x24, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetDefaultEvent, addr 0x61b950c, size 0x24, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetDefaultProperty, addr 0x61b96c0, size 0x24, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetEditor, addr 0x61b9874, size 0x34, virtual false, abstract: false, final false
  inline ::System::Object* GetEditor(::System::Type* type, ::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetEditorTable, addr 0x61b9e90, size 0x3f8, virtual false, abstract: false, final false
  static inline ::System::Collections::Hashtable* GetEditorTable(::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0x61ba288, size 0x1c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* type);

  /// @brief Method GetExtendedAttributes, addr 0x61ba5c0, size 0x5c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::System::Object* instance);

  /// @brief Method GetExtendedClassName, addr 0x61ba61c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetExtendedClassName(::System::Object* instance);

  /// @brief Method GetExtendedComponentName, addr 0x61ba648, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetExtendedComponentName(::System::Object* instance);

  /// @brief Method GetExtendedConverter, addr 0x61ba684, size 0x3c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* GetExtendedConverter(::System::Object* instance);

  /// @brief Method GetExtendedDefaultEvent, addr 0x61ba6c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptor* GetExtendedDefaultEvent(::System::Object* instance);

  /// @brief Method GetExtendedDefaultProperty, addr 0x61ba6c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetExtendedDefaultProperty(::System::Object* instance);

  /// @brief Method GetExtendedEditor, addr 0x61ba6d0, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* GetExtendedEditor(::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetExtendedEvents, addr 0x61ba714, size 0x5c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetExtendedEvents(::System::Object* instance);

  /// @brief Method GetExtendedProperties, addr 0x61ba770, size 0x544, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetExtendedProperties(::System::Object* instance);

  /// @brief Method GetExtendedPropertyOwner, addr 0x61bcbdc, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Object* GetExtendedPropertyOwner(::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method GetExtendedTypeDescriptor, addr 0x61bcc70, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetExtenderProviders, addr 0x61bbc88, size 0x49c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetExtenders, addr 0x61bc124, size 0xab8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
  GetExtenders(::System::Collections::ICollection* components, ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method GetProperties, addr 0x61bcc78, size 0x1c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* type);

  /// @brief Method GetPropertyOwner, addr 0x61bcc08, size 0x68, virtual false, abstract: false, final false
  inline ::System::Object* GetPropertyOwner(::System::Type* type, ::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method GetReflectionType, addr 0x61bcfb0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeData, addr 0x61b8344, size 0x26c, virtual false, abstract: false, final false
  inline ::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* GetTypeData(::System::Type* type, bool createIfNeeded);

  /// @brief Method GetTypeDescriptor, addr 0x61bcfc0, size 0x8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeFromName, addr 0x61bcfc8, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromName(::StringW typeName);

  /// @brief Method IsPopulated, addr 0x61bd0c8, size 0x30, virtual false, abstract: false, final false
  inline bool IsPopulated(::System::Type* type);

  static inline ::System::ComponentModel::ReflectTypeDescriptionProvider* New_ctor();

  /// @brief Method ReflectGetAttributes, addr 0x61b5fa4, size 0x42c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ReflectGetAttributes(::System::Reflection::MemberInfo* member);

  /// @brief Method ReflectGetAttributes, addr 0x61bd114, size 0x42c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ReflectGetAttributes(::System::Type* type);

  /// @brief Method ReflectGetEvents, addr 0x61bd540, size 0x6b8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> ReflectGetEvents(::System::Type* type);

  /// @brief Method ReflectGetExtendedProperties, addr 0x61bad24, size 0xf64, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*>
  ReflectGetExtendedProperties(::System::ComponentModel::IExtenderProvider* provider);

  /// @brief Method ReflectGetProperties, addr 0x61bdbf8, size 0x604, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> ReflectGetProperties(::System::Type* type);

  /// @brief Method Refresh, addr 0x61be1fc, size 0x2c, virtual false, abstract: false, final false
  inline void Refresh(::System::Type* type);

  /// @brief Method SearchIntrinsicTable, addr 0x61be240, size 0x878, virtual false, abstract: false, final false
  static inline ::System::Object* SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__typeData() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__typeData();

  constexpr void __cordl_internal_set__typeData(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x61b762c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Hashtable* getStaticF__attributeCache();

  static inline ::System::Object* getStaticF__dictionaryKey();

  static inline ::System::Collections::Hashtable* getStaticF__editorTables();

  static inline ::System::Collections::Hashtable* getStaticF__eventCache();

  static inline ::System::Collections::Hashtable* getStaticF__extendedPropertyCache();

  static inline ::System::Guid getStaticF__extenderPropertiesKey();

  static inline ::System::Guid getStaticF__extenderProviderKey();

  static inline ::System::Guid getStaticF__extenderProviderPropertiesKey();

  static inline ::System::Object* getStaticF__internalSyncObject();

  static inline ::System::Object* getStaticF__intrinsicNullableKey();

  static inline ::System::Object* getStaticF__intrinsicReferenceKey();

  static inline ::System::Collections::Hashtable* getStaticF__intrinsicTypeConverters();

  static inline ::System::Collections::Hashtable* getStaticF__propertyCache();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF__skipInterfaceAttributeList();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF__typeConstructor();

  /// @brief Method get_IntrinsicTypeConverters, addr 0x61b7630, size 0xa54, virtual false, abstract: false, final false
  static inline ::System::Collections::Hashtable* get_IntrinsicTypeConverters();

  static inline void setStaticF__attributeCache(::System::Collections::Hashtable* value);

  static inline void setStaticF__dictionaryKey(::System::Object* value);

  static inline void setStaticF__editorTables(::System::Collections::Hashtable* value);

  static inline void setStaticF__eventCache(::System::Collections::Hashtable* value);

  static inline void setStaticF__extendedPropertyCache(::System::Collections::Hashtable* value);

  static inline void setStaticF__extenderPropertiesKey(::System::Guid value);

  static inline void setStaticF__extenderProviderKey(::System::Guid value);

  static inline void setStaticF__extenderProviderPropertiesKey(::System::Guid value);

  static inline void setStaticF__internalSyncObject(::System::Object* value);

  static inline void setStaticF__intrinsicNullableKey(::System::Object* value);

  static inline void setStaticF__intrinsicReferenceKey(::System::Object* value);

  static inline void setStaticF__intrinsicTypeConverters(::System::Collections::Hashtable* value);

  static inline void setStaticF__propertyCache(::System::Collections::Hashtable* value);

  static inline void setStaticF__skipInterfaceAttributeList(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF__typeConstructor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectTypeDescriptionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11297 };

  /// @brief Field _typeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____typeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReflectTypeDescriptionProvider, ____typeData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectTypeDescriptionProvider, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider*, "System.ComponentModel", "ReflectTypeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*, "System.ComponentModel", "ReflectTypeDescriptionProvider/ReflectedTypeData");
