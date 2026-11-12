#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/SceneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManager)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
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
MARK_REF_T(::UnityEngine::SceneManagement::SceneManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
// [NativeHeader("Runtime/Export/SceneManager/SceneManager.bindings.h")]
// [RequiredByNativeCode]
// Dependencies System.Object
namespace UnityEngine::SceneManagement {
// Is value type: false
// CS Name: UnityEngine.SceneManagement.SceneManager
class CORDL_TYPE SceneManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeSceneChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeSceneChanged,
                      put = setStaticF_activeSceneChanged)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* activeSceneChanged;

  /// @brief Field s_AllowLoadScene, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_AllowLoadScene, put = setStaticF_s_AllowLoadScene)) bool s_AllowLoadScene;

  /// @brief Field sceneLoaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sceneLoaded,
                      put = setStaticF_sceneLoaded)) ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* sceneLoaded;

  /// @brief Field sceneUnloaded, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sceneUnloaded, put = setStaticF_sceneUnloaded)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* sceneUnloaded;

  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetActiveScene, addr 0x6f993ac, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetActiveScene();

  /// @brief Method GetActiveScene_Injected, addr 0x6f9942c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetActiveScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// [NativeThrows]
  /// @brief Method GetSceneAt, addr 0x6f996c4, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneAt(int32_t index);

  /// @brief Method GetSceneAt_Injected, addr 0x6f99754, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneAt_Injected(int32_t index, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetSceneByName, addr 0x6f99524, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene GetSceneByName(::StringW name);

  /// @brief Method GetSceneByName_Injected, addr 0x6f99680, size 0x44, virtual false, abstract: false, final false
  static inline void GetSceneByName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::SceneManagement::Scene> ret);

  /// [RequiredByNativeCode]
  /// @brief Method Internal_ActiveSceneChanged, addr 0x6f9a78c, size 0xb4, virtual false, abstract: false, final false
  static inline void Internal_ActiveSceneChanged(::UnityEngine::SceneManagement::Scene previousActiveScene, ::UnityEngine::SceneManagement::Scene newActiveScene);

  /// [RequiredByNativeCode]
  /// @brief Method Internal_SceneLoaded, addr 0x6f9a638, size 0xb4, virtual false, abstract: false, final false
  static inline void Internal_SceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// [RequiredByNativeCode]
  /// @brief Method Internal_SceneUnloaded, addr 0x6f9a6ec, size 0xa0, virtual false, abstract: false, final false
  static inline void Internal_SceneUnloaded(::UnityEngine::SceneManagement::Scene scene);

  /// [RequiredByNativeCode]
  /// @brief Method LoadFirstScene_Internal, addr 0x6f99a68, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadFirstScene_Internal(bool async);

  /// @brief Method LoadScene, addr 0x6f9a2d0, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene, addr 0x6f9a174, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::SceneManagement::Scene LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadScene, addr 0x6f9a268, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(int32_t sceneBuildIndex, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method LoadScene, addr 0x6f9a20c, size 0x5c, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene, addr 0x6f9a104, size 0x68, virtual false, abstract: false, final false
  static inline void LoadScene(::StringW sceneName, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x6f9a368, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x6f9a3d0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// [ExcludeFromDocs]
  /// @brief Method LoadSceneAsync, addr 0x6f9a518, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync, addr 0x6f9a440, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, /* [DefaultValue("LoadSceneMode.Single")] */ ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method LoadSceneAsync, addr 0x6f9a4a8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneParameters parameters);

  /// @brief Method LoadSceneAsyncNameIndexInternal, addr 0x6f99874, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters,
                                                                               bool mustCompleteNextFrame);

  /// [NativeThrows]
  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method MoveGameObjectToScene, addr 0x6f99958, size 0xcc, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene(/* [NotNull] */ ::UnityEngine::GameObject* go, ::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method MoveGameObjectToScene_Injected, addr 0x6f99a24, size 0x44, virtual false, abstract: false, final false
  static inline void MoveGameObjectToScene_Injected(::System::IntPtr go, ::by_ref<::UnityEngine::SceneManagement::Scene const> scene);

  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// [NativeThrows]
  /// @brief Method SetActiveScene, addr 0x6f99468, size 0x80, virtual false, abstract: false, final false
  static inline bool SetActiveScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method SetActiveScene_Injected, addr 0x6f994e8, size 0x3c, virtual false, abstract: false, final false
  static inline bool SetActiveScene_Injected(::by_ref<::UnityEngine::SceneManagement::Scene const> scene);

  /// @brief Method UnloadSceneAsync, addr 0x6f9a574, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method UnloadSceneAsync, addr 0x6f9a5d0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsync(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// [StaticAccessor("SceneManagerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// [NativeThrows]
  /// @brief Method UnloadSceneAsyncInternal, addr 0x6f99798, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// @brief Method UnloadSceneAsyncInternal_Injected, addr 0x6f99830, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnloadSceneAsyncInternal_Injected(::by_ref<::UnityEngine::SceneManagement::Scene const> scene, ::UnityEngine::SceneManagement::UnloadSceneOptions options);

  /// [CompilerGenerated]
  /// @brief Method add_activeSceneChanged, addr 0x6f99ef4, size 0x108, virtual false, abstract: false, final false
  static inline void add_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value);

  /// [CompilerGenerated]
  /// @brief Method add_sceneLoaded, addr 0x6f99ad4, size 0x108, virtual false, abstract: false, final false
  static inline void add_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// [CompilerGenerated]
  /// @brief Method add_sceneUnloaded, addr 0x6f99ce4, size 0x108, virtual false, abstract: false, final false
  static inline void add_sceneUnloaded(::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* value);

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* getStaticF_activeSceneChanged();

  static inline bool getStaticF_s_AllowLoadScene();

  static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* getStaticF_sceneLoaded();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* getStaticF_sceneUnloaded();

  /// [NativeMethod("GetSceneCount")]
  /// [StaticAccessor("GetSceneManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// [NativeHeader("Runtime/SceneManager/SceneManager.h")]
  /// @brief Method get_sceneCount, addr 0x6f99320, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_sceneCount();

  /// @brief Method get_sceneCountInBuildSettings, addr 0x6f99348, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_sceneCountInBuildSettings();

  /// [CompilerGenerated]
  /// @brief Method remove_activeSceneChanged, addr 0x6f99ffc, size 0x108, virtual false, abstract: false, final false
  static inline void remove_activeSceneChanged(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_sceneLoaded, addr 0x6f99bdc, size 0x108, virtual false, abstract: false, final false
  static inline void remove_sceneLoaded(::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_sceneUnloaded, addr 0x6f99dec, size 0x108, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneManager(SceneManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneManager(SceneManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SceneManagement::SceneManager) == 0x10, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
