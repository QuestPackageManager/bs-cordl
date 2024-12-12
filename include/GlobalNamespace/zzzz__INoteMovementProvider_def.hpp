#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteMovementProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteMovementProvider)
namespace GlobalNamespace {
class NoteMovement;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteMovementProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteMovementProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteMovementProvider
class CORDL_TYPE INoteMovementProvider {
public:
  // Declarations
  __declspec(property(get = get_noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> noteMovement;

  /// @brief Method get_noteMovement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::NoteMovement> get_noteMovement();

  // Ctor Parameters [CppParam { name: "", ty: "INoteMovementProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteMovementProvider(INoteMovementProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteMovementProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteMovementProvider*, "", "INoteMovementProvider");
