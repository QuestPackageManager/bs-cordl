#pragma once
// IWYU pragma private; include "Oculus\Platform\Message_1.hpp"
#include "Oculus/Platform/zzzz__Message_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Oculus::Platform::Message_1_Callback<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_1_Callback<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline void Oculus::Platform::Message_1_Callback<T>::Invoke(::Oculus::Platform::Message_1<T>* message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_1_Callback<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template <typename T>
inline ::System::IAsyncResult* Oculus::Platform::Message_1_Callback<T>::BeginInvoke(::Oculus::Platform::Message_1<T>* message, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_1_Callback<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, message, callback, object);
}
template <typename T> inline void Oculus::Platform::Message_1_Callback<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_1_Callback<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T> inline ::Oculus::Platform::Message_1_Callback<T>* Oculus::Platform::Message_1_Callback<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_1_Callback<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Message_1_Callback<T>::Message_1_Callback() {}
template <typename T> constexpr T& Oculus::Platform::Message_1<T>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr T const& Oculus::Platform::Message_1<T>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr void Oculus::Platform::Message_1<T>::__cordl_internal_set_data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
template <typename T> inline void Oculus::Platform::Message_1<T>::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
template <typename T> inline T Oculus::Platform::Message_1<T>::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Message_1<T>*>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T Oculus::Platform::Message_1<T>::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Message_1<T>*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, c_message);
}
template <typename T> inline ::Oculus::Platform::Message_1<T>* Oculus::Platform::Message_1<T>::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Message_1<T>*>(c_message));
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Message_1<T>::Message_1() {}
