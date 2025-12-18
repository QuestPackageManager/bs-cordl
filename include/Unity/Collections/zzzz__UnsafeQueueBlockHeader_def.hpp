#pragma once
// IWYU pragma private; include "Unity/Collections/UnsafeQueueBlockHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeQueueBlockHeader)
// Forward declare root types
namespace Unity::Collections {
struct UnsafeQueueBlockHeader;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::UnsafeQueueBlockHeader);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.UnsafeQueueBlockHeader
struct CORDL_TYPE UnsafeQueueBlockHeader {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeQueueBlockHeader();

  // Ctor Parameters [CppParam { name: "m_NextBlock", ty: "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: None }, CppParam { name: "m_NumItems", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr UnsafeQueueBlockHeader(::Unity::Collections::UnsafeQueueBlockHeader* m_NextBlock, int32_t m_NumItems) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_NextBlock, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueueBlockHeader* m_NextBlock;

  /// @brief Field m_NumItems, offset: 0x8, size: 0x4, def value: None
  int32_t m_NumItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockHeader, m_NextBlock) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::UnsafeQueueBlockHeader, m_NumItems) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::UnsafeQueueBlockHeader, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueBlockHeader, "Unity.Collections", "UnsafeQueueBlockHeader");
