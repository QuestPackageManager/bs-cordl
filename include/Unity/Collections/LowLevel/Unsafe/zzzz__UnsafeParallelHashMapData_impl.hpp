#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapData.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBucketData_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeKeyValueArrays_2_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.get_firstFreeTLS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::get_firstFreeTLS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "get_firstFreeTLS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetBucketSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64c9460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GetBucketSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GrowCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GrowCapacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c9468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GrowCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.DeallocateHashMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::DeallocateHashMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64c9478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                            { "DeallocateHashMap",
                              {},
                              { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::IsEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c9504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                             { "IsEmpty", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x64c9560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                             { "GetCount", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.MoveNextSearch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNextSearch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64c9610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                             { "MoveNextSearch",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64c9684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                             { "MoveNext",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetBucketData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData (
    ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GetBucketData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.CheckHashMapReallocateDoesNotShrink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CheckHashMapReallocateDoesNotShrink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x64c96d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                            { "CheckHashMapReallocateDoesNotShrink", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t*& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_values() {
  return this->___values;
}
constexpr uint8_t* const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_values() const {
  return this->___values;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_values(uint8_t* value) {
  this->___values = value;
}
constexpr uint8_t*& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_keys() {
  return this->___keys;
}
constexpr uint8_t* const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_keys() const {
  return this->___keys;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_keys(uint8_t* value) {
  this->___keys = value;
}
constexpr uint8_t*& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_next() {
  return this->___next;
}
constexpr uint8_t* const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_next() const {
  return this->___next;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_next(uint8_t* value) {
  this->___next = value;
}
constexpr uint8_t*& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_buckets() {
  return this->___buckets;
}
constexpr uint8_t* const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_buckets() const {
  return this->___buckets;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_buckets(uint8_t* value) {
  this->___buckets = value;
}
constexpr int32_t& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_keyCapacity() {
  return this->___keyCapacity;
}
constexpr int32_t const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_keyCapacity() const {
  return this->___keyCapacity;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_keyCapacity(int32_t value) {
  this->___keyCapacity = value;
}
constexpr int32_t& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_bucketCapacityMask() {
  return this->___bucketCapacityMask;
}
constexpr int32_t const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_bucketCapacityMask() const {
  return this->___bucketCapacityMask;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_bucketCapacityMask(int32_t value) {
  this->___bucketCapacityMask = value;
}
constexpr int32_t& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_allocatedIndexLength() {
  return this->___allocatedIndexLength;
}
constexpr int32_t const& Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_get_allocatedIndexLength() const {
  return this->___allocatedIndexLength;
}
constexpr void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::__cordl_internal_set_allocatedIndexLength(int32_t value) {
  this->___allocatedIndexLength = value;
}
inline int32_t* Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::get_firstFreeTLS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "get_firstFreeTLS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketSize(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GetBucketSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GrowCapacity(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GrowCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::AllocateHashMap(int32_t length, int32_t bucketLength, ::Unity::Collections::AllocatorManager_AllocatorHandle label,
                                                                                             ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*> outBuf) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                           { "AllocateHashMap",
                                                             { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, length, bucketLength, label, outBuf);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::ReallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t newCapacity,
                                                                                               int32_t newBucketCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle label) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                           { "ReallocateHashMap",
                                                             { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, newCapacity, newBucketCapacity, label);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::DeallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                               ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                          { "DeallocateHashMap",
                            {},
                            { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, allocator);
}
template <typename TKey, typename TValue>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CalculateDataSize(int32_t length, int32_t bucketLength, ::by_ref<int32_t> keyOffset, ::by_ref<int32_t> nextOffset,
                                                                                                  ::by_ref<int32_t> bucketOffset) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                                                              { "CalculateDataSize",
                                                                                                { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, length, bucketLength, keyOffset, nextOffset, bucketOffset);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::IsEmpty(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                                                         { "IsEmpty", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetCount(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                           { "GetCount", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNextSearch(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::by_ref<int32_t> bucketIndex,
                                                                                            ::by_ref<int32_t> nextIndex, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                           { "MoveNextSearch",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, bucketIndex, nextIndex, index);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNext(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::by_ref<int32_t> bucketIndex,
                                                                                      ::by_ref<int32_t> nextIndex, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                                           { "MoveNext",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, bucketIndex, nextIndex, index);
}
template <typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetKeyArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                         ::Unity::Collections::NativeArray_1<TKey> result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                       { "GetKeyArray",
                                         { ::i2c::class_of<TKey>() },
                                         { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TKey>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, result);
}
template <typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetValueArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                           ::Unity::Collections::NativeArray_1<TValue> result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                                       { "GetValueArray",
                                         { ::i2c::class_of<TValue>() },
                                         { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, result);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetKeyValueArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                               ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> result) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                          { "GetKeyValueArrays",
                            { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                            { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, result);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(), { "GetBucketData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CheckHashMapReallocateDoesNotShrink(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                                 int32_t newCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>(),
                          { "CheckHashMapReallocateDoesNotShrink", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, newCapacity);
}
// Ctor Parameters [CppParam { name: "values", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "keys", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "next", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "buckets", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyCapacity", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "bucketCapacityMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allocatedIndexLength", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::UnsafeParallelHashMapData(uint8_t* values, uint8_t* keys, uint8_t* next, uint8_t* buckets, int32_t keyCapacity,
                                                                                                       int32_t bucketCapacityMask, int32_t allocatedIndexLength) noexcept {
  this->values = values;
  this->keys = keys;
  this->next = next;
  this->buckets = buckets;
  this->keyCapacity = keyCapacity;
  this->bucketCapacityMask = bucketCapacityMask;
  this->allocatedIndexLength = allocatedIndexLength;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::UnsafeParallelHashMapData() {}
