#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\PaidOffer.hpp"
#include "Oculus/Platform/zzzz__OfferTerm_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PaidOffer_def.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PaidOffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::PaidOffer::*)(::System::IntPtr)>(&::Oculus::Platform::Models::PaidOffer::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dede3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PaidOffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::Price*& Oculus::Platform::Models::PaidOffer::__cordl_internal_get_Price() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr ::Oculus::Platform::Models::Price* const& Oculus::Platform::Models::PaidOffer::__cordl_internal_get_Price() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr void Oculus::Platform::Models::PaidOffer::__cordl_internal_set_Price(::Oculus::Platform::Models::Price* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Price = value;
}
constexpr ::Oculus::Platform::OfferTerm& Oculus::Platform::Models::PaidOffer::__cordl_internal_get_SubscriptionTerm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubscriptionTerm;
}
constexpr ::Oculus::Platform::OfferTerm const& Oculus::Platform::Models::PaidOffer::__cordl_internal_get_SubscriptionTerm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubscriptionTerm;
}
constexpr void Oculus::Platform::Models::PaidOffer::__cordl_internal_set_SubscriptionTerm(::Oculus::Platform::OfferTerm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubscriptionTerm = value;
}
inline void Oculus::Platform::Models::PaidOffer::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::PaidOffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PaidOffer* Oculus::Platform::Models::PaidOffer::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::PaidOffer*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PaidOffer::PaidOffer() {}
