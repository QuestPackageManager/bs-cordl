#pragma once
// IWYU pragma private; include "System/Collections/Generic/LinkedList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedList_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
namespace System::Collections::Generic {
template <typename T> struct LinkedList_1_Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> struct LinkedList_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LinkedList_1);
MARK_GEN_VAL_T(::System::Collections::Generic::LinkedList_1_Enumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Runtime.Serialization.IDeserializationCallback,
// System.Runtime.Serialization.ISerializable
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.LinkedList`1/Enumerator<T>
struct CORDL_TYPE LinkedList_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::LinkedList_1<T>* list);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedList_1_Enumerator();

  // Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::LinkedList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_node", ty:
  // "::System::Collections::Generic::LinkedListNode_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_current", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LinkedList_1_Enumerator(::System::Collections::Generic::LinkedList_1<T>* _list, ::System::Collections::Generic::LinkedListNode_1<T>* _node, int32_t _version, T _current,
                                    int32_t _index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9516 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field _list, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedList_1<T>* _list;

  /// @brief Field _node, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<T>* _node;

  /// @brief Field _version, offset: 0x10, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  T _current;

  /// @brief Field _index, offset: 0x20, size: 0x4, def value: None
  int32_t _index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.ICollection,
// System.Collections.IEnumerable, System.Object, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.LinkedList`1<T>
class CORDL_TYPE LinkedList_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::LinkedList_1_Enumerator<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) ::System::Collections::Generic::LinkedListNode_1<T>* First;

  __declspec(property(get = get_Last)) ::System::Collections::Generic::LinkedListNode_1<T>* Last;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _siInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__siInfo, put = __cordl_internal_set__siInfo)) ::System::Runtime::Serialization::SerializationInfo* _siInfo;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head)) ::System::Collections::Generic::LinkedListNode_1<T>* head;

  /// @brief Field version, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AddAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddAfter(::System::Collections::Generic::LinkedListNode_1<T>* node, ::System::Collections::Generic::LinkedListNode_1<T>* newNode);

  /// @brief Method AddBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* AddBefore(::System::Collections::Generic::LinkedListNode_1<T>* node, T value);

  /// @brief Method AddBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddBefore(::System::Collections::Generic::LinkedListNode_1<T>* node, ::System::Collections::Generic::LinkedListNode_1<T>* newNode);

  /// @brief Method AddFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* AddFirst(T value);

  /// @brief Method AddFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddFirst(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method AddLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* AddLast(T value);

  /// @brief Method AddLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddLast(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T value);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* Find(T value);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedList_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InternalInsertNodeBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InternalInsertNodeBefore(::System::Collections::Generic::LinkedListNode_1<T>* node, ::System::Collections::Generic::LinkedListNode_1<T>* newNode);

  /// @brief Method InternalInsertNodeToEmptyList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InternalInsertNodeToEmptyList(::System::Collections::Generic::LinkedListNode_1<T>* newNode);

  /// @brief Method InternalRemoveNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InternalRemoveNode(::System::Collections::Generic::LinkedListNode_1<T>* node);

  static inline ::System::Collections::Generic::LinkedList_1<T>* New_ctor();

  static inline ::System::Collections::Generic::LinkedList_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T value);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method RemoveFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveFirst();

  /// @brief Method RemoveLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveLast();

  /// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_T__Add(T value);

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ValidateNewNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ValidateNewNode(::System::Collections::Generic::LinkedListNode_1<T>* node);

  /// @brief Method ValidateNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ValidateNode(::System::Collections::Generic::LinkedListNode_1<T>* node);

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get__siInfo() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get__siInfo();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Generic::LinkedListNode_1<T>* const& __cordl_internal_get_head() const;

  constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& __cordl_internal_get_head();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_head(::System::Collections::Generic::LinkedListNode_1<T>* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* get_First();

  /// @brief Method get_Last, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::LinkedListNode_1<T>* get_Last();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedList_1(LinkedList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedList_1(LinkedList_1 const&) = delete;

  /// @brief Field CountName offset 0xffffffff size 0x8
  static constexpr ::ConstString CountName{ u"Count" };

  /// @brief Field ValuesName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValuesName{ u"Data" };

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9517 };

  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::LinkedListNode_1<T>* ___head;

  /// @brief Field count, offset: 0x18, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field version, offset: 0x1c, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _siInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____siInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LinkedList_1, "System.Collections.Generic", "LinkedList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::LinkedList_1_Enumerator, "System.Collections.Generic", "LinkedList`1/Enumerator");
