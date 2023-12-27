#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManager)
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::Events {
template <typename T0, typename T1> class UnityAction_2;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10379))
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

  /// @brief Method add_sceneLoaded addr 0x2cef290 size 0xf0 virtual false final false
  static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method remove_sceneLoaded addr 0x2cef380 size 0xf0 virtual false final false
  static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method add_sceneUnloaded addr 0x2cef470 size 0xf4 virtual false final false
  static inline void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  /// @brief Method remove_sceneUnloaded addr 0x2cef564 size 0xf4 virtual false final false
  static inline void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  /// @brief Method LoadScene addr 0x2cef658 size 0x68 virtual false final false
  static inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadScene addr 0x2cef760 size 0x58 virtual false final false
  static inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene addr 0x2cef6c0 size 0xa0 virtual false final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene addr 0x2cef94c size 0x68 virtual false final false
  static inline void LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadScene addr 0x2cef9b4 size 0xa0 virtual false final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsync addr 0x2cefa54 size 0x68 virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync addr 0x2cefabc size 0x6c virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsync addr 0x2cefb28 size 0x68 virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync addr 0x2cefbfc size 0x58 virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync addr 0x2cefb90 size 0x6c virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method UnloadSceneAsync addr 0x2cefc54 size 0x74 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::StringW sceneName);

  /// @brief Method UnloadSceneAsync addr 0x2cefdb4 size 0x58 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method UnloadSceneAsync addr 0x2cefe94 size 0x64 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method Internal_SceneLoaded addr 0x2cefef8 size 0xb0 virtual false final false
  static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method Internal_SceneUnloaded addr 0x2ceffa8 size 0x9c virtual false final false
  static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method Internal_ActiveSceneChanged addr 0x2cf0044 size 0xb0 virtual false final false
  static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene previousActiveScene, ::UnityEngine::SceneManagement::Scene newActiveScene);

  /// @brief Method get_sceneCount addr 0x2cef898 size 0x28 virtual false final false
  static inline int32_t get_sceneCount();

  /// @brief Method get_sceneCountInBuildSettings addr 0x2cded48 size 0x64 virtual false final false
  static inline int32_t get_sceneCountInBuildSettings();

  /// @brief Method GetActiveScene addr 0x2cf00f4 size 0x7c virtual false final false
  static inline ::UnityEngine::SceneManagement::Scene GetActiveScene();

  /// @brief Method SetActiveScene addr 0x2cf01ac size 0x7c virtual false final false
  static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSceneByName addr 0x2cf0264 size 0x8c virtual false final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW name);

  /// @brief Method GetSceneAt addr 0x2cef8c0 size 0x8c virtual false final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index);

  /// @brief Method UnloadSceneAsyncInternal addr 0x2cefe0c size 0x88 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method LoadSceneAsyncNameIndexInternal addr 0x2cef7b8 size 0xe0 virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                               bool mustCompleteNextFrame);

  /// @brief Method UnloadSceneNameIndexInternal addr 0x2cefcc8 size 0xec virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options,
                                                                            ByRef<bool> outSuccess);

  /// @brief Method MoveGameObjectToScene addr 0x2cf03bc size 0x88 virtual false final false
  static inline void MoveGameObjectToScene(::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method LoadFirstScene_Internal addr 0x2cf0488 size 0x6c virtual false final false
  static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool async);

  /// @brief Method GetActiveScene_Injected addr 0x2cf0170 size 0x3c virtual false final false
  static inline void GetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method SetActiveScene_Injected addr 0x2cf0228 size 0x3c virtual false final false
  static inline bool SetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method GetSceneByName_Injected addr 0x2cf02f0 size 0x44 virtual false final false
  static inline void GetSceneByName_Injected(::StringW name, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method GetSceneAt_Injected addr 0x2cf0334 size 0x44 virtual false final false
  static inline void GetSceneAt_Injected(int32_t index, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method UnloadSceneAsyncInternal_Injected addr 0x2cf0378 size 0x44 virtual false final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method MoveGameObjectToScene_Injected addr 0x2cf0444 size 0x44 virtual false final false
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
