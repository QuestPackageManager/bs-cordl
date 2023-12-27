#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinder_impl.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template <typename TContract, typename TFactory>
inline void Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::setStaticF___9(::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get>(
      std::forward<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>(value));
}
template <typename TContract, typename TFactory>
inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get>();
}
template <typename TContract, typename TFactory>
inline void Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::setStaticF___9__1_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__1_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>(value));
}
template <typename TContract, typename TFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__1_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get>();
}
template <typename TContract, typename TFactory> inline ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>* Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>());
}
template <typename TContract, typename TFactory> inline void Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract, typename TFactory>
inline void Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::_FromFactory_b__1_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get(), "<FromFactory>b__1_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TContract, typename TFactory>
inline ::System::Object* Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TFactory> inline ::Zenject::InjectTypeInfo* Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract, typename TFactory> constexpr ::Zenject::__FromBinderGeneric_1____c__1_1<TContract, TFactory>::__FromBinderGeneric_1____c__1_1() {}
template <typename TContract> constexpr ::System::Func_1<TContract>*& Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___method;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TContract>*> const& Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___method;
}
template <typename TContract> constexpr void Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__set_method(::System::Func_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>* Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline TContract Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::_FromMethod_b__0(::Zenject::InjectContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>*>::get(), "<FromMethod>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, ctx);
}
template <typename TContract> inline ::System::Object* Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FromBinderGeneric_1____c__DisplayClass3_0<TContract>::__FromBinderGeneric_1____c__DisplayClass3_0() {}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>*& Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract, bool>*> const& Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr void Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__set_predicate(::System::Func_2<TContract, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>* Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::_FromComponentsInChildren_b__0(::UnityEngine::Component* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>*>::get(), "<FromComponentsInChildren>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component);
}
template <typename TContract> inline ::System::Object* Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FromBinderGeneric_1____c__DisplayClass14_0<TContract>::__FromBinderGeneric_1____c__DisplayClass14_0() {}
template <typename TContract> constexpr ::System::Func_2<TContract, bool>*& Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TContract, bool>*> const& Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TContract> constexpr void Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__set_predicate(::System::Func_2<TContract, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>* Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::_FromComponentsInHierarchy_b__0(::UnityEngine::Component* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>*>::get(), "<FromComponentsInHierarchy>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component);
}
template <typename TContract> inline ::System::Object* Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__FromBinderGeneric_1____c__DisplayClass15_0<TContract>::__FromBinderGeneric_1____c__DisplayClass15_0() {}
template <typename TContract>
inline ::Zenject::FromBinderGeneric_1<TContract>* Zenject::FromBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                    ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FromBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
template <typename TContract>
inline void Zenject::FromBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> template <typename TFactory> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromFactory() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromFactory",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderGeneric_1<TContract>::FromIFactory(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromIFactory", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, factoryBindGenerator);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromMethod(::System::Func_1<TContract>* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromMethod(::System::Func_2<::Zenject::InjectContext*, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromMethod", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
Zenject::FromBinderGeneric_1<TContract>::FromMethodMultiple(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromMethodMultiple", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TContract>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                           ::Zenject::InjectSources source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method, source);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveAllGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveAllGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromResolveAllGetter(::System::Object* identifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                                              ::Zenject::InjectSources source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromResolveAllGetter",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, identifier, method, source);
}
template <typename TContract> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromInstance(TContract instance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, instance);
}
/// @param includeInactive: bool (default: true)
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInChildren(::System::Func_2<TContract, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TContract, bool>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, predicate, includeInactive);
}
/// @param excludeSelf: bool (default: false)
/// @param predicate: ::System::Func_2<TContract,bool>* (default: nullptr)
/// @param includeInactive: bool (default: true)
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInChildren(bool excludeSelf, ::System::Func_2<TContract, bool>* predicate,
                                                                                                                                  bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromComponentsInChildren", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TContract, bool>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, excludeSelf, predicate, includeInactive);
}
/// @param predicate: ::System::Func_2<TContract,bool>* (default: nullptr)
/// @param includeInactive: bool (default: true)
template <typename TContract>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* Zenject::FromBinderGeneric_1<TContract>::FromComponentsInHierarchy(::System::Func_2<TContract, bool>* predicate, bool includeInactive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FromBinderGeneric_1<TContract>*>::get(), "FromComponentsInHierarchy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TContract, bool>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal_method, predicate, includeInactive);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FromBinderGeneric_1<TContract>::FromBinderGeneric_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
