#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\Purchase.hpp"
#include "Oculus/Platform/zzzz__ProductType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Purchase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Purchase::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Purchase::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5df2064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Purchase*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_DeveloperPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeveloperPayload;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_DeveloperPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeveloperPayload;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_DeveloperPayload(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DeveloperPayload = value;
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__cordl_internal_get_ExpirationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpirationTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__cordl_internal_get_ExpirationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpirationTime;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_ExpirationTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpirationTime = value;
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__cordl_internal_get_GrantTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GrantTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__cordl_internal_get_GrantTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GrantTime;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_GrantTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GrantTime = value;
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set__cordl_ID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_ReportingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReportingId;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_ReportingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReportingId;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_ReportingId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReportingId = value;
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_Sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_Sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_Sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sku = value;
}
constexpr ::Oculus::Platform::ProductType& Oculus::Platform::Models::Purchase::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Oculus::Platform::ProductType const& Oculus::Platform::Models::Purchase::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_Type(::Oculus::Platform::ProductType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
inline void Oculus::Platform::Models::Purchase::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Purchase*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Models::Purchase::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Purchase*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Purchase::Purchase() {}
