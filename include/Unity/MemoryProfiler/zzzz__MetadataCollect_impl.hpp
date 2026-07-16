#pragma once
// IWYU pragma private; include "Unity/MemoryProfiler/MetadataCollect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/MemoryProfiler/zzzz__MetadataCollect_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/Memory/zzzz__MemorySnapshotMetadata_def.hpp"
//  Writing Method size for method: ::Unity::MemoryProfiler::MetadataCollect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::MemoryProfiler::MetadataCollect::*)()>(&::Unity::MemoryProfiler::MetadataCollect::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x668c52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::MemoryProfiler::MetadataCollect.CollectMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::MemoryProfiler::MetadataCollect::*)(::Unity::Profiling::Memory::MemorySnapshotMetadata*)>(
    &::Unity::MemoryProfiler::MetadataCollect::CollectMetadata)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), { ::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::MemoryProfiler::MetadataCollect.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::MemoryProfiler::MetadataCollect::*)()>(&::Unity::MemoryProfiler::MetadataCollect::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x668c34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Unity::MemoryProfiler::MetadataCollect::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& Unity::MemoryProfiler::MetadataCollect::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void Unity::MemoryProfiler::MetadataCollect::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
inline void Unity::MemoryProfiler::MetadataCollect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::MemoryProfiler::MetadataCollect::CollectMetadata(::Unity::Profiling::Memory::MemorySnapshotMetadata* data) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Unity::MemoryProfiler::MetadataCollect::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataCollect*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::MemoryProfiler::MetadataCollect* Unity::MemoryProfiler::MetadataCollect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::MemoryProfiler::MetadataCollect*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::MemoryProfiler::MetadataCollect::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::MemoryProfiler::MetadataCollect::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::MemoryProfiler::MetadataCollect::MetadataCollect() {}
