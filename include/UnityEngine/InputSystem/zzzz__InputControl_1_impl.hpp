#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputControl_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>&
UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_ProcessorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorStack;
}
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const&
UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_ProcessorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorStack;
}
template <typename TValue>
constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_ProcessorStack(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessorStack = value;
}
template <typename TValue> constexpr TValue& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_CachedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValue;
}
template <typename TValue> constexpr TValue const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_CachedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValue;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_CachedValue(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedValue = value;
}
template <typename TValue> constexpr TValue& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_UnprocessedCachedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValue;
}
template <typename TValue> constexpr TValue const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_UnprocessedCachedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValue;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_UnprocessedCachedValue(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnprocessedCachedValue = value;
}
template <typename TValue> constexpr bool& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_evaluateProcessorsEveryRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___evaluateProcessorsEveryRead;
}
template <typename TValue> constexpr bool const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_evaluateProcessorsEveryRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___evaluateProcessorsEveryRead;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_evaluateProcessorsEveryRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___evaluateProcessorsEveryRead = value;
}
template <typename TValue> inline ::System::Type* UnityEngine::InputSystem::InputControl_1<TValue>::get_valueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::InputControl_1<TValue>::get_valueSizeInBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValue> inline ::by_ref<TValue> UnityEngine::InputSystem::InputControl_1<TValue>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<TValue>>(this, ___internal_method);
}
template <typename TValue> inline ::by_ref<TValue> UnityEngine::InputSystem::InputControl_1<TValue>::get_unprocessedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "get_unprocessedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<TValue>>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromPreviousFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadValueFromPreviousFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadDefaultValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadDefaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromState(void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadValueFromState", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateWithCaching(void* statePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadValueFromStateWithCaching", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValueFromStateWithCaching(void* statePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadUnprocessedValueFromStateWithCaching", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ReadUnprocessedValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, statePtr);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateAsObject(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferPtr, bufferSize, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueFromObjectIntoState(::System::Object* value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueIntoState(TValue value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, statePtr);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, buffer, bufferSize);
}
template <typename TValue> inline bool UnityEngine::InputSystem::InputControl_1<TValue>::CompareValue(::by_ref<TValue> firstValue, ::by_ref<TValue> secondValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(),
                                                                                         { "CompareValue", {}, { ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, firstValue, secondValue);
}
template <typename TValue> inline bool UnityEngine::InputSystem::InputControl_1<TValue>::CompareValue(void* firstStatePtr, void* secondStatePtr) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ProcessValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ProcessValue", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, value);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::ProcessValue(::by_ref<TValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "ProcessValue", {}, { ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValue> template <typename TProcessor> inline TProcessor UnityEngine::InputSystem::InputControl_1<TValue>::TryGetProcessor() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "TryGetProcessor", { ::i2c::class_of<TProcessor>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TProcessor>() })));
  return ::cordl_internals::RunMethodRethrow<TProcessor>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::AddProcessor(::System::Object* processor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processor);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> UnityEngine::InputSystem::InputControl_1<TValue>::get_processors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { "get_processors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControl_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputControl_1<TValue>* UnityEngine::InputSystem::InputControl_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputControl_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputControl_1<TValue>::InputControl_1() {}
