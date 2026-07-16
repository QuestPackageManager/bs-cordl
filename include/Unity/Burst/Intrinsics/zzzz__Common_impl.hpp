#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/Common.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/Intrinsics/zzzz__Common_def.hpp"
//  Writing Method size for method: ::Unity::Burst::Intrinsics::Common.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::Intrinsics::Common::Pause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x648e038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::Common*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::Intrinsics::Common.umul128
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, uint64_t, ::by_ref<uint64_t>)>(&::Unity::Burst::Intrinsics::Common::umul128)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x648e03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::Common*>(),
                                                             { "umul128", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::Intrinsics::Common::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::Common*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint64_t Unity::Burst::Intrinsics::Common::umul128(uint64_t x, uint64_t y, ::by_ref<uint64_t> high) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::Common*>(),
                                                           { "umul128", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x, y, high);
}
// Ctor Parameters []
constexpr ::Unity::Burst::Intrinsics::Common::Common() {}
