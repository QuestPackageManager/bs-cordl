#pragma once
// IWYU pragma private; include "GlobalNamespace/CPUMonitor.hpp"
#include "GlobalNamespace/zzzz__ICPUMonitor_impl.hpp"
#include "GlobalNamespace/zzzz__IPollable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::PollUpdate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22bead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), "PollUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor.get_utilization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::get_utilization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22bebf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), "get_utilization",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CPUMonitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CPUMonitor::*)()>(&::GlobalNamespace::CPUMonitor::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22bec18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RollingAverage*& GlobalNamespace::CPUMonitor::__cordl_internal_get__utilization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____utilization;
}
constexpr ::GlobalNamespace::RollingAverage* const& GlobalNamespace::CPUMonitor::__cordl_internal_get__utilization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____utilization;
}
constexpr void GlobalNamespace::CPUMonitor::__cordl_internal_set__utilization(::GlobalNamespace::RollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____utilization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::Process*& GlobalNamespace::CPUMonitor::__cordl_internal_get__currentProcess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentProcess;
}
constexpr ::System::Diagnostics::Process* const& GlobalNamespace::CPUMonitor::__cordl_internal_get__currentProcess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentProcess;
}
constexpr void GlobalNamespace::CPUMonitor::__cordl_internal_set__currentProcess(::System::Diagnostics::Process* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentProcess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::CPUMonitor::__cordl_internal_get__processorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processorCount;
}
constexpr int32_t const& GlobalNamespace::CPUMonitor::__cordl_internal_get__processorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processorCount;
}
constexpr void GlobalNamespace::CPUMonitor::__cordl_internal_set__processorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processorCount = value;
}
constexpr int64_t& GlobalNamespace::CPUMonitor::__cordl_internal_get__lastSampleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSampleTime;
}
constexpr int64_t const& GlobalNamespace::CPUMonitor::__cordl_internal_get__lastSampleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSampleTime;
}
constexpr void GlobalNamespace::CPUMonitor::__cordl_internal_set__lastSampleTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSampleTime = value;
}
constexpr int64_t& GlobalNamespace::CPUMonitor::__cordl_internal_get__lastSampleValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSampleValue;
}
constexpr int64_t const& GlobalNamespace::CPUMonitor::__cordl_internal_get__lastSampleValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSampleValue;
}
constexpr void GlobalNamespace::CPUMonitor::__cordl_internal_set__lastSampleValue(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSampleValue = value;
}
inline void GlobalNamespace::CPUMonitor::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), "PollUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CPUMonitor::get_utilization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), "get_utilization",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::CPUMonitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CPUMonitor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CPUMonitor* GlobalNamespace::CPUMonitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CPUMonitor*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICPUMonitor"
constexpr GlobalNamespace::CPUMonitor::operator ::GlobalNamespace::ICPUMonitor*() noexcept {
  return static_cast<::GlobalNamespace::ICPUMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICPUMonitor"
constexpr ::GlobalNamespace::ICPUMonitor* GlobalNamespace::CPUMonitor::i___GlobalNamespace__ICPUMonitor() noexcept {
  return static_cast<::GlobalNamespace::ICPUMonitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::CPUMonitor::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::CPUMonitor::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CPUMonitor::CPUMonitor() {}
