#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneInstance)
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance);
// Dependencies UnityEngine.SceneManagement.Scene
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct CORDL_TYPE SceneInstance {
public:
  // Declarations
  __declspec(property(get = get_ReleaseSceneOnSceneUnloaded, put = set_ReleaseSceneOnSceneUnloaded)) bool ReleaseSceneOnSceneUnloaded;

  __declspec(property(get = get_Scene, put = set_Scene)) ::UnityEngine::SceneManagement::Scene Scene;

  /// @brief Method ActivateAsync, addr 0x6767b08, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* ActivateAsync();

  /// @brief Method Equals, addr 0x6767b3c, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x6767b34, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_ReleaseSceneOnSceneUnloaded, addr 0x6767af8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReleaseSceneOnSceneUnloaded();

  /// @brief Method get_Scene, addr 0x6767ae8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_Scene();

  /// @brief Method set_ReleaseSceneOnSceneUnloaded, addr 0x6767b00, size 0x8, virtual false, abstract: false, final false
  inline void set_ReleaseSceneOnSceneUnloaded(bool value);

  /// @brief Method set_Scene, addr 0x6767af0, size 0x8, virtual false, abstract: false, final false
  inline void set_Scene(::UnityEngine::SceneManagement::Scene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneInstance();

  // Ctor Parameters [CppParam { name: "m_Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "m_ReleaseOnSceneUnloaded", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_Operation", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }]
  constexpr SceneInstance(::UnityEngine::SceneManagement::Scene m_Scene, bool m_ReleaseOnSceneUnloaded, ::UnityEngine::AsyncOperation* m_Operation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18749 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Scene, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene m_Scene;

  /// @brief Field m_ReleaseOnSceneUnloaded, offset: 0x4, size: 0x1, def value: None
  bool m_ReleaseOnSceneUnloaded;

  /// @brief Field m_Operation, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* m_Operation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, m_Scene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, m_ReleaseOnSceneUnloaded) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, m_Operation) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, "UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance");
