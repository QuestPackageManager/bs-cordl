#pragma once
// IWYU pragma private; include "GlobalNamespace\ICPUMonitor.hpp"
#include "GlobalNamespace/zzzz__ICPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICPUMonitor.get_utilization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ICPUMonitor::*)()>(&::GlobalNamespace::ICPUMonitor::get_utilization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ICPUMonitor*>(), { ::i2c::class_of<::GlobalNamespace::ICPUMonitor*>(), 0 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::ICPUMonitor::get_utilization() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ICPUMonitor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::ICPUMonitor::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::ICPUMonitor::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
