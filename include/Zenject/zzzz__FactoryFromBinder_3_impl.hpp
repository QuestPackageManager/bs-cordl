#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_3_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_3_def.hpp"
#include "Zenject/zzzz__IFactory_3_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::setStaticF___9(::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get>(
      std::forward<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>(value));
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>* Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get>();
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::setStaticF___9__2_0(
    ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>*, "<>9__2_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>*>(value));
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>*
Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>*, "<>9__2_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get>();
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory> inline void Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline void
Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::_FromFactory_b__2_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get(), "<FromFactory>b__2_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_3<TParam1, TParam2, TContract>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline ::System::Object* Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>* Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract, typename TSubFactory>
constexpr ::Zenject::FactoryFromBinder_3___c__2_1<TParam1, TParam2, TContract, TSubFactory>::FactoryFromBinder_3___c__2_1() {}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>*& Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* const&
Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TParam1, typename TParam2, typename TContract>
constexpr void
Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::__cordl_internal_set_method(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___method, value);
}
template <typename TParam1, typename TParam2, typename TContract> inline void Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(), "<FromMethod>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::System::Object* Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(), "__zenCreate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>* Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract>
constexpr ::Zenject::FactoryFromBinder_3___c__DisplayClass1_0<TParam1, TParam2, TContract>::FactoryFromBinder_3___c__DisplayClass1_0() {}
template <typename TParam1, typename TParam2, typename TContract>
inline void Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::FromMethod(::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>::get(), "FromMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::Zenject::DiContainer*, TParam1, TParam2, TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TParam1, typename TParam2, typename TContract>
template <typename TSubFactory>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>::get(), "FromFactory",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::FromSubContainerResolve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>::get(), "FromSubContainerResolve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>* Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>::get(), "FromSubContainerResolve",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal_method, subIdentifier);
}
template <typename TParam1, typename TParam2, typename TContract>
inline ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*
Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TContract> constexpr ::Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>::FactoryFromBinder_3() {}
