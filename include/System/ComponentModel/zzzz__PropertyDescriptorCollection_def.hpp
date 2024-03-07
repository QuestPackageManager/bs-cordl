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
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class __PropertyDescriptorCollection__PropertyDescriptorEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
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
// CS Name: ::PropertyDescriptorCollection::PropertyDescriptorEnumerator*
class CORDL_TYPE __PropertyDescriptorCollection__PropertyDescriptorEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__owner, put = __cordl_internal_set__owner))::System::ComponentModel::PropertyDescriptorCollection* _owner;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2a60874, size 0x40, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator* New_ctor(::System::ComponentModel::PropertyDescriptorCollection* owner);

  /// @brief Method Reset, addr 0x2a608b4, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__owner();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& __cordl_internal_get__owner() const;

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__owner(::System::ComponentModel::PropertyDescriptorCollection* value);

  /// @brief Method .ctor, addr 0x2a60700, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::PropertyDescriptorCollection* owner);

  /// @brief Method get_Current, addr 0x2a60730, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x2a60794, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x2a607fc, size 0x3c, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x2a60838, size 0x3c, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropertyDescriptorCollection__PropertyDescriptorEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PropertyDescriptorCollection__PropertyDescriptorEnumerator(__PropertyDescriptorCollection__PropertyDescriptorEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PropertyDescriptorCollection__PropertyDescriptorEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PropertyDescriptorCollection__PropertyDescriptorEnumerator(__PropertyDescriptorCollection__PropertyDescriptorEnumerator const&) = delete;

  /// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____owner;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator, ____owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator, ____index) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::PropertyDescriptorCollection
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::PropertyDescriptorCollection*
class CORDL_TYPE PropertyDescriptorCollection : public ::System::Object {
public:
  // Declarations
  using PropertyDescriptorEnumerator = ::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::ComponentModel::PropertyDescriptorCollection* Empty;

  __declspec(property(get = get_Item))::System::ComponentModel::PropertyDescriptor* Item[];

  __declspec(property(get = get_Item))::System::ComponentModel::PropertyDescriptor* Item[];

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Field <Count>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__Count_k__BackingField, put = __cordl_internal_set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field _cachedFoundProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedFoundProperties, put = __cordl_internal_set__cachedFoundProperties))::System::Collections::IDictionary* _cachedFoundProperties;

  /// @brief Field _cachedIgnoreCase, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__cachedIgnoreCase, put = __cordl_internal_set__cachedIgnoreCase)) bool _cachedIgnoreCase;

  /// @brief Field _comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer))::System::Collections::IComparer* _comparer;

  /// @brief Field _internalSyncObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__internalSyncObject, put = __cordl_internal_set__internalSyncObject))::System::Object* _internalSyncObject;

  /// @brief Field _namedSort, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__namedSort, put = __cordl_internal_set__namedSort))::ArrayW<::StringW, ::Array<::StringW>*> _namedSort;

  /// @brief Field _needSort, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__needSort, put = __cordl_internal_set__needSort)) bool _needSort;

  /// @brief Field _properties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__properties,
                      put = __cordl_internal_set__properties))::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> _properties;

  /// @brief Field _propsOwned, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__propsOwned, put = __cordl_internal_set__propsOwned)) bool _propsOwned;

  /// @brief Field _readOnly, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__readOnly, put = __cordl_internal_set__readOnly)) bool _readOnly;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x2a5db00, size 0xd0, virtual false, abstract: false, final false
  inline int32_t Add(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method Clear, addr 0x2a5dcd0, size 0x58, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x2a5dd28, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method CopyTo, addr 0x2a5dda0, size 0x3c, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method EnsurePropsOwned, addr 0x2a5da40, size 0xac, virtual false, abstract: false, final false
  inline void EnsurePropsOwned();

  /// @brief Method EnsureSize, addr 0x2a5dbd0, size 0x100, virtual false, abstract: false, final false
  inline void EnsureSize(int32_t sizeNeeded);

  /// @brief Method Find, addr 0x2a5e038, size 0x510, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* Find(::StringW name, bool ignoreCase);

  /// @brief Method GetEnumerator, addr 0x2a5e858, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2a5dd40, size 0x60, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method Insert, addr 0x2a5e548, size 0xf0, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method InternalSort, addr 0x2a5dddc, size 0x25c, virtual false, abstract: false, final false
  inline void InternalSort(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method InternalSort, addr 0x2a5e7e0, size 0x78, virtual false, abstract: false, final false
  inline void InternalSort(::System::Collections::IComparer* sorter);

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties);

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, int32_t propCount,
           ::ArrayW<::StringW, ::Array<::StringW>*> namedSort, ::System::Collections::IComparer* comparer);

  static inline ::System::ComponentModel::PropertyDescriptorCollection*
  New_ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, bool readOnly);

  /// @brief Method Remove, addr 0x2a5e638, size 0x70, virtual false, abstract: false, final false
  inline void Remove(::System::ComponentModel::PropertyDescriptor* value);

  /// @brief Method RemoveAt, addr 0x2a5e6a8, size 0xb4, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method Sort, addr 0x2a5e75c, size 0x84, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* Sort(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x2a5e904, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2a5e8f4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2a5e8fc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x2a5e928, size 0xc8, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Clear, addr 0x2a5e910, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Clear();

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x2a5e9f0, size 0x80, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x2a5ea70, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x2a5f0f0, size 0xf4, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x2a5ead4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x2a5eadc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x2a5eae4, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x2a5ef28, size 0xf0, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x2a5f018, size 0xd8, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x2a5eb60, size 0x3c8, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2a5e914, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.Add, addr 0x2a5f1e4, size 0x84, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x2a5e90c, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x2a5f268, size 0x90, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x2a5f2f8, size 0x84, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x2a5f37c, size 0x94, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x2a5f420, size 0x84, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x2a5e924, size 0x4, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2a5f418, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2a5f410, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x2a5f4a4, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x2a5f4b4, size 0x1e0, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Count_k__BackingField();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__cachedFoundProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__cachedFoundProperties() const;

  constexpr bool const& __cordl_internal_get__cachedIgnoreCase() const;

  constexpr bool& __cordl_internal_get__cachedIgnoreCase();

  constexpr ::System::Collections::IComparer*& __cordl_internal_get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __cordl_internal_get__comparer() const;

  constexpr ::System::Object*& __cordl_internal_get__internalSyncObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__internalSyncObject() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__namedSort() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__namedSort();

  constexpr bool const& __cordl_internal_get__needSort() const;

  constexpr bool& __cordl_internal_get__needSort();

  constexpr ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> const& __cordl_internal_get__properties() const;

  constexpr ::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*>& __cordl_internal_get__properties();

  constexpr bool const& __cordl_internal_get__propsOwned() const;

  constexpr bool& __cordl_internal_get__propsOwned();

  constexpr bool const& __cordl_internal_get__readOnly() const;

  constexpr bool& __cordl_internal_get__readOnly();

  constexpr void __cordl_internal_set__Count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__cachedFoundProperties(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__cachedIgnoreCase(bool value);

  constexpr void __cordl_internal_set__comparer(::System::Collections::IComparer* value);

  constexpr void __cordl_internal_set__internalSyncObject(::System::Object* value);

  constexpr void __cordl_internal_set__namedSort(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__needSort(bool value);

  constexpr void __cordl_internal_set__properties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> value);

  constexpr void __cordl_internal_set__propsOwned(bool value);

  constexpr void __cordl_internal_set__readOnly(bool value);

  /// @brief Method .ctor, addr 0x2a508e0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties);

  /// @brief Method .ctor, addr 0x2a5d89c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, int32_t propCount,
                    ::ArrayW<::StringW, ::Array<::StringW>*> namedSort, ::System::Collections::IComparer* comparer);

  /// @brief Method .ctor, addr 0x2a5d878, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> properties, bool readOnly);

  static inline ::System::ComponentModel::PropertyDescriptorCollection* getStaticF_Empty();

  /// @brief Method get_Count, addr 0x2a5d9a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2a5d9b4, size 0x8c, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x2a5daec, size 0x14, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_Item(::StringW name);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  static inline void setStaticF_Empty(::System::ComponentModel::PropertyDescriptorCollection* value);

  /// @brief Method set_Count, addr 0x2a5d9ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyDescriptorCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyDescriptorCollection(PropertyDescriptorCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptorCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyDescriptorCollection(PropertyDescriptorCollection const&) = delete;

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

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____cachedFoundProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____cachedIgnoreCase) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____properties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____namedSort) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____comparer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____propsOwned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____needSort) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____readOnly) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____internalSyncObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptorCollection, ____Count_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyDescriptorCollection*, "System.ComponentModel", "PropertyDescriptorCollection");
NEED_NO_BOX(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__PropertyDescriptorCollection__PropertyDescriptorEnumerator*, "System.ComponentModel", "PropertyDescriptorCollection/PropertyDescriptorEnumerator");
