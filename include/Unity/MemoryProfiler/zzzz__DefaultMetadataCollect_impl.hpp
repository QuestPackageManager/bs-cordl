#pragma once
// IWYU pragma private; include "Unity/MemoryProfiler/DefaultMetadataCollect.hpp"
#include "Unity/MemoryProfiler/zzzz__MetadataCollect_impl.hpp"
#include "Unity/MemoryProfiler/zzzz__DefaultMetadataCollect_def.hpp"
#include "Unity/Profiling/Memory/zzzz__MemorySnapshotMetadata_def.hpp"
//  Writing Method size for method: ::Unity::MemoryProfiler::DefaultMetadataCollect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::MemoryProfiler::DefaultMetadataCollect::*)()>(&::Unity::MemoryProfiler::DefaultMetadataCollect::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x668c4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::MemoryProfiler::DefaultMetadataCollect.CollectMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::MemoryProfiler::DefaultMetadataCollect::*)(::Unity::Profiling::Memory::MemorySnapshotMetadata*)>(
    &::Unity::MemoryProfiler::DefaultMetadataCollect::CollectMetadata)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x668c63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), { ::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::MemoryProfiler::DefaultMetadataCollect.FormatSecondsToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::MemoryProfiler::DefaultMetadataCollect::*)(double_t)>(
    &::Unity::MemoryProfiler::DefaultMetadataCollect::FormatSecondsToTime)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x668c900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), { "FormatSecondsToTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::MemoryProfiler::DefaultMetadataCollect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::MemoryProfiler::DefaultMetadataCollect::CollectMetadata(::Unity::Profiling::Memory::MemorySnapshotMetadata* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::StringW Unity::MemoryProfiler::DefaultMetadataCollect::FormatSecondsToTime(double_t timeInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::DefaultMetadataCollect*>(), { "FormatSecondsToTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, timeInSeconds);
}
inline ::Unity::MemoryProfiler::DefaultMetadataCollect* Unity::MemoryProfiler::DefaultMetadataCollect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::MemoryProfiler::DefaultMetadataCollect*>());
}
// Ctor Parameters []
constexpr ::Unity::MemoryProfiler::DefaultMetadataCollect::DefaultMetadataCollect() {}
