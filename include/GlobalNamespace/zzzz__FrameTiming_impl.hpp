#pragma once
// IWYU pragma private; include "GlobalNamespace\FrameTiming.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FrameTiming_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.get_PlayerLoopMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::GlobalNamespace::FrameTiming::get_PlayerLoopMilliseconds)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5852374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "get_PlayerLoopMilliseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.get_GPUMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::GlobalNamespace::FrameTiming::get_GPUMilliseconds)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x585268c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "get_GPUMilliseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FrameTiming::Initialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5852744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrameTiming::*)()>(&::GlobalNamespace::FrameTiming::Awake)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x58528e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrameTiming::*)()>(&::GlobalNamespace::FrameTiming::OnDestroy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5852b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrameTiming::*)()>(&::GlobalNamespace::FrameTiming::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5852bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrameTiming::*)()>(&::GlobalNamespace::FrameTiming::Refresh)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x585242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming.GetLastFrameSampleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Unity::Profiling::ProfilerRecorder, int32_t)>(&::GlobalNamespace::FrameTiming::GetLastFrameSampleValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5852be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(),
                                                             { "GetLastFrameSampleValue", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FrameTiming._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrameTiming::*)()>(&::GlobalNamespace::FrameTiming::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5852c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FrameTiming::__cordl_internal_get_lastRefreshFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrame;
}
constexpr int32_t const& GlobalNamespace::FrameTiming::__cordl_internal_get_lastRefreshFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrame;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_lastRefreshFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRefreshFrame = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopRecorder;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopRecorder;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_playerLoopRecorder(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerLoopRecorder = value;
}
constexpr int32_t& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopPreviousCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopPreviousCount;
}
constexpr int32_t const& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopPreviousCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopPreviousCount;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_playerLoopPreviousCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerLoopPreviousCount = value;
}
constexpr double_t& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopMilliseconds;
}
constexpr double_t const& GlobalNamespace::FrameTiming::__cordl_internal_get_playerLoopMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLoopMilliseconds;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_playerLoopMilliseconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerLoopMilliseconds = value;
}
constexpr ::Unity::Profiling::ProfilerRecorder& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuRecorder;
}
constexpr ::Unity::Profiling::ProfilerRecorder const& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuRecorder;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_gpuRecorder(::Unity::Profiling::ProfilerRecorder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuRecorder = value;
}
constexpr int32_t& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuPreviousCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuPreviousCount;
}
constexpr int32_t const& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuPreviousCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuPreviousCount;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_gpuPreviousCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuPreviousCount = value;
}
constexpr double_t& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuMilliseconds;
}
constexpr double_t const& GlobalNamespace::FrameTiming::__cordl_internal_get_gpuMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuMilliseconds;
}
constexpr void GlobalNamespace::FrameTiming::__cordl_internal_set_gpuMilliseconds(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuMilliseconds = value;
}
inline void GlobalNamespace::FrameTiming::setStaticF_instance(::UnityW<::GlobalNamespace::FrameTiming> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FrameTiming>, "instance", ::GlobalNamespace::FrameTiming*>(std::forward<::UnityW<::GlobalNamespace::FrameTiming>>(value));
}
inline ::UnityW<::GlobalNamespace::FrameTiming> GlobalNamespace::FrameTiming::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FrameTiming>, "instance", ::GlobalNamespace::FrameTiming*>();
}
inline double_t GlobalNamespace::FrameTiming::get_PlayerLoopMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "get_PlayerLoopMilliseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline double_t GlobalNamespace::FrameTiming::get_GPUMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "get_GPUMilliseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FrameTiming::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FrameTiming::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FrameTiming::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FrameTiming::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FrameTiming::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t GlobalNamespace::FrameTiming::GetLastFrameSampleValue(::Unity::Profiling::ProfilerRecorder recorder, int32_t lastFrameCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(),
                                                           { "GetLastFrameSampleValue", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, recorder, lastFrameCount);
}
inline void GlobalNamespace::FrameTiming::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FrameTiming*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FrameTiming* GlobalNamespace::FrameTiming::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FrameTiming*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FrameTiming::FrameTiming() {}
