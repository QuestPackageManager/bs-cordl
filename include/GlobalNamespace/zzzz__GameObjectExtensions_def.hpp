#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameObjectExtensions)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameObjectExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameObjectExtensions*, "", "GameObjectExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameObjectExtensions
class CORDL_TYPE GameObjectExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method ActivateSafe, addr 0x35adba0, size 0x38, virtual false, abstract: false, final false
  static inline void ActivateSafe(::UnityEngine::GameObject* gameObject);

  /// [Extension]
  /// @brief Method DeactivateSafe, addr 0x35adbd8, size 0x38, virtual false, abstract: false, final false
  static inline void DeactivateSafe(::UnityEngine::GameObject* gameObject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectExtensions(GameObjectExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectExtensions(GameObjectExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameObjectExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
