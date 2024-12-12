#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionFadingExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneTransitionFadingExtensions)
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneTransitionFadingExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneTransitionFadingExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneTransitionFadingExtensions
class CORDL_TYPE SceneTransitionFadingExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldFadeOnSceneTransition, addr 0x4084654, size 0x10, virtual false, abstract: false, final false
  static inline bool ShouldFadeOnSceneTransition(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneTransitionFadingExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneTransitionFadingExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneTransitionFadingExtensions(SceneTransitionFadingExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneTransitionFadingExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneTransitionFadingExtensions(SceneTransitionFadingExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneTransitionFadingExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneTransitionFadingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneTransitionFadingExtensions*, "", "SceneTransitionFadingExtensions");
