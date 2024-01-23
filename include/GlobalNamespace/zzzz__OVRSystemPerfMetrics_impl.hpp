#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSystemPerfMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "GlobalNamespace/zzzz__OVRSystemPerfMetrics_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics.ToJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::ToJSON)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x27c24c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                                                                               "ToJSON", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics.LoadFromJSON
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)(::StringW)>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x27c2cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(), "LoadFromJSON",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27c3db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_frameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_frameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameCount;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_frameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameCount = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_frameTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_frameTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_frameTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameTime = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deltaFrameTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaFrameTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deltaFrameTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deltaFrameTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deltaFrameTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deltaFrameTime = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appCpuTime_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appCpuTime_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appCpuTime_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appCpuTime_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_appCpuTime_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appCpuTime_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appCpuTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appCpuTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appCpuTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appCpuTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_appCpuTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appCpuTime = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appGpuTime_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appGpuTime_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appGpuTime_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appGpuTime_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_appGpuTime_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appGpuTime_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appGpuTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appGpuTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_appGpuTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___appGpuTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_appGpuTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___appGpuTime = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorCpuTime_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorCpuTime_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorCpuTime_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorCpuTime_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorCpuTime_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorCpuTime_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorCpuTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorCpuTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorCpuTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorCpuTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorCpuTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorCpuTime = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorGpuTime_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorGpuTime_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorGpuTime_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorGpuTime_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorGpuTime_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorGpuTime_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorGpuTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorGpuTime;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorGpuTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorGpuTime;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorGpuTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorGpuTime = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorDroppedFrameCount_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorDroppedFrameCount_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorDroppedFrameCount_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorDroppedFrameCount_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorDroppedFrameCount_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorDroppedFrameCount_IsValid = value;
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorDroppedFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorDroppedFrameCount;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorDroppedFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorDroppedFrameCount;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorDroppedFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorDroppedFrameCount = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorSpaceWarpMode_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorSpaceWarpMode_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorSpaceWarpMode_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorSpaceWarpMode_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorSpaceWarpMode_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorSpaceWarpMode_IsValid = value;
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorSpaceWarpMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorSpaceWarpMode;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_compositorSpaceWarpMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositorSpaceWarpMode;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_compositorSpaceWarpMode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositorSpaceWarpMode = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemGpuUtilPercentage_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemGpuUtilPercentage_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemGpuUtilPercentage_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemGpuUtilPercentage_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemGpuUtilPercentage_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemGpuUtilPercentage_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemGpuUtilPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemGpuUtilPercentage;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemGpuUtilPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemGpuUtilPercentage;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemGpuUtilPercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemGpuUtilPercentage = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilAveragePercentage_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilAveragePercentage_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilAveragePercentage_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilAveragePercentage_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemCpuUtilAveragePercentage_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemCpuUtilAveragePercentage_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilAveragePercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilAveragePercentage;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilAveragePercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilAveragePercentage;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemCpuUtilAveragePercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemCpuUtilAveragePercentage = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilWorstPercentage_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilWorstPercentage_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilWorstPercentage_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilWorstPercentage_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemCpuUtilWorstPercentage_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemCpuUtilWorstPercentage_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilWorstPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilWorstPercentage;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_systemCpuUtilWorstPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemCpuUtilWorstPercentage;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_systemCpuUtilWorstPercentage(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemCpuUtilWorstPercentage = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockFrequencyInMHz_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockFrequencyInMHz_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockFrequencyInMHz_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockFrequencyInMHz_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuClockFrequencyInMHz_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceCpuClockFrequencyInMHz_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockFrequencyInMHz() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockFrequencyInMHz;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockFrequencyInMHz() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockFrequencyInMHz;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuClockFrequencyInMHz(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceCpuClockFrequencyInMHz = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockFrequencyInMHz_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockFrequencyInMHz_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockFrequencyInMHz_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockFrequencyInMHz_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceGpuClockFrequencyInMHz_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceGpuClockFrequencyInMHz_IsValid = value;
}
constexpr float_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockFrequencyInMHz() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockFrequencyInMHz;
}
constexpr float_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockFrequencyInMHz() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockFrequencyInMHz;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceGpuClockFrequencyInMHz(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceGpuClockFrequencyInMHz = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockLevel_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockLevel_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockLevel_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockLevel_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuClockLevel_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceCpuClockLevel_IsValid = value;
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockLevel;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuClockLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuClockLevel;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuClockLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceCpuClockLevel = value;
}
constexpr bool& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockLevel_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockLevel_IsValid;
}
constexpr bool const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockLevel_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockLevel_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceGpuClockLevel_IsValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceGpuClockLevel_IsValid = value;
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockLevel;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceGpuClockLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceGpuClockLevel;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceGpuClockLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deviceGpuClockLevel = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuCoreUtilPercentage_IsValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuCoreUtilPercentage_IsValid;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuCoreUtilPercentage_IsValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuCoreUtilPercentage_IsValid;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceCpuCoreUtilPercentage_IsValid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuCoreUtilPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuCoreUtilPercentage;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_get_deviceCpuCoreUtilPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deviceCpuCoreUtilPercentage;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__cordl_internal_set_deviceCpuCoreUtilPercentage(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deviceCpuCoreUtilPercentage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::ToJSON() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                                                                             "ToJSON", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::LoadFromJSON(::StringW json) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(), "LoadFromJSON",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, json);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>());
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics::__OVRSystemPerfMetrics__PerfMetrics() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27c3e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "OnEnable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c3f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27c4020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer.GatherPerfMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* (
    ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(&::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x27c40a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                                                 "GatherPerfMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::*)()>(
    &::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27c43a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*& GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_get_tcpServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpServer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*> const&
GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_get_tcpServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcpServer;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_set_tcpServer(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcpServer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_get_listeningPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listeningPort;
}
constexpr int32_t const& GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_get_listeningPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listeningPort;
}
constexpr void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__cordl_internal_set_listeningPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listeningPort = value;
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::setStaticF_singleton(::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>, "singleton",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get>(
      std::forward<::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>>(value));
}
inline ::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer> GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::getStaticF_singleton() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer>, "singleton",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get>();
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "OnEnable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "OnDisable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::GatherPerfMetrics() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(),
                                               "GatherPerfMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>());
}
inline void GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSystemPerfMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSystemPerfMetrics::*)()>(&::GlobalNamespace::OVRSystemPerfMetrics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c24b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSystemPerfMetrics* GlobalNamespace::OVRSystemPerfMetrics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSystemPerfMetrics*>());
}
inline void GlobalNamespace::OVRSystemPerfMetrics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSystemPerfMetrics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetrics() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
