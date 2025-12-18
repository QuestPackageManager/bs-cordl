#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapData.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBucketData_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeKeyValueArrays_2_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.get_firstFreeTLS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::get_firstFreeTLS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63185f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "get_firstFreeTLS",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetBucketSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63185fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetBucketSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GrowCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GrowCapacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6318604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GrowCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.DeallocateHashMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
        &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::DeallocateHashMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6318614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "DeallocateHashMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::IsEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63186a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "IsEmpty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63186fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.MoveNextSearch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::ByRef<int32_t>, ::ByRef<int32_t>,
                                                                                           ::ByRef<int32_t>)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNextSearch)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x63187ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "MoveNextSearch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, ::ByRef<int32_t>, ::ByRef<int32_t>,
                                                                                           ::ByRef<int32_t>)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6318820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "MoveNext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.GetBucketData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData (
    ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6318858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetBucketData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData.CheckHashMapReallocateDoesNotShrink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CheckHashMapReallocateDoesNotShrink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6318870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(),
                                   "CheckHashMapReallocateDoesNotShrink", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "get_firstFreeTLS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t*, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketSize(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetBucketSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GrowCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GrowCapacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::AllocateHashMap(int32_t length, int32_t bucketLength, ::Unity::Collections::AllocatorManager_AllocatorHandle label,
                                                                                             ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*> outBuf) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "AllocateHashMap",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, length, bucketLength, label, outBuf);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::ReallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t newCapacity,
                                                                                               int32_t newBucketCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle label) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "ReallocateHashMap",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, newCapacity, newBucketCapacity, label);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::DeallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                               ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "DeallocateHashMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, allocator);
}
template <typename TKey, typename TValue>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CalculateDataSize(int32_t length, int32_t bucketLength, ::ByRef<int32_t> keyOffset, ::ByRef<int32_t> nextOffset,
                                                                                                  ::ByRef<int32_t> bucketOffset) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "CalculateDataSize",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, length, bucketLength, keyOffset, nextOffset, bucketOffset);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::IsEmpty(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "IsEmpty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, data);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetCount(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNextSearch(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::ByRef<int32_t> bucketIndex,
                                                                                            ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "MoveNextSearch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, data, bucketIndex, nextIndex, index);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::MoveNext(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::ByRef<int32_t> bucketIndex,
                                                                                      ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "MoveNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, data, bucketIndex, nextIndex, index);
}
template <typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetKeyArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                         ::Unity::Collections::NativeArray_1<TKey> result) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetKeyArray",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<TKey>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, result);
}
template <typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetValueArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                           ::Unity::Collections::NativeArray_1<TValue> result) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetValueArray",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, result);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetKeyValueArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                               ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> result) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetKeyValueArrays",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, result);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::GetBucketData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(), "GetBucketData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, false>(this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData::CheckHashMapReallocateDoesNotShrink(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                                 int32_t newCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData>::get(),
                                  "CheckHashMapReallocateDoesNotShrink", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, newCapacity);
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
