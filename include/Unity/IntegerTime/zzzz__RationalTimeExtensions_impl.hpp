#pragma once
// IWYU pragma private; include "Unity\IntegerTime\RationalTimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IntegerTime/zzzz__RationalTimeExtensions_def.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
//  Writing Method size for method: ::Unity::IntegerTime::RationalTimeExtensions.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::RationalTime (*)(::Unity::IntegerTime::RationalTime, ::Unity::IntegerTime::RationalTime_TicksPerSecond)>(
    &::Unity::IntegerTime::RationalTimeExtensions::Convert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5cb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTimeExtensions*>(),
                                                { "Convert", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime>(), ::i2c::type_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IntegerTime::RationalTimeExtensions.Convert_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IntegerTime::RationalTime>, ::by_ref<::Unity::IntegerTime::RationalTime_TicksPerSecond>,
                                                                ::by_ref<::Unity::IntegerTime::RationalTime>)>(&::Unity::IntegerTime::RationalTimeExtensions::Convert_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTimeExtensions*>(),
                                                { "Convert_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>(), ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime_TicksPerSecond>>(),
                                                    ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::IntegerTime::RationalTime Unity::IntegerTime::RationalTimeExtensions::Convert(::Unity::IntegerTime::RationalTime time, ::Unity::IntegerTime::RationalTime_TicksPerSecond rate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTimeExtensions*>(),
                                              { "Convert", {}, { ::i2c::type_of<::Unity::IntegerTime::RationalTime>(), ::i2c::type_of<::Unity::IntegerTime::RationalTime_TicksPerSecond>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::RationalTime>(nullptr, ___internal_method, time, rate);
}
inline void Unity::IntegerTime::RationalTimeExtensions::Convert_Injected(::by_ref<::Unity::IntegerTime::RationalTime> time, ::by_ref<::Unity::IntegerTime::RationalTime_TicksPerSecond> rate,
                                                                         ::by_ref<::Unity::IntegerTime::RationalTime> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IntegerTime::RationalTimeExtensions*>(),
                                              { "Convert_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>(), ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime_TicksPerSecond>>(),
                                                  ::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time, rate, ret);
}
// Ctor Parameters []
constexpr ::Unity::IntegerTime::RationalTimeExtensions::RationalTimeExtensions() {}
