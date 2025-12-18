#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColocationSessionEventHandler)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AlignCameraToAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationController;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct ColocationSessionEventHandler__OnSessionCreated_d__7;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct ColocationSessionEventHandler__OnSessionDiscovered_d__8;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct ColocationSessionEventHandler__OnSessionCreated_d__7;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct ColocationSessionEventHandler__OnSessionDiscovered_d__8;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8);
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<OnSessionCreated>d__7
struct CORDL_TYPE ColocationSessionEventHandler__OnSessionCreated_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c2294, size 0x32c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c2884, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationSessionEventHandler__OnSessionCreated_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr ColocationSessionEventHandler__OnSessionCreated_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                 ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this, ::System::Guid groupUuid,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __u__1,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this;

  /// @brief Field groupUuid, offset: 0x30, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, groupUuid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, __u__2) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, 0x50>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<OnSessionDiscovered>d__8
struct CORDL_TYPE ColocationSessionEventHandler__OnSessionDiscovered_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58c288c, size 0x38c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58c2d38, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationSessionEventHandler__OnSessionDiscovered_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>",
  // modifiers: "", def_value: None }]
  constexpr ColocationSessionEventHandler__OnSessionDiscovered_d__8(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this,
      ::System::Guid groupUuid, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this;

  /// @brief Field groupUuid, offset: 0x30, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, groupUuid) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler
class CORDL_TYPE ColocationSessionEventHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _OnSessionCreated_d__7 = ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7;

  using _OnSessionDiscovered_d__8 = ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8;

  /// @brief Field AnchorPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_AnchorPrefab, put = __cordl_internal_set_AnchorPrefab)) ::UnityW<::UnityEngine::GameObject> AnchorPrefab;

  /// @brief Field _alignCameraToAnchor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__alignCameraToAnchor, put = __cordl_internal_set__alignCameraToAnchor)) ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>
      _alignCameraToAnchor;

  /// @brief Field _cameraRig, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRig, put = __cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _cameraRig;

  /// @brief Field _colocationController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colocationController, put = __cordl_internal_set__colocationController)) ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>
      _colocationController;

  /// @brief Field _sharedAnchorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedAnchorManager,
                      put = __cordl_internal_set__sharedAnchorManager)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _sharedAnchorManager;

  /// @brief Method Awake, addr 0x58c1bc4, size 0xa0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler* New_ctor();

  /// @brief Method OnDestroy, addr 0x58c2154, size 0x13c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnSessionCreated, addr 0x58c1fe4, size 0xb8, virtual false, abstract: false, final false
  inline void OnSessionCreated(::System::Guid groupUuid);

  /// @brief Method OnSessionDiscovered, addr 0x58c209c, size 0xb8, virtual false, abstract: false, final false
  inline void OnSessionDiscovered(::System::Guid groupUuid);

  /// @brief Method Start, addr 0x58c1c64, size 0x29c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AnchorPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AnchorPrefab();

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> const& __cordl_internal_get__alignCameraToAnchor() const;

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>& __cordl_internal_get__alignCameraToAnchor();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig();

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> const& __cordl_internal_get__colocationController() const;

  constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>& __cordl_internal_get__colocationController();

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get__sharedAnchorManager() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get__sharedAnchorManager();

  constexpr void __cordl_internal_set_AnchorPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__alignCameraToAnchor(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> value);

  constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set__colocationController(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> value);

  constexpr void __cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  /// @brief Method .ctor, addr 0x58c2290, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationSessionEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColocationSessionEventHandler(ColocationSessionEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColocationSessionEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColocationSessionEventHandler(ColocationSessionEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20338 };

  /// @brief Field AnchorPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___AnchorPrefab;

  /// @brief Field _colocationController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> ____colocationController;

  /// @brief Field _sharedAnchorManager, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* ____sharedAnchorManager;

  /// @brief Field _alignCameraToAnchor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> ____alignCameraToAnchor;

  /// @brief Field _cameraRig, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____cameraRig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ___AnchorPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____colocationController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____sharedAnchorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____alignCameraToAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, ____cameraRig) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7, "Meta.XR.MultiplayerBlocks.Shared",
                       "ColocationSessionEventHandler/<OnSessionCreated>d__7");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8, "Meta.XR.MultiplayerBlocks.Shared",
                       "ColocationSessionEventHandler/<OnSessionDiscovered>d__8");
