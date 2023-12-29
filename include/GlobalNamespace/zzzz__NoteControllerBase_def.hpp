#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteControllerBase)
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
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
// Type: ::NoteControllerBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4891))
// CS Name: ::NoteControllerBase*
class CORDL_TYPE NoteControllerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_didInitEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;

  __declspec(property(
      get = get_noteDidPassJumpThreeQuartersEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;

  __declspec(property(get = get_noteDidStartDissolvingEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  __declspec(property(get = get_noteData))::GlobalNamespace::NoteData* noteData;

  /// @brief Method get_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent();

  /// @brief Method get_noteDidPassJumpThreeQuartersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent();

  /// @brief Method get_noteDidStartDissolvingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  /// @brief Method get_noteData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  static inline ::GlobalNamespace::NoteControllerBase* New_ctor();

  /// @brief Method .ctor addr 0x2253a2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteControllerBase(NoteControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteControllerBase(NoteControllerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteControllerBase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteControllerBase, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteControllerBase*, "", "NoteControllerBase");
