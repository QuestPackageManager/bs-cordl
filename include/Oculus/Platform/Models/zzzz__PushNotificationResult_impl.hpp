#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\PushNotificationResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PushNotificationResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::PushNotificationResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::PushNotificationResult::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5df2330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PushNotificationResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::PushNotificationResult::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr ::StringW const& Oculus::Platform::Models::PushNotificationResult::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Oculus::Platform::Models::PushNotificationResult::__cordl_internal_set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
inline void Oculus::Platform::Models::PushNotificationResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PushNotificationResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::Models::PushNotificationResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::PushNotificationResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PushNotificationResult::PushNotificationResult() {}
