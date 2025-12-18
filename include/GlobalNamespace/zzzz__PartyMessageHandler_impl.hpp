#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyMessageHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PartyMessageHandler_MessageType::PartyMessageHandler_MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyMessageHandler_MessageType::PartyMessageHandler_MessageType() {}
constexpr ::GlobalNamespace::PartyMessageHandler_MessageType GlobalNamespace::PartyMessageHandler_MessageType::ConnectToMasterServer{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31e37e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x31e3854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*,
                                                                           ::System::Object*)>(&::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31e38a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31e3964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                     ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectionMask, configuration);
}
inline ::System::IAsyncResult* GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                             ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, selectionMask, configuration, callback, object);
}
inline void GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate* GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::New_ctor(::System::Object* object,
                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyMessageHandler_ServerStatusUpdatedDelegate::PartyMessageHandler_ServerStatusUpdatedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31e3970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::*)(::StringW)>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31e39ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31e3a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31e3a20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::Invoke(::StringW secret) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret);
}
inline ::System::IAsyncResult* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::BeginInvoke(::StringW secret, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, secret, callback, object);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate::PartyMessageHandler_ConnectToMasterServerDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>* (*)()>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x31e34b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* (
    ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::*)(::StringW)>(&::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31e3748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31e3a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31e3a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::*)()>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x31e3790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::*)()>(
    &::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31e3a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::__cordl_internal_set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Init(::StringW secret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Init",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*, false>(this, ___internal_method, secret);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage::PartyMessageHandler_ConnectToMasterServerMessage() {}
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::BeatSaberConnectedPlayerManager*)>(
    &::GlobalNamespace::PartyMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x31e3308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)()>(&::GlobalNamespace::PartyMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x31e34fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.add_connectToMasterServerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(
    ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*)>(&::GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31e3558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "add_connectToMasterServerEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.remove_connectToMasterServerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(
    ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*)>(&::GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31e3604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "remove_connectToMasterServerEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.ConnectToMasterServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::StringW)>(
    &::GlobalNamespace::PartyMessageHandler::ConnectToMasterServer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31e36b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "ConnectToMasterServer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.HandleConnectToMasterServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(
    ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*)>(&::GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x31e3750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "HandleConnectToMasterServer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
GlobalNamespace::PartyMessageHandler::__cordl_internal_get__serializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializer;
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::PartyMessageHandler::__cordl_internal_get__serializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializer;
}
constexpr void GlobalNamespace::PartyMessageHandler::__cordl_internal_set__serializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::PartyMessageHandler_MessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager*& GlobalNamespace::PartyMessageHandler::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager* const& GlobalNamespace::PartyMessageHandler::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr void GlobalNamespace::PartyMessageHandler::__cordl_internal_set__connectedPlayerManager(::GlobalNamespace::BeatSaberConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayerManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*& GlobalNamespace::PartyMessageHandler::__cordl_internal_get_connectToMasterServerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectToMasterServerEvent;
}
constexpr ::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* const& GlobalNamespace::PartyMessageHandler::__cordl_internal_get_connectToMasterServerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectToMasterServerEvent;
}
constexpr void GlobalNamespace::PartyMessageHandler::__cordl_internal_set_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectToMasterServerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PartyMessageHandler::_ctor(::GlobalNamespace::BeatSaberConnectedPlayerManager* connectedPlayerManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayerManager);
}
inline void GlobalNamespace::PartyMessageHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "add_connectToMasterServerEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "remove_connectToMasterServerEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PartyMessageHandler::ConnectToMasterServer(::StringW secret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "ConnectToMasterServer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret);
}
inline void GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer(::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler*>::get(), "HandleConnectToMasterServer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PartyMessageHandler_ConnectToMasterServerMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline ::GlobalNamespace::PartyMessageHandler* GlobalNamespace::PartyMessageHandler::New_ctor(::GlobalNamespace::BeatSaberConnectedPlayerManager* connectedPlayerManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PartyMessageHandler*>(connectedPlayerManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::PartyMessageHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PartyMessageHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyMessageHandler::PartyMessageHandler() {}
