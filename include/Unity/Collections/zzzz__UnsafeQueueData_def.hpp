#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeQueueData)
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct UnsafeQueueBlockHeader;
}
namespace Unity::Collections {
struct UnsafeQueueBlockPoolData;
}
// Forward declare root types
namespace Unity::Collections {
struct UnsafeQueueData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::UnsafeQueueData);
// Dependencies System.IntPtr
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueueData
struct CORDL_TYPE UnsafeQueueData {
public:
  // Declarations
  /// @brief Method AllocateQueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AllocateQueue(::Unity::Collections::AllocatorManager_AllocatorHandle label, ::ByRef<::Unity::Collections::UnsafeQueueData*> outBuf);

  /// @brief Method AllocateWriteBlockMT, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::UnsafeQueueBlockHeader* AllocateWriteBlockMT(::Unity::Collections::UnsafeQueueData* data, ::Unity::Collections::UnsafeQueueBlockPoolData* pool,
                                                                                   int32_t threadIndex);

  /// @brief Method DeallocateQueue, addr 0x62ab3d8, size 0x84, virtual false, abstract: false, final false
  static inline void DeallocateQueue(::Unity::Collections::UnsafeQueueData* data, ::Unity::Collections::UnsafeQueueBlockPoolData* pool,
                                     ::Unity::Collections::AllocatorManager_AllocatorHandle allocation);

  /// @brief Method GetCurrentWriteBlockTLS, addr 0x62ab3b8, size 0x10, virtual false, abstract: false, final false
  inline ::Unity::Collections::UnsafeQueueBlockHeader* GetCurrentWriteBlockTLS(int32_t threadIndex);

  /// @brief Method SetCurrentWriteBlockTLS, addr 0x62ab3c8, size 0x10, virtual false, abstract: false, final false
  inline void SetCurrentWriteBlockTLS(int32_t threadIndex, ::Unity::Collections::UnsafeQueueBlockHeader* currentWriteBlock);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueueData();

  // Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LastBlock", ty: "::System::IntPtr", modifiers: "", def_value: None
  // }, CppParam { name: "m_MaxItems", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentRead", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentWriteBlockTLS", ty: "uint8_t*", modifiers: "", def_value: None }]
  constexpr UnsafeQueueData(::System::IntPtr m_FirstBlock, ::System::IntPtr m_LastBlock, int32_t m_MaxItems, int32_t m_CurrentRead, uint8_t* m_CurrentWriteBlockTLS) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_FirstBlock, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_FirstBlock;

  /// @brief Field m_LastBlock, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_LastBlock;

  /// @brief Field m_MaxItems, offset: 0x10, size: 0x4, def value: None
  int32_t m_MaxItems;

  /// @brief Field m_CurrentRead, offset: 0x14, size: 0x4, def value: None
  int32_t m_CurrentRead;

  /// @brief Field m_CurrentWriteBlockTLS, offset: 0x18, size: 0x8, def value: None
  uint8_t* m_CurrentWriteBlockTLS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::UnsafeQueueData, m_FirstBlock) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueData, m_LastBlock) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueData, m_MaxItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueData, m_CurrentRead) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueData, m_CurrentWriteBlockTLS) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::UnsafeQueueData, 0x20>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueData, "Unity.Collections", "UnsafeQueueData");
