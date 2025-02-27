#pragma once
// IWYU pragma private; include "Zenject/FromBinderGeneric_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
CORDL_MODULE_EXPORT(FromBinderGeneric_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Component;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TContract, typename TFactory> class FromBinderGeneric_1___c__1_1;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass14_0;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass15_0;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass3_0;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1;
}
namespace Zenject {
template <typename TContract, typename TFactory> class FromBinderGeneric_1___c__1_1;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass14_0;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass15_0;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1___c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1);
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1___c__1_1);
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1___c__DisplayClass14_0);
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1___c__DisplayClass15_0);
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1___c__DisplayClass3_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract, typename TFactory>
// Is value type: false
// CS Name: Zenject.FromBinderGeneric`1/<>c__1`1<TContract,TFactory>
class CORDL_TYPE FromBinderGeneric_1___c__1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* __9__1_0;

  static inline ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* New_ctor();

  /// @brief Method <FromFactory>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>* value);

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1___c__1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1___c__1_1(FromBinderGeneric_1___c__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1___c__1_1(FromBinderGeneric_1___c__1_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12252 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FromBinderGeneric`1/<>c__DisplayClass14_0<TContract>
class CORDL_TYPE FromBinderGeneric_1___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TContract, bool>* predicate;

  static inline ::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>* New_ctor();

  /// @brief Method <FromComponentsInChildren>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component* component);

  constexpr ::System::Func_2<TContract, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TContract, bool>*& __cordl_internal_get_predicate();

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TContract, bool>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1___c__DisplayClass14_0(FromBinderGeneric_1___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1___c__DisplayClass14_0(FromBinderGeneric_1___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12253 };

  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TContract, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FromBinderGeneric`1/<>c__DisplayClass15_0<TContract>
class CORDL_TYPE FromBinderGeneric_1___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<TContract, bool>* predicate;

  static inline ::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>* New_ctor();

  /// @brief Method <FromComponentsInHierarchy>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component* component);

  constexpr ::System::Func_2<TContract, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<TContract, bool>*& __cordl_internal_get_predicate();

  constexpr void __cordl_internal_set_predicate(::System::Func_2<TContract, bool>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1___c__DisplayClass15_0(FromBinderGeneric_1___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1___c__DisplayClass15_0(FromBinderGeneric_1___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12254 };

  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TContract, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FromBinderGeneric`1/<>c__DisplayClass3_0<TContract>
class CORDL_TYPE FromBinderGeneric_1___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_1<TContract>* method;

  static inline ::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>* New_ctor();

  /// @brief Method <FromMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TContract _FromMethod_b__0(::Zenject::InjectContext* ctx);

  constexpr ::System::Func_1<TContract>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_1<TContract>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_1<TContract>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1___c__DisplayClass3_0(FromBinderGeneric_1___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1___c__DisplayClass3_0(FromBinderGeneric_1___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12255 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.FromBinder
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FromBinderGeneric`1<TContract>
class CORDL_TYPE FromBinderGeneric_1 : public ::Zenject::FromBinder {
public:
  // Declarations
  template <typename TFactory> using __c__1_1 = ::Zenject::FromBinderGeneric_1___c__1_1<TContract, TFactory>;

  using __c__DisplayClass14_0 = ::Zenject::FromBinderGeneric_1___c__DisplayClass14_0<TContract>;

  using __c__DisplayClass15_0 = ::Zenject::FromBinderGeneric_1___c__DisplayClass15_0<TContract>;

  using __c__DisplayClass3_0 = ::Zenject::FromBinderGeneric_1___c__DisplayClass3_0<TContract>;

  /// @brief Method FromComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool excludeSelf, ::System::Func_2<TContract, bool>* predicate, bool includeInactive);

  /// @brief Method FromComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<TContract, bool>* predicate, bool includeInactive);

  /// @brief Method FromComponentsInHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<TContract, bool>* predicate, bool includeInactive);

  /// @brief Method FromFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(TContract instance);

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<TContract>* method);

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*, TContract>* method);

  /// @brief Method FromMethodMultiple, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>* method);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj, TContract>* method);

  static inline ::Zenject::FromBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1(FromBinderGeneric_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1(FromBinderGeneric_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1, "Zenject", "FromBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1___c__1_1, "Zenject", "FromBinderGeneric`1/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1___c__DisplayClass14_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1___c__DisplayClass15_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1___c__DisplayClass3_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass3_0");
