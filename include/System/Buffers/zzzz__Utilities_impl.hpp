#pragma once
// IWYU pragma private; include "System\Buffers\Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__Utilities_def.hpp"
//  Writing Method size for method: ::System::Buffers::Utilities.SelectBucketIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::SelectBucketIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bf3fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Utilities*>(), { "SelectBucketIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Utilities.GetMaxSizeForBucket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Buffers::Utilities::GetMaxSizeForBucket)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf4044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Utilities*>(), { "GetMaxSizeForBucket", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::Buffers::Utilities::SelectBucketIndex(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Utilities*>(), { "SelectBucketIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufferSize);
}
inline int32_t System::Buffers::Utilities::GetMaxSizeForBucket(int32_t binIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Buffers::Utilities*>(), { "GetMaxSizeForBucket", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, binIndex);
}
// Ctor Parameters []
constexpr ::System::Buffers::Utilities::Utilities() {}
