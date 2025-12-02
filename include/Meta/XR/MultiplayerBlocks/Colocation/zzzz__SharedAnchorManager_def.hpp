#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedAnchorManager)
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__AnchorCreationTask_d__21;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CreateAlignmentAnchor_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CreateAnchor_d__20;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__RetrieveAnchorsFromGroup_d__23;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__RetrieveAnchors_d__24;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__ShareAnchorsWithGroup_d__26;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__ShareAnchorsWithUser_d__27;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass24_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass26_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass27_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass29_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
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
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass24_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass26_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass27_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass29_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__AnchorCreationTask_d__21;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CreateAlignmentAnchor_d__19;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__CreateAnchor_d__20;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__RetrieveAnchorsFromGroup_d__23;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__RetrieveAnchors_d__24;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__ShareAnchorsWithGroup_d__26;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct SharedAnchorManager__ShareAnchorsWithUser_d__27;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26);
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass21_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field task, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* task;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* New_ctor();

  /// @brief Method <AnchorCreationTask>g__CreateCompletedCallback|0, addr 0x5868ac0, size 0x90, virtual false, abstract: false, final false
  inline void _AnchorCreationTask_g__CreateCompletedCallback_0(::GlobalNamespace::OVRSpatialAnchor* anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* const&
  __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*&
  __cordl_internal_get_task();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  constexpr void __cordl_internal_set_task(
      ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* value);

  /// @brief Method .ctor, addr 0x5868abc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass21_0(SharedAnchorManager___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass21_0(SharedAnchorManager___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20373 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _____4__this;

  /// @brief Field task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0, ___task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass23_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field task, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_task,
      put = __cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* task;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* New_ctor();

  /// @brief Method <RetrieveAnchorsFromGroup>g__LoadCompletedCallback|0, addr 0x5868b54, size 0xc8, virtual false, abstract: false, final false
  inline void _RetrieveAnchorsFromGroup_g__LoadCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors,
                                                                   ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
  __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  /// @brief Method .ctor, addr 0x5868b50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass23_0(SharedAnchorManager___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass23_0(SharedAnchorManager___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20374 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _____4__this;

  /// @brief Field task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0, ___task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass24_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field task, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_task,
      put = __cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* task;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* New_ctor();

  /// @brief Method <RetrieveAnchors>g__LoadCompletedCallback|0, addr 0x5868c20, size 0xc8, virtual false, abstract: false, final false
  inline void _RetrieveAnchors_g__LoadCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors,
                                                          ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
  __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value);

  /// @brief Method .ctor, addr 0x5868c1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass24_0(SharedAnchorManager___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass24_0(SharedAnchorManager___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20375 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _____4__this;

  /// @brief Field task, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* ___task;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0, ___task) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass26_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* task;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* New_ctor();

  /// @brief Method <ShareAnchorsWithGroup>g__ShareToGroupCompletedCallback|0, addr 0x5868cec, size 0x118, virtual false, abstract: false, final false
  inline void _ShareAnchorsWithGroup_g__ShareToGroupCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _,
                                                                        ::GlobalNamespace::OVRAnchor_ShareResult result);

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x5868ce8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass26_0(SharedAnchorManager___c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass26_0(SharedAnchorManager___c__DisplayClass26_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20376 };

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___task;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass27_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_task, put = __cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* task;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* New_ctor();

  /// @brief Method <ShareAnchorsWithUser>g__ShareCompleteCallback|0, addr 0x5868e08, size 0x118, virtual false, abstract: false, final false
  inline void _ShareAnchorsWithUser_g__ShareCompleteCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _,
                                                               ::GlobalNamespace::OVRSpatialAnchor_OperationResult result);

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_task() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_task();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value);

  constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x5868e04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass27_0(SharedAnchorManager___c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass27_0(SharedAnchorManager___c__DisplayClass27_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20377 };

  /// @brief Field task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___task;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass29_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) uint64_t userId;

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0* New_ctor();

  /// @brief Method <StopSharingAnchorsWithUser>b__0, addr 0x5868f20, size 0x34, virtual false, abstract: false, final false
  inline bool _StopSharingAnchorsWithUser_b__0(::GlobalNamespace::OVRSpaceUser el);

  constexpr uint64_t const& __cordl_internal_get_userId() const;

  constexpr uint64_t& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_userId(uint64_t value);

  /// @brief Method .ctor, addr 0x5868ab8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager___c__DisplayClass29_0(SharedAnchorManager___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager___c__DisplayClass29_0(SharedAnchorManager___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20378 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0, ___userId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies OVRSpatialAnchor::OperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1,
// T2>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<AnchorCreationTask>d__21
struct CORDL_TYPE SharedAnchorManager__AnchorCreationTask_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5868f54, size 0x480, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58693d4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__AnchorCreationTask_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name:
  // "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "",
  // def_value: None }]
  constexpr SharedAnchorManager__AnchorCreationTask_d__21(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __t__builder,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20379 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field position, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field orientation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  /// @brief Field <>8__1, offset: 0x48, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* __8__1;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, orientation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, __8__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, 0x58>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CheckIfRetrievingAnchorServiceHung>d__25
struct CORDL_TYPE SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5869454, size 0x240, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5869694, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CheckIfSavingAnchorsServiceHung>d__22
struct CORDL_TYPE SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586969c, size 0x224, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x58698c0, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20381 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CheckIfSharingAnchorServiceHung>d__28
struct CORDL_TYPE SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x58698c8, size 0x240, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5869b08, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20382 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, 0x38>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies OVRSpatialAnchor::OperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1,
// T2>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CreateAlignmentAnchor>d__19
struct CORDL_TYPE SharedAnchorManager__CreateAlignmentAnchor_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5869b10, size 0x4e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5869ff8, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__CreateAlignmentAnchor_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "",
  // def_value: None }]
  constexpr SharedAnchorManager__CreateAlignmentAnchor_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __t__builder,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, 0x30>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies OVRSpatialAnchor::OperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1,
// T2>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CreateAnchor>d__20
struct CORDL_TYPE SharedAnchorManager__CreateAnchor_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586a078, size 0x4d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x586a550, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__CreateAnchor_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name:
  // "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
  // modifiers: "", def_value: None }]
  constexpr SharedAnchorManager__CreateAnchor_d__20(
      int32_t __1__state,
      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
          __t__builder,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20384 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
      __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field position, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field orientation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, orientation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, 0x50>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<RetrieveAnchors>d__24
struct CORDL_TYPE SharedAnchorManager__RetrieveAnchors_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586a5d0, size 0x4dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x586aaac, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__RetrieveAnchors_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "anchorIds", ty:
  // "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: None }]
  constexpr SharedAnchorManager__RetrieveAnchors_d__24(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::System::Collections::Generic::List_1<::System::Guid>* anchorIds,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20385 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field anchorIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Guid>* anchorIds;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, anchorIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<RetrieveAnchorsFromGroup>d__23
struct CORDL_TYPE SharedAnchorManager__RetrieveAnchorsFromGroup_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586ab2c, size 0x464, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x586af90, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__RetrieveAnchorsFromGroup_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid",
  // modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers:
  // "", def_value: None }]
  constexpr SharedAnchorManager__RetrieveAnchorsFromGroup_d__23(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder,
      ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::System::Guid groupUuid, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* __8__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Guid, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<ShareAnchorsWithGroup>d__26
struct CORDL_TYPE SharedAnchorManager__ShareAnchorsWithGroup_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586b010, size 0x46c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x586b47c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__ShareAnchorsWithGroup_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam
  // { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr SharedAnchorManager__ShareAnchorsWithGroup_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                             ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::System::Guid groupUuid,
                                                             ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* __8__1,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20387 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
  ::System::Guid groupUuid;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* __8__1;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, 0x48>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<ShareAnchorsWithUser>d__27
struct CORDL_TYPE SharedAnchorManager__ShareAnchorsWithUser_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x586b4fc, size 0x6d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x586bbd0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager__ShareAnchorsWithUser_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr SharedAnchorManager__ShareAnchorsWithUser_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
                                                            ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, uint64_t userId,
                                                            ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* __8__1,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20388 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this;

  /// @brief Field userId, offset: 0x28, size: 0x8, def value: None
  uint64_t userId;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* __8__1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, userId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, 0x40>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager
class CORDL_TYPE SharedAnchorManager : public ::System::Object {
public:
  // Declarations
  using _AnchorCreationTask_d__21 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21;

  using _CheckIfRetrievingAnchorServiceHung_d__25 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25;

  using _CheckIfSavingAnchorsServiceHung_d__22 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22;

  using _CheckIfSharingAnchorServiceHung_d__28 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28;

  using _CreateAlignmentAnchor_d__19 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19;

  using _CreateAnchor_d__20 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20;

  using _RetrieveAnchorsFromGroup_d__23 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23;

  using _RetrieveAnchors_d__24 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24;

  using _ShareAnchorsWithGroup_d__26 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26;

  using _ShareAnchorsWithUser_d__27 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27;

  using __c__DisplayClass21_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0;

  using __c__DisplayClass23_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0;

  using __c__DisplayClass24_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0;

  using __c__DisplayClass26_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0;

  using __c__DisplayClass27_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0;

  using __c__DisplayClass29_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0;

  __declspec(property(get = get_AnchorPrefab, put = set_AnchorPrefab)) ::UnityW<::UnityEngine::GameObject> AnchorPrefab;

  __declspec(property(get = get_LocalAnchors)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* LocalAnchors;

  /// @brief Field <AnchorPrefab>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AnchorPrefab_k__BackingField, put = __cordl_internal_set__AnchorPrefab_k__BackingField)) ::UnityW<::UnityEngine::GameObject>
      _AnchorPrefab_k__BackingField;

  /// @brief Field _localAnchors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localAnchors,
                      put = __cordl_internal_set__localAnchors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _localAnchors;

  /// @brief Field _localizationTasks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationTasks,
                      put = __cordl_internal_set__localizationTasks)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* _localizationTasks;

  /// @brief Field _localizationTcsList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__localizationTcsList,
                      put = __cordl_internal_set__localizationTcsList)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* _localizationTcsList;

  /// @brief Field _retrieveAnchorIsSuccessful, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__retrieveAnchorIsSuccessful, put = __cordl_internal_set__retrieveAnchorIsSuccessful)) bool _retrieveAnchorIsSuccessful;

  /// @brief Field _saveAnchorSaveToCloudIsSuccessful, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__saveAnchorSaveToCloudIsSuccessful, put = __cordl_internal_set__saveAnchorSaveToCloudIsSuccessful)) bool _saveAnchorSaveToCloudIsSuccessful;

  /// @brief Field _shareAnchorIsSuccessful, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__shareAnchorIsSuccessful, put = __cordl_internal_set__shareAnchorIsSuccessful)) bool _shareAnchorIsSuccessful;

  /// @brief Field _sharedAnchors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedAnchors,
                      put = __cordl_internal_set__sharedAnchors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _sharedAnchors;

  /// @brief Field _ssaCore, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ssaCore, put = __cordl_internal_set__ssaCore)) ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> _ssaCore;

  /// @brief Field _userShareList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__userShareList, put = __cordl_internal_set__userShareList)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* _userShareList;

  /// @brief Method AnchorCreationTask, addr 0x5868684, size 0x130, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*
  AnchorCreationTask(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation);

  /// @brief Method CheckIfRetrievingAnchorServiceHung, addr 0x5868858, size 0xa4, virtual false, abstract: false, final false
  inline void CheckIfRetrievingAnchorServiceHung();

  /// @brief Method CheckIfSavingAnchorsServiceHung, addr 0x58687b4, size 0xa4, virtual false, abstract: false, final false
  inline void CheckIfSavingAnchorsServiceHung();

  /// @brief Method CheckIfSharingAnchorServiceHung, addr 0x58688fc, size 0xa4, virtual false, abstract: false, final false
  inline void CheckIfSharingAnchorServiceHung();

  /// @brief Method CreateAlignmentAnchor, addr 0x585be5c, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CreateAlignmentAnchor();

  /// @brief Method CreateAnchor, addr 0x5868558, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*
  CreateAnchor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation);

  static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* New_ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* ssaCore);

  /// @brief Method RetrieveAnchors, addr 0x5867014, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
  RetrieveAnchors(::System::Collections::Generic::List_1<::System::Guid>* anchorIds);

  /// @brief Method RetrieveAnchorsFromGroup, addr 0x585c4b4, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* RetrieveAnchorsFromGroup(::System::Guid groupUuid);

  /// @brief Method ShareAnchorsWithGroup, addr 0x585bf38, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ShareAnchorsWithGroup(::System::Guid groupUuid);

  /// @brief Method ShareAnchorsWithUser, addr 0x5867654, size 0xec, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ShareAnchorsWithUser(uint64_t userId);

  /// @brief Method StopSharingAnchorsWithUser, addr 0x58689a0, size 0x118, virtual false, abstract: false, final false
  inline void StopSharingAnchorsWithUser(uint64_t userId);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__AnchorPrefab_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__AnchorPrefab_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const& __cordl_internal_get__localAnchors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& __cordl_internal_get__localAnchors();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get__localizationTasks() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get__localizationTasks();

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* const& __cordl_internal_get__localizationTcsList() const;

  constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*& __cordl_internal_get__localizationTcsList();

  constexpr bool const& __cordl_internal_get__retrieveAnchorIsSuccessful() const;

  constexpr bool& __cordl_internal_get__retrieveAnchorIsSuccessful();

  constexpr bool const& __cordl_internal_get__saveAnchorSaveToCloudIsSuccessful() const;

  constexpr bool& __cordl_internal_get__saveAnchorSaveToCloudIsSuccessful();

  constexpr bool const& __cordl_internal_get__shareAnchorIsSuccessful() const;

  constexpr bool& __cordl_internal_get__shareAnchorIsSuccessful();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const& __cordl_internal_get__sharedAnchors() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& __cordl_internal_get__sharedAnchors();

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> const& __cordl_internal_get__ssaCore() const;

  constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>& __cordl_internal_get__ssaCore();

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* const& __cordl_internal_get__userShareList() const;

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*& __cordl_internal_get__userShareList();

  constexpr void __cordl_internal_set__AnchorPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__localAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  constexpr void __cordl_internal_set__localizationTasks(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* value);

  constexpr void __cordl_internal_set__localizationTcsList(::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* value);

  constexpr void __cordl_internal_set__retrieveAnchorIsSuccessful(bool value);

  constexpr void __cordl_internal_set__saveAnchorSaveToCloudIsSuccessful(bool value);

  constexpr void __cordl_internal_set__shareAnchorIsSuccessful(bool value);

  constexpr void __cordl_internal_set__sharedAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value);

  constexpr void __cordl_internal_set__ssaCore(::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> value);

  constexpr void __cordl_internal_set__userShareList(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* value);

  /// @brief Method .ctor, addr 0x585b79c, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* ssaCore);

  /// @brief Method get_AnchorPrefab, addr 0x5868540, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_AnchorPrefab();

  /// @brief Method get_LocalAnchors, addr 0x5868550, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* get_LocalAnchors();

  /// @brief Method set_AnchorPrefab, addr 0x5868548, size 0x8, virtual false, abstract: false, final false
  inline void set_AnchorPrefab(::UnityEngine::GameObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedAnchorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedAnchorManager(SharedAnchorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedAnchorManager(SharedAnchorManager const&) = delete;

  /// @brief Field RetrieveAnchorWaitTimeThreshold offset 0xffffffff size 0x4
  static constexpr int32_t RetrieveAnchorWaitTimeThreshold{ static_cast<int32_t>(0x2710) };

  /// @brief Field SaveAnchorWaitTimeThreshold offset 0xffffffff size 0x4
  static constexpr int32_t SaveAnchorWaitTimeThreshold{ static_cast<int32_t>(0x2710) };

  /// @brief Field ShareAnchorWaitTimeThreshold offset 0xffffffff size 0x4
  static constexpr int32_t ShareAnchorWaitTimeThreshold{ static_cast<int32_t>(0x2710) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20389 };

  /// @brief Field _localAnchors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* ____localAnchors;

  /// @brief Field _sharedAnchors, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* ____sharedAnchors;

  /// @brief Field _userShareList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* ____userShareList;

  /// @brief Field _saveAnchorSaveToCloudIsSuccessful, offset: 0x28, size: 0x1, def value: None
  bool ____saveAnchorSaveToCloudIsSuccessful;

  /// @brief Field _shareAnchorIsSuccessful, offset: 0x29, size: 0x1, def value: None
  bool ____shareAnchorIsSuccessful;

  /// @brief Field _retrieveAnchorIsSuccessful, offset: 0x2a, size: 0x1, def value: None
  bool ____retrieveAnchorIsSuccessful;

  /// @brief Field _localizationTasks, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* ____localizationTasks;

  /// @brief Field _localizationTcsList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* ____localizationTcsList;

  /// @brief Field <AnchorPrefab>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____AnchorPrefab_k__BackingField;

  /// @brief Field _ssaCore, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> ____ssaCore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localAnchors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____sharedAnchors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____userShareList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____saveAnchorSaveToCloudIsSuccessful) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____shareAnchorIsSuccessful) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____retrieveAnchorIsSuccessful) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localizationTasks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localizationTcsList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____AnchorPrefab_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____ssaCore) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, 0x50>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass21_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass23_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass24_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass26_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass27_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass29_0");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<AnchorCreationTask>d__21");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<CheckIfRetrievingAnchorServiceHung>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<CheckIfSavingAnchorsServiceHung>d__22");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<CheckIfSharingAnchorServiceHung>d__28");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<CreateAlignmentAnchor>d__19");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<CreateAnchor>d__20");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<RetrieveAnchorsFromGroup>d__23");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<RetrieveAnchors>d__24");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<ShareAnchorsWithGroup>d__26");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27, "Meta.XR.MultiplayerBlocks.Colocation",
                       "SharedAnchorManager/<ShareAnchorsWithUser>d__27");
