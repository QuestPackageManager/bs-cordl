#pragma once
// IWYU pragma private; include "Zenject/ZenjectSceneLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Zenject::ZenjectSceneLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ZenjectSceneLoader*
class CORDL_TYPE ZenjectSceneLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _projectKernel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__projectKernel, put = __cordl_internal_set__projectKernel))::UnityW<::Zenject::ProjectKernel> _projectKernel;

  /// @brief Field _sceneContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneContainer, put = __cordl_internal_set__sceneContainer))::Zenject::DiContainer* _sceneContainer;

  /// @brief Method LoadScene, addr 0x36b7b40, size 0x14, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex);

  /// @brief Method LoadScene, addr 0x36b7b54, size 0x10, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadScene, addr 0x36b7b64, size 0xc, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadScene, addr 0x36b7b70, size 0x8, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadScene, addr 0x36b7b78, size 0x10c, virtual false, abstract: false, final false
  inline void LoadScene(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadScene, addr 0x36b75cc, size 0x14, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName);

  /// @brief Method LoadScene, addr 0x36b75e0, size 0x10, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadScene, addr 0x36b75f0, size 0xc, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadScene, addr 0x36b75fc, size 0x8, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadScene, addr 0x36b7604, size 0xd8, virtual false, abstract: false, final false
  inline void LoadScene(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                        ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneAsync, addr 0x36b7c84, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex);

  /// @brief Method LoadSceneAsync, addr 0x36b7c98, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadSceneAsync, addr 0x36b7ca8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadSceneAsync, addr 0x36b7cb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadSceneAsync, addr 0x36b7cbc, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(int32_t sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneAsync, addr 0x36b78c8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName);

  /// @brief Method LoadSceneAsync, addr 0x36b78e0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode);

  /// @brief Method LoadSceneAsync, addr 0x36b78f4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings);

  /// @brief Method LoadSceneAsync, addr 0x36b7908, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                                       ::Zenject::LoadSceneRelationship containerMode);

  /// @brief Method LoadSceneAsync, addr 0x36b791c, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::AsyncOperation* LoadSceneAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                                       ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::Zenject::LoadSceneRelationship containerMode,
                                                       ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  /// @brief Method LoadSceneFromAddressablesAsync, addr 0x36b7a00, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
  LoadSceneFromAddressablesAsync(::StringW sceneName, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority,
                                 ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>* extraBindings,
                                 ::Zenject::LoadSceneRelationship containerMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate);

  static inline ::Zenject::ZenjectSceneLoader* New_ctor(::Zenject::SceneContext* sceneRoot, ::Zenject::ProjectKernel* projectKernel);

  /// @brief Method PrepareForLoadScene, addr 0x36b76dc, size 0x1ec, virtual false, abstract: false, final false
  inline void PrepareForLoadScene(::UnityEngine::SceneManagement::LoadSceneMode loadMode, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsEarly,
                                  ::System::Action_1<::Zenject::DiContainer*>* extraBindings, ::System::Action_1<::Zenject::DiContainer*>* extraBindingsLate,
                                  ::Zenject::LoadSceneRelationship containerMode);

  constexpr ::UnityW<::Zenject::ProjectKernel> const& __cordl_internal_get__projectKernel() const;

  constexpr ::UnityW<::Zenject::ProjectKernel>& __cordl_internal_get__projectKernel();

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__sceneContainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__sceneContainer() const;

  constexpr void __cordl_internal_set__projectKernel(::UnityW<::Zenject::ProjectKernel> value);

  constexpr void __cordl_internal_set__sceneContainer(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x36b7dc8, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x36b7ee4, size 0x304, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x36b7524, size 0xa8, virtual false, abstract: false, final false
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

  /// @brief Field _projectKernel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::Zenject::ProjectKernel> ____projectKernel;

  /// @brief Field _sceneContainer, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____sceneContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectSceneLoader, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::ZenjectSceneLoader, ____projectKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSceneLoader, ____sceneContainer) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectSceneLoader);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSceneLoader*, "Zenject", "ZenjectSceneLoader");
