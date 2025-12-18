#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteController)
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
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
class INoteMirrorable;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteController__DissolveCoroutine_d__69;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteController__DissolveCoroutine_d__69;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteController);
MARK_REF_PTR_T(::GlobalNamespace::NoteController__DissolveCoroutine_d__69);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteController/<DissolveCoroutine>d__69
class CORDL_TYPE NoteController__DissolveCoroutine_d__69 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::NoteController> __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57286d4, size 0x36c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::NoteController__DissolveCoroutine_d__69* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5728a40, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5728a48, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5728a80, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57286d0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::NoteController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::NoteController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NoteController> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x572866c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteController__DissolveCoroutine_d__69();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteController__DissolveCoroutine_d__69", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteController__DissolveCoroutine_d__69(NoteController__DissolveCoroutine_d__69&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteController__DissolveCoroutine_d__69", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteController__DissolveCoroutine_d__69(NoteController__DissolveCoroutine_d__69 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5679 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteController> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteController__DissolveCoroutine_d__69, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController__DissolveCoroutine_d__69, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController__DissolveCoroutine_d__69, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController__DissolveCoroutine_d__69, ___duration) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteController__DissolveCoroutine_d__69, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies NoteControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteController
class CORDL_TYPE NoteController : public ::GlobalNamespace::NoteControllerBase {
public:
  // Declarations
  using _DissolveCoroutine_d__69 = ::GlobalNamespace::NoteController__DissolveCoroutine_d__69;

  /// @brief Field _didInitEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__didInitEvent,
                      put = __cordl_internal_set__didInitEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* _didInitEvent;

  /// @brief Field _dissolving, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__dissolving, put = __cordl_internal_set__dissolving)) bool _dissolving;

  /// @brief Field <hidden>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__hidden_k__BackingField, put = __cordl_internal_set__hidden_k__BackingField)) bool _hidden_k__BackingField;

  /// @brief Field _noteData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__noteData, put = __cordl_internal_set__noteData)) ::GlobalNamespace::NoteData* _noteData;

  /// @brief Field _noteDidDissolveEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDidDissolveEvent,
                      put = __cordl_internal_set__noteDidDissolveEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* _noteDidDissolveEvent;

  /// @brief Field _noteDidFinishJumpEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDidFinishJumpEvent,
                      put = __cordl_internal_set__noteDidFinishJumpEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* _noteDidFinishJumpEvent;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDidPassJumpThreeQuartersEvent,
                      put = __cordl_internal_set__noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*
      _noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__noteDidStartDissolvingEvent,
      put = __cordl_internal_set__noteDidStartDissolvingEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* _noteDidStartDissolvingEvent;

  /// @brief Field _noteDidStartJumpEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDidStartJumpEvent,
                      put = __cordl_internal_set__noteDidStartJumpEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* _noteDidStartJumpEvent;

  /// @brief Field _noteMovement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__noteMovement, put = __cordl_internal_set__noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> _noteMovement;

  /// @brief Field _noteTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noteTransform, put = __cordl_internal_set__noteTransform)) ::UnityW<::UnityEngine::Transform> _noteTransform;

  /// @brief Field _noteWasCutEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasCutEvent,
                      put = __cordl_internal_set__noteWasCutEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* _noteWasCutEvent;

  /// @brief Field _noteWasMissedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__noteWasMissedEvent,
                      put = __cordl_internal_set__noteWasMissedEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* _noteWasMissedEvent;

  /// @brief Field _uniformScale, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__uniformScale, put = __cordl_internal_set__uniformScale)) float_t _uniformScale;

  __declspec(property(get = get_beatPos)) ::UnityEngine::Vector3 beatPos;

  __declspec(property(get = get_didInitEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;

  __declspec(property(get = get_dissolving)) bool dissolving;

  __declspec(property(get = get_hidden, put = set_hidden)) bool hidden;

  __declspec(property(get = get_inverseWorldRotation)) ::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_jumpStartPos)) ::UnityEngine::Vector3 jumpStartPos;

  __declspec(property(get = get_moveVec)) ::UnityEngine::Vector3 moveVec;

  __declspec(property(get = get_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_noteDidDissolveEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* noteDidDissolveEvent;

  __declspec(property(get = get_noteDidFinishJumpEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* noteDidFinishJumpEvent;

  __declspec(property(
      get = get_noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;

  __declspec(property(get = get_noteDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  __declspec(property(get = get_noteDidStartJumpEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* noteDidStartJumpEvent;

  __declspec(property(get = get_noteTime)) float_t noteTime;

  __declspec(property(get = get_noteTransform)) ::UnityW<::UnityEngine::Transform> noteTransform;

  __declspec(property(get = get_noteWasCutEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* noteWasCutEvent;

  __declspec(property(get = get_noteWasMissedEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* noteWasMissedEvent;

  __declspec(property(get = get_uniformScale)) float_t uniformScale;

  __declspec(property(get = get_worldRotation)) ::UnityEngine::Quaternion worldRotation;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Method Awake, addr 0x5723114, size 0x1e4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Dissolve, addr 0x5728674, size 0x58, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method DissolveCoroutine, addr 0x5728608, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method HandleNoteDidFinishJump, addr 0x57280d0, size 0x1bc, virtual false, abstract: false, final false
  inline void HandleNoteDidFinishJump();

  /// @brief Method HandleNoteDidPassJumpThreeQuarters, addr 0x572828c, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement);

  /// @brief Method HandleNoteDidPassMissedMarkerEvent, addr 0x5728450, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteDidPassMissedMarkerEvent();

  /// @brief Method HandleNoteDidStartJump, addr 0x5727f1c, size 0x1b4, virtual false, abstract: false, final false
  inline void HandleNoteDidStartJump();

  /// @brief Method HiddenStateDidChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HiddenStateDidChange(bool hidden);

  /// @brief Method Hide, addr 0x571c498, size 0x14, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Init, addr 0x5722d7c, size 0x26c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, float_t endRotation, float_t uniformScale, bool rotateTowardsPlayer,
                   bool useRandomRotation);

  /// @brief Method ManualUpdate, addr 0x5724bdc, size 0x14, virtual true, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::NoteController* New_ctor();

  /// @brief Method NoteDidFinishJump, addr 0x5728470, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidFinishJump();

  /// @brief Method NoteDidPassJumpThreeQuarters, addr 0x5728474, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement);

  /// @brief Method NoteDidPassMissedMarker, addr 0x5728478, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x572847c, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method NoteDidStartJump, addr 0x572846c, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidStartJump();

  /// @brief Method OnDestroy, addr 0x5723488, size 0x260, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Pause, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  /// @brief Method SendNoteWasCutEvent, addr 0x5723b80, size 0x1a8, virtual false, abstract: false, final false
  inline void SendNoteWasCutEvent(::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method SendNoteWasMissedEvent, addr 0x5723718, size 0x1a0, virtual false, abstract: false, final false
  inline void SendNoteWasMissedEvent();

  /// @brief Method Update, addr 0x5727e20, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* const& __cordl_internal_get__didInitEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& __cordl_internal_get__didInitEvent();

  constexpr bool const& __cordl_internal_get__dissolving() const;

  constexpr bool& __cordl_internal_get__dissolving();

  constexpr bool const& __cordl_internal_get__hidden_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hidden_k__BackingField();

  constexpr ::GlobalNamespace::NoteData* const& __cordl_internal_get__noteData() const;

  constexpr ::GlobalNamespace::NoteData*& __cordl_internal_get__noteData();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* const& __cordl_internal_get__noteDidDissolveEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>*& __cordl_internal_get__noteDidDissolveEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* const& __cordl_internal_get__noteDidFinishJumpEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>*& __cordl_internal_get__noteDidFinishJumpEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* const& __cordl_internal_get__noteDidPassJumpThreeQuartersEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*& __cordl_internal_get__noteDidPassJumpThreeQuartersEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* const& __cordl_internal_get__noteDidStartDissolvingEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& __cordl_internal_get__noteDidStartDissolvingEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* const& __cordl_internal_get__noteDidStartJumpEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>*& __cordl_internal_get__noteDidStartJumpEvent();

  constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& __cordl_internal_get__noteMovement() const;

  constexpr ::UnityW<::GlobalNamespace::NoteMovement>& __cordl_internal_get__noteMovement();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__noteTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__noteTransform();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* const& __cordl_internal_get__noteWasCutEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>*& __cordl_internal_get__noteWasCutEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* const& __cordl_internal_get__noteWasMissedEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>*& __cordl_internal_get__noteWasMissedEvent();

  constexpr float_t const& __cordl_internal_get__uniformScale() const;

  constexpr float_t& __cordl_internal_get__uniformScale();

  constexpr void __cordl_internal_set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value);

  constexpr void __cordl_internal_set__dissolving(bool value);

  constexpr void __cordl_internal_set__hidden_k__BackingField(bool value);

  constexpr void __cordl_internal_set__noteData(::GlobalNamespace::NoteData* value);

  constexpr void __cordl_internal_set__noteDidDissolveEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* value);

  constexpr void __cordl_internal_set__noteDidFinishJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* value);

  constexpr void __cordl_internal_set__noteDidPassJumpThreeQuartersEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value);

  constexpr void __cordl_internal_set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value);

  constexpr void __cordl_internal_set__noteDidStartJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* value);

  constexpr void __cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value);

  constexpr void __cordl_internal_set__noteTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__noteWasCutEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* value);

  constexpr void __cordl_internal_set__noteWasMissedEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* value);

  constexpr void __cordl_internal_set__uniformScale(float_t value);

  /// @brief Method .ctor, addr 0x5723d7c, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_beatPos, addr 0x5727744, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_didInitEvent, addr 0x5727688, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent();

  /// @brief Method get_dissolving, addr 0x5727890, size 0x8, virtual false, abstract: false, final false
  inline bool get_dissolving();

  /// @brief Method get_hidden, addr 0x5727880, size 0x8, virtual false, abstract: false, final false
  inline bool get_hidden();

  /// @brief Method get_inverseWorldRotation, addr 0x5723b58, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_jumpStartPos, addr 0x5727798, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpStartPos();

  /// @brief Method get_moveVec, addr 0x57277d4, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveVec();

  /// @brief Method get_noteData, addr 0x57277cc, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_noteDidDissolveEvent, addr 0x57276c0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* get_noteDidDissolveEvent();

  /// @brief Method get_noteDidFinishJumpEvent, addr 0x5727698, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* get_noteDidFinishJumpEvent();

  /// @brief Method get_noteDidPassJumpThreeQuartersEvent, addr 0x57276a0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent();

  /// @brief Method get_noteDidStartDissolvingEvent, addr 0x57276b8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  /// @brief Method get_noteDidStartJumpEvent, addr 0x5727690, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* get_noteDidStartJumpEvent();

  /// @brief Method get_noteTime, addr 0x5727708, size 0x24, virtual false, abstract: false, final false
  inline float_t get_noteTime();

  /// @brief Method get_noteTransform, addr 0x57276c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> get_noteTransform();

  /// @brief Method get_noteWasCutEvent, addr 0x57276a8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* get_noteWasCutEvent();

  /// @brief Method get_noteWasMissedEvent, addr 0x57276b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* get_noteWasMissedEvent();

  /// @brief Method get_uniformScale, addr 0x5727878, size 0x8, virtual false, abstract: false, final false
  inline float_t get_uniformScale();

  /// @brief Method get_worldRotation, addr 0x5723b30, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
  constexpr ::GlobalNamespace::IBeatmapObjectController* i___GlobalNamespace__IBeatmapObjectController() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  /// @brief Method set_hidden, addr 0x5727888, size 0x8, virtual false, abstract: false, final false
  inline void set_hidden(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteController(NoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteController(NoteController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5680 };

  /// @brief Field _noteMovement, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteMovement> ____noteMovement;

  /// @brief Field _noteTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____noteTransform;

  /// @brief Field <hidden>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____hidden_k__BackingField;

  /// @brief Field _didInitEvent, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* ____didInitEvent;

  /// @brief Field _noteDidStartJumpEvent, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* ____noteDidStartJumpEvent;

  /// @brief Field _noteDidFinishJumpEvent, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* ____noteDidFinishJumpEvent;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* ____noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteWasCutEvent, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* ____noteWasCutEvent;

  /// @brief Field _noteWasMissedEvent, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* ____noteWasMissedEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* ____noteDidStartDissolvingEvent;

  /// @brief Field _noteDidDissolveEvent, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* ____noteDidDissolveEvent;

  /// @brief Field _noteData, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::NoteData* ____noteData;

  /// @brief Field _dissolving, offset: 0x80, size: 0x1, def value: None
  bool ____dissolving;

  /// @brief Field _uniformScale, offset: 0x84, size: 0x4, def value: None
  float_t ____uniformScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteController, ____noteMovement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____hidden_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____didInitEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidStartJumpEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidFinishJumpEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidPassJumpThreeQuartersEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteWasCutEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteWasMissedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidStartDissolvingEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidDissolveEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____dissolving) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____uniformScale) == 0x84, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteController*, "", "NoteController");
NEED_NO_BOX(::GlobalNamespace::NoteController__DissolveCoroutine_d__69);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteController__DissolveCoroutine_d__69*, "", "NoteController/<DissolveCoroutine>d__69");
