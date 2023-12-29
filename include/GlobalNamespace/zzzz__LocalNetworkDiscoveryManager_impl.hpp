#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalNetworkDiscoveryManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalNetworkDiscoveryManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::__LocalNetworkDiscoveryManager__PacketType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::__LocalNetworkDiscoveryManager__PacketType() {}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::Broadcast{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::JoinRequest{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::JoinResponse{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::InviteRequest{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType::InviteResponse{ static_cast<uint8_t>(0x4u) };
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::Serialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2217dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::Deserialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2217e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::*)()>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2217b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr uint32_t& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr uint32_t const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_version(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_currentPartySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPartySize;
}
constexpr int32_t const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_currentPartySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentPartySize;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_currentPartySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentPartySize = value;
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_isPartyOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_isPartyOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_isPartyOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPartyOwner = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), "Serialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), "Deserialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>());
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket::__LocalNetworkDiscoveryManager__BroadcastPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2217f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2217f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::*)()>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2217504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), "Serialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), "Deserialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>());
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket::__LocalNetworkDiscoveryManager__JoinRequestPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2217fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::Deserialize)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2218044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::*)()>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221765c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_multiplayerPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerPort;
}
constexpr int32_t const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_multiplayerPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerPort;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_multiplayerPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerPort = value;
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_blocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocked;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_blocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocked;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_blocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocked = value;
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_isPartyOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_isPartyOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_isPartyOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPartyOwner = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), "Serialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), "Deserialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>());
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket::__LocalNetworkDiscoveryManager__JoinResponsePacket() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::*)(
    ::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x221811c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::Deserialize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22181b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::*)()>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22177ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_multiplayerPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerPort;
}
constexpr int32_t const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_multiplayerPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerPort;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_multiplayerPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerPort = value;
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_isPartyOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_isPartyOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPartyOwner;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_isPartyOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPartyOwner = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), "Serialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), "Deserialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>());
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket::__LocalNetworkDiscoveryManager__InviteRequestPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::*)(
    ::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::Serialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2218284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::Deserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22182d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::*)()>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22178c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_accepted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accepted;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_accepted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accepted;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_accepted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accepted = value;
}
constexpr bool& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_blocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocked;
}
constexpr bool const& GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__get_blocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocked;
}
constexpr void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__set_blocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocked = value;
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), "Serialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), "Deserialize",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>());
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket::__LocalNetworkDiscoveryManager__InviteResponsePacket() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2218330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(
    ::StringW, ::System::Net::IPAddress*, ::StringW, int32_t, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2218408;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::StringW, ::System::Net::IPAddress*, ::StringW, int32_t, bool, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                                               ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2218460;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2218594;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>(object, method));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, int32_t currentPartySize,
                                                                                         bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                         ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration);
}
inline ::System::IAsyncResult* GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName,
                                                                                                                 int32_t currentPartySize, bool isPartyOwner,
                                                                                                                 ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                 ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userId, remoteEndPoint, userName, currentPartySize, isPartyOwner, selectionMask, configuration,
                                                                             callback, object);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22185a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(
    ::StringW, ::System::Net::IPAddress*, ::StringW)>(&::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2218678;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::StringW, ::System::Net::IPAddress*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x221868c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22186b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                  void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>(object, method));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, remoteEndPoint, userName);
}
inline ::System::IAsyncResult* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userId, remoteEndPoint, userName, callback, object);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate::__LocalNetworkDiscoveryManager__JoinRequestedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22186c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(
    ::StringW, ::StringW, int32_t, bool, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x221879c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::StringW, ::StringW, int32_t, bool, bool, ::GlobalNamespace::BeatmapLevelSelectionMask,
                                                                                 ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22187f8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2218940;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                  void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>(object, method));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::Invoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner,
                                                                                           ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                           ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration);
}
inline ::System::IAsyncResult* GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::BeginInvoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked,
                                                                                                                   bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                   ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userId, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration, callback,
                                                                             object);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate::__LocalNetworkDiscoveryManager__JoinRespondedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x221894c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(
    ::StringW, ::System::Net::IPAddress*, ::StringW, ::StringW, int32_t, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2218a24;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::StringW, ::System::Net::IPAddress*, ::StringW, ::StringW, int32_t, bool,
                                                                                   ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
                                                                                   ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2218a80;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2218bb8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>(object, method));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::Invoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName, ::StringW secret,
                                                                                             int32_t multiplayerPort, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                             ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, remoteEndPoint, userName, secret, multiplayerPort, isPartyOwner, selectionMask, configuration);
}
inline ::System::IAsyncResult* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::BeginInvoke(::StringW userId, ::System::Net::IPAddress* remoteEndPoint, ::StringW userName,
                                                                                                                     ::StringW secret, int32_t multiplayerPort, bool isPartyOwner,
                                                                                                                     ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                     ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userId, remoteEndPoint, userName, secret, multiplayerPort, isPartyOwner, selectionMask,
                                                                             configuration, callback, object);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate::__LocalNetworkDiscoveryManager__InviteRequestedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2218bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::StringW, bool, bool)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2218c9c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::StringW, bool, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2218cb8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2218d6c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                      void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>(object, method));
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::Invoke(::StringW userId, bool accepted, bool blocked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, accepted, blocked);
}
inline ::System::IAsyncResult* GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::BeginInvoke(::StringW userId, bool accepted, bool blocked, ::System::AsyncCallback* callback,
                                                                                                                     ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, userId, accepted, blocked, callback, object);
}
inline void GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate::__LocalNetworkDiscoveryManager__InviteRespondedDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.add_peerUpdatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::add_peerUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x221678c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_peerUpdatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.remove_peerUpdatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::remove_peerUpdatedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_peerUpdatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.add_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22168c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_joinRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.remove_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_joinRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.add_joinRespondedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22169fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_joinRespondedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.remove_joinRespondedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_joinRespondedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.add_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_inviteRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.remove_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_inviteRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.add_inviteRespondedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_inviteRespondedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.remove_inviteRespondedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRespondedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2216d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_inviteRespondedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_userId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2216da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_userName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2216dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_isPartyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_isPartyOwner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2216ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_isPartyOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.set_isPartyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(bool)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::set_isPartyOwner)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2216df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_isPartyOwner",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_currentPartySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_currentPartySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2216e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_currentPartySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.set_currentPartySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(int32_t)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::set_currentPartySize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2216e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_currentPartySize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_configuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2216e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.set_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::set_configuration)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2216ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_configuration", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2216f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.set_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::set_selectionMask)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2216f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_selectionMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.get_enableBroadcasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::get_enableBroadcasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2216fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "get_enableBroadcasting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.set_enableBroadcasting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(bool)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::set_enableBroadcasting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2216fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_enableBroadcasting",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(int32_t, ::StringW, ::StringW)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::Init)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2216fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2217338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x221734c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2217360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.SendJoinRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::System::Net::IPAddress*)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2217418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendJoinRequest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.SendJoinResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::System::Net::IPAddress*, ::StringW, int32_t, bool, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinResponse)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x221750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendJoinResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.SendInviteRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::System::Net::IPAddress*, ::StringW, int32_t, bool, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteRequest)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2217664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendInviteRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.SendInviteResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::System::Net::IPAddress*, bool, bool)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteResponse)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22177b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendInviteResponse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(
        &::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22178c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                 "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnConnectionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::LiteNetLib::ConnectionRequest*)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2217964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x221797c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2217a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                               "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnPeerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::LiteNetLib::NetPeer*)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2217a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnPeerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2217a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager.LiteNetLib_INetEventListener_OnNetworkReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2217a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)()>(
    &::GlobalNamespace::LocalNetworkDiscoveryManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2217a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2217b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2217c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2217c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_3)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2217ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalNetworkDiscoveryManager._Init_b__55_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalNetworkDiscoveryManager::*)(
    ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*, ::System::Net::IPEndPoint*)>(&::GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_4)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2217d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr GlobalNamespace::LocalNetworkDiscoveryManager::operator ::LiteNetLib::INetEventListener*() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*& GlobalNamespace::LocalNetworkDiscoveryManager::__get_peerUpdatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerUpdatedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get_peerUpdatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerUpdatedEvent;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___peerUpdatedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*& GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*& GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRespondedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRespondedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get_joinRespondedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRespondedEvent;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinRespondedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*& GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*& GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRespondedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRespondedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get_inviteRespondedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRespondedEvent;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteRespondedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetManager*& GlobalNamespace::LocalNetworkDiscoveryManager::__get__netManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__netManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netManager;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__netManager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>*&
GlobalNamespace::LocalNetworkDiscoveryManager::__get__packetSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get__packetSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__packetSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__LocalNetworkDiscoveryManager__PacketType, ::System::Net::IPEndPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packetSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& GlobalNamespace::LocalNetworkDiscoveryManager::__get__netDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDataWriter;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__netDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netDataWriter;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__netDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*& GlobalNamespace::LocalNetworkDiscoveryManager::__get__broadcastPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____broadcastPacket;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*> const&
GlobalNamespace::LocalNetworkDiscoveryManager::__get__broadcastPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____broadcastPacket;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__broadcastPacket(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____broadcastPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LocalNetworkDiscoveryManager::__get__discoveryPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryPort;
}
constexpr int32_t const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__discoveryPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryPort;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__discoveryPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____discoveryPort = value;
}
constexpr bool& GlobalNamespace::LocalNetworkDiscoveryManager::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr bool& GlobalNamespace::LocalNetworkDiscoveryManager::__get__enableBroadcasting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBroadcasting;
}
constexpr bool const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__enableBroadcasting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBroadcasting;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__enableBroadcasting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBroadcasting = value;
}
constexpr float_t& GlobalNamespace::LocalNetworkDiscoveryManager::__get__lastBroadcastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastBroadcastTime;
}
constexpr float_t const& GlobalNamespace::LocalNetworkDiscoveryManager::__get__lastBroadcastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastBroadcastTime;
}
constexpr void GlobalNamespace::LocalNetworkDiscoveryManager::__set__lastBroadcastTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastBroadcastTime = value;
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::add_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_peerUpdatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::remove_peerUpdatedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_peerUpdatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__PeerUpdatedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_joinRequestedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_joinRequestedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::add_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_joinRespondedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::remove_joinRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_joinRespondedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRespondedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_inviteRequestedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRequestedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_inviteRequestedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::add_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "add_inviteRespondedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::remove_inviteRespondedEvent(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "remove_inviteRespondedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRespondedDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LocalNetworkDiscoveryManager::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_userId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalNetworkDiscoveryManager::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalNetworkDiscoveryManager::get_isPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_isPartyOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::set_isPartyOwner(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_isPartyOwner",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LocalNetworkDiscoveryManager::get_currentPartySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_currentPartySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::set_currentPartySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_currentPartySize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalNetworkDiscoveryManager::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_configuration", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::LocalNetworkDiscoveryManager::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_selectionMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LocalNetworkDiscoveryManager::get_enableBroadcasting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "get_enableBroadcasting", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::set_enableBroadcasting(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "set_enableBroadcasting",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::Init(int32_t discoveryPort, ::StringW initUserId, ::StringW initUserName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, discoveryPort, initUserId, initUserName);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinRequest(::System::Net::IPAddress* ip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendJoinRequest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ip);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::SendJoinResponse(::System::Net::IPAddress* ip, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner,
                                                                            ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendJoinResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ip, secret, multiplayerPort, blocked, isPartyOwner, selectionMask, configuration);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteRequest(::System::Net::IPAddress* ip, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner,
                                                                             ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendInviteRequest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ip, secret, multiplayerPort, isPartyOwner, selectionMask, configuration);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::SendInviteResponse(::System::Net::IPAddress* ip, bool accepted, bool blocked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "SendInviteResponse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ip, accepted, blocked);
}
template <typename T> inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::LocalNetworkDiscoveryManager::WritePacket(T packet) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                                  "WritePacket", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                                    ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                               "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketErrorCode);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(),
                                                                             "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                                         ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline ::GlobalNamespace::LocalNetworkDiscoveryManager* GlobalNamespace::LocalNetworkDiscoveryManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LocalNetworkDiscoveryManager*>());
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_0(::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket* packet, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__BroadcastPacket*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, endPoint);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_1(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket* packet, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinRequestPacket*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, endPoint);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_2(::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket* packet, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_2", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__JoinResponsePacket*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, endPoint);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_3(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket* packet, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteRequestPacket*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, endPoint);
}
inline void GlobalNamespace::LocalNetworkDiscoveryManager::_Init_b__55_4(::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket* packet, ::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalNetworkDiscoveryManager*>::get(), "<Init>b__55_4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LocalNetworkDiscoveryManager__InviteResponsePacket*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, endPoint);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalNetworkDiscoveryManager::LocalNetworkDiscoveryManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
