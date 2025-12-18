#pragma once
// IWYU pragma private; include "Unity/Collections/NativeRingQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRingQueue_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeRingQueue_1;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
class INativeDisposable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct NativeRingQueue_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeRingQueue_1);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeRingQueue`1<T>
struct CORDL_TYPE NativeRingQueue_1 {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::Unity::Collections::INativeDisposable"
  constexpr operator ::Unity::Collections::INativeDisposable*();

  /// @brief Method CheckRead, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckRead();

  /// @brief Method CheckWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckWrite();

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<T> item);

  /// @brief Method TryEnqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryEnqueue(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::Unity::Collections::INativeDisposable"
  constexpr ::Unity::Collections::INativeDisposable* i___Unity__Collections__INativeDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeRingQueue_1();

  // Ctor Parameters [CppParam { name: "m_RingQueue", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*", modifiers: "", def_value: None }]
  constexpr NativeRingQueue_1(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* m_RingQueue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_RingQueue, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* m_RingQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeRingQueue_1, "Unity.Collections", "NativeRingQueue`1");
