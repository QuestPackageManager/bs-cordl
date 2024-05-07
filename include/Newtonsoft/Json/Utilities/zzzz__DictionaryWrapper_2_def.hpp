#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DictionaryWrapper_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DictionaryWrapper_2)
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue> struct __DictionaryWrapper_2__DictionaryEnumerator_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class __DictionaryWrapper_2____c;
}
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
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class DictionaryWrapper_2;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class __DictionaryWrapper_2____c;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue> struct __DictionaryWrapper_2__DictionaryEnumerator_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::DictionaryWrapper_2);
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c);
MARK_GEN_VAL_T(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2);
// Type: ::DictionaryEnumerator`2
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
// Is value type: true
// CS Name: ::DictionaryWrapper`2::DictionaryEnumerator`2<TKey,TValue,TEnumeratorKey,TEnumeratorValue>
struct CORDL_TYPE __DictionaryWrapper_2__DictionaryEnumerator_2 {
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
  inline void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* e);

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
  constexpr __DictionaryWrapper_2__DictionaryEnumerator_2();

  // Ctor Parameters [CppParam { name: "_e", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*", modifiers: "",
  // def_value: None }]
  constexpr __DictionaryWrapper_2__DictionaryEnumerator_2(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* _e) noexcept;

  /// @brief Field _e, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* _e;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::DictionaryWrapper`2::<>c<TKey,TValue>*
class CORDL_TYPE __DictionaryWrapper_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0,
                             put = setStaticF___9__29_0))::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* __9__29_0;

  static inline ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>* New_ctor();

  /// @brief Method <GetEnumerator>b__29_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> _GetEnumerator_b__29_0(::System::Collections::DictionaryEntry de);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* getStaticF___9__29_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>* value);

  static inline void setStaticF___9__29_0(::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DictionaryWrapper_2____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryWrapper_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DictionaryWrapper_2____c(__DictionaryWrapper_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DictionaryWrapper_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DictionaryWrapper_2____c(__DictionaryWrapper_2____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::DictionaryWrapper`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::DictionaryWrapper`2<TKey,TValue>*
class CORDL_TYPE DictionaryWrapper_2 : public ::System::Object {
public:
  // Declarations
  template <typename TEnumeratorKey, typename TEnumeratorValue>
  using DictionaryEnumerator_2 = ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>;

  using __c = ::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c<TKey, TValue>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_GenericDictionary))::System::Collections::Generic::IDictionary_2<TKey, TValue>* GenericDictionary;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IDictionary_get_IsFixedSize)) bool System_Collections_IDictionary_IsFixedSize;

  __declspec(property(get = System_Collections_IDictionary_get_Item, put = System_Collections_IDictionary_set_Item))::System::Object* System_Collections_IDictionary_Item[];

  __declspec(property(get = System_Collections_IDictionary_get_Keys))::System::Collections::ICollection* System_Collections_IDictionary_Keys;

  __declspec(property(get = System_Collections_IDictionary_get_Values))::System::Collections::ICollection* System_Collections_IDictionary_Values;

  __declspec(property(get = get_UnderlyingDictionary))::System::Object* UnderlyingDictionary;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<TValue>* Values;

  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dictionary, put = __cordl_internal_set__dictionary))::System::Collections::IDictionary* _dictionary;

  /// @brief Field _genericDictionary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__genericDictionary, put = __cordl_internal_set__genericDictionary))::System::Collections::Generic::IDictionary_2<TKey, TValue>* _genericDictionary;

  /// @brief Field _readOnlyDictionary, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__readOnlyDictionary,
                      put = __cordl_internal_set__readOnlyDictionary))::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* _readOnlyDictionary;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedDictionary"
  constexpr operator ::Newtonsoft::Json::Utilities::IWrappedDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(TKey key, TValue value);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ContainsKey(TKey key);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  static inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  static inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary);

  static inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>* New_ctor(::System::Collections::IDictionary* dictionary);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(TKey key);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

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

  /// @brief Method System.Collections.IDictionary.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IDictionary_get_IsFixedSize();

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

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__dictionary() const;

  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& __cordl_internal_get__genericDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TKey, TValue>*> const& __cordl_internal_get__genericDictionary() const;

  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*& __cordl_internal_get__readOnlyDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*> const& __cordl_internal_get__readOnlyDictionary() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__dictionary(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__genericDictionary(::System::Collections::Generic::IDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__readOnlyDictionary(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* dictionary);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_GenericDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<TKey, TValue>* get_GenericDictionary();

  /// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_UnderlyingDictionary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* get_UnderlyingDictionary();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values();

  /// @brief Convert to "::Newtonsoft::Json::Utilities::IWrappedDictionary"
  constexpr ::Newtonsoft::Json::Utilities::IWrappedDictionary* i___Newtonsoft__Json__Utilities__IWrappedDictionary() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(TKey key, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryWrapper_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryWrapper_2(DictionaryWrapper_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryWrapper_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryWrapper_2(DictionaryWrapper_2 const&) = delete;

  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____dictionary;

  /// @brief Field _genericDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<TKey, TValue>* ____genericDictionary;

  /// @brief Field _readOnlyDictionary, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* ____readOnlyDictionary;

  /// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::DictionaryWrapper_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2____c, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Newtonsoft::Json::Utilities::__DictionaryWrapper_2__DictionaryEnumerator_2, "Newtonsoft.Json.Utilities", "DictionaryWrapper`2/DictionaryEnumerator`2");
