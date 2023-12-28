#pragma once
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
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class __BeatmapObjectManager__NoteWasCutDelegate;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4715))
// CS Name: ::BeatmapObjectManager::NoteWasCutDelegate*
class CORDL_TYPE __BeatmapObjectManager__NoteWasCutDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x237f4b0 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x237f5e0 size 0x14 virtual true final false
  inline void Invoke(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method BeginInvoke addr 0x237f5f4 size 0x94 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x237f688 size 0xc virtual true final false
  inline void EndInvoke(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectManager__NoteWasCutDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapObjectManager__NoteWasCutDelegate(__BeatmapObjectManager__NoteWasCutDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapObjectManager__NoteWasCutDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapObjectManager__NoteWasCutDelegate(__BeatmapObjectManager__NoteWasCutDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectManager__NoteWasCutDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4716))
// CS Name: ::BeatmapObjectManager*
class CORDL_TYPE BeatmapObjectManager : public ::System::Object {
public:
  // Declarations
  using NoteWasCutDelegate = ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate;

  /// @brief Field noteWasAddedEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_noteWasAddedEvent,
                      put = __set_noteWasAddedEvent))::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>* noteWasAddedEvent;

  /// @brief Field noteWasSpawnedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_noteWasSpawnedEvent, put = __set_noteWasSpawnedEvent))::System::Action_1<::GlobalNamespace::NoteController*>* noteWasSpawnedEvent;

  /// @brief Field noteWasDespawnedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_noteWasDespawnedEvent, put = __set_noteWasDespawnedEvent))::System::Action_1<::GlobalNamespace::NoteController*>* noteWasDespawnedEvent;

  /// @brief Field noteWasMissedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_noteWasMissedEvent, put = __set_noteWasMissedEvent))::System::Action_1<::GlobalNamespace::NoteController*>* noteWasMissedEvent;

  /// @brief Field noteWasCutEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_noteWasCutEvent, put = __set_noteWasCutEvent))::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* noteWasCutEvent;

  /// @brief Field noteDidStartJumpEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_noteDidStartJumpEvent, put = __set_noteDidStartJumpEvent))::System::Action_1<::GlobalNamespace::NoteController*>* noteDidStartJumpEvent;

  /// @brief Field obstacleWasAddedEvent, offset 0x40, size 0x8
  __declspec(property(
      get = __get_obstacleWasAddedEvent,
      put = __set_obstacleWasAddedEvent))::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* obstacleWasAddedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_obstacleWasSpawnedEvent, put = __set_obstacleWasSpawnedEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* obstacleWasSpawnedEvent;

  /// @brief Field obstacleWasDespawnedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_obstacleWasDespawnedEvent, put = __set_obstacleWasDespawnedEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* obstacleWasDespawnedEvent;

  /// @brief Field obstacleDidPassThreeQuartersOfMove2Event, offset 0x58, size 0x8
  __declspec(property(get = __get_obstacleDidPassThreeQuartersOfMove2Event,
                      put = __set_obstacleDidPassThreeQuartersOfMove2Event))::System::Action_1<::GlobalNamespace::ObstacleController*>* obstacleDidPassThreeQuartersOfMove2Event;

  /// @brief Field obstacleDidPassAvoidedMarkEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_obstacleDidPassAvoidedMarkEvent,
                      put = __set_obstacleDidPassAvoidedMarkEvent))::System::Action_1<::GlobalNamespace::ObstacleController*>* obstacleDidPassAvoidedMarkEvent;

  /// @brief Field sliderWasAddedEvent, offset 0x68, size 0x8
  __declspec(
      property(get = __get_sliderWasAddedEvent,
               put = __set_sliderWasAddedEvent))::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>* sliderWasAddedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_sliderWasSpawnedEvent, put = __set_sliderWasSpawnedEvent))::System::Action_1<::GlobalNamespace::SliderController*>* sliderWasSpawnedEvent;

  /// @brief Field sliderWasDespawnedEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_sliderWasDespawnedEvent, put = __set_sliderWasDespawnedEvent))::System::Action_1<::GlobalNamespace::SliderController*>* sliderWasDespawnedEvent;

  /// @brief Field didHideAllBeatmapObjectsEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_didHideAllBeatmapObjectsEvent, put = __set_didHideAllBeatmapObjectsEvent))::System::Action_1<bool>* didHideAllBeatmapObjectsEvent;

  /// @brief Field _allBeatmapObjects, offset 0x88, size 0x8
  __declspec(property(get = __get__allBeatmapObjects, put = __set__allBeatmapObjects))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* _allBeatmapObjects;

  /// @brief Field <spawnHidden>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __get__spawnHidden_k__BackingField, put = __set__spawnHidden_k__BackingField)) bool _spawnHidden_k__BackingField;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* activeObstacleControllers;

  __declspec(property(get = get_spawnHidden, put = set_spawnHidden)) bool spawnHidden;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawner"
  constexpr operator ::GlobalNamespace::IBeatmapObjectSpawner*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartJumpEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasCutEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteWasCutEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteWasMissedEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteWasMissedEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidDissolveEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidDissolveEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidFinishJumpEvent"
  constexpr operator ::GlobalNamespace::ISliderDidFinishJumpEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISliderDidDissolveEvent"
  constexpr operator ::GlobalNamespace::ISliderDidDissolveEvent*() noexcept;

  constexpr ::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>*& __get_noteWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>*> const&
  __get_noteWasAddedEvent() const;

  constexpr void __set_noteWasAddedEvent(::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteController*>*& __get_noteWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteController*>*> const& __get_noteWasSpawnedEvent() const;

  constexpr void __set_noteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteController*>*& __get_noteWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteController*>*> const& __get_noteWasDespawnedEvent() const;

  constexpr void __set_noteWasDespawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteController*>*& __get_noteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteController*>*> const& __get_noteWasMissedEvent() const;

  constexpr void __set_noteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  constexpr ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*& __get_noteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*> const& __get_noteWasCutEvent() const;

  constexpr void __set_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  constexpr ::System::Action_1<::GlobalNamespace::NoteController*>*& __get_noteDidStartJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteController*>*> const& __get_noteDidStartJumpEvent() const;

  constexpr void __set_noteDidStartJumpEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  constexpr ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>*& __get_obstacleWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>*> const&
  __get_obstacleWasAddedEvent() const;

  constexpr void __set_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_obstacleWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_obstacleWasSpawnedEvent() const;

  constexpr void __set_obstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_obstacleWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_obstacleWasDespawnedEvent() const;

  constexpr void __set_obstacleWasDespawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_obstacleDidPassThreeQuartersOfMove2Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_obstacleDidPassThreeQuartersOfMove2Event() const;

  constexpr void __set_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ObstacleController*>*& __get_obstacleDidPassAvoidedMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleController*>*> const& __get_obstacleDidPassAvoidedMarkEvent() const;

  constexpr void __set_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>*& __get_sliderWasAddedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>*> const&
  __get_sliderWasAddedEvent() const;

  constexpr void __set_sliderWasAddedEvent(::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::SliderController*>*& __get_sliderWasSpawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderController*>*> const& __get_sliderWasSpawnedEvent() const;

  constexpr void __set_sliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::SliderController*>*& __get_sliderWasDespawnedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderController*>*> const& __get_sliderWasDespawnedEvent() const;

  constexpr void __set_sliderWasDespawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  constexpr ::System::Action_1<bool>*& __get_didHideAllBeatmapObjectsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_didHideAllBeatmapObjectsEvent() const;

  constexpr void __set_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>*& __get__allBeatmapObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>*> const& __get__allBeatmapObjects() const;

  constexpr void __set__allBeatmapObjects(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* value);

  constexpr bool& __get__spawnHidden_k__BackingField();

  constexpr bool const& __get__spawnHidden_k__BackingField() const;

  constexpr void __set__spawnHidden_k__BackingField(bool value);

  /// @brief Method add_noteWasAddedEvent addr 0x237d06c size 0xb0 virtual false final false
  inline void add_noteWasAddedEvent(::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>* value);

  /// @brief Method remove_noteWasAddedEvent addr 0x237d11c size 0xb0 virtual false final false
  inline void remove_noteWasAddedEvent(::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>* value);

  /// @brief Method add_noteWasSpawnedEvent addr 0x2376f48 size 0xb0 virtual false final false
  inline void add_noteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method remove_noteWasSpawnedEvent addr 0x2377080 size 0xb0 virtual false final false
  inline void remove_noteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method add_noteWasDespawnedEvent addr 0x237d1cc size 0xb0 virtual false final false
  inline void add_noteWasDespawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method remove_noteWasDespawnedEvent addr 0x237d27c size 0xb0 virtual false final false
  inline void remove_noteWasDespawnedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method add_noteWasMissedEvent addr 0x237d32c size 0xb0 virtual false final false
  inline void add_noteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method remove_noteWasMissedEvent addr 0x237d3dc size 0xb0 virtual false final false
  inline void remove_noteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method add_noteWasCutEvent addr 0x237d48c size 0x9c virtual false final false
  inline void add_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  /// @brief Method remove_noteWasCutEvent addr 0x237d528 size 0x9c virtual false final false
  inline void remove_noteWasCutEvent(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* value);

  /// @brief Method add_noteDidStartJumpEvent addr 0x237d5c4 size 0xb0 virtual false final false
  inline void add_noteDidStartJumpEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method remove_noteDidStartJumpEvent addr 0x237d674 size 0xb0 virtual false final false
  inline void remove_noteDidStartJumpEvent(::System::Action_1<::GlobalNamespace::NoteController*>* value);

  /// @brief Method add_obstacleWasAddedEvent addr 0x237d724 size 0xb0 virtual false final false
  inline void add_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  /// @brief Method remove_obstacleWasAddedEvent addr 0x237d7d4 size 0xb0 virtual false final false
  inline void remove_obstacleWasAddedEvent(::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* value);

  /// @brief Method add_obstacleWasSpawnedEvent addr 0x237d884 size 0xb0 virtual false final false
  inline void add_obstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_obstacleWasSpawnedEvent addr 0x237d934 size 0xb0 virtual false final false
  inline void remove_obstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_obstacleWasDespawnedEvent addr 0x237d9e4 size 0xb0 virtual false final false
  inline void add_obstacleWasDespawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_obstacleWasDespawnedEvent addr 0x237da94 size 0xb0 virtual false final false
  inline void remove_obstacleWasDespawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_obstacleDidPassThreeQuartersOfMove2Event addr 0x237db44 size 0xb0 virtual false final false
  inline void add_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_obstacleDidPassThreeQuartersOfMove2Event addr 0x237dbf4 size 0xb0 virtual false final false
  inline void remove_obstacleDidPassThreeQuartersOfMove2Event(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_obstacleDidPassAvoidedMarkEvent addr 0x237c56c size 0xb0 virtual false final false
  inline void add_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method remove_obstacleDidPassAvoidedMarkEvent addr 0x237c808 size 0xb0 virtual false final false
  inline void remove_obstacleDidPassAvoidedMarkEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);

  /// @brief Method add_sliderWasAddedEvent addr 0x237dca4 size 0xb0 virtual false final false
  inline void add_sliderWasAddedEvent(::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>* value);

  /// @brief Method remove_sliderWasAddedEvent addr 0x237dd54 size 0xb0 virtual false final false
  inline void remove_sliderWasAddedEvent(::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>* value);

  /// @brief Method add_sliderWasSpawnedEvent addr 0x237de04 size 0xb0 virtual false final false
  inline void add_sliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  /// @brief Method remove_sliderWasSpawnedEvent addr 0x237deb4 size 0xb0 virtual false final false
  inline void remove_sliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  /// @brief Method add_sliderWasDespawnedEvent addr 0x237df64 size 0xb0 virtual false final false
  inline void add_sliderWasDespawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  /// @brief Method remove_sliderWasDespawnedEvent addr 0x237e014 size 0xb0 virtual false final false
  inline void remove_sliderWasDespawnedEvent(::System::Action_1<::GlobalNamespace::SliderController*>* value);

  /// @brief Method add_didHideAllBeatmapObjectsEvent addr 0x237e0c4 size 0xb0 virtual false final false
  inline void add_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_didHideAllBeatmapObjectsEvent addr 0x237e174 size 0xb0 virtual false final false
  inline void remove_didHideAllBeatmapObjectsEvent(::System::Action_1<bool>* value);

  /// @brief Method get_activeObstacleControllers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();

  /// @brief Method ProcessObstacleData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessNoteData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessSliderData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  /// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method get_spawnHidden addr 0x237e224 size 0x8 virtual false final false
  inline bool get_spawnHidden();

  /// @brief Method set_spawnHidden addr 0x237e22c size 0xc virtual false final false
  inline void set_spawnHidden(bool value);

  /// @brief Method AddSpawnedObstacleController addr 0x2378068 size 0x198 virtual false final false
  inline void AddSpawnedObstacleController(::GlobalNamespace::ObstacleController* obstacleController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData,
                                           float_t rotation);

  /// @brief Method AddSpawnedNoteController addr 0x2378900 size 0x1b8 virtual false final false
  inline void AddSpawnedNoteController(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation);

  /// @brief Method AddSpawnedSliderController addr 0x237978c size 0x1a0 virtual false final false
  inline void AddSpawnedSliderController(::GlobalNamespace::SliderController* sliderController, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation);

  /// @brief Method SetNoteControllerEventCallbacks addr 0x237e398 size 0x28c virtual false final false
  inline void SetNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController);

  /// @brief Method RemoveNoteControllerEventCallbacks addr 0x237e760 size 0x2a0 virtual false final false
  inline void RemoveNoteControllerEventCallbacks(::GlobalNamespace::NoteController* noteController);

  /// @brief Method SetSliderNoteControllerEventCallbacks addr 0x237e63c size 0x124 virtual false final false
  inline void SetSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method RemoveSliderNoteControllerEventCallbacks addr 0x237ea00 size 0x12c virtual false final false
  inline void RemoveSliderNoteControllerEventCallbacks(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method SetObstacleEventCallbacks addr 0x237e238 size 0x160 virtual false final false
  inline void SetObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method RemoveObstacleEventCallbacks addr 0x237eb2c size 0x160 virtual false final false
  inline void RemoveObstacleEventCallbacks(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method Despawn addr 0x237ec8c size 0xa4 virtual false final false
  inline void Despawn(::GlobalNamespace::NoteController* noteController);

  /// @brief Method Despawn addr 0x237ed30 size 0xa4 virtual false final false
  inline void Despawn(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method Despawn addr 0x237edd4 size 0xa4 virtual false final false
  inline void Despawn(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method HandleNoteControllerNoteDidStartJump addr 0x237ee78 size 0x1c virtual true final true
  inline void HandleNoteControllerNoteDidStartJump(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteWasMissed addr 0x237ee94 size 0x1c virtual true final true
  inline void HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteDidFinishJump addr 0x237eeb0 size 0x4 virtual true final true
  inline void HandleNoteControllerNoteDidFinishJump(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteDidDissolve addr 0x237eeb4 size 0x4 virtual true final true
  inline void HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteControllerNoteWasCut addr 0x237eeb8 size 0x40 virtual false final false
  inline void HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleObstaclePassedThreeQuartersOfMove2 addr 0x237eef8 size 0x1c virtual false final false
  inline void HandleObstaclePassedThreeQuartersOfMove2(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstaclePassedAvoidedMark addr 0x237ef14 size 0x1c virtual false final false
  inline void HandleObstaclePassedAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstacleFinishedMovement addr 0x237ef30 size 0x4 virtual false final false
  inline void HandleObstacleFinishedMovement(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstacleDidDissolve addr 0x237ef34 size 0x4 virtual false final false
  inline void HandleObstacleDidDissolve(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleSliderDidFinishJump addr 0x237ef38 size 0x4 virtual true final true
  inline void HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleSliderDidDissolve addr 0x237ef3c size 0x4 virtual true final true
  inline void HandleSliderDidDissolve(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method DissolveAllObjects addr 0x237ef40 size 0x1c4 virtual false final false
  inline void DissolveAllObjects();

  /// @brief Method HideAllBeatmapObjects addr 0x237f104 size 0x1f0 virtual false final false
  inline void HideAllBeatmapObjects(bool hide);

  /// @brief Method PauseAllBeatmapObjects addr 0x237f2f4 size 0x1b8 virtual false final false
  inline void PauseAllBeatmapObjects(bool pause);

  static inline ::GlobalNamespace::BeatmapObjectManager* New_ctor();

  /// @brief Method .ctor addr 0x23799cc size 0x7c virtual false final false
  inline void _ctor();

  /// @brief Method INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut addr 0x237f4ac size 0x4 virtual true final true
  inline void INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectManager(BeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectManager(BeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectManager();

public:
  /// @brief Field noteWasAddedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t>* ___noteWasAddedEvent;

  /// @brief Field noteWasSpawnedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteController*>* ___noteWasSpawnedEvent;

  /// @brief Field noteWasDespawnedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteController*>* ___noteWasDespawnedEvent;

  /// @brief Field noteWasMissedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteController*>* ___noteWasMissedEvent;

  /// @brief Field noteWasCutEvent, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate* ___noteWasCutEvent;

  /// @brief Field noteDidStartJumpEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::NoteController*>* ___noteDidStartJumpEvent;

  /// @brief Field obstacleWasAddedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t>* ___obstacleWasAddedEvent;

  /// @brief Field obstacleWasSpawnedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___obstacleWasSpawnedEvent;

  /// @brief Field obstacleWasDespawnedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___obstacleWasDespawnedEvent;

  /// @brief Field obstacleDidPassThreeQuartersOfMove2Event, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___obstacleDidPassThreeQuartersOfMove2Event;

  /// @brief Field obstacleDidPassAvoidedMarkEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ObstacleController*>* ___obstacleDidPassAvoidedMarkEvent;

  /// @brief Field sliderWasAddedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t>* ___sliderWasAddedEvent;

  /// @brief Field sliderWasSpawnedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SliderController*>* ___sliderWasSpawnedEvent;

  /// @brief Field sliderWasDespawnedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SliderController*>* ___sliderWasDespawnedEvent;

  /// @brief Field didHideAllBeatmapObjectsEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didHideAllBeatmapObjectsEvent;

  /// @brief Field _allBeatmapObjects, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatmapObjectController*>* ____allBeatmapObjects;

  /// @brief Field <spawnHidden>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____spawnHidden_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectManager, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectManager*, "", "BeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectManager__NoteWasCutDelegate*, "", "BeatmapObjectManager/NoteWasCutDelegate");
