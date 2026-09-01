#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\Price.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Price._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Price::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Price::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df15bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Price*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint32_t& Oculus::Platform::Models::Price::__cordl_internal_get_AmountInHundredths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmountInHundredths;
}
constexpr uint32_t const& Oculus::Platform::Models::Price::__cordl_internal_get_AmountInHundredths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmountInHundredths;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_AmountInHundredths(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AmountInHundredths = value;
}
constexpr ::StringW& Oculus::Platform::Models::Price::__cordl_internal_get_Currency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Currency;
}
constexpr ::StringW const& Oculus::Platform::Models::Price::__cordl_internal_get_Currency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Currency;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_Currency(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Currency = value;
}
constexpr ::StringW& Oculus::Platform::Models::Price::__cordl_internal_get_Formatted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Formatted;
}
constexpr ::StringW const& Oculus::Platform::Models::Price::__cordl_internal_get_Formatted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Formatted;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_Formatted(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Formatted = value;
}
inline void Oculus::Platform::Models::Price::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Price*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Price* Oculus::Platform::Models::Price::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Price*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Price::Price() {}
