#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredNoteController_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MirroredNoteController_1)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class MirroredNoteController_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::MirroredNoteController_1);
// Dependencies NoteControllerBase
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: MirroredNoteController`1<T>
class CORDL_TYPE MirroredNoteController_1 : public ::GlobalNamespace::NoteControllerBase {
public:
  // Declarations
  /// @brief Field _didInitEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__didInitEvent,
                      put = __cordl_internal_set__didInitEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* _didInitEvent;

  /// @brief Field _followedNoteTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__followedNoteTransform, put = __cordl_internal_set__followedNoteTransform)) ::UnityW<::UnityEngine::Transform> _followedNoteTransform;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDidPassJumpThreeQuartersEvent,
                      put = __cordl_internal_set__noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*
      _noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__noteDidStartDissolvingEvent,
      put = __cordl_internal_set__noteDidStartDissolvingEvent)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* _noteDidStartDissolvingEvent;

  /// @brief Field _noteTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__noteTransform, put = __cordl_internal_set__noteTransform)) ::UnityW<::UnityEngine::Transform> _noteTransform;

  __declspec(property(get = get_didInitEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;

  /// @brief Field followedNote, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_followedNote, put = __cordl_internal_set_followedNote)) T followedNote;

  __declspec(property(get = get_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(
      get = get_noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;

  __declspec(property(get = get_noteDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept;

  /// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);

  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  /// @brief Method Hide, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Hide(bool hide);

  /// @brief Method Mirror, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Mirror(T noteController);

  static inline ::GlobalNamespace::MirroredNoteController_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RemoveListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveListeners();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePositionAndRotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdatePositionAndRotation();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* const& __cordl_internal_get__didInitEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& __cordl_internal_get__didInitEvent();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followedNoteTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followedNoteTransform();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* const& __cordl_internal_get__noteDidPassJumpThreeQuartersEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*& __cordl_internal_get__noteDidPassJumpThreeQuartersEvent();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* const& __cordl_internal_get__noteDidStartDissolvingEvent() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& __cordl_internal_get__noteDidStartDissolvingEvent();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__noteTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__noteTransform();

  constexpr T const& __cordl_internal_get_followedNote() const;

  constexpr T& __cordl_internal_get_followedNote();

  constexpr void __cordl_internal_set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value);

  constexpr void __cordl_internal_set__followedNoteTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__noteDidPassJumpThreeQuartersEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value);

  constexpr void __cordl_internal_set__noteDidStartDissolvingEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value);

  constexpr void __cordl_internal_set__noteTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_followedNote(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_didInitEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent();

  /// @brief Method get_noteData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_noteDidPassJumpThreeQuartersEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent();

  /// @brief Method get_noteDidStartDissolvingEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent* i___GlobalNamespace__INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
  constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredNoteController_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredNoteController_1(MirroredNoteController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredNoteController_1(MirroredNoteController_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5675 };

  /// @brief Field _noteTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____noteTransform;

  /// @brief Field followedNote, offset: 0x28, size: 0x8, def value: None
  T ___followedNote;

  /// @brief Field _followedNoteTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____followedNoteTransform;

  /// @brief Field _didInitEvent, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* ____didInitEvent;

  /// @brief Field _noteDidPassJumpThreeQuartersEvent, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* ____noteDidPassJumpThreeQuartersEvent;

  /// @brief Field _noteDidStartDissolvingEvent, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* ____noteDidStartDissolvingEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MirroredNoteController_1, "", "MirroredNoteController`1");
