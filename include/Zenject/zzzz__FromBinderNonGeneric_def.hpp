#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FromBinderNonGeneric)
namespace Zenject {
class BindInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Component;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
template <typename TConcrete, typename TFactory> class __FromBinderNonGeneric____c__1_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
template <typename TConcrete, typename TFactory> class __FromBinderNonGeneric____c__1_2;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FromBinderNonGeneric);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderNonGeneric____c__1_2);
// Type: ::<>c__1`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TConcrete, typename TFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10915))
// CS Name: ::FromBinderNonGeneric::<>c__1`2<TConcrete,TFactory>*
class CORDL_TYPE __FromBinderNonGeneric____c__1_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* __9__1_0;

  static inline void setStaticF___9(::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* value);

  static inline ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* getStaticF___9__1_0();

  static inline ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <FromFactory>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>* x);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderNonGeneric____c__1_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinderNonGeneric____c__1_2(__FromBinderNonGeneric____c__1_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderNonGeneric____c__1_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinderNonGeneric____c__1_2(__FromBinderNonGeneric____c__1_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinderNonGeneric____c__1_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FromBinderNonGeneric
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10916))
// CS Name: ::Zenject::FromBinderNonGeneric*
class CORDL_TYPE FromBinderNonGeneric : public ::Zenject::FromBinder {
public:
  // Declarations
  template <typename TConcrete, typename TFactory> using __c__1_2 = ::Zenject::__FromBinderNonGeneric____c__1_2<TConcrete, TFactory>;

  static inline ::Zenject::FromBinderNonGeneric* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method .ctor addr 0x2ec6c9c size 0x30 virtual false final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method FromFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TConcrete, typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromIFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromMethod addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TConcrete> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method);

  /// @brief Method FromMethodMultiple addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TConcrete>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveAllGetter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TObj, typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromInstance addr 0x2eda054 size 0x4 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(::System::Object* instance);

  /// @brief Method FromComponentsInChildren addr 0x2eda058 size 0x14 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<::UnityEngine::Component*, bool>* predicate, bool includeInactive);

  /// @brief Method FromComponentsInChildren addr 0x2eda06c size 0xc virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool excludeSelf, ::System::Func_2<::UnityEngine::Component*, bool>* predicate, bool includeInactive);

  /// @brief Method FromComponentsInHierarchy addr 0x2eda078 size 0x8 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<::UnityEngine::Component*, bool>* predicate, bool includeInactive);

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderNonGeneric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderNonGeneric(FromBinderNonGeneric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderNonGeneric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderNonGeneric(FromBinderNonGeneric const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderNonGeneric();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FromBinderNonGeneric, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FromBinderNonGeneric);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinderNonGeneric*, "Zenject", "FromBinderNonGeneric");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderNonGeneric____c__1_2, "Zenject", "FromBinderNonGeneric/<>c__1`2");
