#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerAvatarPoseDataProvider.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ITickable_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.get_currentPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::AvatarPoseData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::get_currentPose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x224f160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "get_currentPose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.add_poseDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::add_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x224f170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "add_poseDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.remove_poseDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::remove_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x224f220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "remove_poseDidChangeEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)(
    ::GlobalNamespace::IConnectedPlayer*, ::GlobalNamespace::INodePoseSyncStateManager*, ::BeatSaber::AvatarCore::IAvatarPoseRestriction*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x224f2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INodePoseSyncStateManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::Tick)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x224f30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "Tick",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get_poseDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseDidChangeEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get_poseDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poseDidChangeEvent;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_set_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___poseDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__avatarPoseRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseRestriction;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__avatarPoseRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseRestriction;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPoseRestriction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarPoseData& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__currentPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPose;
}
constexpr ::BeatSaber::AvatarCore::AvatarPoseData const& BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_get__currentPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPose;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::__cordl_internal_set__currentPose(::BeatSaber::AvatarCore::AvatarPoseData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPose = value;
}
inline ::BeatSaber::AvatarCore::AvatarPoseData BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::get_currentPose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "get_currentPose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarPoseData, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "add_poseDidChangeEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "remove_poseDidChangeEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                                                ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                                                                                ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INodePoseSyncStateManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, nodePoseSyncStateManager, avatarPoseRestriction);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::Tick() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>::get(), "Tick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*
BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer, ::GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager,
                                                                       ::BeatSaber::AvatarCore::IAvatarPoseRestriction* avatarPoseRestriction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider*>(connectedPlayer, nodePoseSyncStateManager, avatarPoseRestriction));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::operator ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseDataProvider"
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::i___BeatSaber__AvatarCore__IAvatarPoseDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerAvatarPoseDataProvider::ConnectedPlayerAvatarPoseDataProvider() {}
