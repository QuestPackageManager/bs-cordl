#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabResourceFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_5_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_5<::StringW,P1,P2,P3,T>"
template <typename P1, typename P2, typename P3, typename T> constexpr Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::operator ::Zenject::IFactory_5<::StringW, P1, P2, P3, T>*() noexcept {
  return static_cast<::Zenject::IFactory_5<::StringW, P1, P2, P3, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename P1, typename P2, typename P3, typename T> constexpr Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename T> constexpr void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::DiContainer* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(),
                                                                             "get_Container", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename T> inline T Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::Create(::StringW prefabResourceName, P1 param, P2 param2, P3 param3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<P1>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<P2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<P3>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefabResourceName, param, param2, param3);
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>());
}
template <typename P1, typename P2, typename P3, typename T> inline void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename T>
inline ::System::Object* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename P1, typename P2, typename P3, typename T> inline void Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(), "__zenFieldSetter0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename P1, typename P2, typename P3, typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename P1, typename P2, typename P3, typename T> constexpr ::Zenject::PrefabResourceFactory_4<P1, P2, P3, T>::PrefabResourceFactory_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
