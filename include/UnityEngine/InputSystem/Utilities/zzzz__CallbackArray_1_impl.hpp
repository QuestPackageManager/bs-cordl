#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\CallbackArray_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
template <typename TDelegate> inline int32_t UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_length() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TDelegate> inline TDelegate UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TDelegate>(*this, ___internal_method, index);
}
template <typename TDelegate> inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TDelegate> inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::AddCallback(TDelegate dlg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "AddCallback", {}, { ::i2c::type_of<TDelegate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dlg);
}
template <typename TDelegate> inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::RemoveCallback(TDelegate dlg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "RemoveCallback", {}, { ::i2c::type_of<TDelegate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dlg);
}
template <typename TDelegate> inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::LockForChanges() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "LockForChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TDelegate> inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::UnlockForChanges() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>(), { "UnlockForChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Callbacks", ty:
// "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToAdd", ty:
// "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToRemove", ty:
// "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }]
template <typename TDelegate>
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::CallbackArray_1(bool m_CannotMutateCallbacksArray,
                                                                                             ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks,
                                                                                             ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd,
                                                                                             ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove) noexcept {
  this->m_CannotMutateCallbacksArray = m_CannotMutateCallbacksArray;
  this->m_Callbacks = m_Callbacks;
  this->m_CallbacksToAdd = m_CallbacksToAdd;
  this->m_CallbacksToRemove = m_CallbacksToRemove;
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::CallbackArray_1() {}
