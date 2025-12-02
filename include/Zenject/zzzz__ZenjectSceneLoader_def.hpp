#pragma once
// IWYU pragma private; include "Zenject/ZenjectSceneLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenjectSceneLoader)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct LoadSceneRelationship;
}
namespace Zenject {
class ProjectKernel;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace Zenject {
class ZenjectSceneLoader;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectSceneLoader);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectSceneLoader
class CORDL_TYPE ZenjectSceneLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _projectKernel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__projectKernel, put = __cordl_internal_set__projectKernel)) ::UnityW<::Zenject::ProjectKernel> _projectKernel;

  /// @brief Field _sceneContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneContainer, put = __cordl_internal_set__sceneContainer)) ::Zenject::DiContainer* _sceneContainer;

  /// @brief Method LoadScene, addr 0x6c698d8, size 0x14, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex);

  /// @brief Method LoadScene, addr 0x6c698ec, size 0x10, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadScene, addr 0x6c698fc, size 0xc, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadScene, addr 0x6c69908, size 0x8, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadScene, addr 0x6c69910, size 0x120, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadScene, addr 0x6c692e8, size 0x14, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene, addr 0x6c692fc, size 0x10, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadScene, addr 0x6c6930c, size 0xc, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadScene, addr 0x6c69318, size 0x8, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadScene, addr 0x6c69320, size 0x108, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneAsync, addr 0x6c69a30, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex);

  /// @brief Method LoadSceneAsync, addr 0x6c69a44, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadSceneAsync, addr 0x6c69a54, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadSceneAsync, addr 0x6c69a60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadSceneAsync, addr 0x6c69a68, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneAsync, addr 0x6c69624, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync, addr 0x6c6963c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadSceneAsync, addr 0x6c69650, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadSceneAsync, addr 0x6c69664, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadSceneAsync, addr 0x6c69678, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                                       ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode,
                                                       ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneFromAddressablesAsync, addr 0x6c69784, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneFromAddressablesAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                                 ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                 ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  static inline ::Zenject::ZenjectSceneLoader* New_ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel);

  /// @brief Method PrepareForLoadScene, addr 0x6c69428, size 0x1fc, virtual false, abstract: false, final false
  inline void PrepareForLoadScene(::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate,
                                  ::Zenject::LoadSceneRelationship containerMode);

  constexpr ::UnityW<::Zenject::ProjectKernel> const& __cordl_internal_get__projectKernel() const;

  constexpr ::UnityW<::Zenject::ProjectKernel>& __cordl_internal_get__projectKernel();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__sceneContainer() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__sceneContainer();

  constexpr void __cordl_internal_set__projectKernel(::UnityW<::Zenject::ProjectKernel> value);

  constexpr void __cordl_internal_set__sceneContainer(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x6c69b88, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c69cac, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c69248, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSceneLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSceneLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSceneLoader(ZenjectSceneLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSceneLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSceneLoader(ZenjectSceneLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14686 };

  /// @brief Field _projectKernel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Zenject::ProjectKernel> ____projectKernel;

  /// @brief Field _sceneContainer, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____sceneContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectSceneLoader, ____projectKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSceneLoader, ____sceneContainer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectSceneLoader, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSceneLoader*, "Zenject", "ZenjectSceneLoader");
