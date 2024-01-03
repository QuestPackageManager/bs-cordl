#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(FromBinderGeneric_1)
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace System {
class Object;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass15_0;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass3_0;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass14_0;
}
namespace Zenject {
template <typename TContract, typename TFactory> class __FromBinderGeneric_1____c__1_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1;
}
namespace Zenject {
template <typename TContract, typename TFactory> class __FromBinderGeneric_1____c__1_1;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass14_0;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass15_0;
}
namespace Zenject {
template <typename TContract> class __FromBinderGeneric_1____c__DisplayClass3_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FromBinderGeneric_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__1_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0);
// Type: ::<>c__1`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract, typename TFactory>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10910))
// CS Name: ::FromBinderGeneric`1::<>c__1`1<TContract,TFactory>*
class CORDL_TYPE __FromBinderGeneric_1____c__1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* __9__1_0;

  static inline void setStaticF___9(::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* value);

  static inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__1_0();

  static inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromFactory>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinderGeneric_1____c__1_1(__FromBinderGeneric_1____c__1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinderGeneric_1____c__1_1(__FromBinderGeneric_1____c__1_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinderGeneric_1____c__1_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10911))
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __get_method, put = __set_method))::System::Func_1<TContract>* method;

  constexpr ::System::Func_1<TContract>*& __get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TContract>*> const& __get_method() const;

  constexpr void __set_method(::System::Func_1<TContract>* value);

  static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TContract _FromMethod_b__0(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinderGeneric_1____c__DisplayClass3_0(__FromBinderGeneric_1____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinderGeneric_1____c__DisplayClass3_0();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10912))
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass14_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __get_predicate, put = __set_predicate))::System::Func_2<TContract, bool>* predicate;

  constexpr ::System::Func_2<TContract, bool>*& __get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract, bool>*> const& __get_predicate() const;

  constexpr void __set_predicate(::System::Func_2<TContract, bool>* value);

  static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInChildren>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildren_b__0(::UnityEngine::Component* component);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinderGeneric_1____c__DisplayClass14_0(__FromBinderGeneric_1____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinderGeneric_1____c__DisplayClass14_0();

public:
  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TContract, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10913))
// CS Name: ::FromBinderGeneric`1::<>c__DisplayClass15_0<TContract>*
class CORDL_TYPE __FromBinderGeneric_1____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __get_predicate, put = __set_predicate))::System::Func_2<TContract, bool>* predicate;

  constexpr ::System::Func_2<TContract, bool>*& __get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract, bool>*> const& __get_predicate() const;

  constexpr void __set_predicate(::System::Func_2<TContract, bool>* value);

  static inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInHierarchy>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _FromComponentsInHierarchy_b__0(::UnityEngine::Component* component);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinderGeneric_1____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinderGeneric_1____c__DisplayClass15_0(__FromBinderGeneric_1____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinderGeneric_1____c__DisplayClass15_0();

public:
  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TContract, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FromBinderGeneric`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10914))
// CS Name: ::Zenject::FromBinderGeneric`1<TContract>*
class CORDL_TYPE FromBinderGeneric_1 : public ::Zenject::FromBinder {
public:
  // Declarations
  using __c__DisplayClass15_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>;

  using __c__DisplayClass14_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>;

  using __c__DisplayClass3_0 = ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>;

  template <typename TFactory> using __c__1_1 = ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>;

  static inline ::Zenject::FromBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method FromFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_1<TContract>* method);

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::InjectContext*, TContract>* method);

  /// @brief Method FromMethodMultiple, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveAllGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstance(TContract instance);

  /// @brief Method FromComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param includeInactive: bool (default: true)
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(::System::Func_2<TContract, bool>* predicate, bool includeInactive = true);

  /// @brief Method FromComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param excludeSelf: bool (default: false)
  /// @param predicate: ::System::Func_2<TContract,bool>* (default: nullptr)
  /// @param includeInactive: bool (default: true)
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildren(bool excludeSelf = false, ::System::Func_2<TContract, bool>* predicate = nullptr,
                                                                                           bool includeInactive = true);

  /// @brief Method FromComponentsInHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param predicate: ::System::Func_2<TContract,bool>* (default: nullptr)
  /// @param includeInactive: bool (default: true)
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchy(::System::Func_2<TContract, bool>* predicate = nullptr, bool includeInactive = true);

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinderGeneric_1(FromBinderGeneric_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinderGeneric_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinderGeneric_1(FromBinderGeneric_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinderGeneric_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FromBinderGeneric_1, "Zenject", "FromBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__1_1, "Zenject", "FromBinderGeneric`1/<>c__1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0, "Zenject", "FromBinderGeneric`1/<>c__DisplayClass3_0");
