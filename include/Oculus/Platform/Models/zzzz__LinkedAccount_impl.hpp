#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LinkedAccount.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccount_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LinkedAccount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LinkedAccount::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LinkedAccount::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3f93b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AccessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::LinkedAccount::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LinkedAccount* Oculus::Platform::Models::LinkedAccount::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LinkedAccount*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LinkedAccount::LinkedAccount() {}
