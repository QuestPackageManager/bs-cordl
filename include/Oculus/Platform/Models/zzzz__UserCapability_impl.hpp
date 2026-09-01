#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\UserCapability.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapability_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserCapability._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::UserCapability::*)(::System::IntPtr)>(&::Oculus::Platform::Models::UserCapability::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5df294c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::UserCapability*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__cordl_internal_get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__cordl_internal_get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::UserCapability::__cordl_internal_set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Description = value;
}
constexpr bool& Oculus::Platform::Models::UserCapability::__cordl_internal_get_IsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnabled;
}
constexpr bool const& Oculus::Platform::Models::UserCapability::__cordl_internal_get_IsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnabled;
}
constexpr void Oculus::Platform::Models::UserCapability::__cordl_internal_set_IsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsEnabled = value;
}
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::UserCapability::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Name = value;
}
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__cordl_internal_get_ReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReasonCode;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__cordl_internal_get_ReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReasonCode;
}
constexpr void Oculus::Platform::Models::UserCapability::__cordl_internal_set_ReasonCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReasonCode = value;
}
inline void Oculus::Platform::Models::UserCapability::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::UserCapability*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::UserCapability* Oculus::Platform::Models::UserCapability::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::UserCapability*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserCapability::UserCapability() {}
