#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoAsyncCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::MonoAsyncCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoAsyncCall::*)()>(&::System::MonoAsyncCall::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25fa554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::MonoAsyncCall::__get_msg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___msg;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MonoAsyncCall::__get_msg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___msg;
}
constexpr void System::MonoAsyncCall::__set_msg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___msg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr void*& System::MonoAsyncCall::__get_cb_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cb_method;
}
constexpr void* const& System::MonoAsyncCall::__get_cb_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cb_method;
}
constexpr void System::MonoAsyncCall::__set_cb_method(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___cb_method = value;
}
constexpr ::System::Object*& System::MonoAsyncCall::__get_cb_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cb_target;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MonoAsyncCall::__get_cb_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cb_target;
}
constexpr void System::MonoAsyncCall::__set_cb_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cb_target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::MonoAsyncCall::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MonoAsyncCall::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr void System::MonoAsyncCall::__set_state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::MonoAsyncCall::__get_res() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___res;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MonoAsyncCall::__get_res() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___res;
}
constexpr void System::MonoAsyncCall::__set_res(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___res)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::MonoAsyncCall::__get_out_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___out_args;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::MonoAsyncCall::__get_out_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___out_args;
}
constexpr void System::MonoAsyncCall::__set_out_args(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___out_args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::MonoAsyncCall* System::MonoAsyncCall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::MonoAsyncCall*>());
}
inline void System::MonoAsyncCall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoAsyncCall*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::MonoAsyncCall::MonoAsyncCall() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
