#pragma once
// IWYU pragma private; include "Unity/Collections/DoubleRewindableAllocators.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorHelper_1_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleRewindableAllocators)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct RewindableAllocator;
}
// Forward declare root types
namespace Unity::Collections {
struct DoubleRewindableAllocators;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::DoubleRewindableAllocators);
// Dependencies Unity.Collections.AllocatorHelper`1<T>, Unity.Collections.RewindableAllocator
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.DoubleRewindableAllocators
struct CORDL_TYPE DoubleRewindableAllocators {
public:
  // Declarations
  __declspec(property(get = get_Allocator)) ::Unity::Collections::RewindableAllocator Allocator;

  __declspec(property(get = get_EnableBlockFree, put = set_EnableBlockFree)) bool EnableBlockFree;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CheckIsCreated, addr 0x62f8310, size 0x58, virtual false, abstract: false, final false
  inline void CheckIsCreated();

  /// @brief Method Dispose, addr 0x62f84b0, size 0xe4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x62f838c, size 0x124, virtual false, abstract: false, final false
  inline void Initialize(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, int32_t initialSizeInBytes);

  /// @brief Method Update, addr 0x62f8208, size 0xc4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x62f8378, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocator, int32_t initialSizeInBytes);

  /// @brief Method get_Allocator, addr 0x62f82cc, size 0x44, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Collections::RewindableAllocator> get_Allocator();

  /// @brief Method get_EnableBlockFree, addr 0x62f8594, size 0x6c, virtual false, abstract: false, final false
  inline bool get_EnableBlockFree();

  /// @brief Method get_IsCreated, addr 0x62f8368, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_EnableBlockFree, addr 0x62f8600, size 0x94, virtual false, abstract: false, final false
  inline void set_EnableBlockFree(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleRewindableAllocators();

  // Ctor Parameters [CppParam { name: "Pointer", ty: "::Unity::Collections::RewindableAllocator*", modifiers: "", def_value: None }, CppParam { name: "UpdateAllocatorHelper0", ty:
  // "::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator>", modifiers: "", def_value: None }, CppParam { name: "UpdateAllocatorHelper1", ty:
  // "::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator>", modifiers: "", def_value: None }]
  constexpr DoubleRewindableAllocators(::Unity::Collections::RewindableAllocator* Pointer, ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper0,
                                       ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15540 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Pointer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::RewindableAllocator* Pointer;

  /// @brief Field UpdateAllocatorHelper0, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper0;

  /// @brief Field UpdateAllocatorHelper1, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::AllocatorHelper_1<::Unity::Collections::RewindableAllocator> UpdateAllocatorHelper1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::DoubleRewindableAllocators, Pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DoubleRewindableAllocators, UpdateAllocatorHelper0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::DoubleRewindableAllocators, UpdateAllocatorHelper1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::DoubleRewindableAllocators, 0x28>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::DoubleRewindableAllocators, "Unity.Collections", "DoubleRewindableAllocators");
