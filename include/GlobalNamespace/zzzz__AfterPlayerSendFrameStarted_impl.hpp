#pragma once
// IWYU pragma private; include "GlobalNamespace\AfterPlayerSendFrameStarted.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopMarker_1_impl.hpp"
#include "GlobalNamespace/zzzz__AfterPlayerSendFrameStarted_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AfterPlayerSendFrameStarted._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AfterPlayerSendFrameStarted::*)()>(&::GlobalNamespace::AfterPlayerSendFrameStarted::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58540a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AfterPlayerSendFrameStarted*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AfterPlayerSendFrameStarted::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AfterPlayerSendFrameStarted*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AfterPlayerSendFrameStarted* GlobalNamespace::AfterPlayerSendFrameStarted::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AfterPlayerSendFrameStarted*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AfterPlayerSendFrameStarted::AfterPlayerSendFrameStarted() {}
