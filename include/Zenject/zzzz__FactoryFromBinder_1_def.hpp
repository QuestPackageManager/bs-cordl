#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinder_1)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TContract, typename TSubFactory> class FactoryFromBinder_1___c__5_1;
}
namespace Zenject {
template <typename TContract, typename TObj> class FactoryFromBinder_1___c__DisplayClass3_0_1;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c__DisplayClass8_0;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c;
}
namespace Zenject {
template <typename TContract, typename TSubFactory> class FactoryFromBinder_1___c__5_1;
}
namespace Zenject {
template <typename TContract, typename TObj> class FactoryFromBinder_1___c__DisplayClass3_0_1;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class FactoryFromBinder_1___c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1___c);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1___c__5_1);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1___c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::FactoryFromBinder_1___c__DisplayClass8_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1/<>c<TContract>
class CORDL_TYPE FactoryFromBinder_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FactoryFromBinder_1___c<TContract>* __9;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2)) ::System::Func_2<TContract, bool>* __9__8_2;

  static inline ::Zenject::FactoryFromBinder_1___c<TContract>* New_ctor();

  /// @brief Method <FromComponentInHierarchy>b__8_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _FromComponentInHierarchy_b__8_2(TContract x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FactoryFromBinder_1___c<TContract>* getStaticF___9();

  static inline ::System::Func_2<TContract, bool>* getStaticF___9__8_2();

  static inline void setStaticF___9(::Zenject::FactoryFromBinder_1___c<TContract>* value);

  static inline void setStaticF___9__8_2(::System::Func_2<TContract, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1___c(FactoryFromBinder_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1___c(FactoryFromBinder_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12048 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract, typename TSubFactory>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1/<>c__5`1<TContract,TSubFactory>
class CORDL_TYPE FactoryFromBinder_1___c__5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* __9__5_0;

  static inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* New_ctor();

  /// @brief Method <FromFactory>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* getStaticF___9();

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* getStaticF___9__5_0();

  static inline void setStaticF___9(::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* value);

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1___c__5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1___c__5_1(FactoryFromBinder_1___c__5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1___c__5_1(FactoryFromBinder_1___c__5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object, Zenject.InjectSources
namespace Zenject {
// cpp template
template <typename TContract, typename TObj>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1/<>c__DisplayClass3_0`1<TContract,TObj>
class CORDL_TYPE FactoryFromBinder_1___c__DisplayClass3_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_2<TObj, TContract>* method;

  /// @brief Field source, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::Zenject::InjectSources source;

  /// @brief Field subIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subIdentifier, put = __cordl_internal_set_subIdentifier)) ::System::Object* subIdentifier;

  static inline ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>* New_ctor();

  /// @brief Method <FromResolveGetter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolveGetter_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Func_2<TObj, TContract>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<TObj, TContract>*& __cordl_internal_get_method();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_source() const;

  constexpr ::Zenject::InjectSources& __cordl_internal_get_source();

  constexpr ::System::Object* const& __cordl_internal_get_subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get_subIdentifier();

  constexpr void __cordl_internal_set_method(::System::Func_2<TObj, TContract>* value);

  constexpr void __cordl_internal_set_source(::Zenject::InjectSources value);

  constexpr void __cordl_internal_set_subIdentifier(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1___c__DisplayClass3_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass3_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1___c__DisplayClass3_0_1(FactoryFromBinder_1___c__DisplayClass3_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass3_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1___c__DisplayClass3_0_1(FactoryFromBinder_1___c__DisplayClass3_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12050 };

  /// @brief Field subIdentifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TObj, TContract>* ___method;

  /// @brief Field source, offset: 0x20, size: 0x4, def value: None
  ::Zenject::InjectSources ___source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1/<>c__DisplayClass4_0<TContract>
class CORDL_TYPE FactoryFromBinder_1___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_2<::Zenject::DiContainer*, TContract>* method;

  static inline ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>* New_ctor();

  /// @brief Method <FromMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::DiContainer*, TContract>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1___c__DisplayClass4_0(FactoryFromBinder_1___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1___c__DisplayClass4_0(FactoryFromBinder_1___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12051 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::DiContainer*, TContract>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1/<>c__DisplayClass8_0<TContract>
class CORDL_TYPE FactoryFromBinder_1___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinder_1<TContract>* __4__this;

  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* __9__1;

  /// @brief Field includeInactive, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  static inline ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>* New_ctor();

  /// @brief Method <FromComponentInHierarchy>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TContract _FromComponentInHierarchy_b__0(::Zenject::DiContainer* _);

  /// @brief Method <FromComponentInHierarchy>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TContract _FromComponentInHierarchy_b__1(::UnityEngine::GameObject* x);

  constexpr ::Zenject::FactoryFromBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>*& __cordl_internal_get___9__1();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinder_1<TContract>* value);

  constexpr void __cordl_internal_set___9__1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* value);

  constexpr void __cordl_internal_set_includeInactive(bool value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1___c__DisplayClass8_0(FactoryFromBinder_1___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1___c__DisplayClass8_0(FactoryFromBinder_1___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12052 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinder_1<TContract>* _____4__this;

  /// @brief Field includeInactive, offset: 0x18, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.FactoryFromBinderBase
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactoryFromBinder`1<TContract>
class CORDL_TYPE FactoryFromBinder_1 : public ::Zenject::FactoryFromBinderBase {
public:
  // Declarations
  using __c = ::Zenject::FactoryFromBinder_1___c<TContract>;

  template <typename TSubFactory> using __c__5_1 = ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>;

  template <typename TObj> using __c__DisplayClass3_0_1 = ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>;

  using __c__DisplayClass4_0 = ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>;

  using __c__DisplayClass8_0 = ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>;

  /// @brief Method FromComponentInHierarchy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive);

  /// @brief Method FromFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSubFactory> inline ::Zenject::ArgConditionCopyNonLazyBinder* FromFactory();

  /// @brief Method FromMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromMethod(::System::Func_2<::Zenject::DiContainer*, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method);

  /// @brief Method FromResolveGetter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj> inline ::Zenject::ConditionCopyNonLazyBinder* FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method, ::Zenject::InjectSources source);

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactorySubContainerBinder_1<TContract>* FromSubContainerResolve(::System::Object* subIdentifier);

  static inline ::Zenject::FactoryFromBinder_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinder_1(FactoryFromBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinder_1(FactoryFromBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12053 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1, "Zenject", "FactoryFromBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1___c, "Zenject", "FactoryFromBinder`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1___c__5_1, "Zenject", "FactoryFromBinder`1/<>c__5`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass3_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1___c__DisplayClass4_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder_1___c__DisplayClass8_0, "Zenject", "FactoryFromBinder`1/<>c__DisplayClass8_0");
