#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/AssumeRangeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__AssumeRangeAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::AssumeRangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::CompilerServices::AssumeRangeAttribute::*)(int64_t, int64_t)>(
    &::Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a1de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::AssumeRangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::CompilerServices::AssumeRangeAttribute::*)(uint64_t, uint64_t)>(
    &::Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a1dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor(int64_t min, int64_t max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline void Unity::Burst::CompilerServices::AssumeRangeAttribute::_ctor(uint64_t min, uint64_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* Unity::Burst::CompilerServices::AssumeRangeAttribute::New_ctor(int64_t min, int64_t max) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(min, max));
}
inline ::Unity::Burst::CompilerServices::AssumeRangeAttribute* Unity::Burst::CompilerServices::AssumeRangeAttribute::New_ctor(uint64_t min, uint64_t max) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::CompilerServices::AssumeRangeAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::AssumeRangeAttribute::AssumeRangeAttribute() {}
