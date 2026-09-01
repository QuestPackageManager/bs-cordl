#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\SdkAccount.hpp"
#include "Oculus/Platform/zzzz__SdkAccountType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SdkAccount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::SdkAccount::*)(::System::IntPtr)>(&::Oculus::Platform::Models::SdkAccount::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5df2414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SdkAccount*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SdkAccount*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SdkAccount* Oculus::Platform::Models::SdkAccount::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::SdkAccount*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SdkAccount::SdkAccount() {}
