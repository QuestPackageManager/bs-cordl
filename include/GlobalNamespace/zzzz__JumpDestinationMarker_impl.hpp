#pragma once
// IWYU pragma private; include "GlobalNamespace/JumpDestinationMarker.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpDestinationMarker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JumpDestinationMarker::*)()>(&::GlobalNamespace::JumpDestinationMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x585be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpDestinationMarker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JumpDestinationMarker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::JumpDestinationMarker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JumpDestinationMarker* GlobalNamespace::JumpDestinationMarker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JumpDestinationMarker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JumpDestinationMarker::JumpDestinationMarker() {}
