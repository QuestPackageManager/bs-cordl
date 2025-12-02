#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/TrialOffer.hpp"
#include "Oculus/Platform/zzzz__OfferTerm_impl.hpp"
#include "Oculus/Platform/zzzz__OfferType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__TrialOffer_def.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::TrialOffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::TrialOffer::*)(::System::IntPtr)>(&::Oculus::Platform::Models::TrialOffer::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bdd86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::TrialOffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_MaxTermCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxTermCount;
}
constexpr int32_t const& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_MaxTermCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxTermCount;
}
constexpr void Oculus::Platform::Models::TrialOffer::__cordl_internal_set_MaxTermCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxTermCount = value;
}
constexpr ::Oculus::Platform::Models::Price*& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_Price() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr ::Oculus::Platform::Models::Price* const& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_Price() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr void Oculus::Platform::Models::TrialOffer::__cordl_internal_set_Price(::Oculus::Platform::Models::Price* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Price)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::OfferTerm& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_TrialTerm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialTerm;
}
constexpr ::Oculus::Platform::OfferTerm const& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_TrialTerm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialTerm;
}
constexpr void Oculus::Platform::Models::TrialOffer::__cordl_internal_set_TrialTerm(::Oculus::Platform::OfferTerm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrialTerm = value;
}
constexpr ::Oculus::Platform::OfferType& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_TrialType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialType;
}
constexpr ::Oculus::Platform::OfferType const& Oculus::Platform::Models::TrialOffer::__cordl_internal_get_TrialType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrialType;
}
constexpr void Oculus::Platform::Models::TrialOffer::__cordl_internal_set_TrialType(::Oculus::Platform::OfferType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrialType = value;
}
inline void Oculus::Platform::Models::TrialOffer::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::TrialOffer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::TrialOffer* Oculus::Platform::Models::TrialOffer::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::TrialOffer*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::TrialOffer::TrialOffer() {}
