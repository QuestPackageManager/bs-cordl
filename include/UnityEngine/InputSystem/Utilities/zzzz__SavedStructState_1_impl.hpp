#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\SavedStructState_1.hpp"
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::Invoke(::by_ref<T> state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template <typename T>
inline ::System::IAsyncResult* UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::BeginInvoke(::by_ref<T> state, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, state, callback, object);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::EndInvoke(::by_ref<T> state, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, result);
}
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(object, method));
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
  this->___m_State = value;
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
  this->___m_RestoreAction = value;
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
  this->___m_StaticDisposeCurrentState = value;
}
template <typename T>
inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::_ctor(::by_ref<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction,
                                                                              ::System::Action* staticDisposeCurrentState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(),
          { ".ctor", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, restoreAction, staticDisposeCurrentState);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::StaticDisposeCurrentState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(), { "StaticDisposeCurrentState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::RestoreSavedState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(), { "RestoreSavedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*
UnityEngine::InputSystem::Utilities::SavedStructState_1<T>::New_ctor(::by_ref<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction,
                                                                     ::System::Action* staticDisposeCurrentState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>*>(state, restoreAction, staticDisposeCurrentState));
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
