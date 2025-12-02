#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PaidOffer.hpp"
#include "Oculus/Platform/zzzz__OfferTerm_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__PaidOffer_def.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::PaidOffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::PaidOffer::*)(::System::IntPtr)>(&::Oculus::Platform::Models::PaidOffer::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bd8ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PaidOffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Price)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::PaidOffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::PaidOffer* Oculus::Platform::Models::PaidOffer::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::PaidOffer*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::PaidOffer::PaidOffer() {}
