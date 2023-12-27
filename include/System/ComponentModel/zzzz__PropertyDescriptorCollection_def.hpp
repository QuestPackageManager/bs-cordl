#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyDescriptorCollection)
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class __PropertyDescriptorCollection__PropertyDescriptorEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class __PropertyDescriptorCollection__PropertyDescriptorEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyDescriptorCollection);
MARK_REF_PTR_T(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator);
// Type: ::PropertyDescriptorEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9445))
// CS Name: ::PropertyDescriptorCollection::PropertyDescriptorEnumerator*
class CORDL_TYPE __PropertyDescriptorCollection__PropertyDescriptorEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _owner, offset 0x10, size 0x8
  __declspec(property(get = __get__owner, put = __set__owner))::System::ComponentModel::PropertyDescriptorCollection* _owner;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __get__owner();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& __get__owner() const;

  constexpr void __set__owner(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  static inline ::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator* New_ctor(::System::ComponentModel::PropertyDescriptorCollection* owner);

  /// @brief Method .ctor addr 0x29153e4 size 0x30 virtual false final false
  inline void _ctor(::System::ComponentModel::PropertyDescriptorCollection* owner);

  /// @brief Method get_Current addr 0x2915414 size 0x64 virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry addr 0x2915478 size 0x68 virtual true final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key addr 0x29154e0 size 0x3c virtual true final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value addr 0x291551c size 0x3c virtual true final true
  inline ::System::Object* get_Value();

  /// @brief Method MoveNext addr 0x2915558 size 0x40 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2915598 size 0xc virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PropertyDescriptorCollection__PropertyDescriptorEnumerator(__PropertyDescriptorCollection__PropertyDescriptorEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PropertyDescriptorCollection__PropertyDescriptorEnumerator(__PropertyDescriptorCollection__PropertyDescriptorEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropertyDescriptorCollection__PropertyDescriptorEnumerator();

public:
  /// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____owner;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::PropertyDescriptorCollection
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9446))
// CS Name: ::System.ComponentModel::PropertyDescriptorCollection*
class CORDL_TYPE PropertyDescriptorCollection : public ::System::Object {
public:
  // Declarations
  using PropertyDescriptorEnumerator = ::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator;

  /// @brief Field _cachedFoundProperties, offset 0x10, size 0x8
  __declspec(property(get = __get__cachedFoundProperties, put = __set__cachedFoundProperties))::System::Collections::IDictionary* _cachedFoundProperties;

  /// @brief Field _cachedIgnoreCase, offset 0x18, size 0x1
  __declspec(property(get = __get__cachedIgnoreCase, put = __set__cachedIgnoreCase)) bool _cachedIgnoreCase;

  /// @brief Field _properties, offset 0x20, size 0x8
  __declspec(property(get = __get__properties, put = __set__properties))::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> _properties;

  /// @brief Field _namedSort, offset 0x28, size 0x8
  __declspec(property(get = __get__namedSort, put = __set__namedSort))::ArrayW<::StringW, ::Array<::StringW>*> _namedSort;

  /// @brief Field _comparer, offset 0x30, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::IComparer* _comparer;

  /// @brief Field _propsOwned, offset 0x38, size 0x1
  __declspec(property(get = __get__propsOwned, put = __set__propsOwned)) bool _propsOwned;

  /// @brief Field _needSort, offset 0x39, size 0x1
  __declspec(property(get = __get__needSort, put = __set__needSort)) bool _needSort;

  /// @brief Field _readOnly, offset 0x3a, size 0x1
  __declspec(property(get = __get__readOnly, put = __set__readOnly)) bool _readOnly;

  /// @brief Field _internalSyncObject, offset 0x40, size 0x8
  __declspec(property(get = __get__internalSyncObject, put = __set__internalSyncObject))::System::Object* _internalSyncObject;

  /// @brief Field <Count>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __get__Count_k__BackingField, put = __set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::ComponentModel::PropertyDescriptorCollection* Empty;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::ComponentModel::PropertyDescriptor* Item[];

  __declspec(property(get = get_Item))::System::ComponentModel::PropertyDescriptor* Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  constexpr ::System::Collections::IDictionary*& __get__cachedFoundProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__cachedFoundProperties() const;

  constexpr void __set__cachedFoundProperties(::System::Collections::IDictionary* value);

  constexpr bool& __get__cachedIgnoreCase();

  constexpr bool const& __get__cachedIgnoreCase() const;

  constexpr void __set__cachedIgnoreCase(bool value);

  constexpr ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*>& __get__properties();

  constexpr ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> const& __get__properties() const;

  constexpr void __set__properties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__namedSort();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__namedSort() const;

  constexpr void __set__namedSort(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Collections::IComparer*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::IComparer* value);

  constexpr bool& __get__propsOwned();

  constexpr bool const& __get__propsOwned() const;

  constexpr void __set__propsOwned(bool value);

  constexpr bool& __get__needSort();

  constexpr bool const& __get__needSort() const;

  constexpr void __set__needSort(bool value);

  constexpr bool& __get__readOnly();

  constexpr bool const& __get__readOnly() const;

  constexpr void __set__readOnly(bool value);

  constexpr ::System::Object*& __get__internalSyncObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__internalSyncObject() const;

  constexpr void __set__internalSyncObject(::System::Object* value);

  constexpr int32_t& __get__Count_k__BackingField();

  constexpr int32_t const& __get__Count_k__BackingField() const;

  constexpr void __set__Count_k__BackingField(int32_t value);

  static inline void setStaticF_Empty(::System::ComponentModel::PropertyDescriptorCollection* value);

  static inline ::System::ComponentModel::PropertyDescriptorCollection* getStaticF_Empty();

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties);

  /// @brief Method .ctor addr 0x29055c4 size 0xf0 virtual false final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties);

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, bool readOnly);

  /// @brief Method .ctor addr 0x291255c size 0x24 virtual false final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, bool readOnly);

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, int32_t propCount,
           ::ArrayW<::StringW, ::Array<::StringW>*> namedSort, ::System::Collections::IComparer* comparer);

  /// @brief Method .ctor addr 0x2912580 size 0x108 virtual false final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, int32_t propCount,
                    ::ArrayW<::StringW, ::Array<::StringW>*> namedSort, ::System::Collections::IComparer* comparer);

  /// @brief Method get_Count addr 0x2912688 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method set_Count addr 0x2912690 size 0x8 virtual false final false
  inline void set_Count(int32_t value);

  /// @brief Method get_Item addr 0x2912698 size 0x8c virtual true final false
  inline ::System::ComponentModel::PropertyDescriptor* get_Item(int32_t index);

  /// @brief Method get_Item addr 0x29127d0 size 0x14 virtual true final false
  inline ::System::ComponentModel::PropertyDescriptor* get_Item(::StringW name);

  /// @brief Method Add addr 0x29127e4 size 0xd0 virtual false final false
  inline int32_t Add(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method Clear addr 0x29129b4 size 0x58 virtual false final false
  inline void Clear();

  /// @brief Method Contains addr 0x2912a0c size 0x18 virtual false final false
  inline bool Contains(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method CopyTo addr 0x2912a84 size 0x3c virtual true final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method EnsurePropsOwned addr 0x2912724 size 0xac virtual false final false
  inline void EnsurePropsOwned();

  /// @brief Method EnsureSize addr 0x29128b4 size 0x100 virtual false final false
  inline void EnsureSize(int32_t sizeNeeded);

  /// @brief Method Find addr 0x2912d1c size 0x510 virtual true final false
  inline ::System::ComponentModel::PropertyDescriptor* Find(::StringW name, bool ignoreCase);

  /// @brief Method IndexOf addr 0x2912a24 size 0x60 virtual false final false
  inline int32_t IndexOf(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method Insert addr 0x291322c size 0xf0 virtual false final false
  inline void Insert(int32_t index, ::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method Remove addr 0x291331c size 0x70 virtual false final false
  inline void Remove(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method RemoveAt addr 0x291338c size 0xb4 virtual false final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Sort addr 0x2913440 size 0x84 virtual true final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* Sort(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method InternalSort addr 0x2912ac0 size 0x25c virtual false final false
  inline void InternalSort(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method InternalSort addr 0x29134c4 size 0x78 virtual false final false
  inline void InternalSort(::System::Collections::IComparer* sorter);

  /// @brief Method GetEnumerator addr 0x291353c size 0x9c virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x29135d8 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x29135e0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.get_Count addr 0x29135e8 size 0x8 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.IList.Clear addr 0x29135f0 size 0x4 virtual true final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IDictionary.Clear addr 0x29135f4 size 0x4 virtual true final true
  inline void System_Collections_IDictionary_Clear();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29135f8 size 0x10 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.RemoveAt addr 0x2913608 size 0x4 virtual true final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IDictionary.Add addr 0x291360c size 0xc8 virtual true final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Contains addr 0x29136d4 size 0x80 virtual true final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator addr 0x2913754 size 0x64 virtual true final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize addr 0x29137b8 size 0x8 virtual true final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly addr 0x29137c0 size 0x8 virtual true final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item addr 0x29137c8 size 0x7c virtual true final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.set_Item addr 0x2913844 size 0x3c8 virtual true final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.get_Keys addr 0x2913c0c size 0xf0 virtual true final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values addr 0x2913cfc size 0xd8 virtual true final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.Remove addr 0x2913dd4 size 0xf4 virtual true final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IList.Add addr 0x2913ec8 size 0x84 virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains addr 0x2913f4c size 0x90 virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf addr 0x2913fdc size 0x84 virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert addr 0x2914060 size 0x94 virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.get_IsReadOnly addr 0x29140f4 size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_IsFixedSize addr 0x29140fc size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.Remove addr 0x2914104 size 0x84 virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.get_Item addr 0x2914188 size 0x10 virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x2914198 size 0x1e0 virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyDescriptorCollection(PropertyDescriptorCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyDescriptorCollection(PropertyDescriptorCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyDescriptorCollection();

public:
  /// @brief Field _cachedFoundProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____cachedFoundProperties;

  /// @brief Field _cachedIgnoreCase, offset: 0x18, size: 0x1, def value: None
  bool ____cachedIgnoreCase;

  /// @brief Field _properties, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> ____properties;

  /// @brief Field _namedSort, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____namedSort;

  /// @brief Field _comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::IComparer* ____comparer;

  /// @brief Field _propsOwned, offset: 0x38, size: 0x1, def value: None
  bool ____propsOwned;

  /// @brief Field _needSort, offset: 0x39, size: 0x1, def value: None
  bool ____needSort;

  /// @brief Field _readOnly, offset: 0x3a, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field _internalSyncObject, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____internalSyncObject;

  /// @brief Field <Count>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyDescriptorCollection, 0x50>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptorCollection*, "System.ComponentModel", "PropertyDescriptorCollection");
NEED_NO_BOX(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator*, "System.ComponentModel", "PropertyDescriptorCollection/PropertyDescriptorEnumerator");
