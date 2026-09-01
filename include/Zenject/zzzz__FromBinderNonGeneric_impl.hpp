#pragma once
// IWYU pragma private; include "Zenject\FromBinderNonGeneric.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinder_impl.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
template <typename TConcrete, typename TFactory>
inline void Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::setStaticF___9(::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*, "<>9", ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(
      std::forward<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(value));
}
template <typename TConcrete, typename TFactory> inline ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>* Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*, "<>9", ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>();
}
template <typename TConcrete, typename TFactory>
inline void Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*, "<>9__1_0",
                                    ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*>(value));
}
template <typename TConcrete, typename TFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>* Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>*, "<>9__1_0",
                                           ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>();
}
template <typename TConcrete, typename TFactory> inline void Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TConcrete, typename TFactory>
inline void Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::_FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(),
                                                           { "<FromFactory>b__1_0", {}, { ::i2c::type_of<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TConcrete>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TConcrete, typename TFactory> inline ::System::Object* Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TConcrete, typename TFactory> inline ::Zenject::InjectTypeInfo* Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TConcrete, typename TFactory> inline ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>* Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>*>());
}
// Ctor Parameters []
template <typename TConcrete, typename TFactory> constexpr ::Zenject::FromBinderNonGeneric___c__1_2<TConcrete, TFactory>::FromBinderNonGeneric___c__1_2() {}
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::FromBinderNonGeneric::*)(::Zenject::DiContainer*, ::Zenject::BindInfo*, ::Zenject::BindStatement*)>(
    &::Zenject::FromBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e5cb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (::Zenject::FromBinderNonGeneric::*)(::System::Object*)>(
    &::Zenject::FromBinderNonGeneric::FromInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5cb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(), { "FromInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e5cb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                                { "FromComponentsInChildren", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(bool, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                            { "FromComponentsInChildren", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::FromBinderNonGeneric.FromComponentsInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (
    ::Zenject::FromBinderNonGeneric::*)(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*, bool)>(&::Zenject::FromBinderNonGeneric::FromComponentsInHierarchy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5cb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                                { "FromComponentsInHierarchy", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void Zenject::FromBinderNonGeneric::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::BindStatement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TConcrete, typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(), { "FromFactory", { ::i2c::class_of<TConcrete>(), ::i2c::class_of<TFactory>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>(), ::i2c::class_of<TFactory>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderNonGeneric::FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                          { "FromIFactory", { ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, factoryBindGenerator);
}
template <typename TConcrete>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromMethod(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                                           { "FromMethod", { ::i2c::class_of<TConcrete>() }, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, TConcrete>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TConcrete>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderNonGeneric::FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
          { "FromMethodMultiple", { ::i2c::class_of<TConcrete>() }, { ::i2c::type_of<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TConcrete>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromResolveGetter", { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(), { "FromResolveGetter",
                                                                                                     { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() },
                                                                                                     { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                 ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromResolveGetter",
                                                { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() },
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method, source);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromResolveAllGetter", { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() }, { ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(), { "FromResolveAllGetter",
                                                                                                     { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() },
                                                                                                     { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method);
}
template <typename TObj, typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                    ::Zenject::InjectSources source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromResolveAllGetter",
                                                { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() },
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Func_2<TObj, TContract>*>(), ::i2c::type_of<::Zenject::InjectSources>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObj>(), ::i2c::class_of<TContract>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, identifier, method, source);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromInstance(::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(), { "FromInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, instance);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromComponentsInChildren(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate,
                                                                                                                        bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromComponentsInChildren", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, predicate, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderNonGeneric::FromComponentsInChildren(bool excludeSelf, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                          { "FromComponentsInChildren", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, excludeSelf, predicate, includeInactive);
}
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderNonGeneric::FromComponentsInHierarchy(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate,
                                                                                                                         bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FromBinderNonGeneric*>(),
                                              { "FromComponentsInHierarchy", {}, { ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, ___internal_method, predicate, includeInactive);
}
inline ::Zenject::FromBinderNonGeneric* Zenject::FromBinderNonGeneric::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FromBinderNonGeneric*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
constexpr ::Zenject::FromBinderNonGeneric::FromBinderNonGeneric() {}
