#pragma once
// IWYU pragma private; include "GlobalNamespace\OffsetDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetDirectionExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetDirectionExtensions.OppositeDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OffsetDirection (*)(::GlobalNamespace::OffsetDirection)>(&::GlobalNamespace::OffsetDirectionExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x325d868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetDirectionExtensions*>(), { "OppositeDirection", {}, { ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OffsetDirection GlobalNamespace::OffsetDirectionExtensions::OppositeDirection(::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OffsetDirectionExtensions*>(), { "OppositeDirection", {}, { ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection>(nullptr, ___internal_method, offsetDirection);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OffsetDirectionExtensions::OffsetDirectionExtensions() {}
