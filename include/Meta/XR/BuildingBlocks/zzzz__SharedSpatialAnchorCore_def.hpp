#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedSpatialAnchorCore)
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
template <typename TStatus> struct OVRResult_1;
}
namespace GlobalNamespace {
template <typename TValue, typename TStatus> struct OVRResult_2;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__InitSpatialAnchor_d__16;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0, typename T1> class UnityEvent_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__InitSpatialAnchor_d__16;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17;
}
namespace Meta::XR::BuildingBlocks {
struct SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<InitSpatialAnchor>d__16
struct CORDL_TYPE SharedSpatialAnchorCore__InitSpatialAnchor_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5887fa4, size 0x31c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5888444, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore__InitSpatialAnchor_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>",
  // modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SharedSpatialAnchorCore__InitSpatialAnchor_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                             ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21173 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this;

  /// @brief Field anchor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, anchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, 0x38>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<InstantiateSpatialAnchor>d__15
struct CORDL_TYPE SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58884b0, size 0x300, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58887b0, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value:
  // None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                    ::UnityW<::UnityEngine::GameObject> prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                    ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21174 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field prefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field position, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field <>4__this, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, position) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, 0x60>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>,
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<LoadAndInstantiateAnchors>d__17
struct CORDL_TYPE SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58887b8, size 0x498, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5888c50, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::List_1<::System::Guid>*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None }, CppParam { name: "prefab",
  // ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }]
  constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Collections::Generic::List_1<::System::Guid>* uuids,
      ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::UnityW<::UnityEngine::GameObject> prefab,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
      ::GlobalNamespace::OVRTask_1_Awaiter<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21175 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field uuids, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Guid>* uuids;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this;

  /// @brief Field prefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field <unboundAnchorsPoolHandle>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, uuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, prefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, _unboundAnchorsPoolHandle_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, 0x58>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>, System.Guid,
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<LoadAndInstantiateAnchorsFromGroup>d__18
struct CORDL_TYPE SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5888c58, size 0x3dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5889034, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>",
  // modifiers: "", def_value: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }]
  constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Guid groupUuid, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this,
      ::UnityW<::UnityEngine::GameObject> prefab, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
      ::GlobalNamespace::OVRTask_1_Awaiter<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21176 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this;

  /// @brief Field prefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field <unboundAnchorsPoolHandle>5__2, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, prefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, _unboundAnchorsPoolHandle_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, 0x60>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>,
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<LoadSharedSpatialAnchorsRoutine>d__19
struct CORDL_TYPE SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588903c, size 0xa24, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5889a60, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "result", ty:
  // "::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None }, CppParam { name: "prefab", ty:
  // "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "_unboundAnchors_5__2", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None }, CppParam { name: "_loadedAnchors_5__3", ty:
  // "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_unboundAnchor_5__6", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
  constexpr SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult> result,
      ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::UnityW<::UnityEngine::GameObject> prefab,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__2,
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__3,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __7__wrap3, int32_t _i_5__5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__6,
      ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21177 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field result, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult> result;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this;

  /// @brief Field prefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field <unboundAnchors>5__2, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__2;

  /// @brief Field <loadedAnchors>5__3, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__3;

  /// @brief Field <>7__wrap3, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __7__wrap3;

  /// @brief Field <i>5__5, offset: 0x68, size: 0x4, def value: None
  int32_t _i_5__5;

  /// @brief Field <unboundAnchor>5__6, offset: 0x70, size: 0x18, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__6;

  /// @brief Field <>u__1, offset: 0x88, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, prefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _unboundAnchors_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _loadedAnchors_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __7__wrap3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _i_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _unboundAnchor_5__6) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __u__1) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, 0x98>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore
class CORDL_TYPE SharedSpatialAnchorCore : public ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock {
public:
  // Declarations
  using _InitSpatialAnchor_d__16 = ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16;

  using _InstantiateSpatialAnchor_d__15 = ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;

  using _LoadAndInstantiateAnchorsFromGroup_d__18 = ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;

  using _LoadAndInstantiateAnchors_d__17 = ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17;

  using _LoadSharedSpatialAnchorsRoutine_d__19 = ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;

  __declspec(property(get = get_OnSharedSpatialAnchorsLoadCompleted,
                      put = set_OnSharedSpatialAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,
                                                                                                          ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* OnSharedSpatialAnchorsLoadCompleted;

  __declspec(property(get = get_OnSpatialAnchorsShareCompleted,
                      put = set_OnSpatialAnchorsShareCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,
                                                                                                     ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* OnSpatialAnchorsShareCompleted;

  __declspec(property(get = get_OnSpatialAnchorsShareToGroupCompleted,
                      put = set_OnSpatialAnchorsShareToGroupCompleted)) ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,
                                                                                                            ::GlobalNamespace::OVRAnchor_ShareResult>* OnSpatialAnchorsShareToGroupCompleted;

  /// @brief Field _onShareCompleted, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__onShareCompleted, put = __cordl_internal_set__onShareCompleted)) ::System::Action_2<
      ::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* _onShareCompleted;

  /// @brief Field _onShareToGroupCompleted, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__onShareToGroupCompleted,
      put = __cordl_internal_set__onShareToGroupCompleted)) ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,
                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* _onShareToGroupCompleted;

  /// @brief Field _onSharedSpatialAnchorsLoadCompleted, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__onSharedSpatialAnchorsLoadCompleted, put = __cordl_internal_set__onSharedSpatialAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_2<
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onSharedSpatialAnchorsLoadCompleted;

  /// @brief Field _onSpatialAnchorsShareCompleted, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__onSpatialAnchorsShareCompleted, put = __cordl_internal_set__onSpatialAnchorsShareCompleted)) ::UnityEngine::Events::UnityEvent_2<
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onSpatialAnchorsShareCompleted;

  /// @brief Field _onSpatialAnchorsShareToGroupCompleted, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__onSpatialAnchorsShareToGroupCompleted, put = __cordl_internal_set__onSpatialAnchorsShareToGroupCompleted)) ::UnityEngine::Events::UnityEvent_2<
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* _onSpatialAnchorsShareToGroupCompleted;

  /// @brief Method InitSpatialAnchor, addr 0x588737c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitSpatialAnchor(::GlobalNamespace::OVRSpatialAnchor* anchor);

  /// @brief Method InstantiateSpatialAnchor, addr 0x588727c, size 0x100, virtual false, abstract: false, final false
  inline void InstantiateSpatialAnchor(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method LoadAndInstantiateAnchors, addr 0x5887440, size 0xbc, virtual true, abstract: false, final false
  inline void LoadAndInstantiateAnchors(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::List_1<::System::Guid>* uuids);

  /// @brief Method LoadAndInstantiateAnchorsFromGroup, addr 0x58874fc, size 0xc4, virtual false, abstract: false, final false
  inline void LoadAndInstantiateAnchorsFromGroup(::UnityEngine::GameObject* prefab, ::System::Guid groupUuid);

  /// @brief Method LoadSharedSpatialAnchorsRoutine, addr 0x58875c0, size 0xc4, virtual false, abstract: false, final false
  inline void LoadSharedSpatialAnchorsRoutine(
      ::UnityEngine::GameObject* prefab,
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult> result);

  static inline ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* New_ctor();

  /// @brief Method OnDestroy, addr 0x5887df8, size 0x1a4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnShareCompleted, addr 0x588797c, size 0x1f0, virtual false, abstract: false, final false
  inline void OnShareCompleted(::GlobalNamespace::OVRSpatialAnchor_OperationResult result, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method OnShareToGroupCompleted, addr 0x5887b6c, size 0x28c, virtual false, abstract: false, final false
  inline void OnShareToGroupCompleted(::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult> result,
                                      ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors);

  /// @brief Method ShareSpatialAnchors, addr 0x5887808, size 0x174, virtual false, abstract: false, final false
  inline void ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Guid groupUuid);

  /// @brief Method ShareSpatialAnchors, addr 0x5887684, size 0x184, virtual false, abstract: false, final false
  inline void ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users);

  /// @brief Method Start, addr 0x58870d8, size 0x1a4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
  __cordl_internal_get__onShareCompleted() const;

  constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
  __cordl_internal_get__onShareCompleted();

  constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,
                               ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
  __cordl_internal_get__onShareToGroupCompleted() const;

  constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,
                               ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
  __cordl_internal_get__onShareToGroupCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
  __cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
  __cordl_internal_get__onSharedSpatialAnchorsLoadCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
  __cordl_internal_get__onSpatialAnchorsShareCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
  __cordl_internal_get__onSpatialAnchorsShareCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* const&
  __cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*&
  __cordl_internal_get__onSpatialAnchorsShareToGroupCompleted();

  constexpr void __cordl_internal_set__onShareCompleted(
      ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  constexpr void __cordl_internal_set__onShareToGroupCompleted(::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,
                                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  constexpr void __cordl_internal_set__onSharedSpatialAnchorsLoadCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__onSpatialAnchorsShareCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__onSpatialAnchorsShareToGroupCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* value);

  /// @brief Method .ctor, addr 0x5887f9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OnSharedSpatialAnchorsLoadCompleted, addr 0x58870c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
  get_OnSharedSpatialAnchorsLoadCompleted();

  /// @brief Method get_OnSpatialAnchorsShareCompleted, addr 0x58870a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
  get_OnSpatialAnchorsShareCompleted();

  /// @brief Method get_OnSpatialAnchorsShareToGroupCompleted, addr 0x58870b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*
  get_OnSpatialAnchorsShareToGroupCompleted();

  /// @brief Method set_OnSharedSpatialAnchorsLoadCompleted, addr 0x58870d0, size 0x8, virtual false, abstract: false, final false
  inline void set_OnSharedSpatialAnchorsLoadCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method set_OnSpatialAnchorsShareCompleted, addr 0x58870b0, size 0x8, virtual false, abstract: false, final false
  inline void set_OnSpatialAnchorsShareCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method set_OnSpatialAnchorsShareToGroupCompleted, addr 0x58870c0, size 0x8, virtual false, abstract: false, final false
  inline void set_OnSpatialAnchorsShareToGroupCompleted(
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedSpatialAnchorCore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedSpatialAnchorCore(SharedSpatialAnchorCore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedSpatialAnchorCore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedSpatialAnchorCore(SharedSpatialAnchorCore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21178 };

  /// @brief Field _onSpatialAnchorsShareCompleted, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
      ____onSpatialAnchorsShareCompleted;

  /// @brief Field _onSpatialAnchorsShareToGroupCompleted, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*
      ____onSpatialAnchorsShareToGroupCompleted;

  /// @brief Field _onSharedSpatialAnchorsLoadCompleted, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
      ____onSharedSpatialAnchorsLoadCompleted;

  /// @brief Field _onShareCompleted, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* ____onShareCompleted;

  /// @brief Field _onShareToGroupCompleted, offset: 0x68, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
      ____onShareToGroupCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSpatialAnchorsShareCompleted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSpatialAnchorsShareToGroupCompleted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onSharedSpatialAnchorsLoadCompleted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onShareCompleted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, ____onShareToGroupCompleted) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore, 0x70>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<InitSpatialAnchor>d__16");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<InstantiateSpatialAnchor>d__15");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, "Meta.XR.BuildingBlocks",
                       "SharedSpatialAnchorCore/<LoadAndInstantiateAnchorsFromGroup>d__18");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<LoadAndInstantiateAnchors>d__17");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, "Meta.XR.BuildingBlocks",
                       "SharedSpatialAnchorCore/<LoadSharedSpatialAnchorsRoutine>d__19");
