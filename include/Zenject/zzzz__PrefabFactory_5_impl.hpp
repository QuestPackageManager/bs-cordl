#pragma once
// IWYU pragma private; include "Zenject/PrefabFactory_5.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PrefabFactory_5_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_6_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename P1, typename P2, typename P3, typename P4, typename T> constexpr ::Zenject::DiContainer*& Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename P4, typename T>
constexpr ::Zenject::DiContainer* const& Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename P1, typename P2, typename P3, typename P4, typename T> constexpr void Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____container, value);
}
template <typename P1, typename P2, typename P3, typename P4, typename T> inline ::Zenject::DiContainer* Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(),
                                                                             "get_Container", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename P4, typename T>
inline T Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::Create(::UnityEngine::Object* prefab, P1 param, P2 param2, P3 param3, P4 param4) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, prefab, param, param2, param3, param4);
}
template <typename P1, typename P2, typename P3, typename P4, typename T> inline void Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename P4, typename T>
inline ::System::Object* Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename P1, typename P2, typename P3, typename P4, typename T> inline void Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(),
                                                                             "__zenFieldSetter0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename P1, typename P2, typename P3, typename P4, typename T> inline ::Zenject::InjectTypeInfo* Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename P1, typename P2, typename P3, typename P4, typename T> inline ::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>* Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>*>());
}
/// @brief Convert operator to "::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>,P1,P2,P3,P4,T>"
template <typename P1, typename P2, typename P3, typename P4, typename T>
constexpr Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::operator ::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>, P1, P2, P3, P4, T>*() noexcept {
  return static_cast<::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>, P1, P2, P3, P4, T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>,P1,P2,P3,P4,T>"
template <typename P1, typename P2, typename P3, typename P4, typename T>
constexpr ::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>, P1, P2, P3, P4, T>*
Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::i___Zenject__IFactory_6___UnityW___UnityEngine__Object__P1_P2_P3_P4_T_() noexcept {
  return static_cast<::Zenject::IFactory_6<::UnityW<::UnityEngine::Object>, P1, P2, P3, P4, T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename P1, typename P2, typename P3, typename P4, typename T> constexpr Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename P1, typename P2, typename P3, typename P4, typename T> constexpr ::Zenject::IFactory* Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename P1, typename P2, typename P3, typename P4, typename T> constexpr ::Zenject::PrefabFactory_5<P1, P2, P3, P4, T>::PrefabFactory_5() {}
