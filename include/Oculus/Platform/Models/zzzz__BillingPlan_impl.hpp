#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/BillingPlan.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__BillingPlan_def.hpp"
#include "Oculus/Platform/Models/zzzz__PaidOffer_def.hpp"
#include "Oculus/Platform/Models/zzzz__TrialOfferList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::BillingPlan._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::BillingPlan::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::BillingPlan::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c3f890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::BillingPlan*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::PaidOffer*& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_PaidOffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PaidOffer;
}
constexpr ::Oculus::Platform::Models::PaidOffer* const& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_PaidOffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PaidOffer;
}
constexpr void Oculus::Platform::Models::BillingPlan::__cordl_internal_set_PaidOffer(::Oculus::Platform::Models::PaidOffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PaidOffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::TrialOfferList*& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_TrialOffersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialOffersOptional;
}
constexpr ::Oculus::Platform::Models::TrialOfferList* const& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_TrialOffersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialOffersOptional;
}
constexpr void Oculus::Platform::Models::BillingPlan::__cordl_internal_set_TrialOffersOptional(::Oculus::Platform::Models::TrialOfferList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrialOffersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::TrialOfferList*& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_TrialOffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialOffers;
}
constexpr ::Oculus::Platform::Models::TrialOfferList* const& Oculus::Platform::Models::BillingPlan::__cordl_internal_get_TrialOffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialOffers;
}
constexpr void Oculus::Platform::Models::BillingPlan::__cordl_internal_set_TrialOffers(::Oculus::Platform::Models::TrialOfferList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrialOffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::BillingPlan::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::BillingPlan*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::BillingPlan* Oculus::Platform::Models::BillingPlan::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::BillingPlan*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::BillingPlan::BillingPlan() {}
