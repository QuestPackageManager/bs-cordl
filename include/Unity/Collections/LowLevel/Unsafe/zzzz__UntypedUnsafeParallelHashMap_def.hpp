#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UntypedUnsafeParallelHashMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UntypedUnsafeParallelHashMap)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UntypedUnsafeParallelHashMap;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UntypedUnsafeParallelHashMap
struct CORDL_TYPE UntypedUnsafeParallelHashMap {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UntypedUnsafeParallelHashMap();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr UntypedUnsafeParallelHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer, ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap, "Unity.Collections.LowLevel.Unsafe", "UntypedUnsafeParallelHashMap");
