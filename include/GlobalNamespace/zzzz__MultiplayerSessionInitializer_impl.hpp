#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerSessionInitializer.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionInitializer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionInitializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSessionInitializer::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::MultiplayerSessionType)>(&::GlobalNamespace::MultiplayerSessionInitializer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32b8a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSessionInitializer>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerSessionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionInitializer.InitializeLocalPlayerSessionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSessionInitializer::*)()>(
    &::GlobalNamespace::MultiplayerSessionInitializer::InitializeLocalPlayerSessionState)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x32b8a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSessionInitializer>(), { "InitializeLocalPlayerSessionState", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerSessionInitializer::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                  ::GlobalNamespace::MultiplayerSessionType multiplayerSessionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSessionInitializer>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerSessionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, multiplayerSessionManager, multiplayerSessionType);
}
inline void GlobalNamespace::MultiplayerSessionInitializer::InitializeLocalPlayerSessionState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSessionInitializer>(), { "InitializeLocalPlayerSessionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::MultiplayerSessionInitializer::operator ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
GlobalNamespace::MultiplayerSessionInitializer::i___GlobalNamespace__IMultiplayerSessionManager_1_IMultiplayerSessionInitializer___GlobalNamespace__IBeatSaberConnectedPlayer__() {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_multiplayerSessionManager", ty: "::GlobalNamespace::IBeatSaberMultiplayerSessionManager*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_multiplayerSessionType", ty: "::GlobalNamespace::MultiplayerSessionType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerSessionInitializer::MultiplayerSessionInitializer(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* _multiplayerSessionManager,
                                                                                          ::GlobalNamespace::MultiplayerSessionType _multiplayerSessionType) noexcept {
  this->_multiplayerSessionManager = _multiplayerSessionManager;
  this->_multiplayerSessionType = _multiplayerSessionType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSessionInitializer::MultiplayerSessionInitializer() {}
