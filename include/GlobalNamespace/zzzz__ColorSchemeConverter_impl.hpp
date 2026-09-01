#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeConverter_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeConverter.FromNetSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (*)(::GlobalNamespace::ColorSchemeNetSerializable)>(
    &::GlobalNamespace::ColorSchemeConverter::FromNetSerializable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a27180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeConverter*>(),
                                                                                           { "FromNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeNetSerializable>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemeConverter::FromNetSerializable(::GlobalNamespace::ColorSchemeNetSerializable serialized) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeConverter*>(),
                                                                                         { "FromNetSerializable", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeNetSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(nullptr, ___internal_method, serialized);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeConverter::ColorSchemeConverter() {}
