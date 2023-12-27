#pragma once
#include "Oculus/Platform/zzzz__SdkAccountType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SdkAccount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SdkAccount::*)(void*)>(&::Oculus::Platform::Models::SdkAccount::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2708b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SdkAccount*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::SdkAccountType& Oculus::Platform::Models::SdkAccount::__get_AccountType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AccountType;
}
constexpr ::Oculus::Platform::SdkAccountType const& Oculus::Platform::Models::SdkAccount::__get_AccountType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___AccountType;
}
constexpr void Oculus::Platform::Models::SdkAccount::__set_AccountType(::Oculus::Platform::SdkAccountType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___AccountType = value;
}
constexpr uint64_t& Oculus::Platform::Models::SdkAccount::__get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UserId;
}
constexpr uint64_t const& Oculus::Platform::Models::SdkAccount::__get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::SdkAccount::__set_UserId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___UserId = value;
}
inline ::Oculus::Platform::Models::SdkAccount* Oculus::Platform::Models::SdkAccount::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::SdkAccount*>(o));
}
inline void Oculus::Platform::Models::SdkAccount::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SdkAccount*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SdkAccount::SdkAccount() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
