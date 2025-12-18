#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Product.hpp"
#include "Oculus/Platform/zzzz__ProductType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Product_def.hpp"
#include "Oculus/Platform/Models/zzzz__BillingPlanList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ContentRating_def.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Product._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Product::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Product::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5c437c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Product*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::BillingPlanList*& Oculus::Platform::Models::Product::__cordl_internal_get_BillingPlansOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BillingPlansOptional;
}
constexpr ::Oculus::Platform::Models::BillingPlanList* const& Oculus::Platform::Models::Product::__cordl_internal_get_BillingPlansOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BillingPlansOptional;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_BillingPlansOptional(::Oculus::Platform::Models::BillingPlanList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BillingPlansOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::BillingPlanList*& Oculus::Platform::Models::Product::__cordl_internal_get_BillingPlans() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BillingPlans;
}
constexpr ::Oculus::Platform::Models::BillingPlanList* const& Oculus::Platform::Models::Product::__cordl_internal_get_BillingPlans() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BillingPlans;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_BillingPlans(::Oculus::Platform::Models::BillingPlanList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BillingPlans)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::ContentRating*& Oculus::Platform::Models::Product::__cordl_internal_get_ContentRatingOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentRatingOptional;
}
constexpr ::Oculus::Platform::Models::ContentRating* const& Oculus::Platform::Models::Product::__cordl_internal_get_ContentRatingOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentRatingOptional;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_ContentRatingOptional(::Oculus::Platform::Models::ContentRating* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContentRatingOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::ContentRating*& Oculus::Platform::Models::Product::__cordl_internal_get_ContentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentRating;
}
constexpr ::Oculus::Platform::Models::ContentRating* const& Oculus::Platform::Models::Product::__cordl_internal_get_ContentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ContentRating;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_ContentRating(::Oculus::Platform::Models::ContentRating* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ContentRating)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_CoverUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoverUrl;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_CoverUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CoverUrl;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_CoverUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CoverUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_FormattedPrice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FormattedPrice;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_FormattedPrice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FormattedPrice;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_FormattedPrice(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FormattedPrice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_IconUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IconUrl;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_IconUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IconUrl;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_IconUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IconUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Price*& Oculus::Platform::Models::Product::__cordl_internal_get_Price() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr ::Oculus::Platform::Models::Price* const& Oculus::Platform::Models::Product::__cordl_internal_get_Price() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Price;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_Price(::Oculus::Platform::Models::Price* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Price)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_ShortDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShortDescription;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_ShortDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShortDescription;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_ShortDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ShortDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Product::__cordl_internal_get_Sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr ::StringW const& Oculus::Platform::Models::Product::__cordl_internal_get_Sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_Sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Sku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::ProductType& Oculus::Platform::Models::Product::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Oculus::Platform::ProductType const& Oculus::Platform::Models::Product::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Oculus::Platform::Models::Product::__cordl_internal_set_Type(::Oculus::Platform::ProductType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
inline void Oculus::Platform::Models::Product::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Product*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Product* Oculus::Platform::Models::Product::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Product*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Product::Product() {}
