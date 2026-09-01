#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputProcessor_1.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
template <typename TValue> inline TValue UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(TValue value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, value, control);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputProcessor_1<TValue>::ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, control);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(void* buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferSize, control);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputProcessor_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputProcessor_1<TValue>* UnityEngine::InputSystem::InputProcessor_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputProcessor_1<TValue>::InputProcessor_1() {}
