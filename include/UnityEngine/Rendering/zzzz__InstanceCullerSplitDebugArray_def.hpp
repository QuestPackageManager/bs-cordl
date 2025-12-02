#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullerSplitDebugArray)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
struct InstanceCullerSplitDebugArray_Info;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceCullerSplitDebugArray;
}
namespace UnityEngine::Rendering {
struct InstanceCullerSplitDebugArray_Info;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullerSplitDebugArray);
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info);
// Dependencies UnityEngine.Rendering.BatchCullingViewType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerSplitDebugArray/Info
struct CORDL_TYPE InstanceCullerSplitDebugArray_Info {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerSplitDebugArray_Info();

  // Ctor Parameters [CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "splitIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceCullerSplitDebugArray_Info(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID, int32_t splitIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17607 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field viewType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingViewType viewType;

  /// @brief Field viewInstanceID, offset: 0x4, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field splitIndex, offset: 0x8, size: 0x4, def value: None
  int32_t splitIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info, viewType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info, viewInstanceID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info, splitIndex) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1<T>, Unity.Jobs.JobHandle,
// UnityEngine.Rendering.InstanceCullerSplitDebugArray::Info
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerSplitDebugArray
struct CORDL_TYPE InstanceCullerSplitDebugArray {
public:
  // Declarations
  using Info = ::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info;

  __declspec(property(get = get_Counters)) ::Unity::Collections::NativeArray_1<int32_t> Counters;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddSync, addr 0x65f9ec4, size 0x8c, virtual false, abstract: false, final false
  inline void AddSync(int32_t baseIndex, ::Unity::Jobs::JobHandle jobHandle);

  /// @brief Method Dispose, addr 0x65f9d48, size 0x94, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Init, addr 0x65f9c70, size 0xd8, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MoveToDebugStatsAndClear, addr 0x65f9f50, size 0x260, virtual false, abstract: false, final false
  inline void MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats);

  /// @brief Method TryAddSplits, addr 0x65f9ddc, size 0xe8, virtual false, abstract: false, final false
  inline int32_t TryAddSplits(::UnityEngine::Rendering::BatchCullingViewType viewType, int32_t viewInstanceID, int32_t splitCount);

  /// @brief Method get_Counters, addr 0x65f9c64, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<int32_t> get_Counters();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerSplitDebugArray();

  // Ctor Parameters [CppParam { name: "m_Info", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info>", modifiers: "", def_value: None }, CppParam {
  // name: "m_Counters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_CounterSync", ty:
  // "::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle>", modifiers: "", def_value: None }]
  constexpr InstanceCullerSplitDebugArray(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info> m_Info,
                                          ::Unity::Collections::NativeArray_1<int32_t> m_Counters, ::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle> m_CounterSync) noexcept;

  /// @brief Field MaxSplitCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxSplitCount{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Info, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info> m_Info;

  /// @brief Field m_Counters, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_Counters;

  /// @brief Field m_CounterSync, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle> m_CounterSync;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_Info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_Counters) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_CounterSync) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullerSplitDebugArray, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, "UnityEngine.Rendering", "InstanceCullerSplitDebugArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullerSplitDebugArray_Info, "UnityEngine.Rendering", "InstanceCullerSplitDebugArray/Info");
