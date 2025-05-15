#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SupplementaryMetric.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SupplementaryMetric_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SupplementaryMetric._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SupplementaryMetric::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::SupplementaryMetric::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3f91ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SupplementaryMetric*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SupplementaryMetric*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SupplementaryMetric* Oculus::Platform::Models::SupplementaryMetric::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::SupplementaryMetric*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SupplementaryMetric::SupplementaryMetric() {}
