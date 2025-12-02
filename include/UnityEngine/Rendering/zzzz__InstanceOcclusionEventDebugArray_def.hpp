#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionEventDebugArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionEventType_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceOcclusionEventDebugArray)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventDebugArray_Info;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventDebugArray_Request;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventType;
}
namespace UnityEngine::Rendering {
struct OcclusionTest;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventDebugArray;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventDebugArray_Info;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionEventDebugArray_Request;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray);
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info);
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request);
// Dependencies UnityEngine.Rendering.InstanceOcclusionEventType, UnityEngine.Rendering.OcclusionTest
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventDebugArray/Info
struct CORDL_TYPE InstanceOcclusionEventDebugArray_Info {
public:
  // Declarations
  /// @brief Method HasVersion, addr 0x65fa9f4, size 0x24, virtual false, abstract: false, final false
  inline bool HasVersion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionEventDebugArray_Info();

  // Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "::UnityEngine::Rendering::InstanceOcclusionEventType",
  // modifiers: "", def_value: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "occlusionTest", ty: "::UnityEngine::Rendering::OcclusionTest", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionEventDebugArray_Info(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType, int32_t occluderVersion, int32_t subviewMask,
                                                  ::UnityEngine::Rendering::OcclusionTest occlusionTest) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field viewInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t viewInstanceID;

  /// @brief Field eventType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::InstanceOcclusionEventType eventType;

  /// @brief Field occluderVersion, offset: 0x8, size: 0x4, def value: None
  int32_t occluderVersion;

  /// @brief Field subviewMask, offset: 0xc, size: 0x4, def value: None
  int32_t subviewMask;

  /// @brief Field occlusionTest, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::OcclusionTest occlusionTest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, viewInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, eventType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, occluderVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, subviewMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, occlusionTest) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, UnityEngine.Rendering.AsyncGPUReadbackRequest, UnityEngine.Rendering.InstanceOcclusionEventDebugArray::Info
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventDebugArray/Request
struct CORDL_TYPE InstanceOcclusionEventDebugArray_Request {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionEventDebugArray_Request();

  // Ctor Parameters [CppParam { name: "info", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value:
  // None }, CppParam { name: "readback", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionEventDebugArray_Request(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> info,
                                                     ::UnityEngine::Rendering::AsyncGPUReadbackRequest readback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field info, offset: 0x0, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> info;

  /// @brief Field readback, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::AsyncGPUReadbackRequest readback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request, info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request, readback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeQueue`1<T>, UnityEngine.Rendering.InstanceOcclusionEventDebugArray::Info,
// UnityEngine.Rendering.InstanceOcclusionEventDebugArray::Request
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionEventDebugArray
struct CORDL_TYPE InstanceOcclusionEventDebugArray {
public:
  // Declarations
  using Info = ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info;

  using Request = ::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request;

  __declspec(property(get = get_CounterBuffer)) ::UnityEngine::GraphicsBuffer* CounterBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x65fa2a4, size 0x164, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Init, addr 0x65fa1b8, size 0xec, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MoveToDebugStatsAndClear, addr 0x65fa530, size 0x4c4, virtual false, abstract: false, final false
  inline void MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats);

  /// @brief Method TryAdd, addr 0x65fa408, size 0x128, virtual false, abstract: false, final false
  inline int32_t TryAdd(int32_t viewInstanceID, ::UnityEngine::Rendering::InstanceOcclusionEventType eventType, int32_t occluderVersion, int32_t subviewMask,
                        ::UnityEngine::Rendering::OcclusionTest occlusionTest);

  /// @brief Method get_CounterBuffer, addr 0x65fa1b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_CounterBuffer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionEventDebugArray();

  // Ctor Parameters [CppParam { name: "m_CounterBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_PendingInfo", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: None }, CppParam { name: "m_Requests", ty:
  // "::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request>", modifiers: "", def_value: None }, CppParam { name: "m_LatestInfo", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info>", modifiers: "", def_value: None }, CppParam { name: "m_LatestCounters", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_HasLatest", ty: "bool", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionEventDebugArray(::UnityEngine::GraphicsBuffer* m_CounterBuffer,
                                             ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_PendingInfo,
                                             ::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request> m_Requests,
                                             ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_LatestInfo,
                                             ::Unity::Collections::NativeArray_1<int32_t> m_LatestCounters, bool m_HasLatest) noexcept;

  /// @brief Field InitialPassCount offset 0xffffffff size 0x4
  static constexpr int32_t InitialPassCount{ static_cast<int32_t>(0x4) };

  /// @brief Field MaxPassCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxPassCount{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field m_CounterBuffer, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* m_CounterBuffer;

  /// @brief Field m_PendingInfo, offset: 0x8, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_PendingInfo;

  /// @brief Field m_Requests, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request> m_Requests;

  /// @brief Field m_LatestInfo, offset: 0x28, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info> m_LatestInfo;

  /// @brief Field m_LatestCounters, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_LatestCounters;

  /// @brief Field m_HasLatest, offset: 0x50, size: 0x1, def value: None
  bool m_HasLatest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_CounterBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_PendingInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_Requests) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_LatestInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_LatestCounters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, m_HasLatest) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray, "UnityEngine.Rendering", "InstanceOcclusionEventDebugArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Info, "UnityEngine.Rendering", "InstanceOcclusionEventDebugArray/Info");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionEventDebugArray_Request, "UnityEngine.Rendering", "InstanceOcclusionEventDebugArray/Request");
