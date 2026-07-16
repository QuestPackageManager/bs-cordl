#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/Defines.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Defines_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::ClientInterface::Defines._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::ClientInterface::Defines::*)()>(&::OculusStudios::GraphQL::ClientInterface::Defines::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::Defines*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::GraphQL::ClientInterface::Defines::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::ClientInterface::Defines*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::Defines* OculusStudios::GraphQL::ClientInterface::Defines::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::ClientInterface::Defines*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::ClientInterface::Defines::Defines() {}
