#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UntypedUnsafeList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UntypedUnsafeList)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UntypedUnsafeList;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UntypedUnsafeList
struct CORDL_TYPE UntypedUnsafeList {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UntypedUnsafeList();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None },
  // CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UntypedUnsafeList(void* Ptr, int32_t m_length, int32_t m_capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t padding) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15743 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  void* Ptr;

  /// @brief Field m_length, offset: 0x8, size: 0x4, def value: None
  int32_t m_length;

  /// @brief Field m_capacity, offset: 0xc, size: 0x4, def value: None
  int32_t m_capacity;

  /// @brief Field Allocator, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  /// @brief Field padding, offset: 0x14, size: 0x4, def value: None
  int32_t padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, m_length) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, m_capacity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, Allocator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, padding) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, 0x18>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList, "Unity.Collections.LowLevel.Unsafe", "UntypedUnsafeList");
