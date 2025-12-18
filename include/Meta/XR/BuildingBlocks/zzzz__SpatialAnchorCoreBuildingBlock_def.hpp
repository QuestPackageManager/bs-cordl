#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock)
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
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;
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
struct Guid;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
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
class SpatialAnchorCoreBuildingBlock;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;
}
namespace Meta::XR::BuildingBlocks {
struct SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23);
MARK_VAL_T(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22);
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<EraseAnchorByUuid>d__26
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5889fcc, size 0x320, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588a2ec, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Guid uuid,
                                                                    ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21179 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field uuid, offset: 0x28, size: 0x10, def value: None
  ::System::Guid uuid;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, uuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, 0x48>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRAnchor::EraseResult, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder,
// System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<EraseAnchorByUuidAsync>d__29
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588a2f4, size 0x50c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588a800, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor,
                                                                         ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
                                                                         ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> __u__1,
                                                                         ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field anchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, anchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, 0x48>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRObjectPool::ListScope`1<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<EraseAnchorsAsync>d__28
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588a86c, size 0x584, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588adf0, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "___5__2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name: "_anchorsToErase_5__3", ty:
  // "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                    ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
                                                                    ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2,
                                                                    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _anchorsToErase_5__3, int32_t _i_5__4,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21181 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field <_>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2;

  /// @brief Field <anchorsToErase>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _anchorsToErase_5__3;

  /// @brief Field <i>5__4, offset: 0x40, size: 0x4, def value: None
  int32_t _i_5__4;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, ___5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, _anchorsToErase_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, _i_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, 0x50>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<InitSpatialAnchorAsync>d__21
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588adf8, size 0x28c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588b084, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
                                                                         ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21182 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field anchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, anchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, 0x40>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRAnchor::FetchResult, OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>,
// System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<LoadAnchorsAsync>d__27
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588b08c, size 0xbf0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588bc7c, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*",
  // modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: None }, CppParam { name: "_unboundAnchors_5__3", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None }, CppParam { name: "___5__4", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name: "_loadedAnchors_5__5", ty:
  // "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "",
  // def_value: None }, CppParam { name: "_unboundAnchor_5__7", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
      ::UnityW<::UnityEngine::GameObject> prefab, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
      ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__3,
      ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__4,
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__5,
      ::GlobalNamespace::OVRTask_1_Awaiter<
          ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
          __u__1,
      ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> __7__wrap5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__7,
      ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21183 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field uuids, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids;

  /// @brief Field prefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> prefab;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field <unboundAnchorsPoolHandle>5__2, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2;

  /// @brief Field <unboundAnchors>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__3;

  /// @brief Field <_>5__4, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__4;

  /// @brief Field <loadedAnchors>5__5, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__5;

  /// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
      __u__1;

  /// @brief Field <>7__wrap5, offset: 0x70, size: 0x28, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> __7__wrap5;

  /// @brief Field <unboundAnchor>5__7, offset: 0x98, size: 0x18, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__7;

  /// @brief Field <>u__2, offset: 0xb0, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, uuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, prefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchorsPoolHandle_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchors_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, ___5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _loadedAnchors_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __7__wrap5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchor_5__7) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __u__2) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, 0xc0>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRAnchor::SaveResult, OVRObjectPool::ListScope`1<T>, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<SaveAsync>d__23
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__SaveAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588bc84, size 0x5f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588c27c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__SaveAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "___5__2", ty:
  // "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__SaveAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
                                                            ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2,
                                                            ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21184 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field anchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field <_>5__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, anchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, ___5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, 0x48>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<WaitForInit>d__22
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__WaitForInit_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x588c2e8, size 0x3a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x588c68c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock__WaitForInit_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>",
  // modifiers: "", def_value: None }, CppParam { name: "_timeoutThreshold_5__2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_startTime_5__3", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
  constexpr SpatialAnchorCoreBuildingBlock__WaitForInit_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor,
                                                              float_t _timeoutThreshold_5__2, float_t _startTime_5__3,
                                                              ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this;

  /// @brief Field anchor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor;

  /// @brief Field <timeoutThreshold>5__2, offset: 0x30, size: 0x4, def value: None
  float_t _timeoutThreshold_5__2;

  /// @brief Field <startTime>5__3, offset: 0x34, size: 0x4, def value: None
  float_t _startTime_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
  ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, anchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, _timeoutThreshold_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, _startTime_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, 0x40>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies OVRSpatialAnchor::OperationResult, UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock
class CORDL_TYPE SpatialAnchorCoreBuildingBlock : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _EraseAnchorByUuidAsync_d__29 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29;

  using _EraseAnchorByUuid_d__26 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26;

  using _EraseAnchorsAsync_d__28 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28;

  using _InitSpatialAnchorAsync_d__21 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;

  using _LoadAnchorsAsync_d__27 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;

  using _SaveAsync_d__23 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;

  using _WaitForInit_d__22 = ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;

  __declspec(property(get = get_OnAnchorCreateCompleted,
                      put = set_OnAnchorCreateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
      OnAnchorCreateCompleted;

  __declspec(property(
      get = get_OnAnchorEraseCompleted,
      put =
          set_OnAnchorEraseCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* OnAnchorEraseCompleted;

  __declspec(property(get = get_OnAnchorsEraseAllCompleted,
                      put = set_OnAnchorsEraseAllCompleted)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* OnAnchorsEraseAllCompleted;

  __declspec(property(
      get = get_OnAnchorsLoadCompleted,
      put = set_OnAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* OnAnchorsLoadCompleted;

  __declspec(property(get = get_Result, put = set_Result)) ::GlobalNamespace::OVRSpatialAnchor_OperationResult Result;

  /// @brief Field <Result>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__Result_k__BackingField,
                      put = __cordl_internal_set__Result_k__BackingField)) ::GlobalNamespace::OVRSpatialAnchor_OperationResult _Result_k__BackingField;

  /// @brief Field _onAnchorCreateCompleted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorCreateCompleted,
                      put = __cordl_internal_set__onAnchorCreateCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,
                                                                                                                ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onAnchorCreateCompleted;

  /// @brief Field _onAnchorEraseCompleted, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorEraseCompleted,
                      put = __cordl_internal_set__onAnchorEraseCompleted)) ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,
                                                                                                               ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onAnchorEraseCompleted;

  /// @brief Field _onAnchorsEraseAllCompleted, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorsEraseAllCompleted,
                      put = __cordl_internal_set__onAnchorsEraseAllCompleted)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* _onAnchorsEraseAllCompleted;

  /// @brief Field _onAnchorsLoadCompleted, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnchorsLoadCompleted,
                      put = __cordl_internal_set__onAnchorsLoadCompleted)) ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
      _onAnchorsLoadCompleted;

  /// @brief Method EraseAllAnchors, addr 0x5889d10, size 0x9c, virtual false, abstract: false, final false
  inline void EraseAllAnchors();

  /// @brief Method EraseAnchorByUuid, addr 0x5889e50, size 0xb8, virtual false, abstract: false, final false
  inline void EraseAnchorByUuid(::System::Guid uuid);

  /// @brief Method EraseAnchorByUuidAsync, addr 0x5889f08, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* EraseAnchorByUuidAsync(::GlobalNamespace::OVRSpatialAnchor* anchor);

  /// @brief Method EraseAnchorsAsync, addr 0x5889dac, size 0xa4, virtual false, abstract: false, final false
  inline void EraseAnchorsAsync();

  /// @brief Method GetFirstInstance, addr 0x588614c, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> GetFirstInstance();

  /// @brief Method InitSpatialAnchorAsync, addr 0x5889ab8, size 0xac, virtual false, abstract: false, final false
  inline void InitSpatialAnchorAsync(::GlobalNamespace::OVRSpatialAnchor* anchor);

  /// @brief Method InstantiateSpatialAnchor, addr 0x5886e5c, size 0x178, virtual false, abstract: false, final false
  inline void InstantiateSpatialAnchor(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method LoadAnchorsAsync, addr 0x5889c58, size 0xb8, virtual false, abstract: false, final false
  inline void LoadAnchorsAsync(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids);

  /// @brief Method LoadAndInstantiateAnchors, addr 0x5889b64, size 0xf4, virtual true, abstract: false, final false
  inline void LoadAndInstantiateAnchors(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::List_1<::System::Guid>* uuids);

  static inline ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock* New_ctor();

  /// @brief Method SaveAsync, addr 0x5888380, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveAsync(::GlobalNamespace::OVRSpatialAnchor* anchor);

  /// @brief Method WaitForInit, addr 0x58882c0, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForInit(::GlobalNamespace::OVRSpatialAnchor* anchor);

  constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult const& __cordl_internal_get__Result_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult& __cordl_internal_get__Result_k__BackingField();

  constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
  __cordl_internal_get__onAnchorCreateCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorCreateCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
  __cordl_internal_get__onAnchorEraseCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorEraseCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onAnchorsEraseAllCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onAnchorsEraseAllCompleted();

  constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get__onAnchorsLoadCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get__onAnchorsLoadCompleted();

  constexpr void __cordl_internal_set__Result_k__BackingField(::GlobalNamespace::OVRSpatialAnchor_OperationResult value);

  constexpr void
  __cordl_internal_set__onAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void
  __cordl_internal_set__onAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__onAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  constexpr void __cordl_internal_set__onAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  /// @brief Method .ctor, addr 0x5887fa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OnAnchorCreateCompleted, addr 0x5889a68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorCreateCompleted();

  /// @brief Method get_OnAnchorEraseCompleted, addr 0x5889a98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorEraseCompleted();

  /// @brief Method get_OnAnchorsEraseAllCompleted, addr 0x5889a88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* get_OnAnchorsEraseAllCompleted();

  /// @brief Method get_OnAnchorsLoadCompleted, addr 0x5889a78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* get_OnAnchorsLoadCompleted();

  /// @brief Method get_Result, addr 0x5889aa8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRSpatialAnchor_OperationResult get_Result();

  /// @brief Method set_OnAnchorCreateCompleted, addr 0x5889a70, size 0x8, virtual false, abstract: false, final false
  inline void set_OnAnchorCreateCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method set_OnAnchorEraseCompleted, addr 0x5889aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_OnAnchorEraseCompleted(::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method set_OnAnchorsEraseAllCompleted, addr 0x5889a90, size 0x8, virtual false, abstract: false, final false
  inline void set_OnAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value);

  /// @brief Method set_OnAnchorsLoadCompleted, addr 0x5889a80, size 0x8, virtual false, abstract: false, final false
  inline void set_OnAnchorsLoadCompleted(::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  /// @brief Method set_Result, addr 0x5889ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_Result(::GlobalNamespace::OVRSpatialAnchor_OperationResult value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpatialAnchorCoreBuildingBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorCoreBuildingBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpatialAnchorCoreBuildingBlock(SpatialAnchorCoreBuildingBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpatialAnchorCoreBuildingBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpatialAnchorCoreBuildingBlock(SpatialAnchorCoreBuildingBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21186 };

  /// @brief Field _onAnchorCreateCompleted, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ____onAnchorCreateCompleted;

  /// @brief Field _onAnchorsLoadCompleted, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* ____onAnchorsLoadCompleted;

  /// @brief Field _onAnchorsEraseAllCompleted, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ____onAnchorsEraseAllCompleted;

  /// @brief Field _onAnchorEraseCompleted, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* ____onAnchorEraseCompleted;

  /// @brief Field <Result>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRSpatialAnchor_OperationResult ____Result_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorCreateCompleted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorsLoadCompleted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorsEraseAllCompleted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____onAnchorEraseCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, ____Result_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock, 0x48>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29, "Meta.XR.BuildingBlocks",
                       "SpatialAnchorCoreBuildingBlock/<EraseAnchorByUuidAsync>d__29");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<EraseAnchorByUuid>d__26");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<EraseAnchorsAsync>d__28");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, "Meta.XR.BuildingBlocks",
                       "SpatialAnchorCoreBuildingBlock/<InitSpatialAnchorAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<LoadAnchorsAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<SaveAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<WaitForInit>d__22");
