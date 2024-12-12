#pragma once
// IWYU pragma private; include "Zenject/SceneDecoratorContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Context_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneDecoratorContext)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
// Forward declare root types
namespace Zenject {
class SceneDecoratorContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneDecoratorContext);
// Dependencies Zenject.Context
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SceneDecoratorContext
class CORDL_TYPE SceneDecoratorContext : public ::Zenject::Context {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_DecoratedContractName)) ::StringW DecoratedContractName;

  __declspec(property(get = get_LateInstallerPrefabs, put = set_LateInstallerPrefabs)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* LateInstallerPrefabs;

  __declspec(property(get = get_LateInstallers, put = set_LateInstallers)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* LateInstallers;

  __declspec(property(get = get_LateScriptableObjectInstallers,
                      put = set_LateScriptableObjectInstallers)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* LateScriptableObjectInstallers;

  /// @brief Field _container, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _decoratedContractName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__decoratedContractName, put = __cordl_internal_set__decoratedContractName)) ::StringW _decoratedContractName;

  /// @brief Field _injectableMonoBehaviours, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__injectableMonoBehaviours,
                      put = __cordl_internal_set__injectableMonoBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* _injectableMonoBehaviours;

  /// @brief Field _lateInstallerPrefabs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lateInstallerPrefabs,
                      put = __cordl_internal_set__lateInstallerPrefabs)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* _lateInstallerPrefabs;

  /// @brief Field _lateInstallers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lateInstallers,
                      put = __cordl_internal_set__lateInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* _lateInstallers;

  /// @brief Field _lateScriptableObjectInstallers, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__lateScriptableObjectInstallers,
      put = __cordl_internal_set__lateScriptableObjectInstallers)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* _lateScriptableObjectInstallers;

  /// @brief Method GetInjectableMonoBehaviours, addr 0x4b292cc, size 0x4c, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method GetRootGameObjects, addr 0x4b292a4, size 0x28, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects();

  /// @brief Method Initialize, addr 0x4b279bc, size 0x1b4, virtual false, abstract: false, final false
  inline void Initialize(::Zenject::DiContainer* container);

  /// @brief Method InstallDecoratorInstallers, addr 0x4b282f4, size 0xc, virtual false, abstract: false, final false
  inline void InstallDecoratorInstallers();

  /// @brief Method InstallDecoratorSceneBindings, addr 0x4b28274, size 0x80, virtual false, abstract: false, final false
  inline void InstallDecoratorSceneBindings();

  /// @brief Method InstallLateDecoratorInstallers, addr 0x4b28300, size 0xc8, virtual false, abstract: false, final false
  inline void InstallLateDecoratorInstallers();

  static inline ::Zenject::SceneDecoratorContext* New_ctor();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::StringW const& __cordl_internal_get__decoratedContractName() const;

  constexpr ::StringW& __cordl_internal_get__decoratedContractName();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get__injectableMonoBehaviours() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get__injectableMonoBehaviours();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& __cordl_internal_get__lateInstallerPrefabs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& __cordl_internal_get__lateInstallerPrefabs();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* const& __cordl_internal_get__lateInstallers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>*& __cordl_internal_get__lateInstallers();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* const& __cordl_internal_get__lateScriptableObjectInstallers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*& __cordl_internal_get__lateScriptableObjectInstallers();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__decoratedContractName(::StringW value);

  constexpr void __cordl_internal_set__injectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* value);

  constexpr void __cordl_internal_set__lateInstallerPrefabs(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value);

  constexpr void __cordl_internal_set__lateInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* value);

  constexpr void __cordl_internal_set__lateScriptableObjectInstallers(::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b29438, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b29318, size 0x120, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x4b29284, size 0x20, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_DecoratedContractName, addr 0x4b2927c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DecoratedContractName();

  /// @brief Method get_LateInstallerPrefabs, addr 0x4b2914c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* get_LateInstallerPrefabs();

  /// @brief Method get_LateInstallers, addr 0x4b290b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::MonoInstaller>>* get_LateInstallers();

  /// @brief Method get_LateScriptableObjectInstallers, addr 0x4b291e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* get_LateScriptableObjectInstallers();

  /// @brief Method set_LateInstallerPrefabs, addr 0x4b29154, size 0x90, virtual false, abstract: false, final false
  inline void set_LateInstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method set_LateInstallers, addr 0x4b290bc, size 0x90, virtual false, abstract: false, final false
  inline void set_LateInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method set_LateScriptableObjectInstallers, addr 0x4b291ec, size 0x90, virtual false, abstract: false, final false
  inline void set_LateScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneDecoratorContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneDecoratorContext(SceneDecoratorContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneDecoratorContext(SceneDecoratorContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12464 };

  /// @brief Field _lateInstallers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* ____lateInstallers;

  /// @brief Field _lateInstallerPrefabs, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::MonoInstaller>>* ____lateInstallerPrefabs;

  /// @brief Field _lateScriptableObjectInstallers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* ____lateScriptableObjectInstallers;

  /// @brief Field _decoratedContractName, offset: 0x60, size: 0x8, def value: None
  ::StringW ____decoratedContractName;

  /// @brief Field _container, offset: 0x68, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _injectableMonoBehaviours, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* ____injectableMonoBehaviours;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateInstallers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateInstallerPrefabs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateScriptableObjectInstallers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____decoratedContractName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____container) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____injectableMonoBehaviours) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SceneDecoratorContext, 0x78>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneDecoratorContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneDecoratorContext*, "Zenject", "SceneDecoratorContext");
