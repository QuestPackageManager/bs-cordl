#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectManager)
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class __BeatmapObjectManager__NoteWasCutDelegate;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class __BeatmapObjectManager__NoteWasCutDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate);
// Type: ::NoteWasCutDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectManager::NoteWasCutDelegate*
class CORDL_TYPE __BeatmapObjectManager__NoteWasCutDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a871e8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a8727c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a871d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a7888c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectManager__NoteWasCutDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectManager__NoteWasCutDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectManager__NoteWasCutDelegate(__BeatmapObjectManager__NoteWasCutDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectManager__NoteWasCutDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectManager__NoteWasCutDelegate(__BeatmapObjectManager__NoteWasCutDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectManager
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 153, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectManager*
class CORDL_TYPE BeatmapObjectManager : public ::System::Object {
public:
  // Declarations
  using NoteWasCutDelegate = ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate;

  /// @brief Field _allBeatmapObjects, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapObjects,
                      put = __cordl_internal_set__allBeatmapObjects)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* _allBeatmapObjects;

  /// @brief Field <spawnHidden>k__BackingField, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnHidden_k__BackingField, put = __cordl_internal_set__spawnHidden_k__BackingField)) bool _spawnHidden_k__BackingField;

  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Field didHideAllBeatmapObjectsEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didHideAllBeatmapObjectsEvent, put = __cordl_internal_set_didHideAllBeatmapObjectsEvent)) ::System::Action_1<bool>* didHideAllBeatmapObjectsEvent;

  /// @brief Field noteDidStartDissolvingEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidStartDissolvingEvent,
                      put = __cordl_internal_set_noteDidStartDissolvingEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* noteDidStartDissolvingEvent;

  /// @brief Field noteDidStartJumpEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_noteDidStartJumpEvent,
                      put = __cordl_internal_set_noteDidStartJumpEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* noteDidStartJumpEvent;

  /// @brief Field noteWasAddedEvent, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_noteWasAddedEvent,
      put = __cordl_internal_set_noteWasAddedEvent)) ::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>* noteWasAddedEvent;

  /// @brief Field noteWasCutEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasCutEvent, put = __cordl_internal_set_noteWasCutEvent)) ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* noteWasCutEvent;

  /// @brief Field noteWasDespawnedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasDespawnedEvent,
                      put = __cordl_internal_set_noteWasDespawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* noteWasDespawnedEvent;

  /// @brief Field noteWasMissedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasMissedEvent,
                      put = __cordl_internal_set_noteWasMissedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* noteWasMissedEvent;

  /// @brief Field noteWasSpawnedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noteWasSpawnedEvent,
                      put = __cordl_internal_set_noteWasSpawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* noteWasSpawnedEvent;

  /// @brief Field obstacleDidPassAvoidedMarkEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleDidPassAvoidedMarkEvent,
                      put = __cordl_internal_set_obstacleDidPassAvoidedMarkEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacleDidPassAvoidedMarkEvent;

  /// @brief Field obstacleDidPassThreeQuartersOfMove2Event, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleDidPassThreeQuartersOfMove2Event,
                      put =
                          __cordl_internal_set_obstacleDidPassThreeQuartersOfMove2Event)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacleDidPassThreeQuartersOfMove2Event;

  /// @brief Field obstacleWasAddedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleWasAddedEvent,
                      put = __cordl_internal_set_obstacleWasAddedEvent)) ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData,
                                                                                            float_t>* obstacleWasAddedEvent;

  /// @brief Field obstacleWasDespawnedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleWasDespawnedEvent,
                      put = __cordl_internal_set_obstacleWasDespawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacleWasDespawnedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_obstacleWasSpawnedEvent,
                      put = __cordl_internal_set_obstacleWasSpawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacleWasSpawnedEvent;

  /// @brief Field sliderWasAddedEvent, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_sliderWasAddedEvent,
      put = __cordl_internal_set_sliderWasAddedEvent)) ::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>* sliderWasAddedEvent;

  /// @brief Field sliderWasDespawnedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderWasDespawnedEvent,
                      put = __cordl_internal_set_sliderWasDespawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* sliderWasDespawnedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_sliderWasSpawnedEvent,
                      put = __cordl_internal_set_sliderWasSpawnedEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* sliderWasSpawnedEvent;

  __declspec(property(get = get_spawnHidden, put = set_spawnHidden)) bool spawnHidden;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawner"
  constexpr operator ::GlobalNamespace::IBeatmapObjectSpawner*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidDissolveEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidDissolveEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartJumpEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasCutEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteWasCutEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasMissedEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteWasMissedEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidDissolveEvent"
  constexpr operator ::GlobalNamespace::ISliderDidDissolveEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidFinishJumpEvent"
  constexpr operator ::GlobalNamespace::ISliderDidFinishJumpEvent*() noexcept;

  /// @brief Method AddSpawnedNoteController, addr 0x3a80d2c, size 0x194, virtual false, abstract: false, final false
  inline void AddSpawnedNoteController(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData);

  /// @brief Method AddSpawnedObstacleController, addr 0x3a807c4, size 0x198, virtual false, abstract: false, final false
  inline void AddSpawnedObstacleController(::GlobalNamespace::ObstacleController* obstacleController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData);

  /// @brief Method AddSpawnedSliderController, addr 0x3a81338, size 0x188, virtual false, abstract: false, final false
  inline void AddSpawnedSliderController(::GlobalNamespace::SliderController* sliderController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData);

  /// @brief Method Despawn, addr 0x3a869a4, size 0xa4, virtual false, abstract: false, final false
  inline void Despawn(::GlobalNamespace::NoteController* noteController);

  /// @brief Method Despawn, addr 0x3a86a48, size 0xa4, virtual false, abstract: false, final false
  inline void Despawn(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method Despawn, addr 0x3a86aec, size 0xa4, virtual false, abstract: false, final false
  inline void Despawn(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method DespawnInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method DissolveAllObjects, addr 0x3a86c74, size 0x1c4, virtual false, abstract: false, final false
  inline void DissolveAllObjects();

  /// @brief Method HandleNoteControllerNoteDidDissolve, addr 0x3a86be8, size 0x4, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteDidFinishJump, addr 0x3a86bc8, size 0x4, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidFinishJump(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x3a86bcc, size 0x1c, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  /// @brief Method HandleNoteControllerNoteDidStartJump, addr 0x3a86b90, size 0x1c, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartJump(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteWasCut, addr 0x3a86bec, size 0x40, virtual false, abstract: false, final false
  inline void HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteControllerNoteWasMissed, addr 0x3a86bac, size 0x1c, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleDidDissolve, addr 0x3a86c68, size 0x4, virtual false, abstract: false, final false
  inline void HandleObstacleDidDissolve(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstacleFinishedMovement, addr 0x3a86c64, size 0x4, virtual false, abstract: false, final false
  inline void HandleObstacleFinishedMovement(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstaclePassedAvoidedMark, addr 0x3a86c48, size 0x1c, virtual false, abstract: false, final false
  inline void HandleObstaclePassedAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstaclePassedThreeQuartersOfMove2, addr 0x3a86c2c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleObstaclePassedThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleSliderDidDissolve, addr 0x3a86c70, size 0x4, virtual true, abstract: false, final true
  inline void HandleSliderDidDissolve(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleSliderDidFinishJump, addr 0x3a86c6c, size 0x4, virtual true, abstract: false, final true
  inline void HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HideAllBeatmapObjects, addr 0x3a86e38, size 0x1e0, virtual false, abstract: false, final false
  inline void HideAllBeatmapObjects(bool hide);

  /// @brief Method INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut, addr 0x3a871d0, size 0x4, virtual true, abstract: false, final true
  inline void INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::GlobalNamespace::BeatmapObjectManager* New_ctor();

  /// @brief Method PauseAllBeatmapObjects, addr 0x3a87018, size 0x1b8, virtual false, abstract: false, final false
  inline void PauseAllBeatmapObjects(bool pause);

  /// @brief Method ProcessNoteData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData);

  /// @brief Method RemoveNoteControllerEventCallbacks, addr 0x3a863f4, size 0x32c, virtual false, abstract: false, final false
  inline void RemoveNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController);

  /// @brief Method RemoveObstacleEventCallbacks, addr 0x3a8684c, size 0x158, virtual false, abstract: false, final false
  inline void RemoveObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method RemoveSliderNoteControllerEventCallbacks, addr 0x3a86720, size 0x12c, virtual false, abstract: false, final false
  inline void RemoveSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method SetNoteControllerEventCallbacks, addr 0x3a85fbc, size 0x314, virtual false, abstract: false, final false
  inline void SetNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController);

  /// @brief Method SetObstacleEventCallbacks, addr 0x3a85e64, size 0x158, virtual false, abstract: false, final false
  inline void SetObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method SetSliderNoteControllerEventCallbacks, addr 0x3a862d0, size 0x124, virtual false, abstract: false, final false
  inline void SetSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>*& __cordl_internal_get__allBeatmapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>*> const& __cordl_internal_get__allBeatmapObjects() const;

  constexpr bool const& __cordl_internal_get__spawnHidden_k__BackingField() const;

  constexpr bool& __cordl_internal_get__spawnHidden_k__BackingField();

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_didHideAllBeatmapObjectsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_didHideAllBeatmapObjectsEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*& __cordl_internal_get_noteDidStartDissolvingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>*> const& __cordl_internal_get_noteDidStartDissolvingEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& __cordl_internal_get_noteDidStartJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*> const& __cordl_internal_get_noteDidStartJumpEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>*& __cordl_internal_get_noteWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>*> const&
  __cordl_internal_get_noteWasAddedEvent() const;

  constexpr ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*& __cordl_internal_get_noteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*> const& __cordl_internal_get_noteWasCutEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& __cordl_internal_get_noteWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*> const& __cordl_internal_get_noteWasDespawnedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& __cordl_internal_get_noteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*> const& __cordl_internal_get_noteWasMissedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*& __cordl_internal_get_noteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>*> const& __cordl_internal_get_noteWasSpawnedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_obstacleDidPassAvoidedMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_obstacleDidPassAvoidedMarkEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_obstacleDidPassThreeQuartersOfMove2Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_obstacleDidPassThreeQuartersOfMove2Event() const;

  constexpr ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>*& __cordl_internal_get_obstacleWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>*> const&
  __cordl_internal_get_obstacleWasAddedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_obstacleWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_obstacleWasDespawnedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_obstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_obstacleWasSpawnedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>*& __cordl_internal_get_sliderWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>*> const&
  __cordl_internal_get_sliderWasAddedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*& __cordl_internal_get_sliderWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*> const& __cordl_internal_get_sliderWasDespawnedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*& __cordl_internal_get_sliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>*> const& __cordl_internal_get_sliderWasSpawnedEvent() const;

  constexpr void __cordl_internal_set__allBeatmapObjects(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* value);

  constexpr void __cordl_internal_set__spawnHidden_k__BackingField(bool value);

  constexpr void __cordl_internal_set_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  constexpr void __cordl_internal_set_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  constexpr void __cordl_internal_set_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>* value);

  constexpr void __cordl_internal_set_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  constexpr void __cordl_internal_set_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  constexpr void __cordl_internal_set_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  constexpr void __cordl_internal_set_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  constexpr void __cordl_internal_set_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void
  __cordl_internal_set_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  constexpr void __cordl_internal_set_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>* value);

  constexpr void __cordl_internal_set_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  constexpr void __cordl_internal_set_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  /// @brief Method .ctor, addr 0x3a81718, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didHideAllBeatmapObjectsEvent, addr 0x3a85cf0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  /// @brief Method add_noteDidStartDissolvingEvent, addr 0x3a7b104, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  /// @brief Method add_noteDidStartJumpEvent, addr 0x3a851f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method add_noteWasAddedEvent, addr 0x3a84dd0, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>* value);

  /// @brief Method add_noteWasCutEvent, addr 0x3a78990, size 0x9c, virtual false, abstract: false, final false
  inline void add_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  /// @brief Method add_noteWasDespawnedEvent, addr 0x3a84f30, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method add_noteWasMissedEvent, addr 0x3a85090, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method add_noteWasSpawnedEvent, addr 0x3a7b054, size 0xb0, virtual false, abstract: false, final false
  inline void add_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method add_obstacleDidPassAvoidedMarkEvent, addr 0x3a842ec, size 0xb0, virtual false, abstract: false, final false
  inline void add_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_obstacleDidPassThreeQuartersOfMove2Event, addr 0x3a85770, size 0xb0, virtual false, abstract: false, final false
  inline void add_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_obstacleWasAddedEvent, addr 0x3a85350, size 0xb0, virtual false, abstract: false, final false
  inline void add_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  /// @brief Method add_obstacleWasDespawnedEvent, addr 0x3a85610, size 0xb0, virtual false, abstract: false, final false
  inline void add_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_obstacleWasSpawnedEvent, addr 0x3a854b0, size 0xb0, virtual false, abstract: false, final false
  inline void add_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_sliderWasAddedEvent, addr 0x3a858d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>* value);

  /// @brief Method add_sliderWasDespawnedEvent, addr 0x3a85b90, size 0xb0, virtual false, abstract: false, final false
  inline void add_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  /// @brief Method add_sliderWasSpawnedEvent, addr 0x3a85a30, size 0xb0, virtual false, abstract: false, final false
  inline void add_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  /// @brief Method get_activeObstacleControllers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

  /// @brief Method get_spawnHidden, addr 0x3a85e50, size 0x8, virtual false, abstract: false, final false
  inline bool get_spawnHidden();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectSpawner"
  constexpr ::GlobalNamespace::IBeatmapObjectSpawner* i___GlobalNamespace__IBeatmapObjectSpawner() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidDissolveEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidDissolveEvent* i___GlobalNamespace__INoteControllerNoteDidDissolveEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent* i___GlobalNamespace__INoteControllerNoteDidFinishJumpEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartJumpEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent* i___GlobalNamespace__INoteControllerNoteDidStartJumpEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteWasCutEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteWasCutEvent* i___GlobalNamespace__INoteControllerNoteWasCutEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteWasMissedEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteWasMissedEvent* i___GlobalNamespace__INoteControllerNoteWasMissedEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISliderDidDissolveEvent"
  constexpr ::GlobalNamespace::ISliderDidDissolveEvent* i___GlobalNamespace__ISliderDidDissolveEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISliderDidFinishJumpEvent"
  constexpr ::GlobalNamespace::ISliderDidFinishJumpEvent* i___GlobalNamespace__ISliderDidFinishJumpEvent() noexcept;

  /// @brief Method remove_didHideAllBeatmapObjectsEvent, addr 0x3a85da0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_noteDidStartDissolvingEvent, addr 0x3a7b3ac, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteDidStartDissolvingEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* value);

  /// @brief Method remove_noteDidStartJumpEvent, addr 0x3a852a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteDidStartJumpEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method remove_noteWasAddedEvent, addr 0x3a84e80, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteWasAddedEvent(::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>* value);

  /// @brief Method remove_noteWasCutEvent, addr 0x3a78cd0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  /// @brief Method remove_noteWasDespawnedEvent, addr 0x3a84fe0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method remove_noteWasMissedEvent, addr 0x3a85140, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteWasMissedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method remove_noteWasSpawnedEvent, addr 0x3a7b2fc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_noteWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* value);

  /// @brief Method remove_obstacleDidPassAvoidedMarkEvent, addr 0x3a8457c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_obstacleDidPassThreeQuartersOfMove2Event, addr 0x3a85820, size 0xb0, virtual false, abstract: false, final false
  inline void remove_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_obstacleWasAddedEvent, addr 0x3a85400, size 0xb0, virtual false, abstract: false, final false
  inline void remove_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  /// @brief Method remove_obstacleWasDespawnedEvent, addr 0x3a856c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_obstacleWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent, addr 0x3a85560, size 0xb0, virtual false, abstract: false, final false
  inline void remove_obstacleWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_sliderWasAddedEvent, addr 0x3a85980, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sliderWasAddedEvent(::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>* value);

  /// @brief Method remove_sliderWasDespawnedEvent, addr 0x3a85c40, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sliderWasDespawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  /// @brief Method remove_sliderWasSpawnedEvent, addr 0x3a85ae0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_sliderWasSpawnedEvent(::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* value);

  /// @brief Method set_spawnHidden, addr 0x3a85e58, size 0xc, virtual false, abstract: false, final false
  inline void set_spawnHidden(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectManager(BeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectManager(BeatmapObjectManager const&) = delete;

  /// @brief Field noteWasAddedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>* ___noteWasAddedEvent;

  /// @brief Field noteWasSpawnedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* ___noteWasSpawnedEvent;

  /// @brief Field noteWasDespawnedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* ___noteWasDespawnedEvent;

  /// @brief Field noteWasMissedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* ___noteWasMissedEvent;

  /// @brief Field noteWasCutEvent, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* ___noteWasCutEvent;

  /// @brief Field noteDidStartJumpEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteController>>* ___noteDidStartJumpEvent;

  /// @brief Field noteDidStartDissolvingEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::NoteControllerBase>>* ___noteDidStartDissolvingEvent;

  /// @brief Field obstacleWasAddedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* ___obstacleWasAddedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___obstacleWasSpawnedEvent;

  /// @brief Field obstacleWasDespawnedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___obstacleWasDespawnedEvent;

  /// @brief Field obstacleDidPassThreeQuartersOfMove2Event, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___obstacleDidPassThreeQuartersOfMove2Event;

  /// @brief Field obstacleDidPassAvoidedMarkEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___obstacleDidPassAvoidedMarkEvent;

  /// @brief Field sliderWasAddedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>* ___sliderWasAddedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* ___sliderWasSpawnedEvent;

  /// @brief Field sliderWasDespawnedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::SliderController>>* ___sliderWasDespawnedEvent;

  /// @brief Field didHideAllBeatmapObjectsEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didHideAllBeatmapObjectsEvent;

  /// @brief Field _allBeatmapObjects, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* ____allBeatmapObjects;

  /// @brief Field <spawnHidden>k__BackingField, offset: 0x98, size: 0x1, def value: None
  bool ____spawnHidden_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectManager, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteWasAddedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteWasSpawnedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteWasDespawnedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteWasMissedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteWasCutEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteDidStartJumpEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___noteDidStartDissolvingEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___obstacleWasAddedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___obstacleWasSpawnedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___obstacleWasDespawnedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___obstacleDidPassThreeQuartersOfMove2Event) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___obstacleDidPassAvoidedMarkEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___sliderWasAddedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___sliderWasSpawnedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___sliderWasDespawnedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ___didHideAllBeatmapObjectsEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ____allBeatmapObjects) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectManager, ____spawnHidden_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectManager*, "", "BeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*, "", "BeatmapObjectManager/NoteWasCutDelegate");
