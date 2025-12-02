#pragma once
// IWYU pragma private; include "System/Collections/Generic/SortedList_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_2)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
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
template <typename T> class IList_1;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct SortedList_2_Enumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_KeyList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_SortedListKeyEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_SortedListValueEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_ValueList;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_KeyList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_SortedListKeyEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_SortedListValueEnumerator;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2_ValueList;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct SortedList_2_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2_KeyList);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2_SortedListValueEnumerator);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedList_2_ValueList);
MARK_GEN_VAL_T(::System::Collections::Generic::SortedList_2_Enumerator);
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: System.Collections.Generic.SortedList`2/Enumerator<TKey,TValue>
struct CORDL_TYPE SortedList_2_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> Current;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Entry)) ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_Entry;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Key)) ::System::Object* System_Collections_IDictionaryEnumerator_Key;

  __declspec(property(get = System_Collections_IDictionaryEnumerator_get_Value)) ::System::Object* System_Collections_IDictionaryEnumerator_Value;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*();

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Entry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Key();

  /// @brief Method System.Collections.IDictionaryEnumerator.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IDictionaryEnumerator_get_Value();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList, int32_t getEnumeratorRetType);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2_Enumerator();

  // Ctor Parameters [CppParam { name: "_sortedList", ty: "::System::Collections::Generic::SortedList_2<TKey,TValue>*", modifiers: "", def_value: None }, CppParam { name: "_key", ty: "TKey",
  // modifiers: "", def_value: None }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortedList_2_Enumerator(::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList, TKey _key, TValue _value, int32_t _index, int32_t _version,
                                    int32_t _getEnumeratorRetType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field _sortedList, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _key, offset: 0x8, size: 0x8, def value: None
  TKey _key;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  TValue _value;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _getEnumeratorRetType, offset: 0x20, size: 0x4, def value: None
  int32_t _getEnumeratorRetType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.SortedList`2/SortedListKeyEnumerator<TKey,TValue>
class CORDL_TYPE SortedList_2_SortedListKeyEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TKey Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _currentKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentKey, put = __cordl_internal_set__currentKey)) TKey _currentKey;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList)) ::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr TKey const& __cordl_internal_get__currentKey() const;

  constexpr TKey& __cordl_internal_get__currentKey();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& __cordl_internal_get__sortedList() const;

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__sortedList();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentKey(TKey value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* i___System__Collections__Generic__IEnumerator_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2_SortedListKeyEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_SortedListKeyEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2_SortedListKeyEnumerator(SortedList_2_SortedListKeyEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_SortedListKeyEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2_SortedListKeyEnumerator(SortedList_2_SortedListKeyEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11386 };

  /// @brief Field _sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____sortedList;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentKey, offset: 0x20, size: 0x8, def value: None
  TKey ____currentKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.SortedList`2/SortedListValueEnumerator<TKey,TValue>
class CORDL_TYPE SortedList_2_SortedListValueEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) TValue Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _currentValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__currentValue, put = __cordl_internal_set__currentValue)) TValue _currentValue;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _sortedList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedList, put = __cordl_internal_set__sortedList)) ::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr TValue const& __cordl_internal_get__currentValue() const;

  constexpr TValue& __cordl_internal_get__currentValue();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& __cordl_internal_get__sortedList() const;

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__sortedList();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__currentValue(TValue value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2_SortedListValueEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_SortedListValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2_SortedListValueEnumerator(SortedList_2_SortedListValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_SortedListValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2_SortedListValueEnumerator(SortedList_2_SortedListValueEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11387 };

  /// @brief Field _sortedList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____sortedList;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _currentValue, offset: 0x20, size: 0x8, def value: None
  TValue ____currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.SortedList`2/KeyList<TKey,TValue>
class CORDL_TYPE SortedList_2_KeyList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TKey Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dict, put = __cordl_internal_set__dict)) ::System::Collections::Generic::SortedList_2<TKey, TValue>* _dict;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TKey>"
  constexpr operator ::System::Collections::Generic::IList_1<TKey>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TKey key);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TKey>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(TKey key);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, TKey value);

  static inline ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& __cordl_internal_get__dict() const;

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__dict();

  constexpr void __cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TKey get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
  constexpr ::System::Collections::Generic::ICollection_1<TKey>* i___System__Collections__Generic__ICollection_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TKey>"
  constexpr ::System::Collections::Generic::IList_1<TKey>* i___System__Collections__Generic__IList_1_TKey_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, TKey value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2_KeyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_KeyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2_KeyList(SortedList_2_KeyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_KeyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2_KeyList(SortedList_2_KeyList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11388 };

  /// @brief Field _dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.SortedList`2/ValueList<TKey,TValue>
class CORDL_TYPE SortedList_2_ValueList : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dict, put = __cordl_internal_set__dict)) ::System::Collections::Generic::SortedList_2<TKey, TValue>* _dict;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<TValue>"
  constexpr operator ::System::Collections::Generic::IList_1<TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TValue key);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(TValue value);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<TValue>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(TValue value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, TValue value);

  static inline ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TValue value);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& __cordl_internal_get__dict() const;

  constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& __cordl_internal_get__dict();

  constexpr void __cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
  constexpr ::System::Collections::Generic::ICollection_1<TValue>* i___System__Collections__Generic__ICollection_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<TValue>"
  constexpr ::System::Collections::Generic::IList_1<TValue>* i___System__Collections__Generic__IList_1_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2_ValueList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_ValueList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2_ValueList(SortedList_2_ValueList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2_ValueList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2_ValueList(SortedList_2_ValueList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11389 };

  /// @brief Field _dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2<TKey, TValue>* ____dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: System.Collections.Generic.SortedList`2<TKey,TValue>
class CORDL_TYPE SortedList_2 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>;

  using KeyList = ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>;

  using SortedListKeyEnumerator = ::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>;

  using SortedListValueEnumerator = ::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>;

  using ValueList = ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::Generic::IList_1<TKey>* Keys;

  __declspec(property(get = System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly)) bool
      System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___IsReadOnly;

  __declspec(property(get =
                          System_Collections_Generic_IDictionary_TKey_TValue__get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__Keys;

  __declspec(property(
      get = System_Collections_Generic_IDictionary_TKey_TValue__get_Values)) ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__Values;

  __declspec(property(
      get =
          System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys)) ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Keys;

  __declspec(property(get = System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values)) ::System::Collections::Generic::IEnumerable_1<TValue>*
      System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Values;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_IsReadOnly)) bool System_Collections_IDictionary_IsReadOnly;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item)) ::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys)) ::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values)) ::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = get_Values)) ::System::Collections::Generic::IList_1<TValue>* Values;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Field _syncRoot, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<TKey>* comparer;

  /// @brief Field keyList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyList, put = __cordl_internal_set_keyList)) ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* keyList;

  /// @brief Field keys, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) ::ArrayW<TKey, ::Array<TKey>*> keys;

  /// @brief Field valueList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_valueList, put = __cordl_internal_set_valueList)) ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* valueList;

  /// @brief Field values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::ArrayW<TValue, ::Array<TValue>*> values;

  /// @brief Field version, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

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

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsValue(TValue value);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method GetByIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method GetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey GetKey(int32_t index);

  /// @brief Method GetKeyListHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* GetKeyListHelper();

  /// @brief Method GetValueListHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* GetValueListHelper();

  /// @brief Method IndexOfKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOfKey(TKey key);

  /// @brief Method IndexOfValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOfValue(TValue value);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, TKey key, TValue value);

  /// @brief Method IsCompatibleKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleKey(::System::Object* key);

  static inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* New_ctor();

  static inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* New_ctor(int32_t capacity);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__get_Values();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final
  /// true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator();

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
  inline bool TryGetValue(TKey key, ::ByRef<TValue> value);

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IComparer_1<TKey>*& __cordl_internal_get_comparer();

  constexpr ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* const& __cordl_internal_get_keyList() const;

  constexpr ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*& __cordl_internal_get_keyList();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __cordl_internal_get_keys() const;

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __cordl_internal_get_keys();

  constexpr ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* const& __cordl_internal_get_valueList() const;

  constexpr ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*& __cordl_internal_get_valueList();

  constexpr ::ArrayW<TValue, ::Array<TValue>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<TValue, ::Array<TValue>*>& __cordl_internal_get_values();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__size(int32_t value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value);

  constexpr void __cordl_internal_set_keyList(::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* value);

  constexpr void __cordl_internal_set_keys(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr void __cordl_internal_set_valueList(::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* value);

  constexpr void __cordl_internal_set_values(::ArrayW<TValue, ::Array<TValue>*> value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<TKey>* get_Keys();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<TValue>* get_Values();

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

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_2(SortedList_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_2(SortedList_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11390 };

  /// @brief Field keys, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<TKey, ::Array<TKey>*> ___keys;

  /// @brief Field values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> ___values;

  /// @brief Field _size, offset: 0x20, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field version, offset: 0x24, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<TKey>* ___comparer;

  /// @brief Field keyList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* ___keyList;

  /// @brief Field valueList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* ___valueList;

  /// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2, "System.Collections.Generic", "SortedList`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2_KeyList, "System.Collections.Generic", "SortedList`2/KeyList");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator, "System.Collections.Generic", "SortedList`2/SortedListKeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2_SortedListValueEnumerator, "System.Collections.Generic", "SortedList`2/SortedListValueEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedList_2_ValueList, "System.Collections.Generic", "SortedList`2/ValueList");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::SortedList_2_Enumerator, "System.Collections.Generic", "SortedList`2/Enumerator");
