#pragma once
// IWYU pragma private; include "Zenject/PrefabResourceFactory_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabResourceFactory_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename P1, typename P2, typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabResourceFactory_3<P1, P2, T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename T> constexpr ::Zenject::DiContainer* const& Zenject::PrefabResourceFactory_3<P1, P2, T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename T> constexpr void Zenject::PrefabResourceFactory_3<P1, P2, T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename P1, typename P2, typename T> inline ::Zenject::DiContainer* Zenject::PrefabResourceFactory_3<P1, P2, T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(),
                                                                             "get_Container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename T> inline T Zenject::PrefabResourceFactory_3<P1, P2, T>::Create(::StringW prefabResourceName, P1 param, P2 param2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefabResourceName, param, param2);
}
template <typename P1, typename P2, typename T> inline void Zenject::PrefabResourceFactory_3<P1, P2, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename T> inline ::System::Object* Zenject::PrefabResourceFactory_3<P1, P2, T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename P1, typename P2, typename T> inline void Zenject::PrefabResourceFactory_3<P1, P2, T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(),
                                                                             "__zenFieldSetter0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename P1, typename P2, typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabResourceFactory_3<P1, P2, T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename P1, typename P2, typename T> inline ::Zenject::PrefabResourceFactory_3<P1, P2, T>* Zenject::PrefabResourceFactory_3<P1, P2, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabResourceFactory_3<P1, P2, T>*>());
}
/// @brief Convert operator to "::Zenject::IFactory_4<::StringW,P1,P2,T>"
template <typename P1, typename P2, typename T> constexpr Zenject::PrefabResourceFactory_3<P1, P2, T>::operator ::Zenject::IFactory_4<::StringW, P1, P2, T>*() noexcept {
  return static_cast<::Zenject::IFactory_4<::StringW, P1, P2, T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_4<::StringW,P1,P2,T>"
template <typename P1, typename P2, typename T>
constexpr ::Zenject::IFactory_4<::StringW, P1, P2, T>* Zenject::PrefabResourceFactory_3<P1, P2, T>::i___Zenject__IFactory_4___StringW_P1_P2_T_() noexcept {
  return static_cast<::Zenject::IFactory_4<::StringW, P1, P2, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename P1, typename P2, typename T> constexpr Zenject::PrefabResourceFactory_3<P1, P2, T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename P1, typename P2, typename T> constexpr ::Zenject::IFactory* Zenject::PrefabResourceFactory_3<P1, P2, T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename P1, typename P2, typename T> constexpr ::Zenject::PrefabResourceFactory_3<P1, P2, T>::PrefabResourceFactory_3() {}
