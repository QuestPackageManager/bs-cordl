#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\Destination.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Destination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Destination::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Destination::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5def5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Destination*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_ApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_ApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_ApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApiName = value;
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DeeplinkMessage = value;
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisplayName = value;
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_ShareableUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShareableUri;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_ShareableUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShareableUri;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_ShareableUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShareableUri = value;
}
inline void Oculus::Platform::Models::Destination::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Destination*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::Destination::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Destination*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Destination::Destination() {}
