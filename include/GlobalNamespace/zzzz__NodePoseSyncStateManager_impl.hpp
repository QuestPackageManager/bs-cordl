#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_deltaUpdateFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_deltaUpdateFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x221d34c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_fullStateUpdateFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_fullStateUpdateFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x221d358;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_localBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_localBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d364;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_remoteBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_remoteBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d36c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_serializablePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* (
    ::GlobalNamespace::NodePoseSyncStateManager::*)()>(&::GlobalNamespace::NodePoseSyncStateManager::get_serializablePool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d374;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_deltaSerializablePool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* (
    ::GlobalNamespace::NodePoseSyncStateManager::*)()>(&::GlobalNamespace::NodePoseSyncStateManager::get_deltaSerializablePool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d37c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_messageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerSessionManager__MessageType (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_messageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d384;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.get_deltaMessageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerSessionManager__MessageType (::GlobalNamespace::NodePoseSyncStateManager::*)()>(
    &::GlobalNamespace::NodePoseSyncStateManager::get_deltaMessageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d38c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.Interpolate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (::GlobalNamespace::NodePoseSyncStateManager::*)(
    ::GlobalNamespace::PoseSerializable, float_t, ::GlobalNamespace::PoseSerializable, float_t, float_t)>(&::GlobalNamespace::NodePoseSyncStateManager::Interpolate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x221d394;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager.Smooth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PoseSerializable (::GlobalNamespace::NodePoseSyncStateManager::*)(
    ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable, float_t)>(&::GlobalNamespace::NodePoseSyncStateManager::Smooth)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x221d3f0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateManager::*)()>(&::GlobalNamespace::NodePoseSyncStateManager::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x221d44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INodePoseSyncStateManager"
constexpr GlobalNamespace::NodePoseSyncStateManager::operator ::GlobalNamespace::INodePoseSyncStateManager*() noexcept {
  return static_cast<::GlobalNamespace::INodePoseSyncStateManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to
/// "::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::__NodePoseSyncState__NodePose,::GlobalNamespace::PoseSerializable,::GlobalNamespace::NodePoseSyncStateNetSerializable*,::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>"
constexpr GlobalNamespace::NodePoseSyncStateManager::operator ::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose,
                                                                                                             ::GlobalNamespace::PoseSerializable, ::GlobalNamespace::NodePoseSyncStateNetSerializable*,
                                                                                                             ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*() noexcept {
  return static_cast<::GlobalNamespace::INodePoseSyncStateManager_5<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::__NodePoseSyncState__NodePose, ::GlobalNamespace::PoseSerializable,
                                                                    ::GlobalNamespace::NodePoseSyncStateNetSerializable*, ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*>(
      static_cast<void*>(this));
}
inline float_t GlobalNamespace::NodePoseSyncStateManager::get_deltaUpdateFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_deltaUpdateFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::NodePoseSyncStateManager::get_fullStateUpdateFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_fullStateUpdateFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NodePoseSyncStateManager::get_localBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_localBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NodePoseSyncStateManager::get_remoteBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_remoteBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* GlobalNamespace::NodePoseSyncStateManager::get_serializablePool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_serializablePool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* GlobalNamespace::NodePoseSyncStateManager::get_deltaSerializablePool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_deltaSerializablePool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::NodePoseSyncStateManager::get_messageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_messageType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerSessionManager__MessageType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::NodePoseSyncStateManager::get_deltaMessageType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(),
                                                                             "get_deltaMessageType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerSessionManager__MessageType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncStateManager::Interpolate(::GlobalNamespace::PoseSerializable prev, float_t prevTime, ::GlobalNamespace::PoseSerializable curr,
                                                                                                  float_t currTime, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), "Interpolate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(this, ___internal_method, prev, prevTime, curr, currTime, time);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncStateManager::Smooth(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), "Smooth", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(this, ___internal_method, a, b, smooth);
}
inline ::GlobalNamespace::NodePoseSyncStateManager* GlobalNamespace::NodePoseSyncStateManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NodePoseSyncStateManager*>());
}
inline void GlobalNamespace::NodePoseSyncStateManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePoseSyncStateManager::NodePoseSyncStateManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
