#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_2<::UnityEngine::Object*,T>"
template <typename T> constexpr Zenject::PrefabFactory_1<T>::operator ::Zenject::IFactory_2<::UnityEngine::Object*, T>*() noexcept {
  return static_cast<::Zenject::IFactory_2<::UnityEngine::Object*, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename T> constexpr Zenject::PrefabFactory_1<T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabFactory_1<T>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::PrefabFactory_1<T>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename T> constexpr void Zenject::PrefabFactory_1<T>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Zenject::DiContainer* Zenject::PrefabFactory_1<T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), "get_Container",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename T> inline T Zenject::PrefabFactory_1<T>::Create(::UnityEngine::Object* prefab) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab);
}
template <typename T> inline ::Zenject::PrefabFactory_1<T>* Zenject::PrefabFactory_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PrefabFactory_1<T>*>());
}
template <typename T> inline void Zenject::PrefabFactory_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Zenject::PrefabFactory_1<T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename T> inline void Zenject::PrefabFactory_1<T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), "__zenFieldSetter0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabFactory_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_1<T>*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::PrefabFactory_1<T>::PrefabFactory_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
