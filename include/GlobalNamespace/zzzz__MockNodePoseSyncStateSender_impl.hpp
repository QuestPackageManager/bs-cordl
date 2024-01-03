#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(
    &::GlobalNamespace::MockNodePoseSyncStateSender::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x23e68e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)()>(
    &::GlobalNamespace::MockNodePoseSyncStateSender::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23e6a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.SendPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(
    ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::MockNodePoseSyncStateSender::SendPose)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x23e6b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), "SendPose", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNodePoseSyncStateSender.HandleNodePoseSyncStateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockNodePoseSyncStateSender::*)(
    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23e6d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), "HandleNodePoseSyncStateUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockNodePoseSyncStateSender::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MockNodePoseSyncStateSender::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::MockNodePoseSyncStateSender::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockNodePoseSyncStateSender::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MockNodePoseSyncStateSender* GlobalNamespace::MockNodePoseSyncStateSender::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* msm) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockNodePoseSyncStateSender*>(msm));
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::_ctor(::GlobalNamespace::IMultiplayerSessionManager* msm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msm);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::SendPose(::GlobalNamespace::PoseSerializable headPose, ::GlobalNamespace::PoseSerializable leftHandPose,
                                                                   ::GlobalNamespace::PoseSerializable rightHandPose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), "SendPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headPose, leftHandPose, rightHandPose);
}
inline void GlobalNamespace::MockNodePoseSyncStateSender::HandleNodePoseSyncStateUpdate(::GlobalNamespace::NodePoseSyncStateNetSerializable* nodePose,
                                                                                        ::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockNodePoseSyncStateSender*>::get(), "HandleNodePoseSyncStateUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodePose, connectedPlayer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender::MockNodePoseSyncStateSender() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
