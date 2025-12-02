#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SilhouettePlaneCache)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct SilhouettePlaneCache_Slot;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SilhouettePlaneCache;
}
namespace UnityEngine::Rendering {
struct SilhouettePlaneCache_Slot;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SilhouettePlaneCache);
MARK_VAL_T(::UnityEngine::Rendering::SilhouettePlaneCache_Slot);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SilhouettePlaneCache/Slot
struct CORDL_TYPE SilhouettePlaneCache_Slot {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6613c98, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t viewInstanceID, int32_t planeCount, int32_t frameIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SilhouettePlaneCache_Slot();

  // Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "planeCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SilhouettePlaneCache_Slot(bool isActive, int32_t viewInstanceID, int32_t planeCount, int32_t lastUsedFrameIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field isActive, offset: 0x0, size: 0x1, def value: None
  bool isActive;

  /// @brief Field viewInstanceID, offset: 0x4, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field planeCount, offset: 0x8, size: 0x4, def value: None
  int32_t planeCount;

  /// @brief Field lastUsedFrameIndex, offset: 0xc, size: 0x4, def value: None
  int32_t lastUsedFrameIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache_Slot, isActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache_Slot, viewInstanceID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache_Slot, planeCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache_Slot, lastUsedFrameIndex) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SilhouettePlaneCache_Slot, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Plane, UnityEngine.Rendering.SilhouettePlaneCache::Slot
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SilhouettePlaneCache
struct CORDL_TYPE SilhouettePlaneCache {
public:
  // Declarations
  using Slot = ::UnityEngine::Rendering::SilhouettePlaneCache_Slot;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6613794, size 0xb8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeUnusedSlots, addr 0x6613cac, size 0x1a0, virtual false, abstract: false, final false
  inline void FreeUnusedSlots(int32_t frameIndex, int32_t maximumAge);

  /// @brief Method GetSubArray, addr 0x6613e4c, size 0x11c, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> GetSubArray(int32_t viewInstanceID);

  /// @brief Method Init, addr 0x6613680, size 0x114, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Update, addr 0x661384c, size 0x44c, virtual false, abstract: false, final false
  inline void Update(int32_t viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes, int32_t frameIndex);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SilhouettePlaneCache();

  // Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "m_SlotFreeList", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Slots", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::SilhouettePlaneCache_Slot>", modifiers: "", def_value: None }, CppParam { name: "m_PlaneStorage", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None }]
  constexpr SilhouettePlaneCache(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> m_SubviewIDToIndexMap, ::Unity::Collections::NativeList_1<int32_t> m_SlotFreeList,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::SilhouettePlaneCache_Slot> m_Slots,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Plane> m_PlaneStorage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field kMaxSilhouettePlanes offset 0xffffffff size 0x4
  static constexpr int32_t kMaxSilhouettePlanes{ static_cast<int32_t>(0x6) };

  /// @brief Field m_SubviewIDToIndexMap, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> m_SubviewIDToIndexMap;

  /// @brief Field m_SlotFreeList, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_SlotFreeList;

  /// @brief Field m_Slots, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::SilhouettePlaneCache_Slot> m_Slots;

  /// @brief Field m_PlaneStorage, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Plane> m_PlaneStorage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_SubviewIDToIndexMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_SlotFreeList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_Slots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_PlaneStorage) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SilhouettePlaneCache, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SilhouettePlaneCache, "UnityEngine.Rendering", "SilhouettePlaneCache");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SilhouettePlaneCache_Slot, "UnityEngine.Rendering", "SilhouettePlaneCache/Slot");
