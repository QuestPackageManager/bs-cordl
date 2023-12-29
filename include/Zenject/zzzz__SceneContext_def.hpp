#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__RunnableContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SceneContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System {
class Action;
}
namespace Zenject {
class __SceneContext____c__DisplayClass49_0;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class __SceneContext____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class SceneDecoratorContext;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace Zenject {
class __SceneContext____c__DisplayClass51_0;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System {
class Object;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11051))
// CS Name: ::SceneContext::<>c__DisplayClass49_0*
class CORDL_TYPE __SceneContext____c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentContractNames, offset 0x10, size 0x8
  __declspec(property(get = __get_parentContractNames, put = __set_parentContractNames))::System::Collections::Generic::IEnumerable_1<::StringW>* parentContractNames;

  /// @brief Field <>9__4, offset 0x18, size 0x8
  __declspec(property(get = __get___9__4, put = __set___9__4))::System::Func_2<::StringW, bool>* __9__4;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __get_parentContractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get_parentContractNames() const;

  constexpr void __set_parentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr ::System::Func_2<::StringW, bool>*& __get___9__4();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, bool>*> const& __get___9__4() const;

  constexpr void __set___9__4(::System::Func_2<::StringW, bool>* value);

  static inline ::Zenject::__SceneContext____c__DisplayClass49_0* New_ctor();

  /// @brief Method .ctor addr 0x2d8abf4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetParentContainers>b__2 addr 0x2d8bd04 size 0xcc virtual false final false
  inline bool _GetParentContainers_b__2(::Zenject::SceneContext* sceneContext);

  /// @brief Method <GetParentContainers>b__4 addr 0x2d8bdd0 size 0x58 virtual false final false
  inline bool _GetParentContainers_b__4(::StringW x);

  /// @brief Method __zenCreate addr 0x2d8be28 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8be84 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c__DisplayClass49_0(__SceneContext____c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c__DisplayClass49_0(__SceneContext____c__DisplayClass49_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c__DisplayClass49_0();

public:
  /// @brief Field parentContractNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___parentContractNames;

  /// @brief Field <>9__4, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::StringW, bool>* _____9__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c__DisplayClass49_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass49_0, ___parentContractNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass49_0, _____9__4) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11052))
// CS Name: ::SceneContext::<>c*
class CORDL_TYPE __SceneContext____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__SceneContext____c* __9;

  /// @brief Field <>9__49_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__49_0,
                             put = setStaticF___9__49_0))::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* __9__49_0;

  /// @brief Field <>9__49_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__49_1,
                             put = setStaticF___9__49_1))::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* __9__49_1;

  /// @brief Field <>9__49_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__49_3, put = setStaticF___9__49_3))::System::Func_2<::Zenject::SceneContext*, ::Zenject::DiContainer*>* __9__49_3;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_0,
                             put = setStaticF___9__50_0))::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* __9__50_0;

  /// @brief Field <>9__50_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_1,
                             put = setStaticF___9__50_1))::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>*>* __9__50_1;

  static inline void setStaticF___9(::Zenject::__SceneContext____c* value);

  static inline ::Zenject::__SceneContext____c* getStaticF___9();

  static inline void setStaticF___9__49_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* value);

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* getStaticF___9__49_0();

  static inline void setStaticF___9__49_1(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* value);

  static inline ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>*>* getStaticF___9__49_1();

  static inline void setStaticF___9__49_3(::System::Func_2<::Zenject::SceneContext*, ::Zenject::DiContainer*>* value);

  static inline ::System::Func_2<::Zenject::SceneContext*, ::Zenject::DiContainer*>* getStaticF___9__49_3();

  static inline void setStaticF___9__50_0(::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* value);

  static inline ::System::Func_2<::UnityEngine::SceneManagement::Scene, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*>* getStaticF___9__50_0();

  static inline void setStaticF___9__50_1(::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>*>* value);

  static inline ::System::Func_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>*>* getStaticF___9__50_1();

  static inline ::Zenject::__SceneContext____c* New_ctor();

  /// @brief Method .ctor addr 0x2d8c0a8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetParentContainers>b__49_0 addr 0x2d8c0b0 size 0x1c virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* _GetParentContainers_b__49_0(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method <GetParentContainers>b__49_1 addr 0x2d8c0cc size 0x50 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneContext*>* _GetParentContainers_b__49_1(::UnityEngine::GameObject* root);

  /// @brief Method <GetParentContainers>b__49_3 addr 0x2d8c11c size 0x20 virtual false final false
  inline ::Zenject::DiContainer* _GetParentContainers_b__49_3(::Zenject::SceneContext* x);

  /// @brief Method <LookupDecoratorContexts>b__50_0 addr 0x2d8c13c size 0x1c virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* _LookupDecoratorContexts_b__50_0(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method <LookupDecoratorContexts>b__50_1 addr 0x2d8c158 size 0x50 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::SceneDecoratorContext*>* _LookupDecoratorContexts_b__50_1(::UnityEngine::GameObject* root);

  /// @brief Method __zenCreate addr 0x2d8c1a8 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8c204 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c(__SceneContext____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c(__SceneContext____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass51_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11053))
// CS Name: ::SceneContext::<>c__DisplayClass51_0*
class CORDL_TYPE __SceneContext____c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parents, offset 0x10, size 0x8
  __declspec(property(get = __get_parents, put = __set_parents))::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parents;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*& __get_parents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>*> const& __get_parents() const;

  constexpr void __set_parents(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SceneContext____c__DisplayClass51_0* New_ctor();

  /// @brief Method .ctor addr 0x2d8af0c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Install>b__0 addr 0x2d8c3c4 size 0x78 virtual false final false
  inline bool _Install_b__0(::Zenject::DiContainer* x);

  /// @brief Method __zenCreate addr 0x2d8c43c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8c498 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SceneContext____c__DisplayClass51_0(__SceneContext____c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SceneContext____c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SceneContext____c__DisplayClass51_0(__SceneContext____c__DisplayClass51_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SceneContext____c__DisplayClass51_0();

public:
  /// @brief Field parents, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* ___parents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SceneContext____c__DisplayClass51_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__SceneContext____c__DisplayClass51_0, ___parents) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::SceneContext
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 178, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11054))
// CS Name: ::Zenject::SceneContext*
class CORDL_TYPE SceneContext : public ::Zenject::RunnableContext {
public:
  // Declarations
  using __c__DisplayClass51_0 = ::Zenject::__SceneContext____c__DisplayClass51_0;

  using __c = ::Zenject::__SceneContext____c;

  using __c__DisplayClass49_0 = ::Zenject::__SceneContext____c__DisplayClass49_0;

  /// @brief Field PreInstall, offset 0x48, size 0x8
  __declspec(property(get = __get_PreInstall, put = __set_PreInstall))::System::Action* PreInstall;

  /// @brief Field PostInstall, offset 0x50, size 0x8
  __declspec(property(get = __get_PostInstall, put = __set_PostInstall))::System::Action* PostInstall;

  /// @brief Field PreResolve, offset 0x58, size 0x8
  __declspec(property(get = __get_PreResolve, put = __set_PreResolve))::System::Action* PreResolve;

  /// @brief Field PostResolve, offset 0x60, size 0x8
  __declspec(property(get = __get_PostResolve, put = __set_PostResolve))::System::Action* PostResolve;

  /// @brief Field OnPreInstall, offset 0x68, size 0x8
  __declspec(property(get = __get_OnPreInstall, put = __set_OnPreInstall))::UnityEngine::Events::UnityEvent* OnPreInstall;

  /// @brief Field OnPostInstall, offset 0x70, size 0x8
  __declspec(property(get = __get_OnPostInstall, put = __set_OnPostInstall))::UnityEngine::Events::UnityEvent* OnPostInstall;

  /// @brief Field OnPreResolve, offset 0x78, size 0x8
  __declspec(property(get = __get_OnPreResolve, put = __set_OnPreResolve))::UnityEngine::Events::UnityEvent* OnPreResolve;

  /// @brief Field OnPostResolve, offset 0x80, size 0x8
  __declspec(property(get = __get_OnPostResolve, put = __set_OnPostResolve))::UnityEngine::Events::UnityEvent* OnPostResolve;

  /// @brief Field _parentNewObjectsUnderSceneContext, offset 0x88, size 0x1
  __declspec(property(get = __get__parentNewObjectsUnderSceneContext, put = __set__parentNewObjectsUnderSceneContext)) bool _parentNewObjectsUnderSceneContext;

  /// @brief Field _contractNames, offset 0x90, size 0x8
  __declspec(property(get = __get__contractNames, put = __set__contractNames))::System::Collections::Generic::List_1<::StringW>* _contractNames;

  /// @brief Field _parentContractNames, offset 0x98, size 0x8
  __declspec(property(get = __get__parentContractNames, put = __set__parentContractNames))::System::Collections::Generic::List_1<::StringW>* _parentContractNames;

  /// @brief Field _container, offset 0xa0, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _decoratorContexts, offset 0xa8, size 0x8
  __declspec(property(get = __get__decoratorContexts, put = __set__decoratorContexts))::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* _decoratorContexts;

  /// @brief Field _hasInstalled, offset 0xb0, size 0x1
  __declspec(property(get = __get__hasInstalled, put = __set__hasInstalled)) bool _hasInstalled;

  /// @brief Field _hasResolved, offset 0xb1, size 0x1
  __declspec(property(get = __get__hasResolved, put = __set__hasResolved)) bool _hasResolved;

  /// @brief Field ExtraBindingsEarlyInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsEarlyInstallMethod,
                             put = setStaticF_ExtraBindingsEarlyInstallMethod))::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsEarlyInstallMethod;

  /// @brief Field ExtraBindingsInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsInstallMethod, put = setStaticF_ExtraBindingsInstallMethod))::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsInstallMethod;

  /// @brief Field ExtraBindingsLateInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraBindingsLateInstallMethod,
                             put = setStaticF_ExtraBindingsLateInstallMethod))::System::Action_1<::Zenject::DiContainer*>* ExtraBindingsLateInstallMethod;

  /// @brief Field ExtraPostInstallMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExtraPostInstallMethod, put = setStaticF_ExtraPostInstallMethod))::System::Action_1<::Zenject::DiContainer*>* ExtraPostInstallMethod;

  /// @brief Field ParentContainers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ParentContainers, put = setStaticF_ParentContainers))::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* ParentContainers;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  __declspec(property(get = get_HasResolved)) bool HasResolved;

  __declspec(property(get = get_HasInstalled)) bool HasInstalled;

  __declspec(property(get = get_IsValidating)) bool IsValidating;

  __declspec(property(get = get_ContractNames, put = set_ContractNames))::System::Collections::Generic::IEnumerable_1<::StringW>* ContractNames;

  __declspec(property(get = get_ParentContractNames, put = set_ParentContractNames))::System::Collections::Generic::IEnumerable_1<::StringW>* ParentContractNames;

  __declspec(property(get = get_ParentNewObjectsUnderSceneContext, put = set_ParentNewObjectsUnderSceneContext)) bool ParentNewObjectsUnderSceneContext;

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

  constexpr ::UnityEngine::Events::UnityEvent*& __get_OnPreInstall();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __get_OnPreInstall() const;

  constexpr void __set_OnPreInstall(::UnityEngine::Events::UnityEvent* value);

  constexpr ::UnityEngine::Events::UnityEvent*& __get_OnPostInstall();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __get_OnPostInstall() const;

  constexpr void __set_OnPostInstall(::UnityEngine::Events::UnityEvent* value);

  constexpr ::UnityEngine::Events::UnityEvent*& __get_OnPreResolve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __get_OnPreResolve() const;

  constexpr void __set_OnPreResolve(::UnityEngine::Events::UnityEvent* value);

  constexpr ::UnityEngine::Events::UnityEvent*& __get_OnPostResolve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __get_OnPostResolve() const;

  constexpr void __set_OnPostResolve(::UnityEngine::Events::UnityEvent* value);

  constexpr bool& __get__parentNewObjectsUnderSceneContext();

  constexpr bool const& __get__parentNewObjectsUnderSceneContext() const;

  constexpr void __set__parentNewObjectsUnderSceneContext(bool value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__contractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__contractNames() const;

  constexpr void __set__contractNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__parentContractNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__parentContractNames() const;

  constexpr void __set__parentContractNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>*& __get__decoratorContexts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>*> const& __get__decoratorContexts() const;

  constexpr void __set__decoratorContexts(::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* value);

  constexpr bool& __get__hasInstalled();

  constexpr bool const& __get__hasInstalled() const;

  constexpr void __set__hasInstalled(bool value);

  constexpr bool& __get__hasResolved();

  constexpr bool const& __get__hasResolved() const;

  constexpr void __set__hasResolved(bool value);

  static inline void setStaticF_ExtraBindingsEarlyInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsEarlyInstallMethod();

  static inline void setStaticF_ExtraBindingsInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsInstallMethod();

  static inline void setStaticF_ExtraBindingsLateInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraBindingsLateInstallMethod();

  static inline void setStaticF_ExtraPostInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF_ExtraPostInstallMethod();

  static inline void setStaticF_ParentContainers(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value);

  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* getStaticF_ParentContainers();

  /// @brief Method add_PreInstall addr 0x2d8982c size 0x9c virtual false final false
  inline void add_PreInstall(::System::Action* value);

  /// @brief Method remove_PreInstall addr 0x2d898c8 size 0x9c virtual false final false
  inline void remove_PreInstall(::System::Action* value);

  /// @brief Method add_PostInstall addr 0x2d89964 size 0x9c virtual false final false
  inline void add_PostInstall(::System::Action* value);

  /// @brief Method remove_PostInstall addr 0x2d89a00 size 0x9c virtual false final false
  inline void remove_PostInstall(::System::Action* value);

  /// @brief Method add_PreResolve addr 0x2d89a9c size 0x9c virtual false final false
  inline void add_PreResolve(::System::Action* value);

  /// @brief Method remove_PreResolve addr 0x2d89b38 size 0x9c virtual false final false
  inline void remove_PreResolve(::System::Action* value);

  /// @brief Method add_PostResolve addr 0x2d89bd4 size 0x9c virtual false final false
  inline void add_PostResolve(::System::Action* value);

  /// @brief Method remove_PostResolve addr 0x2d89c70 size 0x9c virtual false final false
  inline void remove_PostResolve(::System::Action* value);

  /// @brief Method get_Container addr 0x2d89d0c size 0x8 virtual true final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_HasResolved addr 0x2d89d14 size 0x8 virtual false final false
  inline bool get_HasResolved();

  /// @brief Method get_HasInstalled addr 0x2d89d1c size 0x8 virtual false final false
  inline bool get_HasInstalled();

  /// @brief Method get_IsValidating addr 0x2d89d24 size 0x2c virtual false final false
  inline bool get_IsValidating();

  /// @brief Method get_ContractNames addr 0x2d89d50 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ContractNames();

  /// @brief Method set_ContractNames addr 0x2d89d58 size 0x90 virtual false final false
  inline void set_ContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method get_ParentContractNames addr 0x2d89de8 size 0x98 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ParentContractNames();

  /// @brief Method set_ParentContractNames addr 0x2d89e80 size 0x5c virtual false final false
  inline void set_ParentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method get_ParentNewObjectsUnderSceneContext addr 0x2d89edc size 0x8 virtual false final false
  inline bool get_ParentNewObjectsUnderSceneContext();

  /// @brief Method set_ParentNewObjectsUnderSceneContext addr 0x2d89ee4 size 0xc virtual false final false
  inline void set_ParentNewObjectsUnderSceneContext(bool value);

  /// @brief Method Awake addr 0x2d89ef0 size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method Validate addr 0x2d89ef4 size 0x2c virtual false final false
  inline void Validate();

  /// @brief Method RunInternal addr 0x2d8a5bc size 0x28 virtual true final false
  inline void RunInternal();

  /// @brief Method GetRootGameObjects addr 0x2d8a5e4 size 0x2c virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();

  /// @brief Method GetParentContainers addr 0x2d8a610 size 0x5e4 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* GetParentContainers();

  /// @brief Method LookupDecoratorContexts addr 0x2d8abfc size 0x310 virtual false final false
  inline ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* LookupDecoratorContexts();

  /// @brief Method Install addr 0x2d89f20 size 0x600 virtual false final false
  inline void Install();

  /// @brief Method Resolve addr 0x2d8a520 size 0x9c virtual false final false
  inline void Resolve();

  /// @brief Method InstallBindings addr 0x2d8b0c8 size 0x70c virtual false final false
  inline void InstallBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);

  /// @brief Method GetInjectableMonoBehaviours addr 0x2d8b928 size 0x4c virtual true final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);

  /// @brief Method Create addr 0x2d8b974 size 0xb0 virtual false final false
  static inline ::Zenject::SceneContext* Create();

  static inline ::Zenject::SceneContext* New_ctor();

  /// @brief Method .ctor addr 0x2d8ba24 size 0x10c virtual false final false
  inline void _ctor();

  /// @brief Method <LookupDecoratorContexts>b__50_2 addr 0x2d8bb30 size 0x5c virtual false final false
  inline bool _LookupDecoratorContexts_b__50_2(::Zenject::SceneDecoratorContext* decoratorContext);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d8bb8c size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContext(SceneContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContext(SceneContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContext();

public:
  /// @brief Field PreInstall, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___PreInstall;

  /// @brief Field PostInstall, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___PostInstall;

  /// @brief Field PreResolve, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___PreResolve;

  /// @brief Field PostResolve, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___PostResolve;

  /// @brief Field OnPreInstall, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPreInstall;

  /// @brief Field OnPostInstall, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPostInstall;

  /// @brief Field OnPreResolve, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPreResolve;

  /// @brief Field OnPostResolve, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___OnPostResolve;

  /// @brief Field _parentNewObjectsUnderSceneContext, offset: 0x88, size: 0x1, def value: None
  bool ____parentNewObjectsUnderSceneContext;

  /// @brief Field _contractNames, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____contractNames;

  /// @brief Field _parentContractNames, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____parentContractNames;

  /// @brief Field _container, offset: 0xa0, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _decoratorContexts, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* ____decoratorContexts;

  /// @brief Field _hasInstalled, offset: 0xb0, size: 0x1, def value: None
  bool ____hasInstalled;

  /// @brief Field _hasResolved, offset: 0xb1, size: 0x1, def value: None
  bool ____hasResolved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneContext, 0xb8>, "Size mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PreInstall) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PostInstall) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PreResolve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___PostResolve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPreInstall) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPostInstall) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPreResolve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ___OnPostResolve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____parentNewObjectsUnderSceneContext) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____contractNames) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____parentContractNames) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____container) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____decoratorContexts) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____hasInstalled) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContext, ____hasResolved) == 0xb1, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext*, "Zenject", "SceneContext");
NEED_NO_BOX(::Zenject::__SceneContext____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c*, "Zenject", "SceneContext/<>c");
NEED_NO_BOX(::Zenject::__SceneContext____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c__DisplayClass49_0*, "Zenject", "SceneContext/<>c__DisplayClass49_0");
NEED_NO_BOX(::Zenject::__SceneContext____c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SceneContext____c__DisplayClass51_0*, "Zenject", "SceneContext/<>c__DisplayClass51_0");
