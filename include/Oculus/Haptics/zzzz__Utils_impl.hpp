#pragma once
// IWYU pragma private; include "Oculus\Haptics\Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Haptics/zzzz__Utils_def.hpp"
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "Oculus/Haptics/zzzz__Ffi_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::Utils.ControllerToFfiController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Haptics::Ffi_Controller (*)(::Oculus::Haptics::Controller)>(&::Oculus::Haptics::Utils::ControllerToFfiController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5db1ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Utils*>(), { "ControllerToFfiController", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Utils.Map
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Oculus::Haptics::Utils::Map)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5db2844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Utils*>(),
                                         { "Map", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Haptics::Ffi_Controller Oculus::Haptics::Utils::ControllerToFfiController(::Oculus::Haptics::Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Utils*>(), { "ControllerToFfiController", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Ffi_Controller>(nullptr, ___internal_method, controller);
}
inline float_t Oculus::Haptics::Utils::Map(int32_t input, int32_t inMin, int32_t inMax, int32_t outMin, int32_t outMax) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Utils*>(),
                                       { "Map", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, input, inMin, inMax, outMin, outMax);
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Utils::Utils() {}
