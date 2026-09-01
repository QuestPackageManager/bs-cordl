#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ContentRating.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ContentRating_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ContentRating._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ContentRating::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ContentRating::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5def060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ContentRating*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
  this->___AgeRatingImageUri = value;
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
  this->___AgeRatingText = value;
}
constexpr ::ArrayW<::StringW>& Oculus::Platform::Models::ContentRating::__cordl_internal_get_Descriptors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descriptors;
}
constexpr ::ArrayW<::StringW> const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_Descriptors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descriptors;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_Descriptors(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Descriptors = value;
}
constexpr ::ArrayW<::StringW>& Oculus::Platform::Models::ContentRating::__cordl_internal_get_InteractiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractiveElements;
}
constexpr ::ArrayW<::StringW> const& Oculus::Platform::Models::ContentRating::__cordl_internal_get_InteractiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractiveElements;
}
constexpr void Oculus::Platform::Models::ContentRating::__cordl_internal_set_InteractiveElements(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InteractiveElements = value;
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
  this->___RatingDefinitionUri = value;
}
inline void Oculus::Platform::Models::ContentRating::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ContentRating*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ContentRating* Oculus::Platform::Models::ContentRating::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ContentRating*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ContentRating::ContentRating() {}
