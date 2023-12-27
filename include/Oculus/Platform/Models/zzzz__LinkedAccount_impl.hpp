#pragma once
#include "Oculus/Platform/zzzz__ServiceProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccount_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LinkedAccount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LinkedAccount::*)(void*)>(&::Oculus::Platform::Models::LinkedAccount::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2706f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__get_AccessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AccessToken;
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__get_AccessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AccessToken;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__set_AccessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AccessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::ServiceProvider& Oculus::Platform::Models::LinkedAccount::__get_ServiceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ServiceProvider;
}
constexpr ::Oculus::Platform::ServiceProvider const& Oculus::Platform::Models::LinkedAccount::__get_ServiceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ServiceProvider;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__set_ServiceProvider(::Oculus::Platform::ServiceProvider value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ServiceProvider = value;
}
constexpr ::StringW& Oculus::Platform::Models::LinkedAccount::__get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UserId;
}
constexpr ::StringW const& Oculus::Platform::Models::LinkedAccount::__get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::LinkedAccount::__set_UserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LinkedAccount* Oculus::Platform::Models::LinkedAccount::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LinkedAccount*>(o));
}
inline void Oculus::Platform::Models::LinkedAccount::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LinkedAccount*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LinkedAccount::LinkedAccount() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
