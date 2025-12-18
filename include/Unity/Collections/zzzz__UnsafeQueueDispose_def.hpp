#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnsafeQueueDispose)
namespace Unity::Collections {
struct UnsafeQueueBlockPoolData;
}
namespace Unity::Collections {
struct UnsafeQueueData;
}
// Forward declare root types
namespace Unity::Collections {
struct UnsafeQueueDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::UnsafeQueueDispose);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueueDispose
struct CORDL_TYPE UnsafeQueueDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x6312fe8, size 0x10, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueueDispose();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: None }, CppParam { name: "m_QueuePool", ty:
  // "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers:
  // "", def_value: None }]
  constexpr UnsafeQueueDispose(::Unity::Collections::UnsafeQueueData* m_Buffer, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool,
                               ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueData* m_Buffer;

  /// @brief Field m_QueuePool, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool;

  /// @brief Field m_AllocatorLabel, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::UnsafeQueueDispose, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueDispose, m_QueuePool) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueDispose, m_AllocatorLabel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::UnsafeQueueDispose, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueDispose, "Unity.Collections", "UnsafeQueueDispose");
