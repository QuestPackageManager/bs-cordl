#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Context_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneDecoratorContext)
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SceneDecoratorContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneDecoratorContext);
// Type: Zenject::SceneDecoratorContext
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11119))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11127))
// CS Name: ::Zenject::SceneDecoratorContext*
class CORDL_TYPE SceneDecoratorContext : public ::Zenject::Context {
public:
  // Declarations
  /// @brief Field _lateInstallers, offset 0x40, size 0x8
  __declspec(property(get = __get__lateInstallers, put = __set__lateInstallers))::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* _lateInstallers;

  /// @brief Field _lateInstallerPrefabs, offset 0x48, size 0x8
  __declspec(property(get = __get__lateInstallerPrefabs, put = __set__lateInstallerPrefabs))::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* _lateInstallerPrefabs;

  /// @brief Field _lateScriptableObjectInstallers, offset 0x50, size 0x8
  __declspec(property(get = __get__lateScriptableObjectInstallers,
                      put = __set__lateScriptableObjectInstallers))::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* _lateScriptableObjectInstallers;

  /// @brief Field _decoratedContractName, offset 0x58, size 0x8
  __declspec(property(get = __get__decoratedContractName, put = __set__decoratedContractName))::StringW _decoratedContractName;

  /// @brief Field _container, offset 0x60, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _injectableMonoBehaviours, offset 0x68, size 0x8
  __declspec(property(get = __get__injectableMonoBehaviours, put = __set__injectableMonoBehaviours))::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* _injectableMonoBehaviours;

  __declspec(property(get = get_LateInstallers, put = set_LateInstallers))::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* LateInstallers;

  __declspec(property(get = get_LateInstallerPrefabs, put = set_LateInstallerPrefabs))::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* LateInstallerPrefabs;

  __declspec(property(get = get_LateScriptableObjectInstallers,
                      put = set_LateScriptableObjectInstallers))::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* LateScriptableObjectInstallers;

  __declspec(property(get = get_DecoratedContractName))::StringW DecoratedContractName;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& __get__lateInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& __get__lateInstallers() const;

  constexpr void __set__lateInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& __get__lateInstallerPrefabs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& __get__lateInstallerPrefabs() const;

  constexpr void __set__lateInstallerPrefabs(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*& __get__lateScriptableObjectInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*> const& __get__lateScriptableObjectInstallers() const;

  constexpr void __set__lateScriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* value);

  constexpr ::StringW& __get__decoratedContractName();

  constexpr ::StringW const& __get__decoratedContractName() const;

  constexpr void __set__decoratedContractName(::StringW value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*& __get__injectableMonoBehaviours();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*> const& __get__injectableMonoBehaviours() const;

  constexpr void __set__injectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* value);

  /// @brief Method get_LateInstallers, addr 0x2ef4414, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_LateInstallers();

  /// @brief Method set_LateInstallers, addr 0x2ef441c, size 0x90, virtual false, abstract: false, final false
  inline void set_LateInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method get_LateInstallerPrefabs, addr 0x2ef44ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_LateInstallerPrefabs();

  /// @brief Method set_LateInstallerPrefabs, addr 0x2ef44b4, size 0x90, virtual false, abstract: false, final false
  inline void set_LateInstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method get_LateScriptableObjectInstallers, addr 0x2ef4544, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* get_LateScriptableObjectInstallers();

  /// @brief Method set_LateScriptableObjectInstallers, addr 0x2ef454c, size 0x90, virtual false, abstract: false, final false
  inline void set_LateScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* value);

  /// @brief Method get_DecoratedContractName, addr 0x2ef45dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DecoratedContractName();

  /// @brief Method get_Container, addr 0x2ef45e4, size 0x20, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method GetRootGameObjects, addr 0x2ef4604, size 0x28, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();

  /// @brief Method Initialize, addr 0x2ef2cdc, size 0x1b4, virtual false, abstract: false, final false
  inline void Initialize(::Zenject::DiContainer* container);

  /// @brief Method InstallDecoratorSceneBindings, addr 0x2ef3594, size 0x80, virtual false, abstract: false, final false
  inline void InstallDecoratorSceneBindings();

  /// @brief Method InstallDecoratorInstallers, addr 0x2ef3614, size 0xc, virtual false, abstract: false, final false
  inline void InstallDecoratorInstallers();

  /// @brief Method GetInjectableMonoBehaviours, addr 0x2ef462c, size 0x4c, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method InstallLateDecoratorInstallers, addr 0x2ef3620, size 0xc4, virtual false, abstract: false, final false
  inline void InstallLateDecoratorInstallers();

  static inline ::Zenject::SceneDecoratorContext* New_ctor();

  /// @brief Method .ctor, addr 0x2ef4678, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ef479c, size 0x178, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneDecoratorContext(SceneDecoratorContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneDecoratorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneDecoratorContext(SceneDecoratorContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneDecoratorContext();

public:
  /// @brief Field _lateInstallers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* ____lateInstallers;

  /// @brief Field _lateInstallerPrefabs, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* ____lateInstallerPrefabs;

  /// @brief Field _lateScriptableObjectInstallers, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* ____lateScriptableObjectInstallers;

  /// @brief Field _decoratedContractName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____decoratedContractName;

  /// @brief Field _container, offset: 0x60, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _injectableMonoBehaviours, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* ____injectableMonoBehaviours;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneDecoratorContext, 0x70>, "Size mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateInstallers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateInstallerPrefabs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____lateScriptableObjectInstallers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____decoratedContractName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____container) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneDecoratorContext, ____injectableMonoBehaviours) == 0x68, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneDecoratorContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneDecoratorContext*, "Zenject", "SceneDecoratorContext");
