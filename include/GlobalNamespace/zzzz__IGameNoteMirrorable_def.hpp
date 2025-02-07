#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameNoteMirrorable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
CORDL_MODULE_EXPORT(IGameNoteMirrorable)
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGameNoteMirrorable);
// Dependencies INoteMirrorable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameNoteMirrorable
class CORDL_TYPE IGameNoteMirrorable {
public:
  // Declarations
  __declspec(property(get = get_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  /// @brief Method get_gameplayType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteData_GameplayType get_gameplayType();

  /// @brief Method get_noteMovement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  /// @brief Method get_noteVisualModifierType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Convert to "::GlobalNamespace::INoteMirrorable"
  constexpr ::GlobalNamespace::INoteMirrorable* i___GlobalNamespace__INoteMirrorable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGameNoteMirrorable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameNoteMirrorable(IGameNoteMirrorable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGameNoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameNoteMirrorable*, "", "IGameNoteMirrorable");
