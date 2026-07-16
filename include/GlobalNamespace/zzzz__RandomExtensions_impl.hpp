#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RandomExtensions_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomExtensions.GetRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::IRandom*, float_t, float_t)>(&::GlobalNamespace::RandomExtensions::GetRange)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x330a9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(),
                                                             { "GetRange", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomExtensions.GetBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::RandomExtensions::GetBool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x330aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "GetBool", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomExtensions.NextDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::RandomExtensions::NextDouble)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x330aa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "NextDouble", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomExtensions.NextFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::RandomExtensions::NextFloat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x330abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "NextFloat", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomExtensions.Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::IRandom*, int32_t)>(&::GlobalNamespace::RandomExtensions::Next)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x330aabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "Next", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::RandomExtensions::GetRange(::GlobalNamespace::IRandom* random, float_t min, float_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(),
                                                           { "GetRange", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, random, min, max);
}
inline bool GlobalNamespace::RandomExtensions::GetBool(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "GetBool", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, random);
}
inline double_t GlobalNamespace::RandomExtensions::NextDouble(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "NextDouble", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, random);
}
inline float_t GlobalNamespace::RandomExtensions::NextFloat(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "NextFloat", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, random);
}
inline int32_t GlobalNamespace::RandomExtensions::Next(::GlobalNamespace::IRandom* random, int32_t maxValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomExtensions*>(), { "Next", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, random, maxValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomExtensions::RandomExtensions() {}
