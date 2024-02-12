#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManager)
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Events {
template <typename T0, typename T1> class UnityAction_2;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SceneManagement::SceneManager);
// Type: UnityEngine.SceneManagement::SceneManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9147))
// CS Name: ::UnityEngine.SceneManagement::SceneManager*
class CORDL_TYPE SceneManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field sceneLoaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneLoaded,
                             put = setStaticF_sceneLoaded))::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* sceneLoaded;

  /// @brief Field sceneUnloaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneUnloaded, put = setStaticF_sceneUnloaded))::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* sceneUnloaded;

  /// @brief Field activeSceneChanged, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_activeSceneChanged,
               put = setStaticF_activeSceneChanged))::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* activeSceneChanged;

  /// @brief Field s_AllowLoadScene, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_AllowLoadScene, put = setStaticF_s_AllowLoadScene)) bool s_AllowLoadScene;

  static inline void setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF_sceneLoaded();

  static inline void setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* getStaticF_sceneUnloaded();

  static inline void setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value);

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* getStaticF_activeSceneChanged();

  static inline void setStaticF_s_AllowLoadScene(bool value);

  static inline bool getStaticF_s_AllowLoadScene();

  /// @brief Method add_sceneLoaded, addr 0x2cfb14c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method remove_sceneLoaded, addr 0x2cfb23c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method add_sceneUnloaded, addr 0x2cfb32c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  /// @brief Method remove_sceneUnloaded, addr 0x2cfb420, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  /// @brief Method LoadScene, addr 0x2cfb514, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadScene, addr 0x2cfb61c, size 0x58, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene, addr 0x2cfb57c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene, addr 0x2cfb804, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadScene, addr 0x2cfb86c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsync, addr 0x2cfb90c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x2cfb974, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsync, addr 0x2cfb9e0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x2cfbab4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync, addr 0x2cfba48, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method UnloadSceneAsync, addr 0x2cfbb0c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method UnloadSceneAsync, addr 0x2cfbbec, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method Internal_SceneLoaded, addr 0x2cfbc50, size 0xb0, virtual false, abstract: false, final false
  static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method Internal_SceneUnloaded, addr 0x2cfbd00, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method Internal_ActiveSceneChanged, addr 0x2cfbd9c, size 0xb0, virtual false, abstract: false, final false
  static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene previousActiveScene, ::UnityEngine::SceneManagement::Scene newActiveScene);

  /// @brief Method get_sceneCount, addr 0x2cfb750, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_sceneCount();

  /// @brief Method get_sceneCountInBuildSettings, addr 0x2cfbe4c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_sceneCountInBuildSettings();

  /// @brief Method GetActiveScene, addr 0x2cfbf54, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetActiveScene();

  /// @brief Method SetActiveScene, addr 0x2cfc00c, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSceneByName, addr 0x2cfc0c4, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW name);

  /// @brief Method GetSceneAt, addr 0x2cfb778, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index);

  /// @brief Method UnloadSceneAsyncInternal, addr 0x2cfbb64, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method LoadSceneAsyncNameIndexInternal, addr 0x2cfb674, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                               bool mustCompleteNextFrame);

  /// @brief Method MoveGameObjectToScene, addr 0x2cfc21c, size 0x88, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene(::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method LoadFirstScene_Internal, addr 0x2cfc2e8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool async);

  /// @brief Method GetActiveScene_Injected, addr 0x2cfbfd0, size 0x3c, virtual false, abstract: false, final false
  static inline void GetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method SetActiveScene_Injected, addr 0x2cfc088, size 0x3c, virtual false, abstract: false, final false
  static inline bool SetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method GetSceneByName_Injected, addr 0x2cfc150, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneByName_Injected(::StringW name, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method GetSceneAt_Injected, addr 0x2cfc194, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneAt_Injected(int32_t index, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method UnloadSceneAsyncInternal_Injected, addr 0x2cfc1d8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method MoveGameObjectToScene_Injected, addr 0x2cfc2a4, size 0x44, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene_Injected(::UnityEngine::GameObject* go, ByRef<::UnityEngine::SceneManagement::Scene> scene);

  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManager(SceneManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManager(SceneManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
