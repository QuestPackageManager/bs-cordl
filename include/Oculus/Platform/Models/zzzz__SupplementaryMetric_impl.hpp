#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SupplementaryMetric.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SupplementaryMetric_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SupplementaryMetric._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::SupplementaryMetric::*)(::System::IntPtr)>(&::Oculus::Platform::Models::SupplementaryMetric::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dee380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SupplementaryMetric*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr int64_t& Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_get_Metric() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Metric;
}
constexpr int64_t const& Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_get_Metric() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Metric;
}
constexpr void Oculus::Platform::Models::SupplementaryMetric::__cordl_internal_set_Metric(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Metric = value;
}
inline void Oculus::Platform::Models::SupplementaryMetric::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SupplementaryMetric*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SupplementaryMetric* Oculus::Platform::Models::SupplementaryMetric::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::SupplementaryMetric*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SupplementaryMetric::SupplementaryMetric() {}
