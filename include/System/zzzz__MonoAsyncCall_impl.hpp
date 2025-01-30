#pragma once
// IWYU pragma private; include "System/MonoAsyncCall.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoAsyncCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoAsyncCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoAsyncCall::*)()>(&::System::MonoAsyncCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e38824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___msg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cb_target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___res)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___out_args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::MonoAsyncCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::MonoAsyncCall* System::MonoAsyncCall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::MonoAsyncCall*>());
}
// Ctor Parameters []
constexpr ::System::MonoAsyncCall::MonoAsyncCall() {}
