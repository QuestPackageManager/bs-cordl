#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabResourceFactory_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_3_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_3<::StringW,P1,T>"
template <typename P1, typename T> constexpr Zenject::PrefabResourceFactory_2<P1, T>::operator ::Zenject::IFactory_3<::StringW, P1, T>*() noexcept {
  return static_cast<::Zenject::IFactory_3<::StringW, P1, T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_3<::StringW,P1,T>"
template <typename P1, typename T> constexpr ::Zenject::IFactory_3<::StringW, P1, T>* Zenject::PrefabResourceFactory_2<P1, T>::i___Zenject__IFactory_3___StringW_P1_T_() noexcept {
  return static_cast<::Zenject::IFactory_3<::StringW, P1, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename P1, typename T> constexpr Zenject::PrefabResourceFactory_2<P1, T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename P1, typename T> constexpr ::Zenject::IFactory* Zenject::PrefabResourceFactory_2<P1, T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename P1, typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceFactory_2<P1, T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename T> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::PrefabResourceFactory_2<P1, T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename T> constexpr void Zenject::PrefabResourceFactory_2<P1, T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename P1, typename T> inline ::Zenject::DiContainer* Zenject::PrefabResourceFactory_2<P1, T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(), "get_Container",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename P1, typename T> inline T Zenject::PrefabResourceFactory_2<P1, T>::Create(::StringW prefabResourceName, P1 param) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefabResourceName, param);
}
template <typename P1, typename T> inline ::Zenject::PrefabResourceFactory_2<P1, T>* Zenject::PrefabResourceFactory_2<P1, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabResourceFactory_2<P1, T>*>());
}
template <typename P1, typename T> inline void Zenject::PrefabResourceFactory_2<P1, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename P1, typename T> inline ::System::Object* Zenject::PrefabResourceFactory_2<P1, T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename P1, typename T> inline void Zenject::PrefabResourceFactory_2<P1, T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(),
                                                                             "__zenFieldSetter0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename P1, typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceFactory_2<P1, T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_2<P1, T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename P1, typename T> constexpr ::Zenject::PrefabResourceFactory_2<P1, T>::PrefabResourceFactory_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
