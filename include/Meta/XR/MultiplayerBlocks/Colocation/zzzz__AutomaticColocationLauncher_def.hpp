#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticColocationLauncher)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__CreateNewColocatedSpace_d__23;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__LocalizeAnchor_d__30;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ColocationFailedReason;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkData;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class INetworkMessenger;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AutomaticColocationLauncher;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__CreateNewColocatedSpace_d__23;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__LocalizeAnchor_d__30;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28);
// Dependencies Meta.XR.MultiplayerBlocks.Colocation.Anchor, System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<ColocateAutomaticallyInternal>d__19
struct CORDL_TYPE AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58cc3fc, size 0x4d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58cc8dc, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "_successfullyAlignedToAnchor_5__2", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap2", ty: "::System::Collections::Generic::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>", modifiers: "", def_value: None },
  // CppParam { name: "_anchor_5__4", ty: "::Meta::XR::MultiplayerBlocks::Colocation::Anchor", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                             ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this, bool _successfullyAlignedToAnchor_5__2,
                                                                             ::System::Collections::Generic::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> __7__wrap2,
                                                                             ::Meta::XR::MultiplayerBlocks::Colocation::Anchor _anchor_5__4,
                                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this;

  /// @brief Field <successfullyAlignedToAnchor>5__2, offset: 0x30, size: 0x1, def value: None
  bool _successfullyAlignedToAnchor_5__2;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x38, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> __7__wrap2;

  /// @brief Field <anchor>5__4, offset: 0x70, size: 0x28, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::Anchor _anchor_5__4;

  /// @brief Field <>u__1, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, _successfullyAlignedToAnchor_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, _anchor_5__4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __u__1) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, 0xa0>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies Meta.XR.MultiplayerBlocks.Colocation.Anchor, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<ColocateByPlayerWithOculusIdInternal>d__20
struct CORDL_TYPE AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58cc8e4, size 0x490, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58ccd74, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "oculusId", ty: "uint64_t", modifiers: "", def_value: None },
  // CppParam { name: "_anchorToAlignTo_5__2", ty: "::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                    ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this, uint64_t oculusId,
                                                                                    ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> _anchorToAlignTo_5__2,
                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this;

  /// @brief Field oculusId, offset: 0x30, size: 0x8, def value: None
  uint64_t oculusId;

  /// @brief Field <anchorToAlignTo>5__2, offset: 0x38, size: 0x30, def value: None
  ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> _anchorToAlignTo_5__2;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, oculusId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, _anchorToAlignTo_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, __u__1) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, 0x70>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<CreateNewColocatedSpace>d__23
struct CORDL_TYPE AutomaticColocationLauncher__CreateNewColocatedSpace_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58ccd7c, size 0x4e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58cd278, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher__CreateNewColocatedSpace_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }]
  constexpr AutomaticColocationLauncher__CreateNewColocatedSpace_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20387 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<LocalizeAnchor>d__30
struct CORDL_TYPE AutomaticColocationLauncher__LocalizeAnchor_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58cd280, size 0x4f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58cd864, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher__LocalizeAnchor_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "anchorToLocalize", ty: "::System::Guid", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>",
  // modifiers: "", def_value: None }]
  constexpr AutomaticColocationLauncher__LocalizeAnchor_d__30(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this,
      ::System::Guid anchorToLocalize,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this;

  /// @brief Field anchorToLocalize, offset: 0x30, size: 0x10, def value: None
  ::System::Guid anchorToLocalize;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, anchorToLocalize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<OnAnchorShareRequestReceived>d__28
struct CORDL_TYPE AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58cd86c, size 0x54c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58cdea4, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None }, CppParam { name: "shareAndLocalizeParams", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this,
                                                                            ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20389 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* __4__this;

  /// @brief Field shareAndLocalizeParams, offset: 0x30, size: 0x28, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, shareAndLocalizeParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, 0x60>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher
class CORDL_TYPE AutomaticColocationLauncher : public ::System::Object {
public:
  // Declarations
  using _ColocateAutomaticallyInternal_d__19 = ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;

  using _ColocateByPlayerWithOculusIdInternal_d__20 = ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20;

  using _CreateNewColocatedSpace_d__23 = ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23;

  using _LocalizeAnchor_d__30 = ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30;

  using _OnAnchorShareRequestReceived_d__28 = ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;

  /// @brief Field ColocationFailed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ColocationFailed,
                      put = __cordl_internal_set_ColocationFailed)) ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* ColocationFailed;

  /// @brief Field ColocationReady, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ColocationReady, put = __cordl_internal_set_ColocationReady)) ::System::Action* ColocationReady;

  /// @brief Field _alignToAnchorTask, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__alignToAnchorTask, put = __cordl_internal_set__alignToAnchorTask)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* _alignToAnchorTask;

  /// @brief Field _cameraRig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::UnityEngine::GameObject> _cameraRig;

  /// @brief Field _myAlignmentAnchor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__myAlignmentAnchor, put = __cordl_internal_set__myAlignmentAnchor)) ::UnityW<::GlobalNamespace::OVRSpatialAnchor> _myAlignmentAnchor;

  /// @brief Field _myOculusId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__myOculusId, put = __cordl_internal_set__myOculusId)) uint64_t _myOculusId;

  /// @brief Field _myPlayerId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__myPlayerId, put = __cordl_internal_set__myPlayerId)) uint64_t _myPlayerId;

  /// @brief Field _networkData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__networkData, put = __cordl_internal_set__networkData)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* _networkData;

  /// @brief Field _networkMessenger, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__networkMessenger, put = __cordl_internal_set__networkMessenger)) ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* _networkMessenger;

  /// @brief Field _oculusIdToColocateTo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusIdToColocateTo, put = __cordl_internal_set__oculusIdToColocateTo)) uint64_t _oculusIdToColocateTo;

  /// @brief Field _sharedAnchorManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedAnchorManager,
                      put = __cordl_internal_set__sharedAnchorManager)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _sharedAnchorManager;

  /// @brief Method AlignPlayerToAnchor, addr 0x58cb77c, size 0x84, virtual false, abstract: false, final false
  inline void AlignPlayerToAnchor();

  /// @brief Method ColocateAutomatically, addr 0x58c344c, size 0x4, virtual false, abstract: false, final false
  inline void ColocateAutomatically();

  /// @brief Method ColocateAutomaticallyInternal, addr 0x58cb0a0, size 0xa4, virtual false, abstract: false, final false
  inline void ColocateAutomaticallyInternal();

  /// @brief Method ColocateByPlayerWithOculusId, addr 0x58cb144, size 0x4, virtual false, abstract: false, final false
  inline void ColocateByPlayerWithOculusId(uint64_t oculusId);

  /// @brief Method ColocateByPlayerWithOculusIdInternal, addr 0x58cb148, size 0xb4, virtual false, abstract: false, final false
  inline void ColocateByPlayerWithOculusIdInternal(uint64_t oculusId);

  /// @brief Method CreateColocatedSpace, addr 0x58cb1fc, size 0x4, virtual false, abstract: false, final false
  inline void CreateColocatedSpace();

  /// @brief Method CreateColocatedSpaceInternal, addr 0x58cb200, size 0x4, virtual false, abstract: false, final false
  inline void CreateColocatedSpaceInternal();

  /// @brief Method CreateNewColocatedSpace, addr 0x58cb6d8, size 0xa4, virtual false, abstract: false, final false
  inline void CreateNewColocatedSpace();

  /// @brief Method FindAlignmentAnchorUsedByOculusId, addr 0x58cb204, size 0x4d4, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor> FindAlignmentAnchorUsedByOculusId(uint64_t oculusId);

  /// @brief Method GetAllAlignmentAnchors, addr 0x58cb800, size 0x294, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* GetAllAlignmentAnchors();

  /// @brief Method Init, addr 0x58c319c, size 0x1f0, virtual false, abstract: false, final false
  inline void Init(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* networkData, ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* networkMessenger,
                   ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* sharedAnchorManager, ::UnityEngine::GameObject* cameraRig, uint64_t myPlayerId, uint64_t myOculusId);

  /// @brief Method LocalizeAnchor, addr 0x58cc344, size 0xb8, virtual false, abstract: false, final false
  inline void LocalizeAnchor(::System::Guid anchorToLocalize);

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher* New_ctor();

  /// @brief Method OnAnchorShareRequestCompleted, addr 0x58cc0e8, size 0x25c, virtual false, abstract: false, final false
  inline void OnAnchorShareRequestCompleted(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams);

  /// @brief Method OnAnchorShareRequestReceived, addr 0x58cc028, size 0xc0, virtual false, abstract: false, final false
  inline void OnAnchorShareRequestReceived(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams shareAndLocalizeParams);

  /// @brief Method SendAnchorShareRequest, addr 0x58cbb5c, size 0x4b8, virtual false, abstract: false, final false
  inline void SendAnchorShareRequest(::Meta::XR::MultiplayerBlocks::Colocation::Anchor anchor);

  /// @brief Method ShareAndLocalizeAnchor, addr 0x58cba94, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ShareAndLocalizeAnchor(::Meta::XR::MultiplayerBlocks::Colocation::Anchor anchor);

  constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* const& __cordl_internal_get_ColocationFailed() const;

  constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>*& __cordl_internal_get_ColocationFailed();

  constexpr ::System::Action* const& __cordl_internal_get_ColocationReady() const;

  constexpr ::System::Action*& __cordl_internal_get_ColocationReady();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__alignToAnchorTask() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__alignToAnchorTask();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor> const& __cordl_internal_get__myAlignmentAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSpatialAnchor>& __cordl_internal_get__myAlignmentAnchor();

  constexpr uint64_t const& __cordl_internal_get__myOculusId() const;

  constexpr uint64_t& __cordl_internal_get__myOculusId();

  constexpr uint64_t const& __cordl_internal_get__myPlayerId() const;

  constexpr uint64_t& __cordl_internal_get__myPlayerId();

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* const& __cordl_internal_get__networkData() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData*& __cordl_internal_get__networkData();

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* const& __cordl_internal_get__networkMessenger() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger*& __cordl_internal_get__networkMessenger();

  constexpr uint64_t const& __cordl_internal_get__oculusIdToColocateTo() const;

  constexpr uint64_t& __cordl_internal_get__oculusIdToColocateTo();

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get__sharedAnchorManager() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get__sharedAnchorManager();

  constexpr void __cordl_internal_set_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* value);

  constexpr void __cordl_internal_set_ColocationReady(::System::Action* value);

  constexpr void __cordl_internal_set__alignToAnchorTask(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__myAlignmentAnchor(::UnityW<::GlobalNamespace::OVRSpatialAnchor> value);

  constexpr void __cordl_internal_set__myOculusId(uint64_t value);

  constexpr void __cordl_internal_set__myPlayerId(uint64_t value);

  constexpr void __cordl_internal_set__networkData(::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* value);

  constexpr void __cordl_internal_set__networkMessenger(::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* value);

  constexpr void __cordl_internal_set__oculusIdToColocateTo(uint64_t value);

  constexpr void __cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  /// @brief Method .ctor, addr 0x58c3198, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ColocationFailed, addr 0x58c338c, size 0xc0, virtual false, abstract: false, final false
  inline void add_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* value);

  /// @brief Method add_ColocationReady, addr 0x58cae88, size 0xac, virtual false, abstract: false, final false
  inline void add_ColocationReady(::System::Action* value);

  /// @brief Method remove_ColocationFailed, addr 0x58cafe0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_ColocationFailed(::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* value);

  /// @brief Method remove_ColocationReady, addr 0x58caf34, size 0xac, virtual false, abstract: false, final false
  inline void remove_ColocationReady(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticColocationLauncher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutomaticColocationLauncher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutomaticColocationLauncher(AutomaticColocationLauncher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticColocationLauncher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutomaticColocationLauncher(AutomaticColocationLauncher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20390 };

  /// @brief Field ColocationReady, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___ColocationReady;

  /// @brief Field ColocationFailed, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Meta::XR::MultiplayerBlocks::Colocation::ColocationFailedReason>* ___ColocationFailed;

  /// @brief Field _cameraRig, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____cameraRig;

  /// @brief Field _alignToAnchorTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ____alignToAnchorTask;

  /// @brief Field _myAlignmentAnchor, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSpatialAnchor> ____myAlignmentAnchor;

  /// @brief Field _myPlayerId, offset: 0x38, size: 0x8, def value: None
  uint64_t ____myPlayerId;

  /// @brief Field _myOculusId, offset: 0x40, size: 0x8, def value: None
  uint64_t ____myOculusId;

  /// @brief Field _networkData, offset: 0x48, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::INetworkData* ____networkData;

  /// @brief Field _networkMessenger, offset: 0x50, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::INetworkMessenger* ____networkMessenger;

  /// @brief Field _oculusIdToColocateTo, offset: 0x58, size: 0x8, def value: None
  uint64_t ____oculusIdToColocateTo;

  /// @brief Field _sharedAnchorManager, offset: 0x60, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* ____sharedAnchorManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ___ColocationReady) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ___ColocationFailed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____cameraRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____alignToAnchorTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myAlignmentAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myPlayerId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____myOculusId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____networkData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____networkMessenger) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____oculusIdToColocateTo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, ____sharedAnchorManager) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher, 0x68>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*, "Meta.XR.MultiplayerBlocks.Colocation", "AutomaticColocationLauncher");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, "Meta.XR.MultiplayerBlocks.Colocation",
                       "AutomaticColocationLauncher/<ColocateAutomaticallyInternal>d__19");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20, "Meta.XR.MultiplayerBlocks.Colocation",
                       "AutomaticColocationLauncher/<ColocateByPlayerWithOculusIdInternal>d__20");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__CreateNewColocatedSpace_d__23, "Meta.XR.MultiplayerBlocks.Colocation",
                       "AutomaticColocationLauncher/<CreateNewColocatedSpace>d__23");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__LocalizeAnchor_d__30, "Meta.XR.MultiplayerBlocks.Colocation",
                       "AutomaticColocationLauncher/<LocalizeAnchor>d__30");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, "Meta.XR.MultiplayerBlocks.Colocation",
                       "AutomaticColocationLauncher/<OnAnchorShareRequestReceived>d__28");
