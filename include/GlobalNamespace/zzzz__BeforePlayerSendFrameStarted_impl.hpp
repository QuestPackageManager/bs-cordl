#pragma once
// IWYU pragma private; include "GlobalNamespace/BeforePlayerSendFrameStarted.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopMarker_1_impl.hpp"
#include "GlobalNamespace/zzzz__BeforePlayerSendFrameStarted_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeforePlayerSendFrameStarted._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeforePlayerSendFrameStarted::*)()>(&::GlobalNamespace::BeforePlayerSendFrameStarted::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5856a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeforePlayerSendFrameStarted*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeforePlayerSendFrameStarted::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeforePlayerSendFrameStarted*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeforePlayerSendFrameStarted* GlobalNamespace::BeforePlayerSendFrameStarted::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeforePlayerSendFrameStarted*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeforePlayerSendFrameStarted::BeforePlayerSendFrameStarted() {}
