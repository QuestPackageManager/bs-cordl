#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectTypeDescriptionProvider)
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::Collections {
class Hashtable;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class __ReflectTypeDescriptionProvider__ReflectedTypeData;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::ComponentModel {
class EditorAttribute;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectTypeDescriptionProvider;
}
namespace System::ComponentModel {
class __ReflectTypeDescriptionProvider__ReflectedTypeData;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectTypeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData);
// Type: ::ReflectedTypeData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9476))
// CS Name: ::ReflectTypeDescriptionProvider::ReflectedTypeData*
class CORDL_TYPE __ReflectTypeDescriptionProvider__ReflectedTypeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __get__type, put = __set__type))::System::Type* _type;

  /// @brief Field _attributes, offset 0x18, size 0x8
  __declspec(property(get = __get__attributes, put = __set__attributes))::System::ComponentModel::AttributeCollection* _attributes;

  /// @brief Field _events, offset 0x20, size 0x8
  __declspec(property(get = __get__events, put = __set__events))::System::ComponentModel::EventDescriptorCollection* _events;

  /// @brief Field _properties, offset 0x28, size 0x8
  __declspec(property(get = __get__properties, put = __set__properties))::System::ComponentModel::PropertyDescriptorCollection* _properties;

  /// @brief Field _converter, offset 0x30, size 0x8
  __declspec(property(get = __get__converter, put = __set__converter))::System::ComponentModel::TypeConverter* _converter;

  /// @brief Field _editors, offset 0x38, size 0x8
  __declspec(property(get = __get__editors, put = __set__editors))::ArrayW<::System::Object*, ::Array<::System::Object*>*> _editors;

  /// @brief Field _editorTypes, offset 0x40, size 0x8
  __declspec(property(get = __get__editorTypes, put = __set__editorTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _editorTypes;

  /// @brief Field _editorCount, offset 0x48, size 0x4
  __declspec(property(get = __get__editorCount, put = __set__editorCount)) int32_t _editorCount;

  __declspec(property(get = get_IsPopulated)) bool IsPopulated;

  constexpr ::System::Type*& __get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__type() const;

  constexpr void __set__type(::System::Type* value);

  constexpr ::System::ComponentModel::AttributeCollection*& __get__attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AttributeCollection*> const& __get__attributes() const;

  constexpr void __set__attributes(::System::ComponentModel::AttributeCollection* value);

  constexpr ::System::ComponentModel::EventDescriptorCollection*& __get__events();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::EventDescriptorCollection*> const& __get__events() const;

  constexpr void __set__events(::System::ComponentModel::EventDescriptorCollection* value);

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __get__properties();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& __get__properties() const;

  constexpr void __set__properties(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr ::System::ComponentModel::TypeConverter*& __get__converter();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeConverter*> const& __get__converter() const;

  constexpr void __set__converter(::System::ComponentModel::TypeConverter* value);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __get__editors();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __get__editors() const;

  constexpr void __set__editors(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get__editorTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get__editorTypes() const;

  constexpr void __set__editorTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr int32_t& __get__editorCount();

  constexpr int32_t const& __get__editorCount() const;

  constexpr void __set__editorCount(int32_t value);

  static inline ::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x2929208 size 0x28 virtual false final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_IsPopulated addr 0x2929378 size 0x1c virtual false final false
  inline bool get_IsPopulated();

  /// @brief Method GetAttributes addr 0x2924820 size 0x540 virtual false final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  /// @brief Method GetClassName addr 0x29250f8 size 0x24 virtual false final false
  inline ::StringW GetClassName(::System::Object* instance);

  /// @brief Method GetComponentName addr 0x2925140 size 0x1ac virtual false final false
  inline ::StringW GetComponentName(::System::Object* instance);

  /// @brief Method GetConverter addr 0x2925310 size 0x468 virtual false final false
  inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Object* instance);

  /// @brief Method GetDefaultEvent addr 0x292579c size 0x19c virtual false final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Object* instance);

  /// @brief Method GetDefaultProperty addr 0x292595c size 0x19c virtual false final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Object* instance);

  /// @brief Method GetEditor addr 0x2925b2c size 0x5b0 virtual false final false
  inline ::System::Object* GetEditor(::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetEditorAttribute addr 0x292b6e0 size 0x3c8 virtual false final false
  static inline ::System::ComponentModel::EditorAttribute* GetEditorAttribute(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* editorBaseType);

  /// @brief Method GetEvents addr 0x2926514 size 0x2fc virtual false final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents();

  /// @brief Method GetProperties addr 0x2928f04 size 0x2fc virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();

  /// @brief Method GetTypeFromName addr 0x292b1bc size 0x1a8 virtual false final false
  inline ::System::Type* GetTypeFromName(::StringW typeName);

  /// @brief Method Refresh addr 0x292a4d8 size 0x18 virtual false final false
  inline void Refresh();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectTypeDescriptionProvider__ReflectedTypeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectTypeDescriptionProvider__ReflectedTypeData(__ReflectTypeDescriptionProvider__ReflectedTypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectTypeDescriptionProvider__ReflectedTypeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectTypeDescriptionProvider__ReflectedTypeData(__ReflectTypeDescriptionProvider__ReflectedTypeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectTypeDescriptionProvider__ReflectedTypeData();

public:
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
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData, 0x50>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::ReflectTypeDescriptionProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9460)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9477))
// CS Name: ::System.ComponentModel::ReflectTypeDescriptionProvider*
class CORDL_TYPE ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
  // Declarations
  using ReflectedTypeData = ::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData;

  /// @brief Field _typeData, offset 0x20, size 0x8
  __declspec(property(get = __get__typeData, put = __set__typeData))::System::Collections::Hashtable* _typeData;

  /// @brief Field _typeConstructor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__typeConstructor, put = setStaticF__typeConstructor))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _typeConstructor;

  /// @brief Field _editorTables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__editorTables, put = setStaticF__editorTables))::System::Collections::Hashtable* _editorTables;

  /// @brief Field _intrinsicTypeConverters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__intrinsicTypeConverters, put = setStaticF__intrinsicTypeConverters))::System::Collections::Hashtable* _intrinsicTypeConverters;

  /// @brief Field _intrinsicReferenceKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__intrinsicReferenceKey, put = setStaticF__intrinsicReferenceKey))::System::Object* _intrinsicReferenceKey;

  /// @brief Field _intrinsicNullableKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__intrinsicNullableKey, put = setStaticF__intrinsicNullableKey))::System::Object* _intrinsicNullableKey;

  /// @brief Field _dictionaryKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__dictionaryKey, put = setStaticF__dictionaryKey))::System::Object* _dictionaryKey;

  /// @brief Field _propertyCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__propertyCache, put = setStaticF__propertyCache))::System::Collections::Hashtable* _propertyCache;

  /// @brief Field _eventCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__eventCache, put = setStaticF__eventCache))::System::Collections::Hashtable* _eventCache;

  /// @brief Field _attributeCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__attributeCache, put = setStaticF__attributeCache))::System::Collections::Hashtable* _attributeCache;

  /// @brief Field _extendedPropertyCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__extendedPropertyCache, put = setStaticF__extendedPropertyCache))::System::Collections::Hashtable* _extendedPropertyCache;

  /// @brief Field _extenderProviderKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__extenderProviderKey, put = setStaticF__extenderProviderKey))::System::Guid _extenderProviderKey;

  /// @brief Field _extenderPropertiesKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__extenderPropertiesKey, put = setStaticF__extenderPropertiesKey))::System::Guid _extenderPropertiesKey;

  /// @brief Field _extenderProviderPropertiesKey, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__extenderProviderPropertiesKey, put = setStaticF__extenderProviderPropertiesKey))::System::Guid _extenderProviderPropertiesKey;

  /// @brief Field _skipInterfaceAttributeList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__skipInterfaceAttributeList,
                             put = setStaticF__skipInterfaceAttributeList))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _skipInterfaceAttributeList;

  /// @brief Field _internalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__internalSyncObject, put = setStaticF__internalSyncObject))::System::Object* _internalSyncObject;

  constexpr ::System::Collections::Hashtable*& __get__typeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__typeData() const;

  constexpr void __set__typeData(::System::Collections::Hashtable* value);

  static inline void setStaticF__typeConstructor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF__typeConstructor();

  static inline void setStaticF__editorTables(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__editorTables();

  static inline void setStaticF__intrinsicTypeConverters(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__intrinsicTypeConverters();

  static inline void setStaticF__intrinsicReferenceKey(::System::Object* value);

  static inline ::System::Object* getStaticF__intrinsicReferenceKey();

  static inline void setStaticF__intrinsicNullableKey(::System::Object* value);

  static inline ::System::Object* getStaticF__intrinsicNullableKey();

  static inline void setStaticF__dictionaryKey(::System::Object* value);

  static inline ::System::Object* getStaticF__dictionaryKey();

  static inline void setStaticF__propertyCache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__propertyCache();

  static inline void setStaticF__eventCache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__eventCache();

  static inline void setStaticF__attributeCache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__attributeCache();

  static inline void setStaticF__extendedPropertyCache(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__extendedPropertyCache();

  static inline void setStaticF__extenderProviderKey(::System::Guid value);

  static inline ::System::Guid getStaticF__extenderProviderKey();

  static inline void setStaticF__extenderPropertiesKey(::System::Guid value);

  static inline ::System::Guid getStaticF__extenderPropertiesKey();

  static inline void setStaticF__extenderProviderPropertiesKey(::System::Guid value);

  static inline ::System::Guid getStaticF__extenderProviderPropertiesKey();

  static inline void setStaticF__skipInterfaceAttributeList(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF__skipInterfaceAttributeList();

  static inline void setStaticF__internalSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF__internalSyncObject();

  static inline ::System::ComponentModel::ReflectTypeDescriptionProvider* New_ctor();

  /// @brief Method .ctor addr 0x2923980 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_IntrinsicTypeConverters addr 0x2923988 size 0xb00 virtual false final false
  static inline ::System::Collections::Hashtable* get_IntrinsicTypeConverters();

  /// @brief Method CreateInstance addr 0x2924488 size 0xfc virtual false final false
  static inline ::System::Object* CreateInstance(::System::Type* objectType, ::System::Type* callingType);

  /// @brief Method GetAttributes addr 0x2924584 size 0x1c virtual false final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* type);

  /// @brief Method GetCache addr 0x2924d60 size 0x368 virtual true final false
  inline ::System::Collections::IDictionary* GetCache(::System::Object* instance);

  /// @brief Method GetClassName addr 0x29250c8 size 0x30 virtual false final false
  inline ::StringW GetClassName(::System::Type* type);

  /// @brief Method GetComponentName addr 0x292511c size 0x24 virtual false final false
  inline ::StringW GetComponentName(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetConverter addr 0x29252ec size 0x24 virtual false final false
  inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetDefaultEvent addr 0x2925778 size 0x24 virtual false final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetDefaultProperty addr 0x2925938 size 0x24 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty(::System::Type* type, ::System::Object* instance);

  /// @brief Method GetEditor addr 0x2925af8 size 0x34 virtual false final false
  inline ::System::Object* GetEditor(::System::Type* type, ::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetEditorTable addr 0x29260dc size 0x41c virtual false final false
  static inline ::System::Collections::Hashtable* GetEditorTable(::System::Type* editorBaseType);

  /// @brief Method GetEvents addr 0x29264f8 size 0x1c virtual false final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::System::Type* type);

  /// @brief Method GetExtendedAttributes addr 0x2926810 size 0x58 virtual false final false
  inline ::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::System::Object* instance);

  /// @brief Method GetExtendedClassName addr 0x2926868 size 0x2c virtual false final false
  inline ::StringW GetExtendedClassName(::System::Object* instance);

  /// @brief Method GetExtendedComponentName addr 0x2926894 size 0x3c virtual false final false
  inline ::StringW GetExtendedComponentName(::System::Object* instance);

  /// @brief Method GetExtendedConverter addr 0x29268d0 size 0x3c virtual false final false
  inline ::System::ComponentModel::TypeConverter* GetExtendedConverter(::System::Object* instance);

  /// @brief Method GetExtendedDefaultEvent addr 0x292690c size 0x8 virtual false final false
  inline ::System::ComponentModel::EventDescriptor* GetExtendedDefaultEvent(::System::Object* instance);

  /// @brief Method GetExtendedDefaultProperty addr 0x2926914 size 0x8 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptor* GetExtendedDefaultProperty(::System::Object* instance);

  /// @brief Method GetExtendedEditor addr 0x292691c size 0x44 virtual false final false
  inline ::System::Object* GetExtendedEditor(::System::Object* instance, ::System::Type* editorBaseType);

  /// @brief Method GetExtendedEvents addr 0x2926960 size 0x58 virtual false final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetExtendedEvents(::System::Object* instance);

  /// @brief Method GetExtendedProperties addr 0x29269b8 size 0x544 virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetExtendedProperties(::System::Object* instance);

  /// @brief Method GetExtenderProviders addr 0x2927eb0 size 0x48c virtual true final false
  inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object* instance);

  /// @brief Method GetExtenders addr 0x292833c size 0xb14 virtual false final false
  static inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
  GetExtenders(::System::Collections::ICollection* components, ::System::Object* instance, ::System::Collections::IDictionary* cache);

  /// @brief Method GetExtendedPropertyOwner addr 0x2928e50 size 0x2c virtual false final false
  inline ::System::Object* GetExtendedPropertyOwner(::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method GetExtendedTypeDescriptor addr 0x2928ee0 size 0x8 virtual true final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* instance);

  /// @brief Method GetProperties addr 0x2928ee8 size 0x1c virtual false final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::Type* type);

  /// @brief Method GetPropertyOwner addr 0x2928e7c size 0x64 virtual false final false
  inline ::System::Object* GetPropertyOwner(::System::Type* type, ::System::Object* instance, ::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method GetReflectionType addr 0x2929200 size 0x8 virtual true final false
  inline ::System::Type* GetReflectionType(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeData addr 0x29245a0 size 0x280 virtual false final false
  inline ::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData* GetTypeData(::System::Type* type, bool createIfNeeded);

  /// @brief Method GetTypeDescriptor addr 0x2929230 size 0x8 virtual true final false
  inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance);

  /// @brief Method GetTypeFromName addr 0x2929238 size 0x110 virtual false final false
  static inline ::System::Type* GetTypeFromName(::StringW typeName);

  /// @brief Method IsPopulated addr 0x2929348 size 0x30 virtual false final false
  inline bool IsPopulated(::System::Type* type);

  /// @brief Method ReflectGetAttributes addr 0x2929394 size 0x450 virtual false final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ReflectGetAttributes(::System::Type* type);

  /// @brief Method ReflectGetAttributes addr 0x29179dc size 0x450 virtual false final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ReflectGetAttributes(::System::Reflection::MemberInfo* member);

  /// @brief Method ReflectGetEvents addr 0x29297e4 size 0x6b4 virtual false final false
  static inline ::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> ReflectGetEvents(::System::Type* type);

  /// @brief Method ReflectGetExtendedProperties addr 0x2926f68 size 0xf48 virtual false final false
  static inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*>
  ReflectGetExtendedProperties(::System::ComponentModel::IExtenderProvider* provider);

  /// @brief Method ReflectGetProperties addr 0x2929e98 size 0x614 virtual false final false
  static inline ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> ReflectGetProperties(::System::Type* type);

  /// @brief Method Refresh addr 0x292a4ac size 0x2c virtual false final false
  inline void Refresh(::System::Type* type);

  /// @brief Method SearchIntrinsicTable addr 0x292a4f0 size 0x990 virtual false final false
  static inline ::System::Object* SearchIntrinsicTable(::System::Collections::Hashtable* table, ::System::Type* callingType);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectTypeDescriptionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectTypeDescriptionProvider(ReflectTypeDescriptionProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectTypeDescriptionProvider();

public:
  /// @brief Field _typeData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____typeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectTypeDescriptionProvider, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectTypeDescriptionProvider*, "System.ComponentModel", "ReflectTypeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__ReflectTypeDescriptionProvider__ReflectedTypeData*, "System.ComponentModel", "ReflectTypeDescriptionProvider/ReflectedTypeData");
