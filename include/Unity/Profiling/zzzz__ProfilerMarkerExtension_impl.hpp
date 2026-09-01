#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerMarkerExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerExtension_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, int32_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6742e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, uint32_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6742f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, int64_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6742fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, uint64_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6743098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, float_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x674315c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, double_t)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6743220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarkerExtension.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerMarker, ::StringW)>(&::Unity::Profiling::ProfilerMarkerExtension::Begin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67432e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                           { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, int32_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, uint32_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, int64_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, uint64_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, float_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, double_t metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
inline void Unity::Profiling::ProfilerMarkerExtension::Begin(::Unity::Profiling::ProfilerMarker marker, ::StringW metadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarkerExtension*>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, metadata);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerMarkerExtension::ProfilerMarkerExtension() {}
