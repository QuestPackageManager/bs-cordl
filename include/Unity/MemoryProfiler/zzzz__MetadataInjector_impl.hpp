#pragma once
// IWYU pragma private; include "Unity\MemoryProfiler\MetadataInjector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/MemoryProfiler/zzzz__MetadataInjector_def.hpp"
#include "Unity/MemoryProfiler/zzzz__DefaultMetadataCollect_def.hpp"
//  Writing Method size for method: ::Unity::MemoryProfiler::MetadataInjector.PlayerInitMetadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::MemoryProfiler::MetadataInjector::PlayerInitMetadata)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6691acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataInjector*>(), { "PlayerInitMetadata", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::MemoryProfiler::MetadataInjector.InitializeMetadataCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::MemoryProfiler::MetadataInjector::InitializeMetadataCollection)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6691c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataInjector*>(), { "InitializeMetadataCollection", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::MemoryProfiler::MetadataInjector::setStaticF_DefaultCollector(::Unity::MemoryProfiler::DefaultMetadataCollect* value) {
  ::cordl_internals::setStaticField<::Unity::MemoryProfiler::DefaultMetadataCollect*, "DefaultCollector", ::Unity::MemoryProfiler::MetadataInjector*>(
      std::forward<::Unity::MemoryProfiler::DefaultMetadataCollect*>(value));
}
inline ::Unity::MemoryProfiler::DefaultMetadataCollect* Unity::MemoryProfiler::MetadataInjector::getStaticF_DefaultCollector() {
  return ::cordl_internals::getStaticField<::Unity::MemoryProfiler::DefaultMetadataCollect*, "DefaultCollector", ::Unity::MemoryProfiler::MetadataInjector*>();
}
inline void Unity::MemoryProfiler::MetadataInjector::setStaticF_CollectorCount(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "CollectorCount", ::Unity::MemoryProfiler::MetadataInjector*>(std::forward<int64_t>(value));
}
inline int64_t Unity::MemoryProfiler::MetadataInjector::getStaticF_CollectorCount() {
  return ::cordl_internals::getStaticField<int64_t, "CollectorCount", ::Unity::MemoryProfiler::MetadataInjector*>();
}
inline void Unity::MemoryProfiler::MetadataInjector::setStaticF_DefaultCollectorInjected(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "DefaultCollectorInjected", ::Unity::MemoryProfiler::MetadataInjector*>(std::forward<uint8_t>(value));
}
inline uint8_t Unity::MemoryProfiler::MetadataInjector::getStaticF_DefaultCollectorInjected() {
  return ::cordl_internals::getStaticField<uint8_t, "DefaultCollectorInjected", ::Unity::MemoryProfiler::MetadataInjector*>();
}
inline void Unity::MemoryProfiler::MetadataInjector::PlayerInitMetadata() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataInjector*>(), { "PlayerInitMetadata", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::MemoryProfiler::MetadataInjector::InitializeMetadataCollection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::MemoryProfiler::MetadataInjector*>(), { "InitializeMetadataCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::MemoryProfiler::MetadataInjector::MetadataInjector() {}
