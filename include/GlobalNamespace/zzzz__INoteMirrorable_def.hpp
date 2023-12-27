#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteMirrorable)
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteMirrorable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteMirrorable);
// Type: ::INoteMirrorable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4747))
// CS Name: ::INoteMirrorable*
class CORDL_TYPE INoteMirrorable {
public:
  // Declarations
  __declspec(property(get = get_noteTransform))::UnityEngine::Transform* noteTransform;

  __declspec(property(get = get_noteData))::GlobalNamespace::NoteData* noteData;

  __declspec(property(get = get_noteDidStartDissolvingEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;

  /// @brief Method get_noteTransform addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Transform* get_noteTransform();

  /// @brief Method get_noteData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::NoteData* get_noteData();

  /// @brief Method get_noteDidStartDissolvingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent();

  // Ctor Parameters [CppParam { name: "", ty: "INoteMirrorable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteMirrorable(INoteMirrorable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteMirrorable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteMirrorable(INoteMirrorable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteMirrorable*, "", "INoteMirrorable");
