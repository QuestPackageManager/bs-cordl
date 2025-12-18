#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelHashMap_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapDataEnumerator_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeParallelHashMap_2)
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
template <typename TKey, typename TValue> struct KeyValue_2;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> struct UnsafeParallelHashMap_2;
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
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeKeyValueArrays_2;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_Enumerator;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_ParallelWriter;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_ReadOnly;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_Enumerator;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_ParallelWriter;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelHashMap_2_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelHashMap_2);
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelHashMap_2_Enumerator);
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelHashMap_2_ParallelWriter);
MARK_GEN_VAL_T(::Unity::Collections::NativeParallelHashMap_2_ReadOnly);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2/ReadOnly<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method CheckRead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsKey(TKey key);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2_Enumerator<TKey, TValue> GetEnumerator();

  /// @brief Method GetKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<TKey> GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetKeyValueArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<TValue> GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ThrowKeyNotPresent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowKeyNotPresent(TKey key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ::ByRef<TValue> item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> hashMapData);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Item(TKey key);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelHashMap_2_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: None }]
  constexpr NativeParallelHashMap_2_ReadOnly(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> m_HashMapData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_HashMapData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> m_HashMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2::ParallelWriter<TKey, TValue>
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2/ParallelWriter<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2_ParallelWriter {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_ThreadIndex)) int32_t ThreadIndex;

  __declspec(property(get = get_m_ThreadIndex)) int32_t m_ThreadIndex;

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue item);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue item, int32_t threadIndexOverride);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_ThreadIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_ThreadIndex();

  /// @brief Method get_m_ThreadIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_m_ThreadIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelHashMap_2_ParallelWriter();

  // Ctor Parameters [CppParam { name: "m_Writer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<TKey,TValue>", modifiers: "", def_value: None }]
  constexpr NativeParallelHashMap_2_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<TKey, TValue> m_Writer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15627 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Writer, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2_ParallelWriter<TKey, TValue> m_Writer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDataEnumerator
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2/Enumerator<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*();

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
  inline ::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerator_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelHashMap_2_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator", modifiers: "", def_value: None }]
  constexpr NativeParallelHashMap_2_Enumerator(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDataEnumerator m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.NativeParallelHashMap`2<TKey,TValue>
struct CORDL_TYPE NativeParallelHashMap_2 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::NativeParallelHashMap_2_Enumerator<TKey, TValue>;

  using ParallelWriter = ::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<TKey, TValue>;

  using ReadOnly = ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<TKey, TValue>;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(TKey key, TValue item);

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<TKey, TValue> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<TKey, TValue> AsReadOnly();

  /// @brief Method CheckRead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsKey(TKey key);

  /// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Count();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeParallelHashMap_2_Enumerator<TKey, TValue> GetEnumerator();

  /// @brief Method GetKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<TKey> GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetKeyValueArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<TValue> GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(TKey key);

  /// @brief Method System.Collections.Generic.IEnumerable<Unity.Collections.LowLevel.Unsafe.KeyValue<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*
  System_Collections_Generic_IEnumerable_Unity_Collections_LowLevel_Unsafe_KeyValue_TKey_TValue___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ThrowKeyAlreadyAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowKeyAlreadyAdded(TKey key);

  /// @brief Method ThrowKeyNotPresent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowKeyNotPresent(TKey key);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TKey key, TValue item);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(TKey key, ::ByRef<TValue> item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Item(TKey key);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::LowLevel::Unsafe::KeyValue_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___Unity__Collections__LowLevel__Unsafe__KeyValue_2_TKey_TValue__();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(TKey key, TValue value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelHashMap_2();

  // Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey,TValue>", modifiers: "", def_value: None }]
  constexpr NativeParallelHashMap_2(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> m_HashMapData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15629 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_HashMapData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> m_HashMapData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeParallelHashMap_2, "Unity.Collections", "NativeParallelHashMap`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeParallelHashMap_2_Enumerator, "Unity.Collections", "NativeParallelHashMap`2/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeParallelHashMap_2_ParallelWriter, "Unity.Collections", "NativeParallelHashMap`2/ParallelWriter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeParallelHashMap_2_ReadOnly, "Unity.Collections", "NativeParallelHashMap`2/ReadOnly");
