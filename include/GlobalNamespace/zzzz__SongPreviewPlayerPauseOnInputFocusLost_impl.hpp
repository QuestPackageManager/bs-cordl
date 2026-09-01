#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPreviewPlayerPauseOnInputFocusLost.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayerPauseOnInputFocusLost_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58bb6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x58bb7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleSystemStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)(::GlobalNamespace::XRSystemEventType)>(
    &::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleSystemStateChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58bb920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(),
                                                                                           { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58bb9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase>& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::UnityW<::GlobalNamespace::AudioPlayerBase> const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_set__songPreviewPlayer(::UnityW<::GlobalNamespace::AudioPlayerBase> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPreviewPlayer = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleSystemStateChange(::GlobalNamespace::XRSystemEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(),
                                                                                         { "HandleSystemStateChange", {}, { ::i2c::type_of<::GlobalNamespace::XRSystemEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::SongPreviewPlayerPauseOnInputFocusLost() {}
