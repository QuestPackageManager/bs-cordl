#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UntypedUnsafeParallelHashMap.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeParallelHashMap_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel",
// ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap::UntypedUnsafeParallelHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* m_Buffer,
                                                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeParallelHashMap::UntypedUnsafeParallelHashMap() {}
