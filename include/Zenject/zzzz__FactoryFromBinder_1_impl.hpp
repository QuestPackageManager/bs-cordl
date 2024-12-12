#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinderBase_impl.hpp"
#include "Zenject/zzzz__InjectSources_impl.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__ArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinder_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::setStaticF___9(::Zenject::FactoryFromBinder_1___c<TContract>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_1___c<TContract>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get>(
      std::forward<::Zenject::FactoryFromBinder_1___c<TContract>*>(value));
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c<TContract>* Zenject::FactoryFromBinder_1___c<TContract>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_1___c<TContract>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get>();
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::setStaticF___9__8_2(::System::Func_2<TContract, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TContract, bool>*, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get>(
      std::forward<::System::Func_2<TContract, bool>*>(value));
}
template <typename TContract> inline ::System::Func_2<TContract, bool>* Zenject::FactoryFromBinder_1___c<TContract>::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<TContract, bool>*, "<>9__8_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get>();
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::FactoryFromBinder_1___c<TContract>::_FromComponentInHierarchy_b__8_2(TContract x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get(), "<FromComponentInHierarchy>b__8_2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TContract>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c<TContract>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c<TContract>* Zenject::FactoryFromBinder_1___c<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1___c<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c<TContract>::FactoryFromBinder_1___c() {}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::setStaticF___9(::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* value) {
  ::cordl_internals::setStaticField<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get>(
      std::forward<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>(value));
}
template <typename TContract, typename TSubFactory>
inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get>();
}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get>(
      std::forward<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*>(value));
}
template <typename TContract, typename TSubFactory>
inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get>();
}
template <typename TContract, typename TSubFactory> inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract, typename TSubFactory>
inline void Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::_FromFactory_b__5_0(::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get(), "<FromFactory>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x);
}
template <typename TContract, typename TSubFactory>
inline ::System::Object* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TSubFactory> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TContract, typename TSubFactory> inline ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>* Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>*>());
}
// Ctor Parameters []
template <typename TContract, typename TSubFactory> constexpr ::Zenject::FactoryFromBinder_1___c__5_1<TContract, TSubFactory>::FactoryFromBinder_1___c__5_1() {}
template <typename TContract, typename TObj> constexpr ::System::Object*& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_subIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
template <typename TContract, typename TObj> constexpr ::System::Object* const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_subIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subIdentifier;
}
template <typename TContract, typename TObj> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_subIdentifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___subIdentifier, value);
}
template <typename TContract, typename TObj> constexpr ::System::Func_2<TObj, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract, typename TObj>
constexpr ::System::Func_2<TObj, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract, typename TObj>
constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_method(::System::Func_2<TObj, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___method, value);
}
template <typename TContract, typename TObj> constexpr ::Zenject::InjectSources& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TContract, typename TObj> constexpr ::Zenject::InjectSources const& Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TContract, typename TObj> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__cordl_internal_set_source(::Zenject::InjectSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename TContract, typename TObj> inline void Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract, typename TObj>
inline ::Zenject::IProvider* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::_FromResolveGetter_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>::get(), "<FromResolveGetter>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract, typename TObj>
inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract, typename TObj> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TContract, typename TObj>
inline ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>* Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>*>());
}
// Ctor Parameters []
template <typename TContract, typename TObj> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass3_0_1<TContract, TObj>::FactoryFromBinder_1___c__DisplayClass3_0_1() {}
template <typename TContract> constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr ::System::Func_2<::Zenject::DiContainer*, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__cordl_internal_set_method(::System::Func_2<::Zenject::DiContainer*, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___method, value);
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::_FromMethod_b__0(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>::get(), "<FromMethod>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>* Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass4_0<TContract>::FactoryFromBinder_1___c__DisplayClass4_0() {}
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set___4__this(::Zenject::FactoryFromBinder_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TContract> constexpr bool& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get_includeInactive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
template <typename TContract> constexpr bool const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get_includeInactive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInactive;
}
template <typename TContract> constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set_includeInactive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInactive = value;
}
template <typename TContract> constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>*& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
template <typename TContract>
constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* const& Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
template <typename TContract>
constexpr void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__cordl_internal_set___9__1(::System::Func_2<::UnityW<::UnityEngine::GameObject>, TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____9__1, value);
}
template <typename TContract> inline void Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline TContract Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__0(::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>::get(), "<FromComponentInHierarchy>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, _);
}
template <typename TContract> inline TContract Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::_FromComponentInHierarchy_b__1(::UnityEngine::GameObject* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>::get(), "<FromComponentInHierarchy>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TContract, false>(this, ___internal_method, x);
}
template <typename TContract> inline ::System::Object* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>* Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>*>());
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1___c__DisplayClass8_0<TContract>::FactoryFromBinder_1___c__DisplayClass8_0() {}
template <typename TContract>
inline void Zenject::FactoryFromBinder_1<TContract>::_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, bindInfo, factoryBindInfo);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromResolveGetter",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromResolveGetter",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, subIdentifier, method);
}
template <typename TContract>
template <typename TObj>
inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromResolveGetter(::System::Object* subIdentifier, ::System::Func_2<TObj, TContract>* method,
                                                                                                         ::Zenject::InjectSources source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromResolveGetter",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj, TContract>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, subIdentifier, method, source);
}
template <typename TContract> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromMethod(::System::Func_2<::Zenject::DiContainer*, TContract>* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromMethod", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Zenject::DiContainer*, TContract>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, method);
}
template <typename TContract> template <typename TSubFactory> inline ::Zenject::ArgConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromFactory() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromFactory",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArgConditionCopyNonLazyBinder*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(),
                                                                             "FromSubContainerResolve", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FactorySubContainerBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::FromSubContainerResolve(::System::Object* subIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromSubContainerResolve",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactorySubContainerBinder_1<TContract>*, false>(this, ___internal_method, subIdentifier);
}
template <typename TContract> inline ::Zenject::ConditionCopyNonLazyBinder* Zenject::FactoryFromBinder_1<TContract>::FromComponentInHierarchy(bool includeInactive) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryFromBinder_1<TContract>*>::get(), "FromComponentInHierarchy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConditionCopyNonLazyBinder*, false>(this, ___internal_method, includeInactive);
}
template <typename TContract>
inline ::Zenject::FactoryFromBinder_1<TContract>* Zenject::FactoryFromBinder_1<TContract>::New_ctor(::Zenject::DiContainer* container, ::Zenject::BindInfo* bindInfo,
                                                                                                    ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryFromBinder_1<TContract>*>(container, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryFromBinder_1<TContract>::FactoryFromBinder_1() {}
