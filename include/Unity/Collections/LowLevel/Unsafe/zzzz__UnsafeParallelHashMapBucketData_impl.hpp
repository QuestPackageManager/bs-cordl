#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapBucketData.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBucketData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::*)(uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>(),
                            { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::_ctor(uint8_t* v, uint8_t* k, uint8_t* n, uint8_t* b, int32_t bcm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>(),
                          { ".ctor", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, k, n, b, bcm);
}
// Ctor Parameters [CppParam { name: "values", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "keys", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "next", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "buckets", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bucketCapacityMask", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::UnsafeParallelHashMapBucketData(uint8_t* values, uint8_t* keys, uint8_t* next, uint8_t* buckets,
                                                                                                                   int32_t bucketCapacityMask) noexcept {
  this->values = values;
  this->keys = keys;
  this->next = next;
  this->buckets = buckets;
  this->bucketCapacityMask = bucketCapacityMask;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::UnsafeParallelHashMapBucketData() {}
