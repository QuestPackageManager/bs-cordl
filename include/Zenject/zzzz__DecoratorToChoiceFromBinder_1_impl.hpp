#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__DecoratorToChoiceFromBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_2_def.hpp"
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindContainer;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindContainer;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__bindContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::BindInfo*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__bindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindInfo;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__bindInfo(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract> constexpr ::Zenject::FactoryBindInfo*& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__factoryBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& Zenject::DecoratorToChoiceFromBinder_1<TContract>::__get__factoryBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factoryBindInfo;
}
template <typename TContract> constexpr void Zenject::DecoratorToChoiceFromBinder_1<TContract>::__set__factoryBindInfo(::Zenject::FactoryBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____factoryBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TContract>
inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* Zenject::DecoratorToChoiceFromBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                        ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TContract>
inline void Zenject::DecoratorToChoiceFromBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TContract> template <typename TConcrete> inline ::Zenject::FactoryFromBinder_2<TContract, TConcrete>* Zenject::DecoratorToChoiceFromBinder_1<TContract>::With() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::DecoratorToChoiceFromBinder_1<TContract>*>::get(), "With",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_2<TContract, TConcrete>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::DecoratorToChoiceFromBinder_1<TContract>::DecoratorToChoiceFromBinder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
