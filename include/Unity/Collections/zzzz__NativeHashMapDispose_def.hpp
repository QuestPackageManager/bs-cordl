#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMapDispose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeHashMapDispose)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> struct UnsafeHashMap_2;
}
// Forward declare root types
namespace Unity::Collections {
struct NativeHashMapDispose;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::NativeHashMapDispose);
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.NativeHashMapDispose
struct CORDL_TYPE NativeHashMapDispose {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x62a4f44, size 0x4c, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeHashMapDispose();

  // Ctor Parameters [CppParam { name: "m_HashMapData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<int32_t,int32_t>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr NativeHashMapDispose(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<int32_t, int32_t>* m_HashMapData, ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15592 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_HashMapData, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<int32_t, int32_t>* m_HashMapData;

  /// @brief Field m_Allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle m_Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::NativeHashMapDispose, m_HashMapData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::NativeHashMapDispose, m_Allocator) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeHashMapDispose, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeHashMapDispose, "Unity.Collections", "NativeHashMapDispose");
