#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/LoadSceneParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoadSceneParameters)
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::LoadSceneParameters);
// Dependencies UnityEngine.SceneManagement.LoadSceneMode, UnityEngine.SceneManagement.LocalPhysicsMode
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.LoadSceneParameters
struct CORDL_TYPE LoadSceneParameters {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6935dc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::SceneManagement::LoadSceneMode mode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadSceneParameters();

  // Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: None }, CppParam { name: "m_LocalPhysicsMode", ty:
  // "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: None }]
  constexpr LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_LoadSceneMode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode;

  /// @brief Field m_LocalPhysicsMode, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::LoadSceneParameters, m_LoadSceneMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SceneManagement::LoadSceneParameters, m_LocalPhysicsMode) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::LoadSceneParameters, 0x8>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");
