#pragma once
// IWYU pragma private; include "GlobalNamespace\MockNodePoseSyncStateSender.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(
    &::GlobalNamespace::MockNodePoseSyncStateSender::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a825e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)()>(&::GlobalNamespace::MockNodePoseSyncStateSender::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a82790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.SendPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(
    ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::MockNodePoseSyncStateSender::SendPose)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5a82850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                                                             { "SendPose",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.HandleNodePoseSyncStateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(
    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                         { "HandleNodePoseSyncStateUpdate", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MockNodePoseSyncStateSender::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MockNodePoseSyncStateSender::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockNodePoseSyncStateSender::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::SendPose(::GlobalNamespace::PoseSerializable headPose, ::GlobalNamespace::PoseSerializable leftHandPose,
                                                                   ::GlobalNamespace::PoseSerializable rightHandPose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                                                           { "SendPose",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>(),
                                                               ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headPose, leftHandPose, rightHandPose);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate(::GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose,
                                                                                        ::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MockNodePoseSyncStateSender*>(),
                       { "HandleNodePoseSyncStateUpdate", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodePose, connectedPlayer);
}
inline ::GlobalNamespace::MockNodePoseSyncStateSender* GlobalNamespace::MockNodePoseSyncStateSender::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockNodePoseSyncStateSender*>(multiplayerSessionManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockNodePoseSyncStateSender::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockNodePoseSyncStateSender::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender::MockNodePoseSyncStateSender() {}
