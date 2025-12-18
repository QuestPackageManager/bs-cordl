#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorHelper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorHelper_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> struct AllocatorHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::AllocatorHelper_1);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.AllocatorHelper`1<T>
struct CORDL_TYPE AllocatorHelper_1 {
public:
  // Declarations
  __declspec(property(get = get_Allocator)) T Allocator;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, bool isGlobal, int32_t globalIndex);

  /// @brief Method get_Allocator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Allocator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocatorHelper_1();

  // Ctor Parameters [CppParam { name: "m_allocator", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "m_backingAllocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
  // modifiers: "", def_value: None }]
  constexpr AllocatorHelper_1(T* m_allocator, ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_allocator, offset: 0x0, size: 0x8, def value: None
  T* m_allocator;

  /// @brief Field m_backingAllocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::AllocatorHelper_1, "Unity.Collections", "AllocatorHelper`1");
