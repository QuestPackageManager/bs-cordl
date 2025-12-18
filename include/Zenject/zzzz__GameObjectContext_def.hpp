#pragma once
// IWYU pragma private; include "Zenject/GameObjectContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__RunnableContext_def.hpp"
CORDL_MODULE_EXPORT(GameObjectContext)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
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
class MonoKernel;
}
// Forward declare root types
namespace Zenject {
class GameObjectContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GameObjectContext);
// Dependencies Zenject.RunnableContext
namespace Zenject {
// Is value type: false
// CS Name: Zenject.GameObjectContext
class CORDL_TYPE GameObjectContext : public ::Zenject::RunnableContext {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  /// @brief Field PostInstall, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PostInstall, put = __cordl_internal_set_PostInstall)) ::System::Action* PostInstall;

  /// @brief Field PostResolve, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PostResolve, put = __cordl_internal_set_PostResolve)) ::System::Action* PostResolve;

  /// @brief Field PreInstall, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_PreInstall, put = __cordl_internal_set_PreInstall)) ::System::Action* PreInstall;

  /// @brief Field PreResolve, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PreResolve, put = __cordl_internal_set_PreResolve)) ::System::Action* PreResolve;

  /// @brief Field _container, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _kernel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__kernel, put = __cordl_internal_set__kernel)) ::UnityW<::Zenject::MonoKernel> _kernel;

  /// @brief Method Construct, addr 0x6ca2c74, size 0x48, virtual false, abstract: false, final false
  inline void Construct(::Zenject::DiContainer* parentContainer);

  /// @brief Method GetInjectableMonoBehaviours, addr 0x6ca33ac, size 0x248, virtual true, abstract: false, final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* monoBehaviours);

  /// @brief Method GetRootGameObjects, addr 0x6ca2bf4, size 0x80, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* GetRootGameObjects();

  /// @brief Method InstallBindings, addr 0x6ca3118, size 0x220, virtual false, abstract: false, final false
  inline void InstallBindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* injectableMonoBehaviours);

  static inline ::Zenject::GameObjectContext* New_ctor();

  /// @brief Method RunInternal, addr 0x6ca2d64, size 0x39c, virtual true, abstract: false, final false
  inline void RunInternal();

  constexpr ::System::Action* const& __cordl_internal_get_PostInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PostInstall();

  constexpr ::System::Action* const& __cordl_internal_get_PostResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PostResolve();

  constexpr ::System::Action* const& __cordl_internal_get_PreInstall() const;

  constexpr ::System::Action*& __cordl_internal_get_PreInstall();

  constexpr ::System::Action* const& __cordl_internal_get_PreResolve() const;

  constexpr ::System::Action*& __cordl_internal_get_PreResolve();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::Zenject::MonoKernel> const& __cordl_internal_get__kernel() const;

  constexpr ::UnityW<::Zenject::MonoKernel>& __cordl_internal_get__kernel();

  constexpr void __cordl_internal_set_PostInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PostResolve(::System::Action* value);

  constexpr void __cordl_internal_set_PreInstall(::System::Action* value);

  constexpr void __cordl_internal_set_PreResolve(::System::Action* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__kernel(::UnityW<::Zenject::MonoKernel> value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6ca3768, size 0x2cc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x6ca3670, size 0xf8, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x6ca3604, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_PostInstall, addr 0x6ca27e4, size 0xac, virtual false, abstract: false, final false
  inline void add_PostInstall(::System::Action* value);

  /// @brief Method add_PostResolve, addr 0x6ca2a94, size 0xac, virtual false, abstract: false, final false
  inline void add_PostResolve(::System::Action* value);

  /// @brief Method add_PreInstall, addr 0x6ca268c, size 0xac, virtual false, abstract: false, final false
  inline void add_PreInstall(::System::Action* value);

  /// @brief Method add_PreResolve, addr 0x6ca293c, size 0xac, virtual false, abstract: false, final false
  inline void add_PreResolve(::System::Action* value);

  /// @brief Method get_Container, addr 0x6ca2bec, size 0x8, virtual true, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method remove_PostInstall, addr 0x6ca2890, size 0xac, virtual false, abstract: false, final false
  inline void remove_PostInstall(::System::Action* value);

  /// @brief Method remove_PostResolve, addr 0x6ca2b40, size 0xac, virtual false, abstract: false, final false
  inline void remove_PostResolve(::System::Action* value);

  /// @brief Method remove_PreInstall, addr 0x6ca2738, size 0xac, virtual false, abstract: false, final false
  inline void remove_PreInstall(::System::Action* value);

  /// @brief Method remove_PreResolve, addr 0x6ca29e8, size 0xac, virtual false, abstract: false, final false
  inline void remove_PreResolve(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameObjectContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectContext(GameObjectContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectContext(GameObjectContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14447 };

  /// @brief Field PreInstall, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___PreInstall;

  /// @brief Field PostInstall, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___PostInstall;

  /// @brief Field PreResolve, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___PreResolve;

  /// @brief Field PostResolve, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___PostResolve;

  /// @brief Field _kernel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::Zenject::MonoKernel> ____kernel;

  /// @brief Field _container, offset: 0x78, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::GameObjectContext, ___PreInstall) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectContext, ___PostInstall) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectContext, ___PreResolve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectContext, ___PostResolve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectContext, ____kernel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::GameObjectContext, ____container) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::GameObjectContext, 0x80>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GameObjectContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GameObjectContext*, "Zenject", "GameObjectContext");
