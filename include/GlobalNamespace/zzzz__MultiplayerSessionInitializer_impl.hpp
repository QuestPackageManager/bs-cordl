#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionInitializer.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionInitializer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionInitializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionInitializer::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::MultiplayerSessionType)>(&::GlobalNamespace::MultiplayerSessionInitializer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31e2f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionInitializer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerSessionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionInitializer.InitializeLocalPlayerSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionInitializer::*)()>(
    &::GlobalNamespace::MultiplayerSessionInitializer::InitializeLocalPlayerSessionState)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x31e2f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionInitializer>::get(), "InitializeLocalPlayerSessionState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerSessionInitializer::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                  ::GlobalNamespace::MultiplayerSessionType multiplayerSessionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionInitializer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerSessionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, multiplayerSessionType);
}
inline void GlobalNamespace::MultiplayerSessionInitializer::InitializeLocalPlayerSessionState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionInitializer>::get(), "InitializeLocalPlayerSessionState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr GlobalNamespace::MultiplayerSessionInitializer::operator ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*() {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>"
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*
GlobalNamespace::MultiplayerSessionInitializer::i___GlobalNamespace__IMultiplayerSessionManager_1_IMultiplayerSessionInitializer___GlobalNamespace__IBeatSaberConnectedPlayer__() {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
