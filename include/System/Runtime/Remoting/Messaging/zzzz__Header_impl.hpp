#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/Header.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr ::StringW& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_HeaderNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderNamespace;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_HeaderNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderNamespace;
}
constexpr void System::Runtime::Remoting::Messaging::Header::__cordl_internal_set_HeaderNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HeaderNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_MustUnderstand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MustUnderstand;
}
constexpr bool const& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_MustUnderstand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MustUnderstand;
}
constexpr void System::Runtime::Remoting::Messaging::Header::__cordl_internal_set_MustUnderstand(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MustUnderstand = value;
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void System::Runtime::Remoting::Messaging::Header::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Remoting::Messaging::Header::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void System::Runtime::Remoting::Messaging::Header::__cordl_internal_set_Value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::Header::Header() {}
