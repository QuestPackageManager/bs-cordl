#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SdkAccount.hpp"
#include "Oculus/Platform/zzzz__SdkAccountType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SdkAccount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SdkAccount::*)(::System::IntPtr)>(&::Oculus::Platform::Models::SdkAccount::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c43f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SdkAccount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::SdkAccountType& Oculus::Platform::Models::SdkAccount::__cordl_internal_get_AccountType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccountType;
}
constexpr ::Oculus::Platform::SdkAccountType const& Oculus::Platform::Models::SdkAccount::__cordl_internal_get_AccountType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AccountType;
}
constexpr void Oculus::Platform::Models::SdkAccount::__cordl_internal_set_AccountType(::Oculus::Platform::SdkAccountType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AccountType = value;
}
constexpr uint64_t& Oculus::Platform::Models::SdkAccount::__cordl_internal_get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr uint64_t const& Oculus::Platform::Models::SdkAccount::__cordl_internal_get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::SdkAccount::__cordl_internal_set_UserId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserId = value;
}
inline void Oculus::Platform::Models::SdkAccount::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SdkAccount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SdkAccount* Oculus::Platform::Models::SdkAccount::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::SdkAccount*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SdkAccount::SdkAccount() {}
