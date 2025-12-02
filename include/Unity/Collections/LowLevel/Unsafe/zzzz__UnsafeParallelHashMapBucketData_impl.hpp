#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapBucketData.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBucketData_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::*)(
    uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62b0a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData::_ctor(uint8_t* v, uint8_t* k, uint8_t* n, uint8_t* b, int32_t bcm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v, k, n, b, bcm);
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
