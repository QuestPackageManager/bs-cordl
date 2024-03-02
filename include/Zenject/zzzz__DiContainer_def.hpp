#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiContainer)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject::Internal {
class IDecoratorProvider;
}
namespace Zenject::Internal {
class LookupId;
}
namespace Zenject::Internal {
class SingletonMarkRegistry;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class BindingCondition;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConcreteBinderNonGeneric;
}
namespace Zenject {
template <typename TContract> class ConcreteIdBinderGeneric_1;
}
namespace Zenject {
class ConcreteIdBinderNonGeneric;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class CopyNonLazyBinder;
}
namespace Zenject {
template <typename TContract> class DecoratorToChoiceFromBinder_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
          typename TContract>
class FactoryToChoiceIdBinder_11;
}
namespace Zenject {
template <typename TContract> class FactoryToChoiceIdBinder_1;
}
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryToChoiceIdBinder_2;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TContract> class FactoryToChoiceIdBinder_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TContract> class FactoryToChoiceIdBinder_4;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactoryToChoiceIdBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract> class FactoryToChoiceIdBinder_6;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract> class FactoryToChoiceIdBinder_7;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
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
class InjectableInfo;
}
namespace Zenject {
class LazyInstanceInjector;
}
namespace Zenject {
template <typename TContract> class MemoryPoolIdInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class __DiContainer__ProviderInfo;
}
namespace Zenject {
class __DiContainer___GetDependencyContracts_d__96;
}
namespace Zenject {
class __DiContainer____c;
}
namespace Zenject {
class __DiContainer____c__DisplayClass178_0;
}
namespace Zenject {
template <typename TContract> class __DiContainer____c__DisplayClass203_0_1;
}
namespace Zenject {
class __DiContainer____c__DisplayClass86_0;
}
// Forward declare root types
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class __DiContainer__ProviderInfo;
}
namespace Zenject {
class __DiContainer___GetDependencyContracts_d__96;
}
namespace Zenject {
class __DiContainer____c;
}
namespace Zenject {
class __DiContainer____c__DisplayClass178_0;
}
namespace Zenject {
template <typename TContract> class __DiContainer____c__DisplayClass203_0_1;
}
namespace Zenject {
class __DiContainer____c__DisplayClass86_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DiContainer);
MARK_REF_PTR_T(::Zenject::__DiContainer__ProviderInfo);
MARK_REF_PTR_T(::Zenject::__DiContainer___GetDependencyContracts_d__96);
MARK_REF_PTR_T(::Zenject::__DiContainer____c);
MARK_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass178_0);
MARK_GEN_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass203_0_1);
MARK_REF_PTR_T(::Zenject::__DiContainer____c__DisplayClass86_0);
// Type: ::ProviderInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DiContainer::ProviderInfo*
class CORDL_TYPE __DiContainer__ProviderInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Condition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Condition, put = __cordl_internal_set_Condition))::Zenject::BindingCondition* Condition;

  /// @brief Field Container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Container, put = __cordl_internal_set_Container))::Zenject::DiContainer* Container;

  /// @brief Field NonLazy, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_NonLazy, put = __cordl_internal_set_NonLazy)) bool NonLazy;

  /// @brief Field Provider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Provider, put = __cordl_internal_set_Provider))::Zenject::IProvider* Provider;

  static inline ::Zenject::__DiContainer__ProviderInfo* New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container);

  constexpr ::Zenject::BindingCondition*& __cordl_internal_get_Condition();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindingCondition*> const& __cordl_internal_get_Condition() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_Container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_Container() const;

  constexpr bool const& __cordl_internal_get_NonLazy() const;

  constexpr bool& __cordl_internal_get_NonLazy();

  constexpr ::Zenject::IProvider*& __cordl_internal_get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __cordl_internal_get_Provider() const;

  constexpr void __cordl_internal_set_Condition(::Zenject::BindingCondition* value);

  constexpr void __cordl_internal_set_Container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_NonLazy(bool value);

  constexpr void __cordl_internal_set_Provider(::Zenject::IProvider* value);

  /// @brief Method __zenCreate, addr 0x301267c, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x301282c, size 0x424, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3012638, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer__ProviderInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer__ProviderInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer__ProviderInfo(__DiContainer__ProviderInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer__ProviderInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer__ProviderInfo(__DiContainer__ProviderInfo const&) = delete;

  /// @brief Field Container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___Container;

  /// @brief Field NonLazy, offset: 0x18, size: 0x1, def value: None
  bool ___NonLazy;

  /// @brief Field Provider, offset: 0x20, size: 0x8, def value: None
  ::Zenject::IProvider* ___Provider;

  /// @brief Field Condition, offset: 0x28, size: 0x8, def value: None
  ::Zenject::BindingCondition* ___Condition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer__ProviderInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DiContainer__ProviderInfo, ___Container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer__ProviderInfo, ___NonLazy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer__ProviderInfo, ___Provider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer__ProviderInfo, ___Condition) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DiContainer::<>c*
class CORDL_TYPE __DiContainer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__DiContainer____c* __9;

  /// @brief Field <>9__102_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__102_0, put = setStaticF___9__102_0))::System::Func_2<::Zenject::TypeValuePair, ::StringW>* __9__102_0;

  /// @brief Field <>9__197_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__197_0, put = setStaticF___9__197_0))::System::Func_2<::System::Type*, bool>* __9__197_0;

  /// @brief Field <>9__198_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__198_0, put = setStaticF___9__198_0))::System::Func_2<::System::Type*, bool>* __9__198_0;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0,
                             put = setStaticF___9__33_0))::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                                                          ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>* __9__33_0;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1))::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* __9__33_1;

  /// @brief Field <>9__86_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__86_1, put = setStaticF___9__86_1))::System::Func_2<::System::Type*, bool>* __9__86_1;

  /// @brief Field <>9__97_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__97_0, put = setStaticF___9__97_0))::System::Func_2<::Zenject::TypeValuePair, ::StringW>* __9__97_0;

  static inline ::Zenject::__DiContainer____c* New_ctor();

  /// @brief Method <BindInternal>b__197_0, addr 0x3012de8, size 0x78, virtual false, abstract: false, final false
  inline bool _BindInternal_b__197_0(::System::Type* x);

  /// @brief Method <Bind>b__198_0, addr 0x3012e60, size 0x78, virtual false, abstract: false, final false
  inline bool _Bind_b__198_0(::System::Type* x);

  /// @brief Method <InjectExplicitInternal>b__102_0, addr 0x3012d90, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _InjectExplicitInternal_b__102_0(::Zenject::TypeValuePair x);

  /// @brief Method <InstantiateInternal>b__97_0, addr 0x3012d38, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _InstantiateInternal_b__97_0(::Zenject::TypeValuePair x);

  /// @brief Method <ResolveTypeAll>b__86_1, addr 0x3012cdc, size 0x5c, virtual false, abstract: false, final false
  inline bool _ResolveTypeAll_b__86_1(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x3012ed8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3012f34, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3012cb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_AllProviders>b__33_0, addr 0x3012cbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*
  _get_AllProviders_b__33_0(::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* x);

  /// @brief Method <get_AllProviders>b__33_1, addr 0x3012cc4, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _get_AllProviders_b__33_1(::Zenject::__DiContainer__ProviderInfo* x);

  static inline ::Zenject::__DiContainer____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* getStaticF___9__102_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__197_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__198_0();

  static inline ::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                 ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>*
  getStaticF___9__33_0();

  static inline ::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* getStaticF___9__33_1();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__86_1();

  static inline ::System::Func_2<::Zenject::TypeValuePair, ::StringW>* getStaticF___9__97_0();

  static inline void setStaticF___9(::Zenject::__DiContainer____c* value);

  static inline void setStaticF___9__102_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value);

  static inline void setStaticF___9__197_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__198_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*,
                                                           ::System::Collections::Generic::IEnumerable_1<::Zenject::__DiContainer__ProviderInfo*>*>* value);

  static inline void setStaticF___9__33_1(::System::Func_2<::Zenject::__DiContainer__ProviderInfo*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__86_1(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__97_0(::System::Func_2<::Zenject::TypeValuePair, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c(__DiContainer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c(__DiContainer____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass86_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DiContainer::<>c__DisplayClass86_0*
class CORDL_TYPE __DiContainer____c__DisplayClass86_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::Zenject::InjectContext* context;

  static inline ::Zenject::__DiContainer____c__DisplayClass86_0* New_ctor();

  /// @brief Method <ResolveTypeAll>b__0, addr 0x30130fc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Type* _ResolveTypeAll_b__0(::Zenject::__DiContainer__ProviderInfo* x);

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_context() const;

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  /// @brief Method .ctor, addr 0x30130f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass86_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass86_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass86_0(__DiContainer____c__DisplayClass86_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass86_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass86_0(__DiContainer____c__DisplayClass86_0 const&) = delete;

  /// @brief Field context, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c__DisplayClass86_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DiContainer____c__DisplayClass86_0, ___context) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<GetDependencyContracts>d__96
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DiContainer::<GetDependencyContracts>d__96*
class CORDL_TYPE __DiContainer___GetDependencyContracts_d__96 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current))::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Type* __2__current;

  /// @brief Field <>3__contract, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___3__contract, put = __cordl_internal_set___3__contract))::System::Type* __3__contract;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::DiContainer* __4__this;

  /// @brief Field <>7__wrap1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field contract, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_contract, put = __cordl_internal_set_contract))::System::Type* contract;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3013200, size 0x2fc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::__DiContainer___GetDependencyContracts_d__96* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x30137d0, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x3013780, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x301387c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3013788, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x30137c8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x30131e4, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___3__contract();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get___3__contract() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Type*& __cordl_internal_get_contract();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_contract() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___3__contract(::System::Type* value);

  constexpr void __cordl_internal_set___4__this(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_contract(::System::Type* value);

  /// @brief Method <>m__Finally1, addr 0x30136d0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x30131b0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer___GetDependencyContracts_d__96();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer___GetDependencyContracts_d__96", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer___GetDependencyContracts_d__96(__DiContainer___GetDependencyContracts_d__96&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer___GetDependencyContracts_d__96", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer___GetDependencyContracts_d__96(__DiContainer___GetDependencyContracts_d__96 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* _____4__this;

  /// @brief Field contract, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___contract;

  /// @brief Field <>3__contract, offset: 0x38, size: 0x8, def value: None
  ::System::Type* _____3__contract;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Zenject::InjectableInfo*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer___GetDependencyContracts_d__96, 0x48>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, ___contract) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____3__contract) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer___GetDependencyContracts_d__96, _____7__wrap1) == 0x40, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass178_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::DiContainer::<>c__DisplayClass178_0*
class CORDL_TYPE __DiContainer____c__DisplayClass178_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::DiContainer* __4__this;

  /// @brief Field concreteType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field contractType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contractType, put = __cordl_internal_set_contractType))::System::Type* contractType;

  /// @brief Field identifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier))::System::Object* identifier;

  static inline ::Zenject::__DiContainer____c__DisplayClass178_0* New_ctor();

  /// @brief Method <UnbindId>b__0, addr 0x3013888, size 0x140, virtual false, abstract: false, final false
  inline bool _UnbindId_b__0(::Zenject::__DiContainer__ProviderInfo* x);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_contractType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_contractType() const;

  constexpr ::System::Object*& __cordl_internal_get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_identifier() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr void __cordl_internal_set_contractType(::System::Type* value);

  constexpr void __cordl_internal_set_identifier(::System::Object* value);

  /// @brief Method .ctor, addr 0x3013880, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass178_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass178_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass178_0(__DiContainer____c__DisplayClass178_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass178_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass178_0(__DiContainer____c__DisplayClass178_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* _____4__this;

  /// @brief Field contractType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___contractType;

  /// @brief Field identifier, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___identifier;

  /// @brief Field concreteType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__DiContainer____c__DisplayClass178_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::__DiContainer____c__DisplayClass178_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer____c__DisplayClass178_0, ___contractType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer____c__DisplayClass178_0, ___identifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__DiContainer____c__DisplayClass178_0, ___concreteType) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass203_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::DiContainer::<>c__DisplayClass203_0`1<TContract>*
class CORDL_TYPE __DiContainer____c__DisplayClass203_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) TContract instance;

  static inline ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>* New_ctor();

  /// @brief Method <BindInstance>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _BindInstance_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr TContract const& __cordl_internal_get_instance() const;

  constexpr TContract& __cordl_internal_get_instance();

  constexpr void __cordl_internal_set_instance(TContract value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DiContainer____c__DisplayClass203_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass203_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DiContainer____c__DisplayClass203_0_1(__DiContainer____c__DisplayClass203_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DiContainer____c__DisplayClass203_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DiContainer____c__DisplayClass203_0_1(__DiContainer____c__DisplayClass203_0_1 const&) = delete;

  /// @brief Field instance, offset: 0x10, size: 0x8, def value: None
  TContract ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::DiContainer
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 157, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::DiContainer*
class CORDL_TYPE DiContainer : public ::System::Object {
public:
  // Declarations
  using ProviderInfo = ::Zenject::__DiContainer__ProviderInfo;

  using _GetDependencyContracts_d__96 = ::Zenject::__DiContainer___GetDependencyContracts_d__96;

  using __c = ::Zenject::__DiContainer____c;

  using __c__DisplayClass178_0 = ::Zenject::__DiContainer____c__DisplayClass178_0;

  template <typename TContract> using __c__DisplayClass203_0_1 = ::Zenject::__DiContainer____c__DisplayClass203_0_1<TContract>;

  using __c__DisplayClass86_0 = ::Zenject::__DiContainer____c__DisplayClass86_0;

  __declspec(property(get = get_AllContracts))::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* AllContracts;

  __declspec(property(get = get_AllProviders))::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* AllProviders;

  __declspec(property(get = get_AncestorContainers))::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> AncestorContainers;

  __declspec(property(get = get_AssertOnNewGameObjects, put = set_AssertOnNewGameObjects)) bool AssertOnNewGameObjects;

  __declspec(property(get = get_ChecksForCircularDependencies)) bool ChecksForCircularDependencies;

  __declspec(property(get = get_ContextTransform))::UnityW<::UnityEngine::Transform> ContextTransform;

  __declspec(property(get = get_DefaultParent, put = set_DefaultParent))::UnityW<::UnityEngine::Transform> DefaultParent;

  __declspec(property(get = get_InheritedDefaultParent))::UnityW<::UnityEngine::Transform> InheritedDefaultParent;

  __declspec(property(get = get_IsInstalling, put = set_IsInstalling)) bool IsInstalling;

  __declspec(property(get = get_IsValidating)) bool IsValidating;

  __declspec(property(get = get_ParentContainers))::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> ParentContainers;

  __declspec(property(get = get_Settings, put = set_Settings))::Zenject::ZenjectSettings* Settings;

  __declspec(property(get = get_SingletonMarkRegistry))::Zenject::Internal::SingletonMarkRegistry* SingletonMarkRegistry;

  /// @brief Field <AssertOnNewGameObjects>k__BackingField, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__AssertOnNewGameObjects_k__BackingField,
                      put = __cordl_internal_set__AssertOnNewGameObjects_k__BackingField)) bool _AssertOnNewGameObjects_k__BackingField;

  /// @brief Field _childBindings, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__childBindings, put = __cordl_internal_set__childBindings))::System::Collections::Generic::List_1<::Zenject::BindStatement*>* _childBindings;

  /// @brief Field _containerLookups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__containerLookups,
                      put = __cordl_internal_set__containerLookups))::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>,
                                                                             ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> _containerLookups;

  /// @brief Field _contextTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__contextTransform, put = __cordl_internal_set__contextTransform))::UnityW<::UnityEngine::Transform> _contextTransform;

  /// @brief Field _currentBindings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__currentBindings, put = __cordl_internal_set__currentBindings))::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* _currentBindings;

  /// @brief Field _decorators, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__decorators,
                      put = __cordl_internal_set__decorators))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* _decorators;

  /// @brief Field _explicitDefaultParent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__explicitDefaultParent, put = __cordl_internal_set__explicitDefaultParent))::UnityW<::UnityEngine::Transform> _explicitDefaultParent;

  /// @brief Field _hasExplicitDefaultParent, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__hasExplicitDefaultParent, put = __cordl_internal_set__hasExplicitDefaultParent)) bool _hasExplicitDefaultParent;

  /// @brief Field _hasLookedUpContextTransform, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__hasLookedUpContextTransform, put = __cordl_internal_set__hasLookedUpContextTransform)) bool _hasLookedUpContextTransform;

  /// @brief Field _hasResolvedRoots, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__hasResolvedRoots, put = __cordl_internal_set__hasResolvedRoots)) bool _hasResolvedRoots;

  /// @brief Field _inheritedDefaultParent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__inheritedDefaultParent, put = __cordl_internal_set__inheritedDefaultParent))::UnityW<::UnityEngine::Transform> _inheritedDefaultParent;

  /// @brief Field _isFinalizingBinding, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__isFinalizingBinding, put = __cordl_internal_set__isFinalizingBinding)) bool _isFinalizingBinding;

  /// @brief Field _isInstalling, offset 0x9b, size 0x1
  __declspec(property(get = __cordl_internal_get__isInstalling, put = __cordl_internal_set__isInstalling)) bool _isInstalling;

  /// @brief Field _isValidating, offset 0x9a, size 0x1
  __declspec(property(get = __cordl_internal_get__isValidating, put = __cordl_internal_set__isValidating)) bool _isValidating;

  /// @brief Field _lazyInjector, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lazyInjector, put = __cordl_internal_set__lazyInjector))::Zenject::LazyInstanceInjector* _lazyInjector;

  /// @brief Field _providers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__providers,
                      put = __cordl_internal_set__providers))::System::Collections::Generic::Dictionary_2<::Zenject::BindingId,
                                                                                                          ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* _providers;

  /// @brief Field _resolvesInProgress, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__resolvesInProgress,
                      put = __cordl_internal_set__resolvesInProgress))::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* _resolvesInProgress;

  /// @brief Field _resolvesTwiceInProgress, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__resolvesTwiceInProgress,
                      put = __cordl_internal_set__resolvesTwiceInProgress))::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* _resolvesTwiceInProgress;

  /// @brief Field _settings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings))::Zenject::ZenjectSettings* _settings;

  /// @brief Field _singletonMarkRegistry, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__singletonMarkRegistry, put = __cordl_internal_set__singletonMarkRegistry))::Zenject::Internal::SingletonMarkRegistry* _singletonMarkRegistry;

  /// @brief Field _validatedTypes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__validatedTypes, put = __cordl_internal_set__validatedTypes))::System::Collections::Generic::HashSet_1<::System::Type*>* _validatedTypes;

  /// @brief Field _validationQueue, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__validationQueue, put = __cordl_internal_set__validationQueue))::System::Collections::Generic::List_1<::Zenject::IValidatable*>* _validationQueue;

  /// @brief Convert operator to "::Zenject::IInstantiator"
  constexpr operator ::Zenject::IInstantiator*() noexcept;

  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Bind();

  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Bind(::Zenject::BindStatement* bindStatement);

  /// @brief Method Bind, addr 0x2ffd1a4, size 0x8c, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::ArrayW<::System::Type*, ::Array<::System::Type*>*> contractTypes);

  /// @brief Method Bind, addr 0x300fe18, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::System::Collections::Generic::IEnumerable_1<::System::Type*>* contractTypes);

  /// @brief Method Bind, addr 0x300fea8, size 0x238, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* Bind(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator);

  /// @brief Method BindDisposableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindDisposableExecutionOrder(int32_t order);

  /// @brief Method BindDisposableExecutionOrder, addr 0x3010fb4, size 0x118, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindDisposableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void BindExecutionOrder(int32_t order);

  /// @brief Method BindExecutionOrder, addr 0x3010a14, size 0x370, virtual false, abstract: false, final false
  inline void BindExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactory> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactory();

  /// @brief Method BindFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactory>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactory();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract, typename TFactoryConcrete, typename TFactoryContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryConcrete, typename TFactoryContract>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactoryCustomInterface();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract, typename TFactoryContract, typename TFactoryConcrete> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindFactoryInternal();

  /// @brief Method BindFactoryInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TFactoryContract, typename TFactoryConcrete>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindFactoryInternal();

  /// @brief Method BindFixedTickableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindFixedTickableExecutionOrder(int32_t order);

  /// @brief Method BindFixedTickableExecutionOrder, addr 0x3011208, size 0x178, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindFixedTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10,
            typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_2<TParam1, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_3<TParam1, TParam2, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TContract> inline ::Zenject::FactoryToChoiceIdBinder_4<TParam1, TParam2, TParam3, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* BindIFactory();

  /// @brief Method BindIFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  inline ::Zenject::FactoryToChoiceIdBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* BindIFactory();

  /// @brief Method BindInitializableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindInitializableExecutionOrder(int32_t order);

  /// @brief Method BindInitializableExecutionOrder, addr 0x3010e9c, size 0x118, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindInitializableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* BindInstance(TContract instance);

  /// @brief Method BindInstances, addr 0x3010460, size 0x140, virtual false, abstract: false, final false
  inline void BindInstances(::ArrayW<::System::Object*, ::Array<::System::Object*>*> instances);

  /// @brief Method BindInterfacesAndSelfTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::FromBinderNonGeneric* BindInterfacesAndSelfTo();

  /// @brief Method BindInterfacesAndSelfTo, addr 0x30102a8, size 0x1b8, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* BindInterfacesAndSelfTo(::System::Type* type);

  /// @brief Method BindInterfacesTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::FromBinderNonGeneric* BindInterfacesTo();

  /// @brief Method BindInterfacesTo, addr 0x30100e0, size 0x1c8, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* BindInterfacesTo(::System::Type* type);

  /// @brief Method BindInternal, addr 0x300fca4, size 0x174, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdBinderNonGeneric* BindInternal(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindingFinalizer);

  /// @brief Method BindLateDisposableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindLateDisposableExecutionOrder(int32_t order);

  /// @brief Method BindLateDisposableExecutionOrder, addr 0x30110cc, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindLateDisposableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindLateTickableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindLateTickableExecutionOrder(int32_t order);

  /// @brief Method BindLateTickableExecutionOrder, addr 0x3011380, size 0x178, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindLateTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemContract> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPool();

  /// @brief Method BindMemoryPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemContract, typename TPool> inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPool();

  /// @brief Method BindMemoryPoolCustomInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterface(bool includeConcreteType);

  /// @brief Method BindMemoryPoolCustomInterfaceInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterfaceInternal(bool includeConcreteType, ::Zenject::BindStatement* statement);

  /// @brief Method BindMemoryPoolCustomInterfaceNoFlush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TItemContract, typename TPoolConcrete, typename TPoolContract>
  inline ::Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1<TItemContract>* BindMemoryPoolCustomInterfaceNoFlush(bool includeConcreteType);

  /// @brief Method BindNoFlush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* BindNoFlush();

  /// @brief Method BindPoolableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindPoolableExecutionOrder(int32_t order);

  /// @brief Method BindPoolableExecutionOrder, addr 0x30114f8, size 0x1140, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindPoolableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method BindTickableExecutionOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::CopyNonLazyBinder* BindTickableExecutionOrder(int32_t order);

  /// @brief Method BindTickableExecutionOrder, addr 0x3010d84, size 0x118, virtual false, abstract: false, final false
  inline ::Zenject::CopyNonLazyBinder* BindTickableExecutionOrder(::System::Type* type, int32_t order);

  /// @brief Method CallInjectMethodsTopDown, addr 0x300c1d0, size 0x5fc, virtual false, abstract: false, final false
  inline void CallInjectMethodsTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier,
                                       bool isDryRun);

  /// @brief Method CheckForInstallWarning, addr 0x30093c8, size 0x30, virtual false, abstract: false, final false
  inline void CheckForInstallWarning(::Zenject::InjectContext* context);

  /// @brief Method CreateAndParentPrefab, addr 0x300cc18, size 0x434, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateAndParentPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context,
                                                                   ByRef<bool> shouldMakeActive);

  /// @brief Method CreateAndParentPrefabResource, addr 0x300cae4, size 0x134, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateAndParentPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context,
                                                                           ByRef<bool> shouldMakeActive);

  /// @brief Method CreateEmptyGameObject, addr 0x300d71c, size 0x188, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateEmptyGameObject(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context);

  /// @brief Method CreateEmptyGameObject, addr 0x300d6a4, size 0x78, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> CreateEmptyGameObject(::StringW name);

  /// @brief Method CreateLazyBinding, addr 0x30069d8, size 0x254, virtual false, abstract: false, final false
  inline ::System::Object* CreateLazyBinding(::Zenject::InjectContext* context);

  /// @brief Method CreateSubContainer, addr 0x2ffde1c, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer();

  /// @brief Method CreateSubContainer, addr 0x300815c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateSubContainer(bool isValidating);

  /// @brief Method CreateTransformGroup, addr 0x300d8a4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateTransformGroup(::StringW groupName);

  /// @brief Method Decorate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Decorate();

  /// @brief Method FinalizeBinding, addr 0x3006564, size 0x7c, virtual false, abstract: false, final false
  inline void FinalizeBinding(::Zenject::BindStatement* binding);

  /// @brief Method FlattenInheritanceChain, addr 0x3006280, size 0x228, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Zenject::DiContainer*>* FlattenInheritanceChain();

  /// @brief Method FlushBindings, addr 0x300614c, size 0x134, virtual false, abstract: false, final false
  inline void FlushBindings();

  /// @brief Method FlushValidationQueue, addr 0x3007704, size 0x220, virtual false, abstract: false, final false
  inline void FlushValidationQueue();

  /// @brief Method GetContainerHeirarchyDistance, addr 0x300ad9c, size 0x150, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> GetContainerHeirarchyDistance(::Zenject::DiContainer* container, int32_t depth);

  /// @brief Method GetContainerHeirarchyDistance, addr 0x3008b40, size 0x6c, virtual false, abstract: false, final false
  inline int32_t GetContainerHeirarchyDistance(::Zenject::DiContainer* container);

  /// @brief Method GetDecoratedInstances, addr 0x300aba8, size 0x114, virtual false, abstract: false, final false
  inline void GetDecoratedInstances(::Zenject::IProvider* provider, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetDependencyContracts, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetDependencyContracts();

  /// @brief Method GetDependencyContracts, addr 0x300aeec, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetDependencyContracts(::System::Type* contract);

  /// @brief Method GetLocalProviders, addr 0x3008bac, size 0x11c, virtual false, abstract: false, final false
  inline void GetLocalProviders(::Zenject::BindingId bindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method GetPrefabAsGameObject, addr 0x300d04c, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetPrefabAsGameObject(::UnityEngine::Object* prefab);

  /// @brief Method GetProviderMatches, addr 0x3008228, size 0x284, virtual false, abstract: false, final false
  inline void GetProviderMatches(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method GetProvidersForContract, addr 0x30084ac, size 0xd0, virtual false, abstract: false, final false
  inline void GetProvidersForContract(::Zenject::BindingId bindingId, ::Zenject::InjectSources sourceType, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>* buffer);

  /// @brief Method GetTransformGroup, addr 0x300d168, size 0x53c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetTransformGroup(::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::Zenject::InjectContext* context);

  /// @brief Method HasBinding, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline bool HasBinding();

  /// @brief Method HasBinding, addr 0x300f998, size 0x16c, virtual false, abstract: false, final false
  inline bool HasBinding(::Zenject::InjectContext* context);

  /// @brief Method HasBinding, addr 0x300f7bc, size 0xc, virtual false, abstract: false, final false
  inline bool HasBinding(::System::Type* contractType);

  /// @brief Method HasBindingId, addr 0x2ff4c78, size 0x8, virtual false, abstract: false, final false
  inline bool HasBindingId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method HasBindingId, addr 0x300f7c8, size 0x1d0, virtual false, abstract: false, final false
  inline bool HasBindingId(::System::Type* contractType, ::System::Object* identifier, ::Zenject::InjectSources sourceType);

  /// @brief Method HasBindingId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline bool HasBindingId(::System::Object* identifier);

  /// @brief Method Inject, addr 0x2ffc684, size 0x68, virtual false, abstract: false, final false
  inline void Inject(::System::Object* injectable);

  /// @brief Method Inject, addr 0x300ede8, size 0x30, virtual false, abstract: false, final false
  inline void Inject(::System::Object* injectable, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectExplicit, addr 0x300bc18, size 0xf4, virtual false, abstract: false, final false
  inline void InjectExplicit(::System::Object* injectable, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InjectExplicit, addr 0x300ba84, size 0x194, virtual false, abstract: false, final false
  inline void InjectExplicit(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                             ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InjectExplicitInternal, addr 0x300bd0c, size 0x4c4, virtual false, abstract: false, final false
  inline void InjectExplicitInternal(::System::Object* injectable, ::System::Type* injectableType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                     ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InjectGameObject, addr 0x300ded8, size 0x1b4, virtual false, abstract: false, final false
  inline void InjectGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method InjectGameObjectForComponent, addr 0x300e948, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Object* InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectGameObjectForComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method InjectGameObjectForComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InjectGameObjectForComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InjectGameObjectForComponentExplicit, addr 0x300e9fc, size 0x3ec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> InjectGameObjectForComponentExplicit(::UnityEngine::GameObject* gameObject, ::System::Type* componentType,
                                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                                 ::System::Object* concreteIdentifier);

  /// @brief Method InjectMembersTopDown, addr 0x300c7cc, size 0x318, virtual false, abstract: false, final false
  inline void InjectMembersTopDown(::System::Object* injectable, ::System::Type* injectableType, ::Zenject::InjectTypeInfo* typeInfo,
                                   ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier, bool isDryRun);

  /// @brief Method Install, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline void Install();

  /// @brief Method Install, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline void Install(::ArrayW<::System::Object*, ::Array<::System::Object*>*> extraArgs);

  /// @brief Method InstallDefaultBindings, addr 0x3005f20, size 0x22c, virtual false, abstract: false, final false
  inline void InstallDefaultBindings();

  /// @brief Method Instantiate, addr 0x2ffc620, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* Instantiate(::System::Type* concreteType);

  /// @brief Method Instantiate, addr 0x300d964, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Object* Instantiate(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T Instantiate();

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T Instantiate(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent, addr 0x300daa4, size 0x70, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Component> InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent, addr 0x300db14, size 0x38, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Component> InstantiateComponent(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method InstantiateComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContract> inline TContract InstantiateComponent(::UnityEngine::GameObject* gameObject, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentExplicit, addr 0x300db4c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> InstantiateComponentExplicit(::System::Type* componentType, ::UnityEngine::GameObject* gameObject,
                                                                         ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateComponentOnNewGameObject();

  /// @brief Method InstantiateComponentOnNewGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateComponentOnNewGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName);

  /// @brief Method InstantiateComponentOnNewGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateComponentOnNewGameObject(::StringW gameObjectName, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateExplicit, addr 0x30105a0, size 0x108, virtual false, abstract: false, final false
  inline ::System::Object* InstantiateExplicit(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                               ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InstantiateExplicit, addr 0x300da0c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Object* InstantiateExplicit(::System::Type* concreteType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InstantiateExplicit(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiateInternal, addr 0x300af64, size 0xb20, virtual false, abstract: false, final false
  inline ::System::Object* InstantiateInternal(::System::Type* concreteType, bool autoInject, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                               ::Zenject::InjectContext* context, ::System::Object* concreteIdentifier);

  /// @brief Method InstantiatePrefab, addr 0x300dc1c, size 0x70, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefab(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefab, addr 0x300dc8c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method InstantiatePrefab, addr 0x300dd10, size 0x7c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefab, addr 0x300dd8c, size 0x14c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefab(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                               ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent, addr 0x300e47c, size 0x48, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs,
                                                         ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabForComponent, addr 0x300e3e0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Object* InstantiatePrefabForComponent(::System::Type* concreteType, ::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform,
                                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabForComponent(::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                         ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabForComponentExplicit, addr 0x301098c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method InstantiatePrefabForComponentExplicit, addr 0x30107f4, size 0x198, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                 ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method InstantiatePrefabForComponentExplicit, addr 0x300e4c4, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabForComponentExplicit(::System::Type* componentType, ::UnityEngine::Object* prefab,
                                                                 ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                 ::Zenject::GameObjectCreationParameters* gameObjectBindInfo);

  /// @brief Method InstantiatePrefabResource, addr 0x300e08c, size 0x70, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefabResource(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResource, addr 0x300e0fc, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabResource, addr 0x300e218, size 0x7c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResource, addr 0x300e294, size 0x14c, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> InstantiatePrefabResource(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                       ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x300e570, size 0xfc, virtual true, abstract: false, final true
  inline ::System::Object* InstantiatePrefabResourceForComponent(::System::Type* concreteType, ::StringW resourcePath, ::UnityEngine::Transform* parentTransform,
                                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Transform* parentTransform, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform);

  /// @brief Method InstantiatePrefabResourceForComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline T InstantiatePrefabResourceForComponent(::StringW resourcePath, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parentTransform,
                                                 ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiatePrefabResourceForComponentExplicit, addr 0x30106a8, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                         ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs, ::Zenject::InjectContext* context,
                                                                         ::System::Object* concreteIdentifier, ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiatePrefabResourceForComponentExplicit, addr 0x300e66c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Object* InstantiatePrefabResourceForComponentExplicit(::System::Type* componentType, ::StringW resourcePath,
                                                                         ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs,
                                                                         ::Zenject::GameObjectCreationParameters* creationInfo);

  /// @brief Method InstantiateScriptableObjectResource, addr 0x300e718, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource, addr 0x300e784, size 0x80, virtual true, abstract: false, final true
  inline ::System::Object* InstantiateScriptableObjectResource(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                               ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath);

  /// @brief Method InstantiateScriptableObjectResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T InstantiateScriptableObjectResource(::StringW resourcePath, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* extraArgs);

  /// @brief Method InstantiateScriptableObjectResourceExplicit, addr 0x300e804, size 0x144, virtual false, abstract: false, final false
  inline ::System::Object* InstantiateScriptableObjectResourceExplicit(::System::Type* scriptableObjectType, ::StringW resourcePath,
                                                                       ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method LazyInject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T LazyInject(T instance);

  static inline ::Zenject::DiContainer* New_ctor();

  static inline ::Zenject::DiContainer* New_ctor(bool isValidating);

  static inline ::Zenject::DiContainer* New_ctor(::Zenject::DiContainer* parentContainer);

  static inline ::Zenject::DiContainer* New_ctor(::Zenject::DiContainer* parentContainer, bool isValidating);

  static inline ::Zenject::DiContainer* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers);

  static inline ::Zenject::DiContainer* New_ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating);

  /// @brief Method QueueForInject, addr 0x2ffe274, size 0x1c, virtual false, abstract: false, final false
  inline void QueueForInject(::System::Object* instance);

  /// @brief Method QueueForValidate, addr 0x3006c2c, size 0x11c, virtual false, abstract: false, final false
  inline void QueueForValidate(::Zenject::IValidatable* validatable);

  /// @brief Method Rebind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Rebind();

  /// @brief Method Rebind, addr 0x300fbd8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteBinderNonGeneric* Rebind(::System::Type* contractType);

  /// @brief Method RebindId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* RebindId(::System::Object* identifier);

  /// @brief Method RebindId, addr 0x300fbe0, size 0xc4, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteBinderNonGeneric* RebindId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method RegisterProvider, addr 0x2ff4c88, size 0x1b4, virtual false, abstract: false, final false
  inline void RegisterProvider(::Zenject::BindingId bindingId, ::Zenject::BindingCondition* condition, ::Zenject::IProvider* provider, bool nonLazy);

  /// @brief Method Resolve, addr 0x3009f4c, size 0xc5c, virtual false, abstract: false, final false
  inline ::System::Object* Resolve(::Zenject::InjectContext* context);

  /// @brief Method Resolve, addr 0x300ee18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* Resolve(::System::Type* contractType);

  /// @brief Method Resolve, addr 0x3009d8c, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Object* Resolve(::Zenject::BindingId id);

  /// @brief Method Resolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline TContract Resolve();

  /// @brief Method ResolveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* ResolveAll();

  /// @brief Method ResolveAll, addr 0x3008004, size 0x158, virtual false, abstract: false, final false
  inline ::System::Collections::IList* ResolveAll(::Zenject::InjectContext* context);

  /// @brief Method ResolveAll, addr 0x300f1b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* ResolveAll(::System::Type* contractType);

  /// @brief Method ResolveAll, addr 0x3008cc8, size 0x700, virtual false, abstract: false, final false
  inline void ResolveAll(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method ResolveDependencyRoots, addr 0x3006ef8, size 0x80c, virtual false, abstract: false, final false
  inline void ResolveDependencyRoots();

  /// @brief Method ResolveId, addr 0x300ee20, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Object* ResolveId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method ResolveId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline TContract ResolveId(::System::Object* identifier);

  /// @brief Method ResolveIdAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline ::System::Collections::Generic::List_1<TContract>* ResolveIdAll(::System::Object* identifier);

  /// @brief Method ResolveIdAll, addr 0x300f1b8, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Collections::IList* ResolveIdAll(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method ResolveRoots, addr 0x2ffe484, size 0x74, virtual false, abstract: false, final false
  inline void ResolveRoots();

  /// @brief Method ResolveType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Type* ResolveType();

  /// @brief Method ResolveType, addr 0x30095a8, size 0x2a0, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType(::Zenject::InjectContext* context);

  /// @brief Method ResolveType, addr 0x30093f8, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::Type* ResolveType(::System::Type* type);

  /// @brief Method ResolveTypeAll, addr 0x3009a10, size 0x37c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::Zenject::InjectContext* context);

  /// @brief Method ResolveTypeAll, addr 0x3009848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::System::Type* type);

  /// @brief Method ResolveTypeAll, addr 0x3009850, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypeAll(::System::Type* type, ::System::Object* identifier);

  /// @brief Method SafeGetInstances, addr 0x3007924, size 0x360, virtual false, abstract: false, final false
  inline void SafeGetInstances(::Zenject::__DiContainer__ProviderInfo* providerInfo, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* instances);

  /// @brief Method ShouldInheritBinding, addr 0x30064a8, size 0xbc, virtual false, abstract: false, final false
  inline bool ShouldInheritBinding(::Zenject::BindStatement* binding, ::Zenject::DiContainer* ancestorContainer);

  /// @brief Method StartBinding, addr 0x300fb04, size 0xd4, virtual false, abstract: false, final false
  inline ::Zenject::BindStatement* StartBinding(bool flush);

  /// @brief Method TryGetDecoratorProvider, addr 0x300acbc, size 0xe0, virtual false, abstract: false, final false
  inline ::Zenject::Internal::IDecoratorProvider* TryGetDecoratorProvider(::System::Type* contractType);

  /// @brief Method TryGetUniqueProvider, addr 0x300857c, size 0x5c4, virtual false, abstract: false, final false
  inline ::Zenject::__DiContainer__ProviderInfo* TryGetUniqueProvider(::Zenject::InjectContext* context);

  /// @brief Method TryResolve, addr 0x300efe0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* TryResolve(::System::Type* contractType);

  /// @brief Method TryResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline TContract TryResolve();

  /// @brief Method TryResolveId, addr 0x300efe8, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Object* TryResolveId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method TryResolveId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline TContract TryResolveId(::System::Object* identifier);

  /// @brief Method Unbind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline bool Unbind();

  /// @brief Method Unbind, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract, typename TConcrete> inline bool Unbind();

  /// @brief Method Unbind, addr 0x300f3d8, size 0x8, virtual false, abstract: false, final false
  inline bool Unbind(::System::Type* contractType);

  /// @brief Method Unbind, addr 0x300f520, size 0x8, virtual false, abstract: false, final false
  inline bool Unbind(::System::Type* contractType, ::System::Type* concreteType);

  /// @brief Method UnbindAll, addr 0x300f380, size 0x58, virtual false, abstract: false, final false
  inline void UnbindAll();

  /// @brief Method UnbindId, addr 0x300f528, size 0x294, virtual false, abstract: false, final false
  inline bool UnbindId(::System::Type* contractType, ::System::Type* concreteType, ::System::Object* identifier);

  /// @brief Method UnbindId, addr 0x300f3e0, size 0x84, virtual false, abstract: false, final false
  inline bool UnbindId(::System::Type* contractType, ::System::Object* identifier);

  /// @brief Method UnbindId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract> inline bool UnbindId(::System::Object* identifier);

  /// @brief Method UnbindId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract, typename TConcrete> inline bool UnbindId(::System::Object* identifier);

  /// @brief Method UnbindInterfacesTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline void UnbindInterfacesTo();

  /// @brief Method UnbindInterfacesTo, addr 0x300f464, size 0xbc, virtual false, abstract: false, final false
  inline void UnbindInterfacesTo(::System::Type* concreteType);

  /// @brief Method ValidateFullResolve, addr 0x3007c84, size 0x380, virtual false, abstract: false, final false
  inline void ValidateFullResolve();

  constexpr bool const& __cordl_internal_get__AssertOnNewGameObjects_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AssertOnNewGameObjects_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindStatement*>*& __cordl_internal_get__childBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindStatement*>*> const& __cordl_internal_get__childBindings() const;

  constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> const&
  __cordl_internal_get__containerLookups() const;

  constexpr ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*>&
  __cordl_internal_get__containerLookups();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__contextTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__contextTransform();

  constexpr ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*& __cordl_internal_get__currentBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>*> const& __cordl_internal_get__currentBindings() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*& __cordl_internal_get__decorators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>*> const&
  __cordl_internal_get__decorators() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__explicitDefaultParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__explicitDefaultParent();

  constexpr bool const& __cordl_internal_get__hasExplicitDefaultParent() const;

  constexpr bool& __cordl_internal_get__hasExplicitDefaultParent();

  constexpr bool const& __cordl_internal_get__hasLookedUpContextTransform() const;

  constexpr bool& __cordl_internal_get__hasLookedUpContextTransform();

  constexpr bool const& __cordl_internal_get__hasResolvedRoots() const;

  constexpr bool& __cordl_internal_get__hasResolvedRoots();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__inheritedDefaultParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__inheritedDefaultParent();

  constexpr bool const& __cordl_internal_get__isFinalizingBinding() const;

  constexpr bool& __cordl_internal_get__isFinalizingBinding();

  constexpr bool const& __cordl_internal_get__isInstalling() const;

  constexpr bool& __cordl_internal_get__isInstalling();

  constexpr bool const& __cordl_internal_get__isValidating() const;

  constexpr bool& __cordl_internal_get__isValidating();

  constexpr ::Zenject::LazyInstanceInjector*& __cordl_internal_get__lazyInjector();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInstanceInjector*> const& __cordl_internal_get__lazyInjector() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*& __cordl_internal_get__providers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>*> const&
  __cordl_internal_get__providers() const;

  constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& __cordl_internal_get__resolvesInProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const& __cordl_internal_get__resolvesInProgress() const;

  constexpr ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*& __cordl_internal_get__resolvesTwiceInProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>*> const& __cordl_internal_get__resolvesTwiceInProgress() const;

  constexpr ::Zenject::ZenjectSettings*& __cordl_internal_get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> const& __cordl_internal_get__settings() const;

  constexpr ::Zenject::Internal::SingletonMarkRegistry*& __cordl_internal_get__singletonMarkRegistry();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::SingletonMarkRegistry*> const& __cordl_internal_get__singletonMarkRegistry() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get__validatedTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Type*>*> const& __cordl_internal_get__validatedTypes() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IValidatable*>*& __cordl_internal_get__validationQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IValidatable*>*> const& __cordl_internal_get__validationQueue() const;

  constexpr void __cordl_internal_set__AssertOnNewGameObjects_k__BackingField(bool value);

  constexpr void __cordl_internal_set__childBindings(::System::Collections::Generic::List_1<::Zenject::BindStatement*>* value);

  constexpr void __cordl_internal_set__containerLookups(
      ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> value);

  constexpr void __cordl_internal_set__contextTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__currentBindings(::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* value);

  constexpr void __cordl_internal_set__decorators(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* value);

  constexpr void __cordl_internal_set__explicitDefaultParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__hasExplicitDefaultParent(bool value);

  constexpr void __cordl_internal_set__hasLookedUpContextTransform(bool value);

  constexpr void __cordl_internal_set__hasResolvedRoots(bool value);

  constexpr void __cordl_internal_set__inheritedDefaultParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__isFinalizingBinding(bool value);

  constexpr void __cordl_internal_set__isInstalling(bool value);

  constexpr void __cordl_internal_set__isValidating(bool value);

  constexpr void __cordl_internal_set__lazyInjector(::Zenject::LazyInstanceInjector* value);

  constexpr void
  __cordl_internal_set__providers(::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* value);

  constexpr void __cordl_internal_set__resolvesInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value);

  constexpr void __cordl_internal_set__resolvesTwiceInProgress(::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* value);

  constexpr void __cordl_internal_set__settings(::Zenject::ZenjectSettings* value);

  constexpr void __cordl_internal_set__singletonMarkRegistry(::Zenject::Internal::SingletonMarkRegistry* value);

  constexpr void __cordl_internal_set__validatedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  constexpr void __cordl_internal_set__validationQueue(::System::Collections::Generic::List_1<::Zenject::IValidatable*>* value);

  /// @brief Method .ctor, addr 0x300421c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x30065e0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(bool isValidating);

  /// @brief Method .ctor, addr 0x300671c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* parentContainer);

  /// @brief Method .ctor, addr 0x3006674, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* parentContainer, bool isValidating);

  /// @brief Method .ctor, addr 0x30067c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainers);

  /// @brief Method .ctor, addr 0x2fffc90, size 0xa10, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* parentContainersEnumerable, bool isValidating);

  /// @brief Method get_AllContracts, addr 0x3006ea0, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::BindingId>* get_AllContracts();

  /// @brief Method get_AllProviders, addr 0x30067d8, size 0x200, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::IProvider*>* get_AllProviders();

  /// @brief Method get_AncestorContainers, addr 0x3006e50, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> get_AncestorContainers();

  /// @brief Method get_AssertOnNewGameObjects, addr 0x3006e2c, size 0x8, virtual false, abstract: false, final false
  inline bool get_AssertOnNewGameObjects();

  /// @brief Method get_ChecksForCircularDependencies, addr 0x3006e7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ChecksForCircularDependencies();

  /// @brief Method get_ContextTransform, addr 0x3006d74, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_ContextTransform();

  /// @brief Method get_DefaultParent, addr 0x3006e48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_DefaultParent();

  /// @brief Method get_InheritedDefaultParent, addr 0x3006e40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_InheritedDefaultParent();

  /// @brief Method get_IsInstalling, addr 0x3006e8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInstalling();

  /// @brief Method get_IsValidating, addr 0x3006e84, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsValidating();

  /// @brief Method get_ParentContainers, addr 0x3006d48, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*> get_ParentContainers();

  /// @brief Method get_Settings, addr 0x30067c8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ZenjectSettings* get_Settings();

  /// @brief Method get_SingletonMarkRegistry, addr 0x30067d0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::Internal::SingletonMarkRegistry* get_SingletonMarkRegistry();

  /// @brief Convert to "::Zenject::IInstantiator"
  constexpr ::Zenject::IInstantiator* i___Zenject__IInstantiator() noexcept;

  /// @brief Method set_AssertOnNewGameObjects, addr 0x3006e34, size 0xc, virtual false, abstract: false, final false
  inline void set_AssertOnNewGameObjects(bool value);

  /// @brief Method set_DefaultParent, addr 0x2ffe73c, size 0x10, virtual false, abstract: false, final false
  inline void set_DefaultParent(::UnityEngine::Transform* value);

  /// @brief Method set_IsInstalling, addr 0x3006e94, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInstalling(bool value);

  /// @brief Method set_Settings, addr 0x3000a18, size 0x80, virtual false, abstract: false, final false
  inline void set_Settings(::Zenject::ZenjectSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiContainer(DiContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiContainer(DiContainer const&) = delete;

  /// @brief Field _decorators, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::Internal::IDecoratorProvider*>* ____decorators;

  /// @brief Field _providers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::System::Collections::Generic::List_1<::Zenject::__DiContainer__ProviderInfo*>*>* ____providers;

  /// @brief Field _containerLookups, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>, ::Array<::ArrayW<::Zenject::DiContainer*, ::Array<::Zenject::DiContainer*>*>>*> ____containerLookups;

  /// @brief Field _resolvesInProgress, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* ____resolvesInProgress;

  /// @brief Field _resolvesTwiceInProgress, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::Zenject::Internal::LookupId*>* ____resolvesTwiceInProgress;

  /// @brief Field _lazyInjector, offset: 0x38, size: 0x8, def value: None
  ::Zenject::LazyInstanceInjector* ____lazyInjector;

  /// @brief Field _singletonMarkRegistry, offset: 0x40, size: 0x8, def value: None
  ::Zenject::Internal::SingletonMarkRegistry* ____singletonMarkRegistry;

  /// @brief Field _currentBindings, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::Zenject::BindStatement*>* ____currentBindings;

  /// @brief Field _childBindings, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::BindStatement*>* ____childBindings;

  /// @brief Field _validatedTypes, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ____validatedTypes;

  /// @brief Field _validationQueue, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IValidatable*>* ____validationQueue;

  /// @brief Field _contextTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____contextTransform;

  /// @brief Field _hasLookedUpContextTransform, offset: 0x70, size: 0x1, def value: None
  bool ____hasLookedUpContextTransform;

  /// @brief Field _inheritedDefaultParent, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____inheritedDefaultParent;

  /// @brief Field _explicitDefaultParent, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____explicitDefaultParent;

  /// @brief Field _hasExplicitDefaultParent, offset: 0x88, size: 0x1, def value: None
  bool ____hasExplicitDefaultParent;

  /// @brief Field _settings, offset: 0x90, size: 0x8, def value: None
  ::Zenject::ZenjectSettings* ____settings;

  /// @brief Field _hasResolvedRoots, offset: 0x98, size: 0x1, def value: None
  bool ____hasResolvedRoots;

  /// @brief Field _isFinalizingBinding, offset: 0x99, size: 0x1, def value: None
  bool ____isFinalizingBinding;

  /// @brief Field _isValidating, offset: 0x9a, size: 0x1, def value: None
  bool ____isValidating;

  /// @brief Field _isInstalling, offset: 0x9b, size: 0x1, def value: None
  bool ____isInstalling;

  /// @brief Field <AssertOnNewGameObjects>k__BackingField, offset: 0x9c, size: 0x1, def value: None
  bool ____AssertOnNewGameObjects_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DiContainer, 0xa0>, "Size mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____decorators) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____providers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____containerLookups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____resolvesInProgress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____resolvesTwiceInProgress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____lazyInjector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____singletonMarkRegistry) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____currentBindings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____childBindings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____validatedTypes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____validationQueue) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____contextTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____hasLookedUpContextTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____inheritedDefaultParent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____explicitDefaultParent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____hasExplicitDefaultParent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____settings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____hasResolvedRoots) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____isFinalizingBinding) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____isValidating) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____isInstalling) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::Zenject::DiContainer, ____AssertOnNewGameObjects_k__BackingField) == 0x9c, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DiContainer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DiContainer*, "Zenject", "DiContainer");
NEED_NO_BOX(::Zenject::__DiContainer__ProviderInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer__ProviderInfo*, "Zenject", "DiContainer/ProviderInfo");
NEED_NO_BOX(::Zenject::__DiContainer___GetDependencyContracts_d__96);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer___GetDependencyContracts_d__96*, "Zenject", "DiContainer/<GetDependencyContracts>d__96");
NEED_NO_BOX(::Zenject::__DiContainer____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c*, "Zenject", "DiContainer/<>c");
NEED_NO_BOX(::Zenject::__DiContainer____c__DisplayClass178_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c__DisplayClass178_0*, "Zenject", "DiContainer/<>c__DisplayClass178_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__DiContainer____c__DisplayClass203_0_1, "Zenject", "DiContainer/<>c__DisplayClass203_0`1");
NEED_NO_BOX(::Zenject::__DiContainer____c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__DiContainer____c__DisplayClass86_0*, "Zenject", "DiContainer/<>c__DisplayClass86_0");
