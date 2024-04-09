#pragma once
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
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneInstance
// SizeInfo { instance_size: 16, native_size: 24, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::SceneInstance
struct CORDL_TYPE SceneInstance {
public:
  // Declarations
  __declspec(property(get = get_Scene, put = set_Scene))::UnityEngine::SceneManagement::Scene Scene;

  /// @brief Method Activate, addr 0x3100d40, size 0x20, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method ActivateAsync, addr 0x3100d60, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* ActivateAsync();

  /// @brief Method Equals, addr 0x3100dac, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3100d8c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_Scene, addr 0x3100d30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::SceneManagement::Scene get_Scene();

  /// @brief Method set_Scene, addr 0x3100d38, size 0x8, virtual false, abstract: false, final false
  inline void set_Scene(::UnityEngine::SceneManagement::Scene value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneInstance();

  // Ctor Parameters [CppParam { name: "m_Scene", ty: "::UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "m_Operation", ty: "::UnityEngine::AsyncOperation*",
  // modifiers: "", def_value: None }]
  constexpr SceneInstance(::UnityEngine::SceneManagement::Scene m_Scene, ::UnityEngine::AsyncOperation* m_Operation) noexcept;

  /// @brief Field m_Scene, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::SceneManagement::Scene m_Scene;

  /// @brief Field m_Operation, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* m_Operation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, m_Scene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, m_Operation) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, "UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance");
