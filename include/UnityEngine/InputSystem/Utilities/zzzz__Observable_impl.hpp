#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Observable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
template <typename TValue> constexpr ::System::IDisposable*& UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::__cordl_internal_get_subscription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subscription;
}
template <typename TValue> constexpr ::System::IDisposable* const& UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::__cordl_internal_get_subscription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subscription;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::__cordl_internal_set_subscription(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subscription = value;
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::_CallOnce_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>*>(), { "<CallOnce>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>* UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::Observable___c__DisplayClass6_0_1<TValue>::Observable___c__DisplayClass6_0_1() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::Observable.ForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* (*)(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*,
                                                                                      ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::Utilities::Observable::ForDevice)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x65018e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
            { "ForDevice", {}, { ::i2c::type_of<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
template <typename TValue>
inline ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::Observable::Where(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                                              { "Where", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<::System::Func_2<TValue, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TValue>*>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource, typename TResult>
inline ::System::IObservable_1<TResult>* UnityEngine::InputSystem::Utilities::Observable::Select(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, TResult>* filter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
          { "Select", { ::i2c::class_of<TSource>(), ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::IObservable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, TResult>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TResult>*>(nullptr, ___internal_method, source, filter);
}
template <typename TSource, typename TResult>
inline ::System::IObservable_1<TResult>* UnityEngine::InputSystem::Utilities::Observable::SelectMany(::System::IObservable_1<TSource>* source,
                                                                                                     ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                          { "SelectMany",
                            { ::i2c::class_of<TSource>(), ::i2c::class_of<TResult>() },
                            { ::i2c::type_of<::System::IObservable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>(), ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TResult>*>(nullptr, ___internal_method, source, filter);
}
template <typename TValue> inline ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::Observable::Take(::System::IObservable_1<TValue>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                                                           { "Take", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TValue>*>(nullptr, ___internal_method, source, count);
}
inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::Observable::ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
          { "ForDevice", {}, { ::i2c::type_of<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(nullptr, ___internal_method, source, device);
}
template <typename TDevice>
inline ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::Observable::ForDevice(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                                              { "ForDevice", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(nullptr, ___internal_method, source);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::Observable::CallOnce(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                                              { "CallOnce", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, action);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::Observable::Call(::System::IObservable_1<TValue>* source, ::System::Action_1<TValue>* action) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observable*>(),
                                              { "Call", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, action);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::Observable::Observable() {}
