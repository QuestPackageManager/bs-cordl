#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_impl.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__ConventionSelectTypesBinder_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TContract> constexpr ::System::Type*& Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__get_concreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___concreteType;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__get_concreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___concreteType;
}
template <typename TContract> constexpr void Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__set_concreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___concreteType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> inline ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>* Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>*>());
}
template <typename TContract> inline void Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TContract> inline bool Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::_To_b__1(::System::Type* contractType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>*>::get(), "<To>b__1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contractType);
}
template <typename TContract> inline ::System::Object* Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::__ConcreteBinderGeneric_1____c__DisplayClass5_0<TContract>::__ConcreteBinderGeneric_1____c__DisplayClass5_0() {}
template <typename TContract>
inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::ConcreteBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                            ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ConcreteBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
template <typename TContract>
inline void Zenject::ConcreteBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> inline ::Zenject::FromBinderGeneric_1<TContract>* Zenject::ConcreteBinderGeneric_1<TContract>::ToSelf() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "ToSelf",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TContract>*, false>(this, ___internal_method);
}
template <typename TContract> template <typename TConcrete> inline ::Zenject::FromBinderGeneric_1<TConcrete>* Zenject::ConcreteBinderGeneric_1<TContract>::To() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "To",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderGeneric_1<TConcrete>*, false>(this, ___internal_method);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::ArrayW<::System::Type*, ::Array<::System::Type*>*> concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "To", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, concreteTypes);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "To", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, concreteTypes);
}
template <typename TContract> inline ::Zenject::FromBinderNonGeneric* Zenject::ConcreteBinderGeneric_1<TContract>::To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "To", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::ConventionSelectTypesBinder*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FromBinderNonGeneric*, false>(this, ___internal_method, generator);
}
template <typename TContract> inline ::Zenject::IProvider* Zenject::ConcreteBinderGeneric_1<TContract>::_ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "<ToSelf>b__1_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal_method, container, type);
}
template <typename TContract> inline bool Zenject::ConcreteBinderGeneric_1<TContract>::_To_b__5_0(::System::Type* concreteType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteBinderGeneric_1<TContract>*>::get(), "<To>b__5_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, concreteType);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::ConcreteBinderGeneric_1<TContract>::ConcreteBinderGeneric_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
