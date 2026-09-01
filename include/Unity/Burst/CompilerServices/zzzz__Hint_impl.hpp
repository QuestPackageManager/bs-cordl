#pragma once
// IWYU pragma private; include "Unity\Burst\CompilerServices\Hint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__Hint_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Likely
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Likely)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a7610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Likely", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Unlikely
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Unlikely)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a7618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Unlikely", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Hint.Assume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Unity::Burst::CompilerServices::Hint::Assume)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64a7620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Assume", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline bool Unity::Burst::CompilerServices::Hint::Likely(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Likely", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, condition);
}
inline bool Unity::Burst::CompilerServices::Hint::Unlikely(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Unlikely", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, condition);
}
inline void Unity::Burst::CompilerServices::Hint::Assume(bool condition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Hint*>(), { "Assume", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, condition);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::Hint::Hint() {}
