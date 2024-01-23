#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameNoteMirrorable)
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGameNoteMirrorable);
// Type: ::IGameNoteMirrorable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4746))
// CS Name: ::IGameNoteMirrorable*
class CORDL_TYPE IGameNoteMirrorable {
public:
  // Declarations
  __declspec(property(get = get_noteMovement))::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  /// @brief Method get_noteMovement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Method get_gameplayType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  // Ctor Parameters [CppParam { name: "", ty: "IGameNoteMirrorable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameNoteMirrorable(IGameNoteMirrorable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameNoteMirrorable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameNoteMirrorable(IGameNoteMirrorable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGameNoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameNoteMirrorable*, "", "IGameNoteMirrorable");
