#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Recorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Recorder_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af81c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(
    &::UnityEngine::Profiling::Recorder::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6af81cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::Finalize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { ::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6af82bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(bool)>(&::UnityEngine::Profiling::Recorder::set_enabled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af82c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_elapsedNanoseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_elapsedNanoseconds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6af8334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_elapsedNanoseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_gpuElapsedNanoseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_gpuElapsedNanoseconds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6af8368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_gpuElapsedNanoseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_sampleBlockCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_sampleBlockCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af839c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_sampleBlockCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.get_gpuSampleBlockCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Profiling::Recorder::*)()>(&::UnityEngine::Profiling::Recorder::get_gpuSampleBlockCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af83fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_gpuSampleBlockCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Recorder.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Profiling::Recorder::*)(bool)>(&::UnityEngine::Profiling::Recorder::SetEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6af82cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::Unity::Profiling::ProfilerRecorder& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderCPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderCPU;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderCPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderCPU;
}
constexpr void UnityEngine::Profiling::Recorder::__cordl_internal_set_m_RecorderCPU(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecorderCPU = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderGPU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderGPU;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& UnityEngine::Profiling::Recorder::__cordl_internal_get_m_RecorderGPU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RecorderGPU;
}
constexpr void UnityEngine::Profiling::Recorder::__cordl_internal_set_m_RecorderGPU(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RecorderGPU = value;
}
inline void UnityEngine::Profiling::Recorder::setStaticF_s_InvalidRecorder(::UnityEngine::Profiling::Recorder* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Profiling::Recorder*, "s_InvalidRecorder", ::UnityEngine::Profiling::Recorder*>(std::forward<::UnityEngine::Profiling::Recorder*>(value));
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::getStaticF_s_InvalidRecorder() {
  return ::cordl_internals::getStaticField<::UnityEngine::Profiling::Recorder*, "s_InvalidRecorder", ::UnityEngine::Profiling::Recorder*>();
}
inline void UnityEngine::Profiling::Recorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void UnityEngine::Profiling::Recorder::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Profiling::Recorder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::set_enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t UnityEngine::Profiling::Recorder::get_elapsedNanoseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_elapsedNanoseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Recorder::get_gpuElapsedNanoseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_gpuElapsedNanoseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Profiling::Recorder::get_sampleBlockCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_sampleBlockCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Profiling::Recorder::get_gpuSampleBlockCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "get_gpuSampleBlockCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Profiling::Recorder::SetEnabled(bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Profiling::Recorder*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Profiling::Recorder*>());
}
inline ::UnityEngine::Profiling::Recorder* UnityEngine::Profiling::Recorder::New_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle handle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Profiling::Recorder*>(handle));
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Recorder::Recorder() {}
constexpr ::Unity::Profiling::ProfilerRecorderOptions UnityEngine::Profiling::Recorder::s_RecorderDefaultOptions{ static_cast<int32_t>(0x99) };
