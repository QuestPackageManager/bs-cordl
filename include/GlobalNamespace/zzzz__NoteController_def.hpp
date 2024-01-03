#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteController)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class __NoteController___DissolveCoroutine_d__75;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __NoteController___DissolveCoroutine_d__75;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteController);
MARK_REF_PTR_T(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75);
// Type: ::<DissolveCoroutine>d__75
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4760))
// CS Name: ::NoteController::<DissolveCoroutine>d__75*
class CORDL_TYPE __NoteController___DissolveCoroutine_d__75 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::NoteController* __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::NoteController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::NoteController* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  static inline ::GlobalNamespace::__NoteController___DissolveCoroutine_d__75* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x23874b0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2387540, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2387544, size 0x3e8, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x238792c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2387934, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2387974, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__NoteController___DissolveCoroutine_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NoteController___DissolveCoroutine_d__75(__NoteController___DissolveCoroutine_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NoteController___DissolveCoroutine_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NoteController___DissolveCoroutine_d__75(__NoteController___DissolveCoroutine_d__75 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NoteController___DissolveCoroutine_d__75();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NoteController* _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteController___DissolveCoroutine_d__75, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75, ___duration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4770))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4761))
// CS Name: ::NoteController*
class CORDL_TYPE NoteController : public ::GlobalNamespace::NoteControllerBase {
public:
  // Declarations
  using _DissolveCoroutine_d__75 = ::GlobalNamespace::__NoteController___DissolveCoroutine_d__75;

  /// @brief Field _noteMovement, offset 0x18, size 0x8
  __declspec(property(get = __get__noteMovement, put = __set__noteMovement))::GlobalNamespace::NoteMovement* _noteMovement;

  /// @brief Field _noteTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__noteTransform, put = __set__noteTransform))::UnityEngine::Transform* _noteTransform;

  /// @brief Field <hidden>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__hidden_k__BackingField, put = __set__hidden_k__BackingField)) bool _hidden_k__BackingField;

  /// @brief Field _didInitEvent, offset 0x30, size 0x8
  __declspec(property(get = __get__didInitEvent, put = __set__didInitEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* _didInitEvent;

  /// @brief Field _noteDidStartJumpEvent, offset 0x38, size 0x8
  __declspec(property(get = __get__noteDidStartJumpEvent,
                      put = __set__noteDidStartJumpEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* _noteDidStartJumpEvent;

  /// @brief Field _noteDidFinishJumpEvent, offset 0x40, size 0x8
  __declspec(property(get = __get__noteDidFinishJumpEvent,
                      put = __set__noteDidFinishJumpEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* _noteDidFinishJumpEvent;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset 0x48, size 0x8
  __declspec(property(
      get = __get__noteDidPassJumpThreeQuartersEvent,
      put = __set__noteDidPassJumpThreeQuartersEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* _noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteWasCutEvent, offset 0x50, size 0x8
  __declspec(property(get = __get__noteWasCutEvent, put = __set__noteWasCutEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* _noteWasCutEvent;

  /// @brief Field _noteWasMissedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get__noteWasMissedEvent,
                      put = __set__noteWasMissedEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* _noteWasMissedEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset 0x60, size 0x8
  __declspec(property(get = __get__noteDidStartDissolvingEvent,
                      put = __set__noteDidStartDissolvingEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* _noteDidStartDissolvingEvent;

  /// @brief Field _noteDidDissolveEvent, offset 0x68, size 0x8
  __declspec(property(get = __get__noteDidDissolveEvent,
                      put = __set__noteDidDissolveEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* _noteDidDissolveEvent;

  /// @brief Field _noteData, offset 0x70, size 0x8
  __declspec(property(get = __get__noteData, put = __set__noteData))::GlobalNamespace::NoteData* _noteData;

  /// @brief Field _dissolving, offset 0x78, size 0x1
  __declspec(property(get = __get__dissolving, put = __set__dissolving)) bool _dissolving;

  /// @brief Field _uniformScale, offset 0x7c, size 0x4
  __declspec(property(get = __get__uniformScale, put = __set__uniformScale)) float_t _uniformScale;

  __declspec(property(get = get_didInitEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;

  __declspec(property(get = get_noteDidStartJumpEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* noteDidStartJumpEvent;

  __declspec(property(get = get_noteDidFinishJumpEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* noteDidFinishJumpEvent;

  __declspec(property(
      get = get_noteDidPassJumpThreeQuartersEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;

  __declspec(property(get = get_noteWasCutEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* noteWasCutEvent;

  __declspec(property(get = get_noteWasMissedEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* noteWasMissedEvent;

  __declspec(property(get = get_noteDidStartDissolvingEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  __declspec(property(get = get_noteDidDissolveEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* noteDidDissolveEvent;

  __declspec(property(get = get_noteTransform))::UnityEngine::Transform* noteTransform;

  __declspec(property(get = get_worldRotation))::UnityEngine::Quaternion worldRotation;

  __declspec(property(get = get_inverseWorldRotation))::UnityEngine::Quaternion inverseWorldRotation;

  __declspec(property(get = get_moveStartTime)) float_t moveStartTime;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpMoveVec))::UnityEngine::Vector3 jumpMoveVec;

  __declspec(property(get = get_beatPos))::UnityEngine::Vector3 beatPos;

  __declspec(property(get = get_jumpStartPos))::UnityEngine::Vector3 jumpStartPos;

  __declspec(property(get = get_noteData))::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_moveVec))::UnityEngine::Vector3 moveVec;

  __declspec(property(get = get_uniformScale)) float_t uniformScale;

  __declspec(property(get = get_hidden, put = set_hidden)) bool hidden;

  __declspec(property(get = get_dissolving)) bool dissolving;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  constexpr ::GlobalNamespace::NoteMovement*& __get__noteMovement();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> const& __get__noteMovement() const;

  constexpr void __set__noteMovement(::GlobalNamespace::NoteMovement* value);

  constexpr ::UnityEngine::Transform*& __get__noteTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__noteTransform() const;

  constexpr void __set__noteTransform(::UnityEngine::Transform* value);

  constexpr bool& __get__hidden_k__BackingField();

  constexpr bool const& __get__hidden_k__BackingField() const;

  constexpr void __set__hidden_k__BackingField(bool value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& __get__didInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*> const& __get__didInitEvent() const;

  constexpr void __set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>*& __get__noteDidStartJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>*> const& __get__noteDidStartJumpEvent() const;

  constexpr void __set__noteDidStartJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>*& __get__noteDidFinishJumpEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>*> const& __get__noteDidFinishJumpEvent() const;

  constexpr void __set__noteDidFinishJumpEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*& __get__noteDidPassJumpThreeQuartersEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*> const&
  __get__noteDidPassJumpThreeQuartersEvent() const;

  constexpr void __set__noteDidPassJumpThreeQuartersEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>*& __get__noteWasCutEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>*> const& __get__noteWasCutEvent() const;

  constexpr void __set__noteWasCutEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>*& __get__noteWasMissedEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>*> const& __get__noteWasMissedEvent() const;

  constexpr void __set__noteWasMissedEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& __get__noteDidStartDissolvingEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*> const&
  __get__noteDidStartDissolvingEvent() const;

  constexpr void __set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>*& __get__noteDidDissolveEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>*> const& __get__noteDidDissolveEvent() const;

  constexpr void __set__noteDidDissolveEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* value);

  constexpr ::GlobalNamespace::NoteData*& __get__noteData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteData*> const& __get__noteData() const;

  constexpr void __set__noteData(::GlobalNamespace::NoteData* value);

  constexpr bool& __get__dissolving();

  constexpr bool const& __get__dissolving() const;

  constexpr void __set__dissolving(bool value);

  constexpr float_t& __get__uniformScale();

  constexpr float_t const& __get__uniformScale() const;

  constexpr void __set__uniformScale(float_t value);

  /// @brief Method get_didInitEvent, addr 0x2386d04, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent();

  /// @brief Method get_noteDidStartJumpEvent, addr 0x2386d0c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* get_noteDidStartJumpEvent();

  /// @brief Method get_noteDidFinishJumpEvent, addr 0x2386d14, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* get_noteDidFinishJumpEvent();

  /// @brief Method get_noteDidPassJumpThreeQuartersEvent, addr 0x2386d1c, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent();

  /// @brief Method get_noteWasCutEvent, addr 0x2386d24, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* get_noteWasCutEvent();

  /// @brief Method get_noteWasMissedEvent, addr 0x2386d2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* get_noteWasMissedEvent();

  /// @brief Method get_noteDidStartDissolvingEvent, addr 0x2386d34, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  /// @brief Method get_noteDidDissolveEvent, addr 0x2386d3c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* get_noteDidDissolveEvent();

  /// @brief Method get_noteTransform, addr 0x2386d44, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Transform* get_noteTransform();

  /// @brief Method get_worldRotation, addr 0x237782c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_worldRotation();

  /// @brief Method get_inverseWorldRotation, addr 0x23839fc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inverseWorldRotation();

  /// @brief Method get_moveStartTime, addr 0x2377848, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_moveStartTime();

  /// @brief Method get_moveDuration, addr 0x2377864, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_moveDuration();

  /// @brief Method get_jumpDuration, addr 0x2377880, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpMoveVec, addr 0x2386d4c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpMoveVec();

  /// @brief Method get_beatPos, addr 0x2377810, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_beatPos();

  /// @brief Method get_jumpStartPos, addr 0x2386d68, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_jumpStartPos();

  /// @brief Method get_noteData, addr 0x2386d84, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_moveVec, addr 0x2386d8c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveVec();

  /// @brief Method get_uniformScale, addr 0x2386e00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_uniformScale();

  /// @brief Method get_hidden, addr 0x2386e08, size 0x8, virtual false, abstract: false, final false
  inline bool get_hidden();

  /// @brief Method set_hidden, addr 0x2386e10, size 0xc, virtual false, abstract: false, final false
  inline void set_hidden(bool value);

  /// @brief Method get_dissolving, addr 0x2386e1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_dissolving();

  /// @brief Method Awake, addr 0x2383104, size 0x18c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x238336c, size 0x1d8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x2386e24, size 0x10, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ManualUpdate, addr 0x2386e34, size 0x1c, virtual true, abstract: false, final false
  inline void ManualUpdate();

  /// @brief Method HandleNoteDidStartJump, addr 0x2386e50, size 0x1e0, virtual false, abstract: false, final false
  inline void HandleNoteDidStartJump();

  /// @brief Method HandleNoteDidFinishJump, addr 0x2387030, size 0x1e8, virtual false, abstract: false, final false
  inline void HandleNoteDidFinishJump();

  /// @brief Method HandleNoteDidPassJumpThreeQuarters, addr 0x2387218, size 0x1f0, virtual false, abstract: false, final false
  inline void HandleNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement);

  /// @brief Method HandleNoteDidPassMissedMarkerEvent, addr 0x2387408, size 0x1c, virtual false, abstract: false, final false
  inline void HandleNoteDidPassMissedMarkerEvent();

  /// @brief Method NoteDidStartJump, addr 0x2387424, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidStartJump();

  /// @brief Method NoteDidFinishJump, addr 0x2387428, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidFinishJump();

  /// @brief Method NoteDidPassJumpThreeQuarters, addr 0x238742c, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteMovement* noteMovement);

  /// @brief Method NoteDidPassMissedMarker, addr 0x2387430, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving, addr 0x2387434, size 0x4, virtual true, abstract: false, final false
  inline void NoteDidStartDissolving();

  /// @brief Method SendNoteWasMissedEvent, addr 0x2383574, size 0x1cc, virtual false, abstract: false, final false
  inline void SendNoteWasMissedEvent();

  /// @brief Method SendNoteWasCutEvent, addr 0x2383a18, size 0x1dc, virtual false, abstract: false, final false
  inline void SendNoteWasCutEvent(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method Init, addr 0x2382cb0, size 0x358, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, float_t endRotation, float_t uniformScale, bool rotateTowardsPlayer, bool useRandomRotation);

  /// @brief Method DissolveCoroutine, addr 0x2387438, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method Dissolve, addr 0x23874d8, size 0x60, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method HiddenStateDidChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HiddenStateDidChange(bool hidden);

  /// @brief Method Hide, addr 0x237e624, size 0x18, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::NoteController* New_ctor();

  /// @brief Method .ctor, addr 0x2383c50, size 0x258, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteController(NoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteController(NoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteController();

public:
  /// @brief Field _noteMovement, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::NoteMovement* ____noteMovement;

  /// @brief Field _noteTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____noteTransform;

  /// @brief Field <hidden>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____hidden_k__BackingField;

  /// @brief Field _didInitEvent, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* ____didInitEvent;

  /// @brief Field _noteDidStartJumpEvent, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*>* ____noteDidStartJumpEvent;

  /// @brief Field _noteDidFinishJumpEvent, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidFinishJumpEvent*>* ____noteDidFinishJumpEvent;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* ____noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteWasCutEvent, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasCutEvent*>* ____noteWasCutEvent;

  /// @brief Field _noteWasMissedEvent, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteWasMissedEvent*>* ____noteWasMissedEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* ____noteDidStartDissolvingEvent;

  /// @brief Field _noteDidDissolveEvent, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidDissolveEvent*>* ____noteDidDissolveEvent;

  /// @brief Field _noteData, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::NoteData* ____noteData;

  /// @brief Field _dissolving, offset: 0x78, size: 0x1, def value: None
  bool ____dissolving;

  /// @brief Field _uniformScale, offset: 0x7c, size: 0x4, def value: None
  float_t ____uniformScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteMovement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____hidden_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____didInitEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidStartJumpEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidFinishJumpEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidPassJumpThreeQuartersEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteWasCutEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteWasMissedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidStartDissolvingEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteDidDissolveEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____noteData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____dissolving) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteController, ____uniformScale) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteController*, "", "NoteController");
NEED_NO_BOX(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteController___DissolveCoroutine_d__75*, "", "NoteController/<DissolveCoroutine>d__75");
