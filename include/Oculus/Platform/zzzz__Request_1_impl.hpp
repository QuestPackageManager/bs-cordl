#pragma once
// IWYU pragma private; include "Oculus\Platform\Request_1.hpp"
#include "Oculus/Platform/zzzz__Request_impl.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
template <typename T> constexpr ::Oculus::Platform::Message_1_Callback<T>*& Oculus::Platform::Request_1<T>::__cordl_internal_get_callback_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_;
}
template <typename T> constexpr ::Oculus::Platform::Message_1_Callback<T>* const& Oculus::Platform::Request_1<T>::__cordl_internal_get_callback_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_;
}
template <typename T> constexpr void Oculus::Platform::Request_1<T>::__cordl_internal_set_callback_(::Oculus::Platform::Message_1_Callback<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback_ = value;
}
template <typename T> inline void Oculus::Platform::Request_1<T>::_ctor(uint64_t requestID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Request_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestID);
}
template <typename T> inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::OnComplete(::Oculus::Platform::Message_1_Callback<T>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Request_1<T>*>(), { "OnComplete", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<T>*>(this, ___internal_method, callback);
}
template <typename T> inline void Oculus::Platform::Request_1<T>::HandleMessage(::Oculus::Platform::Message* msg) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::Request_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
template <typename T> inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::New_ctor(uint64_t requestID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Request_1<T>*>(requestID));
}
// Ctor Parameters []
template <typename T> constexpr ::Oculus::Platform::Request_1<T>::Request_1() {}
