#pragma once
// IWYU pragma private; include "Unity/Collections/NativeReferenceDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeReferenceDispose)
// Forward declare root types
namespace Unity::Collections {
struct NativeReferenceDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeReferenceDispose);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeReferenceDispose
struct CORDL_TYPE NativeReferenceDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x62a5034, size 0x28, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeReferenceDispose();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
  // modifiers: "", def_value: None }]
  constexpr NativeReferenceDispose(void* m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15640 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  void* m_Data;

  /// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeReferenceDispose, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeReferenceDispose, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeReferenceDispose, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeReferenceDispose, "Unity.Collections", "NativeReferenceDispose");
