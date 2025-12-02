#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList64Bytes_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes64Align8_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedList64Bytes_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct FixedList128Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList32Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList4096Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList512Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
namespace Unity::Collections {
template <typename T> class INativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1;
}
namespace Unity::Collections {
template <typename T> struct FixedList64Bytes_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::FixedList64Bytes_1);
MARK_GEN_VAL_T(::Unity::Collections::FixedList64Bytes_1_Enumerator);
// Dependencies Unity.Collections.FixedBytes64Align8
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.FixedList64Bytes`1<T>
struct CORDL_TYPE FixedList64Bytes_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::FixedList64Bytes_1_Enumerator<T>;

  __declspec(property(get = get_Buffer)) uint8_t* Buffer;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Elements)) ::System::Collections::Generic::IEnumerable_1<T>* Elements;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  __declspec(property(get = get_LengthInBytes)) int32_t LengthInBytes;

  __declspec(property(get = get_buffer)) uint8_t* buffer;

  __declspec(property(get = get_length, put = set_length)) uint16_t length;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
  constexpr operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*();

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
  constexpr operator ::Unity::Collections::IIndexable_1<T>*();

  /// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
  constexpr operator ::Unity::Collections::INativeList_1<T>*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(::ByRef<T> item);

  /// @brief Method AddNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddNoResize(::ByRef<T> item);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(void* ptr, int32_t length);

  /// @brief Method AddRangeNoResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRangeNoResize(void* ptr, int32_t length);

  /// @brief Method AddReplicate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddReplicate(::ByRef<T> value, int32_t count);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method ElementAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedList128Bytes_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedList32Bytes_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedList4096Bytes_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedList512Bytes_1<T> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Collections::FixedList64Bytes_1<T> other);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::FixedList64Bytes_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> other);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::ByRef<T> item);

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, int32_t count);

  /// @brief Method InsertRangeWithBeginEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRangeWithBeginEnd(int32_t begin, int32_t end);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method RemoveRangeSwapBack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRangeSwapBack(int32_t index, int32_t count);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other);

  /// @brief Method get_Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t* get_Buffer();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Capacity();

  /// @brief Method get_Elements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<T>* get_Elements();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_LengthInBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_LengthInBytes();

  /// @brief Method get_buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint8_t* get_buffer();

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline uint16_t get_length();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>* i___System__IComparable_1___Unity__Collections__FixedList128Bytes_1_T__();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>* i___System__IComparable_1___Unity__Collections__FixedList32Bytes_1_T__();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>* i___System__IComparable_1___Unity__Collections__FixedList4096Bytes_1_T__();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>* i___System__IComparable_1___Unity__Collections__FixedList512Bytes_1_T__();

  /// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
  constexpr ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>* i___System__IComparable_1___Unity__Collections__FixedList64Bytes_1_T__();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>* i___System__IEquatable_1___Unity__Collections__FixedList128Bytes_1_T__();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>* i___System__IEquatable_1___Unity__Collections__FixedList32Bytes_1_T__();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>* i___System__IEquatable_1___Unity__Collections__FixedList4096Bytes_1_T__();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>* i___System__IEquatable_1___Unity__Collections__FixedList512Bytes_1_T__();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>* i___System__IEquatable_1___Unity__Collections__FixedList64Bytes_1_T__();

  /// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
  constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_();

  /// @brief Convert to "::Unity::Collections::INativeList_1<T>"
  constexpr ::Unity::Collections::INativeList_1<T>* i___Unity__Collections__INativeList_1_T_();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> b);

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> b);

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> b);

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> b);

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> b);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedList64Bytes_1<T> op_Implicit___Unity__Collections__FixedList64Bytes_1_T_(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedList64Bytes_1<T> op_Implicit___Unity__Collections__FixedList64Bytes_1_T_(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> other);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedList64Bytes_1<T> op_Implicit___Unity__Collections__FixedList64Bytes_1_T_(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedList64Bytes_1<T> op_Implicit___Unity__Collections__FixedList64Bytes_1_T_(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> b);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> b);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> b);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> b);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> b);

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Length(int32_t value);

  /// @brief Method set_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_length(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList64Bytes_1();

  // Ctor Parameters [CppParam { name: "data", ty: "::Unity::Collections::FixedBytes64Align8", modifiers: "", def_value: None }]
  constexpr FixedList64Bytes_1(::Unity::Collections::FixedBytes64Align8 data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15534 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field data, offset: 0x0, size: 0x40, def value: None
  ::Unity::Collections::FixedBytes64Align8 data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.FixedList64Bytes`1<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.FixedList64Bytes`1/Enumerator<T>
struct CORDL_TYPE FixedList64Bytes_1_Enumerator {
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

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> list);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedList64Bytes_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_List", ty: "::Unity::Collections::FixedList64Bytes_1<T>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr FixedList64Bytes_1_Enumerator(::Unity::Collections::FixedList64Bytes_1<T> m_List, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15533 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field m_List, offset: 0x0, size: 0x40, def value: None
  ::Unity::Collections::FixedList64Bytes_1<T> m_List;

  /// @brief Field m_Index, offset: 0x40, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::FixedList64Bytes_1, "Unity.Collections", "FixedList64Bytes`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::FixedList64Bytes_1_Enumerator, "Unity.Collections", "FixedList64Bytes`1/Enumerator");
