#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteMirrorable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteMirrorable)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteMirrorable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteMirrorable);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteMirrorable
class CORDL_TYPE INoteMirrorable {
public:
  // Declarations
  __declspec(property(get = get_noteData)) ::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_noteDidStartDissolvingEvent)) ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  __declspec(property(get = get_noteTransform)) ::UnityW<::UnityEngine::Transform> noteTransform;

  /// @brief Method get_noteData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_noteDidStartDissolvingEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  /// @brief Method get_noteTransform, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_noteTransform();

  // Ctor Parameters [CppParam { name: "", ty: "INoteMirrorable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteMirrorable(INoteMirrorable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteMirrorable*, "", "INoteMirrorable");
