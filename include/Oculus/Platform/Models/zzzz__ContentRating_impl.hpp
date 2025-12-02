#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ContentRating.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ContentRating_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ContentRating._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ContentRating::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::ContentRating::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5bda0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ContentRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::ContentRating::__cordl_internal_get_AgeRatingImageUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeRatingImageUri;
}
constexpr ::StringW const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_AgeRatingImageUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeRatingImageUri;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_AgeRatingImageUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AgeRatingImageUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::ContentRating::__cordl_internal_get_AgeRatingText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeRatingText;
}
constexpr ::StringW const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_AgeRatingText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AgeRatingText;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_AgeRatingText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AgeRatingText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Oculus::Platform::Models::ContentRating::__cordl_internal_get_Descriptors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descriptors;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_Descriptors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descriptors;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_Descriptors(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Descriptors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Oculus::Platform::Models::ContentRating::__cordl_internal_get_InteractiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractiveElements;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_InteractiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractiveElements;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_InteractiveElements(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InteractiveElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::ContentRating::__cordl_internal_get_RatingDefinitionUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RatingDefinitionUri;
}
constexpr ::StringW const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_RatingDefinitionUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RatingDefinitionUri;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_RatingDefinitionUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RatingDefinitionUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::ContentRating::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ContentRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ContentRating* Oculus::Platform::Models::ContentRating::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::ContentRating*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ContentRating::ContentRating() {}
