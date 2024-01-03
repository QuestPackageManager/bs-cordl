#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
CORDL_MODULE_EXPORT(ProjectContext)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
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
class ZenjectSettings;
}
// Forward declare root types
namespace Zenject {
class ProjectContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProjectContext);
// Type: Zenject::ProjectContext
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11119)), TypeDefinitionIndex(TypeDefinitionIndex(11354))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11121))
// CS Name: ::Zenject::ProjectContext*
class CORDL_TYPE ProjectContext : public ::Zenject::Context {
public:
  // Declarations
  /// @brief Field PreInstall, offset 0x40, size 0x8
  __declspec(property(get = __get_PreInstall, put = __set_PreInstall))::System::Action* PreInstall;

  /// @brief Field PostInstall, offset 0x48, size 0x8
  __declspec(property(get = __get_PostInstall, put = __set_PostInstall))::System::Action* PostInstall;

  /// @brief Field PreResolve, offset 0x50, size 0x8
  __declspec(property(get = __get_PreResolve, put = __set_PreResolve))::System::Action* PreResolve;

  /// @brief Field PostResolve, offset 0x58, size 0x8
  __declspec(property(get = __get_PostResolve, put = __set_PostResolve))::System::Action* PostResolve;

  /// @brief Field _parentNewObjectsUnderContext, offset 0x60, size 0x1
  __declspec(property(get = __get__parentNewObjectsUnderContext, put = __set__parentNewObjectsUnderContext)) bool _parentNewObjectsUnderContext;

  /// @brief Field _editorReflectionBakingCoverageMode, offset 0x64, size 0x4
  __declspec(property(get = __get__editorReflectionBakingCoverageMode, put = __set__editorReflectionBakingCoverageMode))::Zenject::ReflectionBakingCoverageModes _editorReflectionBakingCoverageMode;

  /// @brief Field _buildsReflectionBakingCoverageMode, offset 0x68, size 0x4
  __declspec(property(get = __get__buildsReflectionBakingCoverageMode, put = __set__buildsReflectionBakingCoverageMode))::Zenject::ReflectionBakingCoverageModes _buildsReflectionBakingCoverageMode;

  /// @brief Field _settings, offset 0x70, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::Zenject::ZenjectSettings* _settings;

  /// @brief Field _container, offset 0x78, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Zenject::ProjectContext* _instance;

  /// @brief Field <ValidateOnNextRun>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__ValidateOnNextRun_k__BackingField, put = setStaticF__ValidateOnNextRun_k__BackingField)) bool _ValidateOnNextRun_k__BackingField;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_ParentNewObjectsUnderContext, put = set_ParentNewObjectsUnderContext)) bool ParentNewObjectsUnderContext;

  constexpr ::System::Action*& __get_PreInstall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_PreInstall() const;

  constexpr void __set_PreInstall(::System::Action* value);

  constexpr ::System::Action*& __get_PostInstall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_PostInstall() const;

  constexpr void __set_PostInstall(::System::Action* value);

  constexpr ::System::Action*& __get_PreResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_PreResolve() const;

  constexpr void __set_PreResolve(::System::Action* value);

  constexpr ::System::Action*& __get_PostResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_PostResolve() const;

  constexpr void __set_PostResolve(::System::Action* value);

  constexpr bool& __get__parentNewObjectsUnderContext();

  constexpr bool const& __get__parentNewObjectsUnderContext() const;

  constexpr void __set__parentNewObjectsUnderContext(bool value);

  constexpr ::Zenject::ReflectionBakingCoverageModes& __get__editorReflectionBakingCoverageMode();

  constexpr ::Zenject::ReflectionBakingCoverageModes const& __get__editorReflectionBakingCoverageMode() const;

  constexpr void __set__editorReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);

  constexpr ::Zenject::ReflectionBakingCoverageModes& __get__buildsReflectionBakingCoverageMode();

  constexpr ::Zenject::ReflectionBakingCoverageModes const& __get__buildsReflectionBakingCoverageMode() const;

  constexpr void __set__buildsReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);

  constexpr ::Zenject::ZenjectSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> const& __get__settings() const;

  constexpr void __set__settings(::Zenject::ZenjectSettings* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  static inline void setStaticF__instance(::Zenject::ProjectContext* value);

  static inline ::Zenject::ProjectContext* getStaticF__instance();

  static inline void setStaticF__ValidateOnNextRun_k__BackingField(bool value);

  static inline bool getStaticF__ValidateOnNextRun_k__BackingField();

  /// @brief Method add_PreInstall, addr 0x2eef324, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreInstall(::System::Action* value);

  /// @brief Method remove_PreInstall, addr 0x2eef3c0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreInstall(::System::Action* value);

  /// @brief Method add_PostInstall, addr 0x2eef45c, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostInstall(::System::Action* value);

  /// @brief Method remove_PostInstall, addr 0x2eef4f8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostInstall(::System::Action* value);

  /// @brief Method add_PreResolve, addr 0x2eef594, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreResolve(::System::Action* value);

  /// @brief Method remove_PreResolve, addr 0x2eef630, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreResolve(::System::Action* value);

  /// @brief Method add_PostResolve, addr 0x2eef6cc, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostResolve(::System::Action* value);

  /// @brief Method remove_PostResolve, addr 0x2eef768, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostResolve(::System::Action* value);

  /// @brief Method NoDomainReloadInit, addr 0x2eef804, size 0x48, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method get_Container, addr 0x2eef84c, size 0x8, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_HasInstance, addr 0x2eef854, size 0x78, virtual false, abstract: false, final false
  static inline bool get_HasInstance();

  /// @brief Method get_Instance, addr 0x2eef8cc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Zenject::ProjectContext* get_Instance();

  /// @brief Method get_ValidateOnNextRun, addr 0x2eefc14, size 0x48, virtual false, abstract: false, final false
  static inline bool get_ValidateOnNextRun();

  /// @brief Method set_ValidateOnNextRun, addr 0x2eefc5c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_ValidateOnNextRun(bool value);

  /// @brief Method GetRootGameObjects, addr 0x2eefca8, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();

  /// @brief Method TryGetPrefab, addr 0x2eefd48, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* TryGetPrefab();

  /// @brief Method InstantiateAndInitialize, addr 0x2eef970, size 0x2a4, virtual false, abstract: false, final false
  static inline void InstantiateAndInitialize();

  /// @brief Method get_ParentNewObjectsUnderContext, addr 0x2ef02f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ParentNewObjectsUnderContext();

  /// @brief Method set_ParentNewObjectsUnderContext, addr 0x2ef02fc, size 0xc, virtual false, abstract: false, final false
  inline void set_ParentNewObjectsUnderContext(bool value);

  /// @brief Method EnsureIsInitialized, addr 0x2ef0308, size 0x4, virtual false, abstract: false, final false
  inline void EnsureIsInitialized();

  /// @brief Method Awake, addr 0x2ef030c, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x2eefed4, size 0x420, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method GetInjectableMonoBehaviours, addr 0x2ef1168, size 0x40, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method InstallBindings, addr 0x2ef0e30, size 0x338, virtual false, abstract: false, final false
  inline void InstallBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);

  static inline ::Zenject::ProjectContext* New_ctor();

  /// @brief Method .ctor, addr 0x2ef1228, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ef1234, size 0x178, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectContext(ProjectContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectContext(ProjectContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectContext();

public:
  /// @brief Field PreInstall, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___PreInstall;

  /// @brief Field PostInstall, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___PostInstall;

  /// @brief Field PreResolve, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___PreResolve;

  /// @brief Field PostResolve, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___PostResolve;

  /// @brief Field _parentNewObjectsUnderContext, offset: 0x60, size: 0x1, def value: None
  bool ____parentNewObjectsUnderContext;

  /// @brief Field _editorReflectionBakingCoverageMode, offset: 0x64, size: 0x4, def value: None
  ::Zenject::ReflectionBakingCoverageModes ____editorReflectionBakingCoverageMode;

  /// @brief Field _buildsReflectionBakingCoverageMode, offset: 0x68, size: 0x4, def value: None
  ::Zenject::ReflectionBakingCoverageModes ____buildsReflectionBakingCoverageMode;

  /// @brief Field _settings, offset: 0x70, size: 0x8, def value: None
  ::Zenject::ZenjectSettings* ____settings;

  /// @brief Field _container, offset: 0x78, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field ProjectContextResourcePath offset 0xffffffff size 0x8
  static constexpr ::ConstString ProjectContextResourcePath{ u"ProjectContext" };

  /// @brief Field ProjectContextResourcePathOld offset 0xffffffff size 0x8
  static constexpr ::ConstString ProjectContextResourcePathOld{ u"ProjectCompositionRoot" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProjectContext, 0x80>, "Size mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PreInstall) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PostInstall) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PreResolve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PostResolve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____parentNewObjectsUnderContext) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____editorReflectionBakingCoverageMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____buildsReflectionBakingCoverageMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____settings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____container) == 0x78, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ProjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectContext*, "Zenject", "ProjectContext");
