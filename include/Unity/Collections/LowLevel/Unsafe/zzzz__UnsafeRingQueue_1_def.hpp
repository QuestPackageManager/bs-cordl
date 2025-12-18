#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeRingQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeRingQueue_1)
namespace System {
class IDisposable;
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
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeRingQueue_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeRingQueue`1<T>
struct CORDL_TYPE UnsafeRingQueue_1 {
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

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle inputDeps);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* data);

  /// @brief Method ThrowQueueEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowQueueEmpty();

  /// @brief Method ThrowQueueFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowQueueFull();

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(::ByRef<T> item);

  /// @brief Method TryDequeueInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeueInternal(::ByRef<T> item);

  /// @brief Method TryEnqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryEnqueue(T value);

  /// @brief Method TryEnqueueInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryEnqueueInternal(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T* ptr, int32_t capacity);

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
  constexpr UnsafeRingQueue_1();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "",
  // def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Filled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Write", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Read", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeRingQueue_1(T* Ptr, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t m_Capacity, int32_t m_Filled, int32_t m_Write, int32_t m_Read) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  T* Ptr;

  /// @brief Field Allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  /// @brief Field m_Capacity, offset: 0xc, size: 0x4, def value: None
  int32_t m_Capacity;

  /// @brief Field m_Filled, offset: 0x10, size: 0x4, def value: None
  int32_t m_Filled;

  /// @brief Field m_Write, offset: 0x14, size: 0x4, def value: None
  int32_t m_Write;

  /// @brief Field m_Read, offset: 0x18, size: 0x4, def value: None
  int32_t m_Read;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeRingQueue`1");
