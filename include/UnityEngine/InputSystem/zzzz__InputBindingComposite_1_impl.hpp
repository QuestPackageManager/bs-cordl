#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingComposite_1.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
template <typename TValue> inline ::System::Type* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::get_valueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::InputBindingComposite_1<TValue>::get_valueSizeInBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, context);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, bufferSize);
}
template <typename TValue>
inline ::System::Object* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValueAsObject(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputBindingComposite_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputBindingComposite_1<TValue>* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputBindingComposite_1<TValue>::InputBindingComposite_1() {}
