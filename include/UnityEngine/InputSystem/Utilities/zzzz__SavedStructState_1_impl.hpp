#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/SavedStructState_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ISavedState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SavedStructState_1_def.hpp"
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::Invoke(::ByRef<T> state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename T>
inline ::System::IAsyncResult* UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::BeginInvoke(::ByRef<T> state, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, state, callback, object);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::EndInvoke(::ByRef<T> state, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, result);
}
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::SavedStructState_1_TypedRestore() {}
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
  ::cordl_internals::setInstanceField(this, &this->___m_State, value);
}
template <typename T>
constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_RestoreAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreAction;
}
template <typename T>
constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* const& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_RestoreAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RestoreAction;
}
template <typename T>
constexpr void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_RestoreAction, value);
}
template <typename T> constexpr ::System::Action*& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_StaticDisposeCurrentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticDisposeCurrentState;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_get_m_StaticDisposeCurrentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StaticDisposeCurrentState;
}
template <typename T> constexpr void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::__cordl_internal_set_m_StaticDisposeCurrentState(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_StaticDisposeCurrentState, value);
}
template <typename T>
inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::_ctor(::ByRef<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction,
                                                                              ::System::Action* staticDisposeCurrentState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>::get(),
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
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*
UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::New_ctor(::ByRef<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction,
                                                                     ::System::Action* staticDisposeCurrentState) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(state, restoreAction, staticDisposeCurrentState));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
template <typename T> constexpr UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::operator ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept {
  return static_cast<::UnityEngine::InputSystem::Utilities::ISavedState*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::Utilities::ISavedState"
template <typename T>
constexpr ::UnityEngine::InputSystem::Utilities::ISavedState* UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::i___UnityEngine__InputSystem__Utilities__ISavedState() noexcept {
  return static_cast<::UnityEngine::InputSystem::Utilities::ISavedState*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::SavedStructState_1() {}
