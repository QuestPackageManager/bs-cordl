#pragma once
// IWYU pragma private; include "Zenject/ProjectContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Dependencies Zenject.Context, Zenject.ReflectionBakingCoverageModes
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ProjectContext
class CORDL_TYPE ProjectContext : public ::Zenject::Context {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_ParentNewObjectsUnderContext, put = set_ParentNewObjectsUnderContext)) bool ParentNewObjectsUnderContext;

  /// @brief Field PostInstall, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_PostInstall, put = __cordl_internal_set_PostInstall)) ::System::Action* PostInstall;

  /// @brief Field PostResolve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PostResolve, put = __cordl_internal_set_PostResolve)) ::System::Action* PostResolve;

  /// @brief Field PreInstall, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_PreInstall, put = __cordl_internal_set_PreInstall)) ::System::Action* PreInstall;

  /// @brief Field PreResolve, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PreResolve, put = __cordl_internal_set_PreResolve)) ::System::Action* PreResolve;

  /// @brief Field <ValidateOnNextRun>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__ValidateOnNextRun_k__BackingField, put = setStaticF__ValidateOnNextRun_k__BackingField)) bool _ValidateOnNextRun_k__BackingField;

  /// @brief Field _buildsReflectionBakingCoverageMode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__buildsReflectionBakingCoverageMode,
                      put = __cordl_internal_set__buildsReflectionBakingCoverageMode)) ::Zenject::ReflectionBakingCoverageModes _buildsReflectionBakingCoverageMode;

  /// @brief Field _container, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _editorReflectionBakingCoverageMode, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__editorReflectionBakingCoverageMode,
                      put = __cordl_internal_set__editorReflectionBakingCoverageMode)) ::Zenject::ReflectionBakingCoverageModes _editorReflectionBakingCoverageMode;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::Zenject::ProjectContext> _instance;

  /// @brief Field _parentNewObjectsUnderContext, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__parentNewObjectsUnderContext, put = __cordl_internal_set__parentNewObjectsUnderContext)) bool _parentNewObjectsUnderContext;

  /// @brief Field _settings, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::Zenject::ZenjectSettings* _settings;

  /// @brief Method Awake, addr 0x4b33f2c, size 0xa8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EnsureIsInitialized, addr 0x4b33f28, size 0x4, virtual false, abstract: false, final false
  inline void EnsureIsInitialized();

  /// @brief Method GetInjectableMonoBehaviours, addr 0x4b34d78, size 0x40, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours);

  /// @brief Method GetRootGameObjects, addr 0x4b338b4, size 0x78, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects();

  /// @brief Method Initialize, addr 0x4b33ab8, size 0x45c, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InstallBindings, addr 0x4b34a40, size 0x338, virtual false, abstract: false, final false
  inline void InstallBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableMonoBehaviours);

  /// @brief Method InstantiateAndInitialize, addr 0x4b33580, size 0x29c, virtual false, abstract: false, final false
  static inline void InstantiateAndInitialize();

  static inline ::Zenject::ProjectContext* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x4b33414, size 0x48, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method TryGetPrefab, addr 0x4b3392c, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> TryGetPrefab();

  constexpr ::System::Action* const& __cordl_internal_get_PostInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PostInstall();

  constexpr ::System::Action* const& __cordl_internal_get_PostResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PostResolve();

  constexpr ::System::Action* const& __cordl_internal_get_PreInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PreInstall();

  constexpr ::System::Action* const& __cordl_internal_get_PreResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PreResolve();

  constexpr ::Zenject::ReflectionBakingCoverageModes const& __cordl_internal_get__buildsReflectionBakingCoverageMode() const;

  constexpr ::Zenject::ReflectionBakingCoverageModes& __cordl_internal_get__buildsReflectionBakingCoverageMode();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::Zenject::ReflectionBakingCoverageModes const& __cordl_internal_get__editorReflectionBakingCoverageMode() const;

  constexpr ::Zenject::ReflectionBakingCoverageModes& __cordl_internal_get__editorReflectionBakingCoverageMode();

  constexpr bool const& __cordl_internal_get__parentNewObjectsUnderContext() const;

  constexpr bool& __cordl_internal_get__parentNewObjectsUnderContext();

  constexpr ::Zenject::ZenjectSettings* const& __cordl_internal_get__settings() const;

  constexpr ::Zenject::ZenjectSettings*& __cordl_internal_get__settings();

  constexpr void __cordl_internal_set_PostInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PostResolve(::System::Action* value);

  constexpr void __cordl_internal_set_PreInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PreResolve(::System::Action* value);

  constexpr void __cordl_internal_set__buildsReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__editorReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);

  constexpr void __cordl_internal_set__parentNewObjectsUnderContext(bool value);

  constexpr void __cordl_internal_set__settings(::Zenject::ZenjectSettings* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b34e44, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b34e38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PostInstall, addr 0x4b3306c, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostInstall(::System::Action* value);

  /// @brief Method add_PostResolve, addr 0x4b332dc, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostResolve(::System::Action* value);

  /// @brief Method add_PreInstall, addr 0x4b32f34, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreInstall(::System::Action* value);

  /// @brief Method add_PreResolve, addr 0x4b331a4, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreResolve(::System::Action* value);

  static inline bool getStaticF__ValidateOnNextRun_k__BackingField();

  static inline ::UnityW<::Zenject::ProjectContext> getStaticF__instance();

  /// @brief Method get_Container, addr 0x4b3345c, size 0x8, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_HasInstance, addr 0x4b33464, size 0x78, virtual false, abstract: false, final false
  static inline bool get_HasInstance();

  /// @brief Method get_Instance, addr 0x4b334dc, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::Zenject::ProjectContext> get_Instance();

  /// @brief Method get_ParentNewObjectsUnderContext, addr 0x4b33f14, size 0x8, virtual false, abstract: false, final false
  inline bool get_ParentNewObjectsUnderContext();

  /// @brief Method get_ValidateOnNextRun, addr 0x4b3381c, size 0x48, virtual false, abstract: false, final false
  static inline bool get_ValidateOnNextRun();

  /// @brief Method remove_PostInstall, addr 0x4b33108, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostInstall(::System::Action* value);

  /// @brief Method remove_PostResolve, addr 0x4b33378, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostResolve(::System::Action* value);

  /// @brief Method remove_PreInstall, addr 0x4b32fd0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreInstall(::System::Action* value);

  /// @brief Method remove_PreResolve, addr 0x4b33240, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreResolve(::System::Action* value);

  static inline void setStaticF__ValidateOnNextRun_k__BackingField(bool value);

  static inline void setStaticF__instance(::UnityW<::Zenject::ProjectContext> value);

  /// @brief Method set_ParentNewObjectsUnderContext, addr 0x4b33f1c, size 0xc, virtual false, abstract: false, final false
  inline void set_ParentNewObjectsUnderContext(bool value);

  /// @brief Method set_ValidateOnNextRun, addr 0x4b33864, size 0x50, virtual false, abstract: false, final false
  static inline void set_ValidateOnNextRun(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectContext(ProjectContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectContext(ProjectContext const&) = delete;

  /// @brief Field ProjectContextResourcePath offset 0xffffffff size 0x8
  static constexpr ::ConstString ProjectContextResourcePath{ u"ProjectContext" };

  /// @brief Field ProjectContextResourcePathOld offset 0xffffffff size 0x8
  static constexpr ::ConstString ProjectContextResourcePathOld{ u"ProjectCompositionRoot" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12463 };

  /// @brief Field PreInstall, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___PreInstall;

  /// @brief Field PostInstall, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___PostInstall;

  /// @brief Field PreResolve, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___PreResolve;

  /// @brief Field PostResolve, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___PostResolve;

  /// @brief Field _parentNewObjectsUnderContext, offset: 0x68, size: 0x1, def value: None
  bool ____parentNewObjectsUnderContext;

  /// @brief Field _editorReflectionBakingCoverageMode, offset: 0x6c, size: 0x4, def value: None
  ::Zenject::ReflectionBakingCoverageModes ____editorReflectionBakingCoverageMode;

  /// @brief Field _buildsReflectionBakingCoverageMode, offset: 0x70, size: 0x4, def value: None
  ::Zenject::ReflectionBakingCoverageModes ____buildsReflectionBakingCoverageMode;

  /// @brief Field _settings, offset: 0x78, size: 0x8, def value: None
  ::Zenject::ZenjectSettings* ____settings;

  /// @brief Field _container, offset: 0x80, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ProjectContext, ___PreInstall) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PostInstall) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PreResolve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ___PostResolve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____parentNewObjectsUnderContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____editorReflectionBakingCoverageMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____buildsReflectionBakingCoverageMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____settings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectContext, ____container) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ProjectContext, 0x88>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ProjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectContext*, "Zenject", "ProjectContext");
