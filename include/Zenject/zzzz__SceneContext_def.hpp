#pragma once
// IWYU pragma private; include "Zenject/SceneContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__RunnableContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneContext)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::SceneManagement {
struct Scene;
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
class SceneDecoratorContext;
}
namespace Zenject {
class __SceneContext____c;
}
namespace Zenject {
class __SceneContext____c__DisplayClass49_0;
}
namespace Zenject {
class __SceneContext____c__DisplayClass51_0;
}
// Forward declare root types
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class __SceneContext____c;
}
namespace Zenject {
class __SceneContext____c__DisplayClass49_0;
}
namespace Zenject {
class __SceneContext____c__DisplayClass51_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneContext);
MARK_REF_PTR_T(::Zenject::__SceneContext____c);
MARK_REF_PTR_T(::Zenject::__SceneContext____c__DisplayClass49_0);
MARK_REF_PTR_T(::Zenject::__SceneContext____c__DisplayClass51_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::SceneContext::<>c*
class CORDL_TYPE __SceneContext____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__SceneContext____c* __9;

  /// @brief Field <>9__49_0, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__49_0,
      put = setStaticF___9__49_0)) ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* __9__49_0;

  /// @brief Field <>9__49_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__49_1,
      put = setStaticF___9__49_1)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* __9__49_1;

  /// @brief Field <>9__49_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__49_3, put = setStaticF___9__49_3)) ::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>* __9__49_3;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__50_0,
      put = setStaticF___9__50_0)) ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* __9__50_0;

  /// @brief Field <>9__50_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__50_1,
      put = setStaticF___9__50_1)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>* __9__50_1;

  static inline ::Zenject::__SceneContext____c* New_ctor();

  /// @brief Method <GetParentContainers>b__49_0, addr 0x4aaf7cc, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* _GetParentContainers_b__49_0(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method <GetParentContainers>b__49_1, addr 0x4aaf7e8, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>* _GetParentContainers_b__49_1(::UnityEngine::GameObject* root);

  /// @brief Method <GetParentContainers>b__49_3, addr 0x4aaf838, size 0x24, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* _GetParentContainers_b__49_3(::Zenject::SceneContext* x);

  /// @brief Method <LookupDecoratorContexts>b__50_0, addr 0x4aaf85c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* _LookupDecoratorContexts_b__50_0(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method <LookupDecoratorContexts>b__50_1, addr 0x4aaf878, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>* _LookupDecoratorContexts_b__50_1(::UnityEngine::GameObject* root);

  /// @brief Method __zenCreate, addr 0x4aaf8c8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4aaf91c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4aaf7c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__SceneContext____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF___9__49_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* getStaticF___9__49_1();

  static inline ::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>* getStaticF___9__49_3();

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF___9__50_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>* getStaticF___9__50_1();

  static inline void setStaticF___9(::Zenject::__SceneContext____c* value);

  static inline void setStaticF___9__49_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* value);

  static inline void setStaticF___9__49_1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneContext>>*>* value);

  static inline void setStaticF___9__49_3(::System::Func_2<::UnityW<::Zenject::SceneContext>, ::Zenject::DiContainer*>* value);

  static inline void setStaticF___9__50_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>*>* value);

  static inline void setStaticF___9__50_1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::Zenject::SceneDecoratorContext>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c(__SceneContext____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c(__SceneContext____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::SceneContext::<>c__DisplayClass49_0*
class CORDL_TYPE __SceneContext____c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__4, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__4, put = __cordl_internal_set___9__4)) ::System::Func_2<::StringW, bool>* __9__4;

  /// @brief Field parentContractNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentContractNames, put = __cordl_internal_set_parentContractNames)) ::System::Collections::Generic::IEnumerable_1<::StringW>* parentContractNames;

  static inline ::Zenject::__SceneContext____c__DisplayClass49_0* New_ctor();

  /// @brief Method <GetParentContainers>b__2, addr 0x4aafad4, size 0xd0, virtual false, abstract: false, final false
  inline bool _GetParentContainers_b__2(::Zenject::SceneContext* sceneContext);

  /// @brief Method <GetParentContainers>b__4, addr 0x4aafba4, size 0x58, virtual false, abstract: false, final false
  inline bool _GetParentContainers_b__4(::StringW x);

  constexpr ::System::Func_2<::StringW, bool>*& __cordl_internal_get___9__4();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, bool>*> const& __cordl_internal_get___9__4() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_parentContractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_parentContractNames() const;

  constexpr void __cordl_internal_set___9__4(::System::Func_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_parentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method __zenCreate, addr 0x4aafbfc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4aafc50, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4aae684, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c__DisplayClass49_0(__SceneContext____c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c__DisplayClass49_0(__SceneContext____c__DisplayClass49_0 const&) = delete;

  /// @brief Field parentContractNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___parentContractNames;

  /// @brief Field <>9__4, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::StringW, bool>* _____9__4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c__DisplayClass49_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass49_0, ___parentContractNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass49_0, _____9__4) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass51_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::SceneContext::<>c__DisplayClass51_0*
class CORDL_TYPE __SceneContext____c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parents, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parents, put = __cordl_internal_set_parents)) ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parents;

  static inline ::Zenject::__SceneContext____c__DisplayClass51_0* New_ctor();

  /// @brief Method <Install>b__0, addr 0x4aafe08, size 0x78, virtual false, abstract: false, final false
  inline bool _Install_b__0(::Zenject::DiContainer* x);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*& __cordl_internal_get_parents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*> const& __cordl_internal_get_parents() const;

  constexpr void __cordl_internal_set_parents(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value);

  /// @brief Method __zenCreate, addr 0x4aafe80, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4aafed4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4aae98c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c__DisplayClass51_0(__SceneContext____c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c__DisplayClass51_0(__SceneContext____c__DisplayClass51_0 const&) = delete;

  /// @brief Field parents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* ___parents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c__DisplayClass51_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass51_0, ___parents) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::SceneContext
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 186, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SceneContext*
class CORDL_TYPE SceneContext : public ::Zenject::RunnableContext {
public:
  // Declarations
  using __c = ::Zenject::__SceneContext____c;

  using __c__DisplayClass49_0 = ::Zenject::__SceneContext____c__DisplayClass49_0;

  using __c__DisplayClass51_0 = ::Zenject::__SceneContext____c__DisplayClass51_0;

  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_ContractNames, put = set_ContractNames)) ::System::Collections::Generic::IEnumerable_1<::StringW>* ContractNames;

  /// @brief Field ExtraBindingsEarlyInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsEarlyInstallMethod,
                             put = setStaticF_ExtraBindingsEarlyInstallMethod)) ::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsEarlyInstallMethod;

  /// @brief Field ExtraBindingsInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsInstallMethod, put = setStaticF_ExtraBindingsInstallMethod)) ::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsInstallMethod;

  /// @brief Field ExtraBindingsLateInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsLateInstallMethod,
                             put = setStaticF_ExtraBindingsLateInstallMethod)) ::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsLateInstallMethod;

  /// @brief Field ExtraPostInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraPostInstallMethod, put = setStaticF_ExtraPostInstallMethod)) ::System::Action_1<::Zenject::DiContainer*>* ExtraPostInstallMethod;

  __declspec(property(get = get_HasInstalled)) bool HasInstalled;

  __declspec(property(get = get_HasResolved)) bool HasResolved;

  __declspec(property(get = get_IsValidating)) bool IsValidating;

  /// @brief Field OnPostInstall, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPostInstall, put = __cordl_internal_set_OnPostInstall)) ::UnityEngine::Events::UnityEvent* OnPostInstall;

  /// @brief Field OnPostResolve, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPostResolve, put = __cordl_internal_set_OnPostResolve)) ::UnityEngine::Events::UnityEvent* OnPostResolve;

  /// @brief Field OnPreInstall, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreInstall, put = __cordl_internal_set_OnPreInstall)) ::UnityEngine::Events::UnityEvent* OnPreInstall;

  /// @brief Field OnPreResolve, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreResolve, put = __cordl_internal_set_OnPreResolve)) ::UnityEngine::Events::UnityEvent* OnPreResolve;

  /// @brief Field ParentContainers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ParentContainers, put = setStaticF_ParentContainers)) ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* ParentContainers;

  __declspec(property(get = get_ParentContractNames, put = set_ParentContractNames)) ::System::Collections::Generic::IEnumerable_1<::StringW>* ParentContractNames;

  __declspec(property(get = get_ParentNewObjectsUnderSceneContext, put = set_ParentNewObjectsUnderSceneContext)) bool ParentNewObjectsUnderSceneContext;

  /// @brief Field PostInstall, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PostInstall, put = __cordl_internal_set_PostInstall)) ::System::Action* PostInstall;

  /// @brief Field PostResolve, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PostResolve, put = __cordl_internal_set_PostResolve)) ::System::Action* PostResolve;

  /// @brief Field PreInstall, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_PreInstall, put = __cordl_internal_set_PreInstall)) ::System::Action* PreInstall;

  /// @brief Field PreResolve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PreResolve, put = __cordl_internal_set_PreResolve)) ::System::Action* PreResolve;

  /// @brief Field _container, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _contractNames, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__contractNames, put = __cordl_internal_set__contractNames)) ::System::Collections::Generic::List_1<::StringW>* _contractNames;

  /// @brief Field _decoratorContexts, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__decoratorContexts,
                      put = __cordl_internal_set__decoratorContexts)) ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* _decoratorContexts;

  /// @brief Field _hasInstalled, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInstalled, put = __cordl_internal_set__hasInstalled)) bool _hasInstalled;

  /// @brief Field _hasResolved, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get__hasResolved, put = __cordl_internal_set__hasResolved)) bool _hasResolved;

  /// @brief Field _parentContractNames, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__parentContractNames, put = __cordl_internal_set__parentContractNames)) ::System::Collections::Generic::List_1<::StringW>* _parentContractNames;

  /// @brief Field _parentNewObjectsUnderSceneContext, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__parentNewObjectsUnderSceneContext, put = __cordl_internal_set__parentNewObjectsUnderSceneContext)) bool _parentNewObjectsUnderSceneContext;

  /// @brief Method Awake, addr 0x4aad9a4, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Create, addr 0x4aaf3ec, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::Zenject::SceneContext> Create();

  /// @brief Method GetInjectableMonoBehaviours, addr 0x4aaf3a0, size 0x4c, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours);

  /// @brief Method GetParentContainers, addr 0x4aae0b4, size 0x5d0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* GetParentContainers();

  /// @brief Method GetRootGameObjects, addr 0x4aae088, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects();

  /// @brief Method Install, addr 0x4aad9d4, size 0x5f0, virtual false, abstract: false, final false
  inline void Install();

  /// @brief Method InstallBindings, addr 0x4aaeb48, size 0x704, virtual false, abstract: false, final false
  inline void InstallBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableMonoBehaviours);

  /// @brief Method LookupDecoratorContexts, addr 0x4aae68c, size 0x300, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* LookupDecoratorContexts();

  static inline ::Zenject::SceneContext* New_ctor();

  /// @brief Method Resolve, addr 0x4aadfc4, size 0x9c, virtual false, abstract: false, final false
  inline void Resolve();

  /// @brief Method RunInternal, addr 0x4aae060, size 0x28, virtual true, abstract: false, final false
  inline void RunInternal();

  /// @brief Method Validate, addr 0x4aad9a8, size 0x2c, virtual false, abstract: false, final false
  inline void Validate();

  /// @brief Method <LookupDecoratorContexts>b__50_2, addr 0x4aaf5a0, size 0x5c, virtual false, abstract: false, final false
  inline bool _LookupDecoratorContexts_b__50_2(::Zenject::SceneDecoratorContext* decoratorContext);

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPostInstall();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_OnPostInstall() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPostResolve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_OnPostResolve() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPreInstall();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_OnPreInstall() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPreResolve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_OnPreResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PostInstall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_PostInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PostResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_PostResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PreInstall();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_PreInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PreResolve();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_PreResolve() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__contractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__contractNames() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>*& __cordl_internal_get__decoratorContexts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>*> const& __cordl_internal_get__decoratorContexts() const;

  constexpr bool const& __cordl_internal_get__hasInstalled() const;

  constexpr bool& __cordl_internal_get__hasInstalled();

  constexpr bool const& __cordl_internal_get__hasResolved() const;

  constexpr bool& __cordl_internal_get__hasResolved();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__parentContractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__parentContractNames() const;

  constexpr bool const& __cordl_internal_get__parentNewObjectsUnderSceneContext() const;

  constexpr bool& __cordl_internal_get__parentNewObjectsUnderSceneContext();

  constexpr void __cordl_internal_set_OnPostInstall(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_OnPostResolve(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_OnPreInstall(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_OnPreResolve(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_PostInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PostResolve(::System::Action* value);

  constexpr void __cordl_internal_set_PreInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PreResolve(::System::Action* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__contractNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__decoratorContexts(::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* value);

  constexpr void __cordl_internal_set__hasInstalled(bool value);

  constexpr void __cordl_internal_set__hasResolved(bool value);

  constexpr void __cordl_internal_set__parentContractNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__parentNewObjectsUnderSceneContext(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4aaf5fc, size 0x16c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4aaf49c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PostInstall, addr 0x4aad410, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostInstall(::System::Action* value);

  /// @brief Method add_PostResolve, addr 0x4aad680, size 0x9c, virtual false, abstract: false, final false
  inline void add_PostResolve(::System::Action* value);

  /// @brief Method add_PreInstall, addr 0x4aad2d8, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreInstall(::System::Action* value);

  /// @brief Method add_PreResolve, addr 0x4aad548, size 0x9c, virtual false, abstract: false, final false
  inline void add_PreResolve(::System::Action* value);

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsEarlyInstallMethod();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsInstallMethod();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsLateInstallMethod();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraPostInstallMethod();

  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* getStaticF_ParentContainers();

  /// @brief Method get_Container, addr 0x4aad7b8, size 0x8, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_ContractNames, addr 0x4aad7fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ContractNames();

  /// @brief Method get_HasInstalled, addr 0x4aad7c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasInstalled();

  /// @brief Method get_HasResolved, addr 0x4aad7c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasResolved();

  /// @brief Method get_IsValidating, addr 0x4aad7d0, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsValidating();

  /// @brief Method get_ParentContractNames, addr 0x4aad894, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ParentContractNames();

  /// @brief Method get_ParentNewObjectsUnderSceneContext, addr 0x4aad990, size 0x8, virtual false, abstract: false, final false
  inline bool get_ParentNewObjectsUnderSceneContext();

  /// @brief Method remove_PostInstall, addr 0x4aad4ac, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostInstall(::System::Action* value);

  /// @brief Method remove_PostResolve, addr 0x4aad71c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PostResolve(::System::Action* value);

  /// @brief Method remove_PreInstall, addr 0x4aad374, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreInstall(::System::Action* value);

  /// @brief Method remove_PreResolve, addr 0x4aad5e4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_PreResolve(::System::Action* value);

  static inline void setStaticF_ExtraBindingsEarlyInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline void setStaticF_ExtraBindingsInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline void setStaticF_ExtraBindingsLateInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline void setStaticF_ExtraPostInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline void setStaticF_ParentContainers(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value);

  /// @brief Method set_ContractNames, addr 0x4aad804, size 0x90, virtual false, abstract: false, final false
  inline void set_ContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method set_ParentContractNames, addr 0x4aad934, size 0x5c, virtual false, abstract: false, final false
  inline void set_ParentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method set_ParentNewObjectsUnderSceneContext, addr 0x4aad998, size 0xc, virtual false, abstract: false, final false
  inline void set_ParentNewObjectsUnderSceneContext(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContext(SceneContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContext(SceneContext const&) = delete;

  /// @brief Field PreInstall, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___PreInstall;

  /// @brief Field PostInstall, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___PostInstall;

  /// @brief Field PreResolve, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___PreResolve;

  /// @brief Field PostResolve, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___PostResolve;

  /// @brief Field OnPreInstall, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPreInstall;

  /// @brief Field OnPostInstall, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPostInstall;

  /// @brief Field OnPreResolve, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPreResolve;

  /// @brief Field OnPostResolve, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPostResolve;

  /// @brief Field _parentNewObjectsUnderSceneContext, offset: 0x90, size: 0x1, def value: None
  bool ____parentNewObjectsUnderSceneContext;

  /// @brief Field _contractNames, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____contractNames;

  /// @brief Field _parentContractNames, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____parentContractNames;

  /// @brief Field _container, offset: 0xa8, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _decoratorContexts, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Zenject::SceneDecoratorContext>>* ____decoratorContexts;

  /// @brief Field _hasInstalled, offset: 0xb8, size: 0x1, def value: None
  bool ____hasInstalled;

  /// @brief Field _hasResolved, offset: 0xb9, size: 0x1, def value: None
  bool ____hasResolved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12425 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneContext, 0xc0>, "Size mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PreInstall) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PostInstall) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PreResolve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PostResolve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPreInstall) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPostInstall) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPreResolve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPostResolve) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____parentNewObjectsUnderSceneContext) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____contractNames) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____parentContractNames) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____container) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____decoratorContexts) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____hasInstalled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____hasResolved) == 0xb9, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext*, "Zenject", "SceneContext");
NEED_NO_BOX(::Zenject::__SceneContext____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c*, "Zenject", "SceneContext/<>c");
NEED_NO_BOX(::Zenject::__SceneContext____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c__DisplayClass49_0*, "Zenject", "SceneContext/<>c__DisplayClass49_0");
NEED_NO_BOX(::Zenject::__SceneContext____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c__DisplayClass51_0*, "Zenject", "SceneContext/<>c__DisplayClass51_0");
