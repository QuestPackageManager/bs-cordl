#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_7_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_7_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_7_def.hpp"
#include "System/zzzz__Func_8_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IFactory_7_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*&
Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*> const&
Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr void Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__set_method(
    ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::IProvider*
Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
      "<FromMethod>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::System::Object*
Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
      "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
      "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::__FactoryFromBinder_7____c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::__FactoryFromBinder_7____c__DisplayClass1_0() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline void Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::setStaticF___9(
    ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<
      ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get>(
      std::forward<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*
Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline void Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::setStaticF___9__2_0(
    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*, "<>9__2_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*
Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<
      ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>*, "<>9__2_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get>();
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*
Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline void Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get(), ".ctor",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline void Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::_FromFactory_b__2_0(
    ::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get(),
      "<FromFactory>b__2_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline ::System::Object*
Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get(),
      "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
inline ::Zenject::InjectTypeInfo* Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>*>::get(),
      "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TSubFactory>
constexpr ::Zenject::__FactoryFromBinder_7____c__2_1<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TSubFactory>::__FactoryFromBinder_7____c__2_1() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(container, bindInfo, factoryBindInfo));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                                 ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FromMethod(
    ::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(), "FromMethod",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_8<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
                                  "FromFactory", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FromSubContainerResolve() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(),
                                  "FromSubContainerResolve", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>::get(), "FromSubContainerResolve",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*, false>(this, ___internal_method, subIdentifier);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::FactoryFromBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FactoryFromBinder_7() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
