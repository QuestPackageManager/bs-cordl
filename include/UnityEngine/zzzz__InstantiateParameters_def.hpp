#pragma once
// IWYU pragma private; include "UnityEngine/InstantiateParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstantiateParameters)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
struct InstantiateParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InstantiateParameters);
// Dependencies UnityEngine.SceneManagement.Scene
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.InstantiateParameters
struct CORDL_TYPE InstantiateParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstantiateParameters();

  // Ctor Parameters [CppParam { name: "parent", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "scene", ty: "::UnityEngine::SceneManagement::Scene",
  // modifiers: "", def_value: None }, CppParam { name: "worldSpace", ty: "bool", modifiers: "", def_value: None }]
  constexpr InstantiateParameters(::UnityW<::UnityEngine::Transform> parent, ::UnityEngine::SceneManagement::Scene scene, bool worldSpace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field parent, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> parent;

  /// @brief Field scene, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene scene;

  /// @brief Field worldSpace, offset: 0xc, size: 0x1, def value: None
  bool worldSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InstantiateParameters, parent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InstantiateParameters, scene) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InstantiateParameters, worldSpace) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InstantiateParameters, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InstantiateParameters, "UnityEngine", "InstantiateParameters");
