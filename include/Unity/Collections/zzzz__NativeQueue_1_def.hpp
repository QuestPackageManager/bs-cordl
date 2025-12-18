#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeQueue_1)
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
template <typename T> struct NativeQueue_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct NativeQueue_1_ParallelWriter;
}
namespace Unity::Collections {
template <typename T> struct NativeQueue_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeQueue_1;
}
namespace Unity::Collections {
template <typename T> struct NativeQueue_1_Enumerator;
}
namespace Unity::Collections {
template <typename T> struct NativeQueue_1_ParallelWriter;
}
namespace Unity::Collections {
template <typename T> struct NativeQueue_1_ReadOnly;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeQueue_1);
MARK_GEN_VAL_T(::Unity::Collections::NativeQueue_1_Enumerator);
MARK_GEN_VAL_T(::Unity::Collections::NativeQueue_1_ParallelWriter);
MARK_GEN_VAL_T(::Unity::Collections::NativeQueue_1_ReadOnly);
// Dependencies Unity.Collections.UnsafeQueue`1::Enumerator<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1/Enumerator<T>
struct CORDL_TYPE NativeQueue_1_Enumerator {
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
  constexpr NativeQueue_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::Unity::Collections::UnsafeQueue_1_Enumerator<T>", modifiers: "", def_value: None }]
  constexpr NativeQueue_1_Enumerator(::Unity::Collections::UnsafeQueue_1_Enumerator<T> m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15646 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Enumerator, offset: 0x0, size: 0x20, def value: None
  ::Unity::Collections::UnsafeQueue_1_Enumerator<T> m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.UnsafeQueue`1::ReadOnly<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1/ReadOnly<T>
struct CORDL_TYPE NativeQueue_1_ReadOnly {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method CheckRead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeQueue_1_Enumerator<T> GetEnumerator();

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Collections::NativeQueue_1<T>> data);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeQueue_1_ReadOnly();

  // Ctor Parameters [CppParam { name: "m_ReadOnly", ty: "::Unity::Collections::UnsafeQueue_1_ReadOnly<T>", modifiers: "", def_value: None }]
  constexpr NativeQueue_1_ReadOnly(::Unity::Collections::UnsafeQueue_1_ReadOnly<T> m_ReadOnly) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_ReadOnly, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueue_1_ReadOnly<T> m_ReadOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.UnsafeQueue`1::ParallelWriter<T>
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1/ParallelWriter<T>
struct CORDL_TYPE NativeQueue_1_ParallelWriter {
public:
  // Declarations
  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value, int32_t threadIndexOverride);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeQueue_1_ParallelWriter();

  // Ctor Parameters [CppParam { name: "unsafeWriter", ty: "::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>", modifiers: "", def_value: None }]
  constexpr NativeQueue_1_ParallelWriter(::Unity::Collections::UnsafeQueue_1_ParallelWriter<T> unsafeWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field unsafeWriter, offset: 0x0, size: 0x18, def value: None
  ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T> unsafeWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1<T>
struct CORDL_TYPE NativeQueue_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::NativeQueue_1_Enumerator<T>;

  using ParallelWriter = ::Unity::Collections::NativeQueue_1_ParallelWriter<T>;

  using ReadOnly = ::Unity::Collections::NativeQueue_1_ReadOnly<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeQueue_1_ParallelWriter<T> AsParallelWriter();

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeQueue_1_ReadOnly<T> AsReadOnly();

  /// @brief Method CheckRead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Peek();

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<T> item);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeQueue_1();

  // Ctor Parameters [CppParam { name: "m_Queue", ty: "::Unity::Collections::UnsafeQueue_1<T>*", modifiers: "", def_value: None }]
  constexpr NativeQueue_1(::Unity::Collections::UnsafeQueue_1<T>* m_Queue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Queue, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueue_1<T>* m_Queue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeQueue_1, "Unity.Collections", "NativeQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeQueue_1_Enumerator, "Unity.Collections", "NativeQueue`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeQueue_1_ParallelWriter, "Unity.Collections", "NativeQueue`1/ParallelWriter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeQueue_1_ReadOnly, "Unity.Collections", "NativeQueue`1/ReadOnly");
