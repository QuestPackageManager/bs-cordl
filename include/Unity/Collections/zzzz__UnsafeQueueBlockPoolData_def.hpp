#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockPoolData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeQueueBlockPoolData)
namespace Unity::Collections {
struct UnsafeQueueBlockHeader;
}
// Forward declare root types
namespace Unity::Collections {
struct UnsafeQueueBlockPoolData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::UnsafeQueueBlockPoolData);
// Dependencies System.IntPtr
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueueBlockPoolData
struct CORDL_TYPE UnsafeQueueBlockPoolData {
public:
  // Declarations
  /// @brief Method AllocateBlock, addr 0x62aaf00, size 0xac, virtual false, abstract: false, final false
  inline ::Unity::Collections::UnsafeQueueBlockHeader* AllocateBlock();

  /// @brief Method FreeBlock, addr 0x62aafac, size 0xd4, virtual false, abstract: false, final false
  inline void FreeBlock(::Unity::Collections::UnsafeQueueBlockHeader* block);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueueBlockPoolData();

  // Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NumBlocks", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_MaxBlocks", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocLock", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeQueueBlockPoolData(::System::IntPtr m_FirstBlock, int32_t m_NumBlocks, int32_t m_MaxBlocks, int32_t m_AllocLock) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15686 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t m_BlockSize{ static_cast<int32_t>(0x4000) };

  /// @brief Field m_FirstBlock, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_FirstBlock;

  /// @brief Field m_NumBlocks, offset: 0x8, size: 0x4, def value: None
  int32_t m_NumBlocks;

  /// @brief Field m_MaxBlocks, offset: 0xc, size: 0x4, def value: None
  int32_t m_MaxBlocks;

  /// @brief Field m_AllocLock, offset: 0x10, size: 0x4, def value: None
  int32_t m_AllocLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockPoolData, m_FirstBlock) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockPoolData, m_NumBlocks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockPoolData, m_MaxBlocks) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockPoolData, m_AllocLock) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::UnsafeQueueBlockPoolData, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueBlockPoolData, "Unity.Collections", "UnsafeQueueBlockPoolData");
