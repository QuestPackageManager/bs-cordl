#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerRecorderSample.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderSample_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorderSample.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorderSample::*)()>(&::Unity::Profiling::ProfilerRecorderSample::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5d5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerRecorderSample>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorderSample.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorderSample::*)()>(&::Unity::Profiling::ProfilerRecorderSample::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5d5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerRecorderSample>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
inline int64_t Unity::Profiling::ProfilerRecorderSample::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerRecorderSample>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t Unity::Profiling::ProfilerRecorderSample::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerRecorderSample>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "refValue", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorderSample::ProfilerRecorderSample(int64_t value, int64_t count, int64_t refValue) noexcept {
  this->value = value;
  this->count = count;
  this->refValue = refValue;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorderSample::ProfilerRecorderSample() {}
