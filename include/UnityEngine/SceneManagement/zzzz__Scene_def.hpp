#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scene)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::Scene);
// Type: UnityEngine.SceneManagement::Scene
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10302))
// CS Name: ::UnityEngine.SceneManagement::Scene
struct CORDL_TYPE Scene {
public:
  // Declarations
  __declspec(property(get = get_handle)) int32_t handle;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_isLoaded)) bool isLoaded;

  __declspec(property(get = get_rootCount)) int32_t rootCount;

  /// @brief Method IsValidInternal addr 0x2b891a8 size 0x3c virtual false final false
  static inline bool IsValidInternal(int32_t sceneHandle);

  /// @brief Method GetNameInternal addr 0x2b891e4 size 0x3c virtual false final false
  static inline ::StringW GetNameInternal(int32_t sceneHandle);

  /// @brief Method GetIsLoadedInternal addr 0x2b89220 size 0x3c virtual false final false
  static inline bool GetIsLoadedInternal(int32_t sceneHandle);

  /// @brief Method GetRootCountInternal addr 0x2b8925c size 0x3c virtual false final false
  static inline int32_t GetRootCountInternal(int32_t sceneHandle);

  /// @brief Method GetRootGameObjectsInternal addr 0x2b89298 size 0x44 virtual false final false
  static inline void GetRootGameObjectsInternal(int32_t sceneHandle, ::System::Object* resultRootList);

  /// @brief Method get_handle addr 0x2b892dc size 0x8 virtual false final false
  inline int32_t get_handle();

  /// @brief Method IsValid addr 0x2b892e4 size 0x3c virtual false final false
  inline bool IsValid();

  /// @brief Method get_name addr 0x2b89320 size 0x3c virtual false final false
  inline ::StringW get_name();

  /// @brief Method get_isLoaded addr 0x2b8935c size 0x3c virtual false final false
  inline bool get_isLoaded();

  /// @brief Method get_rootCount addr 0x2b89398 size 0x3c virtual false final false
  inline int32_t get_rootCount();

  /// @brief Method GetRootGameObjects addr 0x2b893d4 size 0xd8 virtual false final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GetRootGameObjects();

  /// @brief Method GetRootGameObjects addr 0x2b894ac size 0x274 virtual false final false
  inline void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* rootGameObjects);

  /// @brief Method op_Equality addr 0x2b89720 size 0xc virtual false final false
  static inline bool op_Equality(::UnityEngine::SceneManagement::Scene lhs, ::UnityEngine::SceneManagement::Scene rhs);

  /// @brief Method GetHashCode addr 0x2b8972c size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2b89734 size 0x78 virtual true final false
  inline bool Equals(::System::Object* other);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Scene(int32_t m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scene();

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::Scene, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SceneManagement::Scene, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
