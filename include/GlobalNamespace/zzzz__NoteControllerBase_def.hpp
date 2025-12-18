#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteControllerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteControllerBase)
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
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteControllerBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteControllerBase);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteControllerBase
class CORDL_TYPE NoteControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_didInitEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;

  __declspec(property(get = get_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(
      get = get_noteDidPassJumpThreeQuartersEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;

  __declspec(property(get = get_noteDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  static inline ::GlobalNamespace::NoteControllerBase* New_ctor();

  /// @brief Method .ctor, addr 0x57286cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_didInitEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent();

  /// @brief Method get_noteData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_noteDidPassJumpThreeQuartersEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent();

  /// @brief Method get_noteDidStartDissolvingEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteControllerBase(NoteControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteControllerBase(NoteControllerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteControllerBase, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteControllerBase*, "", "NoteControllerBase");
