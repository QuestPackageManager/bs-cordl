#pragma once
// IWYU pragma private; include "Unity/Collections/NativeBitArrayDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeBitArrayDispose)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeBitArrayDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeBitArrayDispose);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeBitArrayDispose
struct CORDL_TYPE NativeBitArrayDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x630cab0, size 0x10, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeBitArrayDispose();

  // Ctor Parameters [CppParam { name: "m_BitArrayData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray*", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr NativeBitArrayDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArrayData, ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_BitArrayData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray* m_BitArrayData;

  /// @brief Field m_Allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeBitArrayDispose, m_BitArrayData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeBitArrayDispose, m_Allocator) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeBitArrayDispose, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeBitArrayDispose, "Unity.Collections", "NativeBitArrayDispose");
