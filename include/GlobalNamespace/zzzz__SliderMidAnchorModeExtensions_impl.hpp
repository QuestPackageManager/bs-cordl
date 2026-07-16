#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMidAnchorModeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorModeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMidAnchorModeExtensions.OppositeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderMidAnchorMode (*)(::GlobalNamespace::SliderMidAnchorMode)>(
    &::GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x325d9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMidAnchorModeExtensions*>(),
                                                                                           { "OppositeDirection", {}, { ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderMidAnchorModeExtensions::OppositeDirection(::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderMidAnchorModeExtensions*>(),
                                                                                         { "OppositeDirection", {}, { ::i2c::type_of<::GlobalNamespace::SliderMidAnchorMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode>(nullptr, ___internal_method, sliderMidAnchorMode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMidAnchorModeExtensions::SliderMidAnchorModeExtensions() {}
