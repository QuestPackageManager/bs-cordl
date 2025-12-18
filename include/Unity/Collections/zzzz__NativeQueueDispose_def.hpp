#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueueDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeQueueDispose)
namespace Unity::Collections {
template <typename T> struct UnsafeQueue_1;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeQueueDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeQueueDispose);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeQueueDispose
struct CORDL_TYPE NativeQueueDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x630cb70, size 0x4c, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeQueueDispose();

  // Ctor Parameters [CppParam { name: "m_QueueData", ty: "::Unity::Collections::UnsafeQueue_1<int32_t>*", modifiers: "", def_value: None }]
  constexpr NativeQueueDispose(::Unity::Collections::UnsafeQueue_1<int32_t>* m_QueueData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_QueueData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::UnsafeQueue_1<int32_t>* m_QueueData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeQueueDispose, m_QueueData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeQueueDispose, 0x8>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeQueueDispose, "Unity.Collections", "NativeQueueDispose");
