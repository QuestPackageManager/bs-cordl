#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeScratchAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeScratchAllocator)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeScratchAllocator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeScratchAllocator
struct CORDL_TYPE UnsafeScratchAllocator {
public:
  // Declarations
  /// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void* Allocate(int32_t count);

  /// @brief Method Allocate, addr 0x6318a54, size 0x3c, virtual false, abstract: false, final false
  inline void* Allocate(int32_t sizeInBytes, int32_t alignmentInBytes);

  /// @brief Method CheckAllocationDoesNotExceedCapacity, addr 0x6318988, size 0xcc, virtual false, abstract: false, final false
  inline void CheckAllocationDoesNotExceedCapacity(uint64_t requestedSize);

  /// @brief Method .ctor, addr 0x631897c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(void* ptr, int32_t capacityInBytes);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeScratchAllocator();

  // Ctor Parameters [CppParam { name: "m_Pointer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_LengthInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_CapacityInBytes", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeScratchAllocator(void* m_Pointer, int32_t m_LengthInBytes, int32_t m_CapacityInBytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15785 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Pointer, offset: 0x0, size: 0x8, def value: None
  void* m_Pointer;

  /// @brief Field m_LengthInBytes, offset: 0x8, size: 0x4, def value: None
  int32_t m_LengthInBytes;

  /// @brief Field m_CapacityInBytes, offset: 0xc, size: 0x4, def value: None
  int32_t m_CapacityInBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator, m_Pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator, m_LengthInBytes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator, m_CapacityInBytes) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeScratchAllocator, "Unity.Collections.LowLevel.Unsafe", "UnsafeScratchAllocator");
