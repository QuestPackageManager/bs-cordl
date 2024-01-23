#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::New_ctor(::System::Object* object,
                                                                                                                                                                          void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>(object, method));
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::Invoke(ByRef<T> state) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename T>
inline ::System::IAsyncResult* UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::BeginInvoke(ByRef<T> state, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, state, callback, object);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::EndInvoke(ByRef<T> state, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, result);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>::__SavedStructState_1__TypedRestore() {}
/// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
template <typename T> constexpr UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::operator ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Utilities::ISavedState*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Utilities::ISavedState"
template <typename T>
constexpr ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::i___UnityEngine__InputSystem__Utilities__ISavedState() noexcept {
  return static_cast<::UnityEngine::InputSystem::Utilities::ISavedState*>(static_cast<void*>(this));
}
template <typename T> constexpr T& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
template <typename T> constexpr T const& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_State;
}
template <typename T> constexpr void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_set_m_State(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_State)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_RestoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreAction;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*> const&
UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_RestoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreAction;
}
template <typename T>
constexpr void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RestoreAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action*& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_StaticDisposeCurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticDisposeCurrentState;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_StaticDisposeCurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticDisposeCurrentState;
}
template <typename T> constexpr void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_set_m_StaticDisposeCurrentState(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StaticDisposeCurrentState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param staticDisposeCurrentState: ::System::Action* (default: nullptr)
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*
UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::New_ctor(ByRef<T> state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* restoreAction,
                                                                     ::System::Action* staticDisposeCurrentState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(state, restoreAction, staticDisposeCurrentState));
}
/// @param staticDisposeCurrentState: ::System::Action* (default: nullptr)
template <typename T>
inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::_ctor(ByRef<T> state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* restoreAction,
                                                                              ::System::Action* staticDisposeCurrentState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, restoreAction, staticDisposeCurrentState);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::StaticDisposeCurrentState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>::get(),
                                               "StaticDisposeCurrentState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::RestoreSavedState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>::get(), "RestoreSavedState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::SavedStructState_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
