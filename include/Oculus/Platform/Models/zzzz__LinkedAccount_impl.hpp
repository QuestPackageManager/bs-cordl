#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LinkedAccount.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccount_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LinkedAccount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LinkedAccount::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LinkedAccount::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df0844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LinkedAccount*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_AccessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccessToken;
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_AccessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccessToken;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__cordl_internal_set_AccessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AccessToken = value;
}
constexpr ::Oculus::Platform::ServiceProvider& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_ServiceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServiceProvider;
}
constexpr ::Oculus::Platform::ServiceProvider const& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_ServiceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ServiceProvider;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__cordl_internal_set_ServiceProvider(::Oculus::Platform::ServiceProvider value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ServiceProvider = value;
}
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__cordl_internal_get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__cordl_internal_set_UserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserId = value;
}
inline void Oculus::Platform::Models::LinkedAccount::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LinkedAccount*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LinkedAccount* Oculus::Platform::Models::LinkedAccount::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LinkedAccount*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LinkedAccount::LinkedAccount() {}
