#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsSceneExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhysicsSceneExtensions)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct PhysicsScene;
}
// Forward declare root types
namespace UnityEngine {
class PhysicsSceneExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PhysicsSceneExtensions);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PhysicsSceneExtensions
class CORDL_TYPE PhysicsSceneExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPhysicsScene, addr 0x4913fa4, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene GetPhysicsScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetPhysicsScene_Internal, addr 0x49140a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene GetPhysicsScene_Internal(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetPhysicsScene_Internal_Injected, addr 0x49140f0, size 0x44, virtual false, abstract: false, final false
  static inline void GetPhysicsScene_Internal_Injected(::ByRef<::UnityEngine::SceneManagement::Scene> scene, ::ByRef<::UnityEngine::PhysicsScene> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsSceneExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsSceneExtensions(PhysicsSceneExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsSceneExtensions(PhysicsSceneExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsSceneExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PhysicsSceneExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsSceneExtensions*, "UnityEngine", "PhysicsSceneExtensions");
