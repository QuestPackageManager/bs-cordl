#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Queue_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections::Generic {
template <typename T> struct __Queue_1__Enumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> struct __Queue_1__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Queue_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__Queue_1__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3840))
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::Queue_1<T>* q);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_Current();

  /// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ThrowEnumerationNotStartedOrEnded();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
  constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<T>* _q, int32_t _version, int32_t _index, T _currentElement) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Queue_1__Enumerator();

  /// @brief Field _q, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* _q;

  /// @brief Field _version, offset: 0x8, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _index, offset: 0xc, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _currentElement, offset: 0x10, size: 0x8, def value: None
  T _currentElement;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3841))
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<T>;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::ArrayW<T, ::Array<T>*> _array;

  /// @brief Field _head, offset 0x18, size 0x4
  __declspec(property(get = __get__head, put = __set__head)) int32_t _head;

  /// @brief Field _tail, offset 0x1c, size 0x4
  __declspec(property(get = __get__tail, put = __set__tail)) int32_t _tail;

  /// @brief Field _size, offset 0x20, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field _version, offset 0x24, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  constexpr ::ArrayW<T, ::Array<T>*>& __get__array();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__array() const;

  constexpr void __set__array(::ArrayW<T, ::Array<T>*> value);

  constexpr int32_t& __get__head();

  constexpr int32_t const& __get__head() const;

  constexpr void __set__head(int32_t value);

  constexpr int32_t& __get__tail();

  constexpr int32_t const& __get__tail() const;

  constexpr void __set__tail(int32_t value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::Generic::Queue_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Queue_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Clear();

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void Enqueue(T item);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::__Queue_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Dequeue();

  /// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T Peek();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool Contains(T item);

  /// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void MoveNext(ByRef<int32_t> index);

  /// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ThrowForEmptyQueue();

  // Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Queue_1(Queue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Queue_1(Queue_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Queue_1();

public:
  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____array;

  /// @brief Field _head, offset: 0x18, size: 0x4, def value: None
  int32_t ____head;

  /// @brief Field _tail, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tail;

  /// @brief Field _size, offset: 0x20, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x24, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field MinimumGrow offset 0xffffffff size 0x4
  static constexpr int32_t MinimumGrow{ static_cast<int32_t>(0x4) };

  /// @brief Field GrowFactor offset 0xffffffff size 0x4
  static constexpr int32_t GrowFactor{ static_cast<int32_t>(0xc8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Queue_1, "System.Collections.Generic", "Queue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__Queue_1__Enumerator, "System.Collections.Generic", "Queue`1/Enumerator");
