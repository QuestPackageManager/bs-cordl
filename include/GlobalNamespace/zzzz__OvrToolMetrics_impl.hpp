#pragma once
// IWYU pragma private; include "GlobalNamespace/OvrToolMetrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OvrToolMetrics_def.hpp"
#include "GlobalNamespace/zzzz__OVRMetricsToolSDK_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics.RecordMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OvrToolMetrics* (*)(int32_t)>(&::GlobalNamespace::OvrToolMetrics::RecordMetrics)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58edc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "RecordMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OvrToolMetrics::*)(::GlobalNamespace::OVRMetricsToolSDK*, int32_t)>(&::GlobalNamespace::OvrToolMetrics::_ctor)> {
  constexpr static std::size_t size = 0xb98;
  constexpr static std::size_t addrs = 0x58edcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRMetricsToolSDK*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OvrToolMetrics::*)()>(&::GlobalNamespace::OvrToolMetrics::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ee85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OvrToolMetrics::*)()>(&::GlobalNamespace::OvrToolMetrics::CaptureFrame)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x58ee860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics.GenerateListReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OvrToolMetrics::*)()>(&::GlobalNamespace::OvrToolMetrics::GenerateListReport)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58eef00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "GenerateListReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OvrToolMetrics.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OvrToolMetrics::*)()>(&::GlobalNamespace::OvrToolMetrics::GenerateTableReport)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x58ef0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "GenerateTableReport", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRMetricsToolSDK>& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__metricsTool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metricsTool;
}
constexpr ::UnityW<::GlobalNamespace::OVRMetricsToolSDK> const& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__metricsTool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metricsTool;
}
constexpr void GlobalNamespace::OvrToolMetrics::__cordl_internal_set__metricsTool(::UnityW<::GlobalNamespace::OVRMetricsToolSDK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metricsTool = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr void GlobalNamespace::OvrToolMetrics::__cordl_internal_set__metrics(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metrics = value;
}
constexpr ::ArrayW<int64_t>& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__sample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sample;
}
constexpr ::ArrayW<int64_t> const& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__sample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sample;
}
constexpr void GlobalNamespace::OvrToolMetrics::__cordl_internal_set__sample(::ArrayW<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sample = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& GlobalNamespace::OvrToolMetrics::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::OvrToolMetrics::__cordl_internal_set__samples(::System::Collections::Generic::List_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
inline ::GlobalNamespace::OvrToolMetrics* GlobalNamespace::OvrToolMetrics::RecordMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "RecordMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OvrToolMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::OvrToolMetrics::_ctor(::GlobalNamespace::OVRMetricsToolSDK* metricsTool, int32_t initialFrameCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRMetricsToolSDK*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, metricsTool, initialFrameCapacity);
}
inline void GlobalNamespace::OvrToolMetrics::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OvrToolMetrics::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OvrToolMetrics::GenerateListReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "GenerateListReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OvrToolMetrics::GenerateTableReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OvrToolMetrics*>(), { "GenerateTableReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::OvrToolMetrics* GlobalNamespace::OvrToolMetrics::New_ctor(::GlobalNamespace::OVRMetricsToolSDK* metricsTool, int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OvrToolMetrics*>(metricsTool, initialFrameCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OvrToolMetrics::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OvrToolMetrics::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OvrToolMetrics::OvrToolMetrics() {}
