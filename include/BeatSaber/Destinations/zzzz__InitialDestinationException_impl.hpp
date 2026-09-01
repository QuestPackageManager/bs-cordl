#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\InitialDestinationException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationException_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationException::*)()>(&::BeatSaber::Destinations::InitialDestinationException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3281ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::InitialDestinationException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::InitialDestinationException* BeatSaber::Destinations::InitialDestinationException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::InitialDestinationException*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationException::InitialDestinationException() {}
