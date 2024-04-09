#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyDictionary_2)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> struct __ReadOnlyDictionary_2__DictionaryEnumerator;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class __ReadOnlyDictionary_2__KeyCollection;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class __ReadOnlyDictionary_2__ValueCollection;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
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
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class ReadOnlyDictionary_2;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class __ReadOnlyDictionary_2__KeyCollection;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> class __ReadOnlyDictionary_2__ValueCollection;
}
namespace System::Collections::ObjectModel {
template <typename TKey, typename TValue> struct __ReadOnlyDictionary_2__DictionaryEnumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::ObjectModel::ReadOnlyDictionary_2);
MARK_GEN_REF_PTR_T(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection);
MARK_GEN_REF_PTR_T(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection);
MARK_GEN_VAL_T(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator);
// Type: ::DictionaryEnumerator
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: ::ReadOnlyDictionary`2::DictionaryEnumerator<TKey,TValue>
struct CORDL_TYPE __ReadOnlyDictionary_2__DictionaryEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadOnlyDictionary_2__DictionaryEnumerator();

  // Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::IDictionary_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_enumerator", ty:
  // "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*", modifiers: "", def_value: None }]
  constexpr __ReadOnlyDictionary_2__DictionaryEnumerator(::System::Collections::Generic::IDictionary_2<TKey, TValue>* _dictionary,
                                                         ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator) noexcept;

  /// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _enumerator, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::ObjectModel
// Type: ::KeyCollection
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::ReadOnlyDictionary`2::KeyCollection<TKey,TValue>*
class CORDL_TYPE __ReadOnlyDictionary_2__KeyCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TKey__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TKey__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection))::System::Collections::Generic::ICollection_1<TKey>* _collection;

  /// @brief Field _syncRoot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TKey>* GetEnumerator();

  static inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* New_ctor();

  static inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* New_ctor(::System::Collections::Generic::ICollection_1<TKey>* collection);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TKey__Add(TKey item);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TKey__Clear();

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__Contains(TKey item);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__Remove(TKey item);

  /// @brief Method System.Collections.Generic.ICollection<TKey>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TKey__get_IsReadOnly();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::ICollection_1<TKey>*& __cordl_internal_get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<TKey>*> const& __cordl_internal_get__collection() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TKey>* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::ICollection_1<TKey>* collection);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr ::System::Collections::Generic::ICollection_1<TKey>* i___System__Collections__Generic__ICollection_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TKey>* i___System__Collections__Generic__IReadOnlyCollection_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadOnlyDictionary_2__KeyCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReadOnlyDictionary_2__KeyCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReadOnlyDictionary_2__KeyCollection(__ReadOnlyDictionary_2__KeyCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReadOnlyDictionary_2__KeyCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReadOnlyDictionary_2__KeyCollection(__ReadOnlyDictionary_2__KeyCollection const&) = delete;

  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<TKey>* ____collection;

  /// @brief Field _syncRoot, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::ObjectModel
// Type: ::ValueCollection
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::ReadOnlyDictionary`2::ValueCollection<TKey,TValue>*
class CORDL_TYPE __ReadOnlyDictionary_2__ValueCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_TValue__get_IsReadOnly)) bool System_Collections_Generic_ICollection_TValue__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__collection, put = __cordl_internal_set__collection))::System::Collections::Generic::ICollection_1<TValue>* _collection;

  /// @brief Field _syncRoot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  static inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* New_ctor();

  static inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* New_ctor(::System::Collections::Generic::ICollection_1<TValue>* collection);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TValue__Add(TValue item);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_TValue__Clear();

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__Contains(TValue item);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__Remove(TValue item);

  /// @brief Method System.Collections.Generic.ICollection<TValue>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_TValue__get_IsReadOnly();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::ICollection_1<TValue>*& __cordl_internal_get__collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<TValue>*> const& __cordl_internal_get__collection() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TValue>* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::ICollection_1<TValue>* collection);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr ::System::Collections::Generic::ICollection_1<TValue>* i___System__Collections__Generic__ICollection_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>* i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadOnlyDictionary_2__ValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReadOnlyDictionary_2__ValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReadOnlyDictionary_2__ValueCollection(__ReadOnlyDictionary_2__ValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReadOnlyDictionary_2__ValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReadOnlyDictionary_2__ValueCollection(__ReadOnlyDictionary_2__ValueCollection const&) = delete;

  /// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::ICollection_1<TValue>* ____collection;

  /// @brief Field _syncRoot, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::ObjectModel
// Type: System.Collections.ObjectModel::ReadOnlyDictionary`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::System.Collections.ObjectModel::ReadOnlyDictionary`2<TKey,TValue>*
class CORDL_TYPE ReadOnlyDictionary_2 : public ::System::Object {
public:
  // Declarations
  using DictionaryEnumerator = ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>;

  using KeyCollection = ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>;

  using ValueCollection = ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) TValue Item[];

  __declspec(property(get = get_Keys))::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* Keys;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Item,
                      put = System_Collections_Generic_IDictionary_TKey_TValue__set_Item)) TValue System_Collections_Generic_IDictionary_TKey_TValue__Item[];

  __declspec(property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Keys))::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__Keys;

  __declspec(
      property(get = System_Collections_Generic_IDictionary_TKey_TValue__get_Values))::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__Values;

  __declspec(property(
      get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys))::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Keys;

  __declspec(property(get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values))::System::Collections::Generic::IEnumerable_1<
      TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Values;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = get_Values))::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* Values;

  /// @brief Field _keys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* _keys;

  /// @brief Field _syncRoot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field _values, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* _values;

  /// @brief Field m_dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_dictionary, put = __cordl_internal_set_m_dictionary))::System::Collections::Generic::IDictionary_2<TKey, TValue>* m_dictionary;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method IsCompatibleKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleKey(::System::Object* key);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue System_Collections_Generic_IDictionary_TKey_TValue__get_Item(TKey key);

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IDictionary_TKey_TValue__set_Item(TKey key, TValue value);

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IDictionary.Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Clear();

  /// @brief Method System.Collections.IDictionary.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_Contains(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();

  /// @brief Method System.Collections.IDictionary.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_Remove(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

  /// @brief Method System.Collections.IDictionary.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsReadOnly();

  /// @brief Method System.Collections.IDictionary.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key);

  /// @brief Method System.Collections.IDictionary.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Keys();

  /// @brief Method System.Collections.IDictionary.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* System_Collections_IDictionary_get_Values();

  /// @brief Method System.Collections.IDictionary.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*& __cordl_internal_get__keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*> const& __cordl_internal_get__keys() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*> const& __cordl_internal_get__values() const;

  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& __cordl_internal_get_m_dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TKey, TValue>*> const& __cordl_internal_get_m_dictionary() const;

  constexpr void __cordl_internal_set__keys(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set__values(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* value);

  constexpr void __cordl_internal_set_m_dictionary(::System::Collections::Generic::IDictionary_2<TKey, TValue>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* get_Values();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyDictionary_2(ReadOnlyDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyDictionary_2(ReadOnlyDictionary_2 const&) = delete;

  /// @brief Field m_dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<TKey, TValue>* ___m_dictionary;

  /// @brief Field _syncRoot, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _keys, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* ____keys;

  /// @brief Field _values, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::ObjectModel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::ReadOnlyDictionary_2, "System.Collections.ObjectModel", "ReadOnlyDictionary`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection, "System.Collections.ObjectModel", "ReadOnlyDictionary`2/KeyCollection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection, "System.Collections.ObjectModel", "ReadOnlyDictionary`2/ValueCollection");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator, "System.Collections.ObjectModel", "ReadOnlyDictionary`2/DictionaryEnumerator");
