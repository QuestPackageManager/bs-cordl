#pragma once
// IWYU pragma private; include "System\MonoAsyncCall.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoAsyncCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoAsyncCall._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoAsyncCall::*)()>(&::System::MonoAsyncCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c92f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoAsyncCall*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::MonoAsyncCall::__cordl_internal_get_msg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msg;
}
constexpr ::System::Object* const& System::MonoAsyncCall::__cordl_internal_get_msg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msg;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_msg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msg = value;
}
constexpr ::System::IntPtr& System::MonoAsyncCall::__cordl_internal_get_cb_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb_method;
}
constexpr ::System::IntPtr const& System::MonoAsyncCall::__cordl_internal_get_cb_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb_method;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_cb_method(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cb_method = value;
}
constexpr ::System::Object*& System::MonoAsyncCall::__cordl_internal_get_cb_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb_target;
}
constexpr ::System::Object* const& System::MonoAsyncCall::__cordl_internal_get_cb_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cb_target;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_cb_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cb_target = value;
}
constexpr ::System::Object*& System::MonoAsyncCall::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Object* const& System::MonoAsyncCall::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Object*& System::MonoAsyncCall::__cordl_internal_get_res() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___res;
}
constexpr ::System::Object* const& System::MonoAsyncCall::__cordl_internal_get_res() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___res;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_res(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___res = value;
}
constexpr ::System::Object*& System::MonoAsyncCall::__cordl_internal_get_out_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___out_args;
}
constexpr ::System::Object* const& System::MonoAsyncCall::__cordl_internal_get_out_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___out_args;
}
constexpr void System::MonoAsyncCall::__cordl_internal_set_out_args(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___out_args = value;
}
inline void System::MonoAsyncCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoAsyncCall*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::MonoAsyncCall* System::MonoAsyncCall::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoAsyncCall*>());
}
// Ctor Parameters []
constexpr ::System::MonoAsyncCall::MonoAsyncCall() {}
