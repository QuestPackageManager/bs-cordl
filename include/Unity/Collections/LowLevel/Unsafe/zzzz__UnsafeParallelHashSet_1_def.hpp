#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapDataEnumerator_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelHashSet_1)
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
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_Enumerator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_ParallelWriter;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_ReadOnly;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_Enumerator;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_ParallelWriter;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeParallelHashSet_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_Enumerator);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ParallelWriter);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::ParallelWriter<TKey, TValue>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSet`1/ParallelWriter<T>
struct CORDL_TYPE UnsafeParallelHashSet_1_ParallelWriter {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(T item);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(T item, int32_t threadIndexOverride);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashSet_1_ParallelWriter();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<T,bool>", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashSet_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<T, bool> m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<T, bool> m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataEnumerator
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSet`1/Enumerator<T>
struct CORDL_TYPE UnsafeParallelHashSet_1_Enumerator {
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
  constexpr UnsafeParallelHashSet_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashSet_1_Enumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSet`1/ReadOnly<T>
struct CORDL_TYPE UnsafeParallelHashSet_1_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1<T>> data);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashSet_1_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T,bool>", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashSet_1_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T, bool> m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T, bool> m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashSet`1<T>
struct CORDL_TYPE UnsafeParallelHashSet_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_Enumerator<T>;

  using ParallelWriter = ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ParallelWriter<T>;

  using ReadOnly = ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T>;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(T item);

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ParallelWriter<T> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly<T> AsReadOnly();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_Enumerator<T> GetEnumerator();

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T item);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashSet_1();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T,bool>", modifiers: "", def_value: None }]
  constexpr UnsafeParallelHashSet_1(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T, bool> m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<T, bool> m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_Enumerator, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ParallelWriter, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashSet`1/ParallelWriter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashSet_1_ReadOnly, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashSet`1/ReadOnly");
