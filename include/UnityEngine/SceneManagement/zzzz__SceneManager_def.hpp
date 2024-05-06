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
// CS Name: ::UnityEngine.SceneManagement::SceneManager*
class CORDL_TYPE SceneManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeSceneChanged, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_activeSceneChanged,
               put = setStaticF_activeSceneChanged))::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* activeSceneChanged;

  /// @brief Field s_AllowLoadScene, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_AllowLoadScene, put = setStaticF_s_AllowLoadScene)) bool s_AllowLoadScene;

  /// @brief Field sceneLoaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneLoaded,
                             put = setStaticF_sceneLoaded))::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* sceneLoaded;

  /// @brief Field sceneUnloaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sceneUnloaded, put = setStaticF_sceneUnloaded))::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* sceneUnloaded;

  /// @brief Method GetActiveScene, addr 0x34329a4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetActiveScene();

  /// @brief Method GetActiveScene_Injected, addr 0x3432a20, size 0x3c, virtual false, abstract: false, final false
  static inline void GetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method GetSceneAt, addr 0x34321c8, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index);

  /// @brief Method GetSceneAt_Injected, addr 0x3432be4, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneAt_Injected(int32_t index, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method GetSceneByName, addr 0x3432b14, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW name);

  /// @brief Method GetSceneByName_Injected, addr 0x3432ba0, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneByName_Injected(::StringW name, ByRef<::UnityEngine::SceneManagement::Scene> ret);

  /// @brief Method Internal_ActiveSceneChanged, addr 0x34327ec, size 0xb0, virtual false, abstract: false, final false
  static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene previousActiveScene, ::UnityEngine::SceneManagement::Scene newActiveScene);

  /// @brief Method Internal_SceneLoaded, addr 0x34326a0, size 0xb0, virtual false, abstract: false, final false
  static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method Internal_SceneUnloaded, addr 0x3432750, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method LoadFirstScene_Internal, addr 0x3432d38, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool async);

  /// @brief Method LoadScene, addr 0x34322bc, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene, addr 0x3431fcc, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene, addr 0x3432254, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadScene, addr 0x343206c, size 0x58, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene, addr 0x3431f64, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x343235c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x34323c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsync, addr 0x3432504, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync, addr 0x3432430, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x3432498, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsyncNameIndexInternal, addr 0x34320c4, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                               bool mustCompleteNextFrame);

  /// @brief Method MoveGameObjectToScene, addr 0x3432c6c, size 0x88, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene(::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method MoveGameObjectToScene_Injected, addr 0x3432cf4, size 0x44, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene_Injected(::UnityEngine::GameObject* go, ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method SetActiveScene, addr 0x3432a5c, size 0x7c, virtual false, abstract: false, final false
  static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method SetActiveScene_Injected, addr 0x3432ad8, size 0x3c, virtual false, abstract: false, final false
  static inline bool SetActiveScene_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene);

  /// @brief Method UnloadSceneAsync, addr 0x343255c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method UnloadSceneAsync, addr 0x343263c, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method UnloadSceneAsyncInternal, addr 0x34325b4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method UnloadSceneAsyncInternal_Injected, addr 0x3432c28, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method add_sceneLoaded, addr 0x3431b9c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method add_sceneUnloaded, addr 0x3431d7c, size 0xf4, virtual false, abstract: false, final false
  static inline void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* getStaticF_activeSceneChanged();

  static inline bool getStaticF_s_AllowLoadScene();

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF_sceneLoaded();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* getStaticF_sceneUnloaded();

  /// @brief Method get_sceneCount, addr 0x34321a0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_sceneCount();

  /// @brief Method get_sceneCountInBuildSettings, addr 0x343289c, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_sceneCountInBuildSettings();

  /// @brief Method remove_sceneLoaded, addr 0x3431c8c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// @brief Method remove_sceneUnloaded, addr 0x3431e70, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  static inline void setStaticF_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value);

  static inline void setStaticF_s_AllowLoadScene(bool value);

  static inline void setStaticF_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  static inline void setStaticF_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManager(SceneManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManager(SceneManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::SceneManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
