#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDisconnectedPacket.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDisconnectedPacket_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerDisconnectedPacket*>* (*)()>(
    &::GlobalNamespace::PlayerDisconnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x323232c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "get_pool",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerDisconnectedPacket* (
    ::GlobalNamespace::PlayerDisconnectedPacket::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::PlayerDisconnectedPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3232370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayerDisconnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3232378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerDisconnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32323a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDisconnectedPacket::*)()>(&::GlobalNamespace::PlayerDisconnectedPacket::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32323cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Release",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDisconnectedPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDisconnectedPacket::*)()>(&::GlobalNamespace::PlayerDisconnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3232424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::PlayerDisconnectedPacket::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerDisconnectedPacket*>* GlobalNamespace::PlayerDisconnectedPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "get_pool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerDisconnectedPacket*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PlayerDisconnectedPacket* GlobalNamespace::PlayerDisconnectedPacket::Init(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerDisconnectedPacket*, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::PlayerDisconnectedPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayerDisconnectedPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::PlayerDisconnectedPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), "Release",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDisconnectedPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDisconnectedPacket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerDisconnectedPacket* GlobalNamespace::PlayerDisconnectedPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerDisconnectedPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PlayerDisconnectedPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PlayerDisconnectedPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::PlayerDisconnectedPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::PlayerDisconnectedPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDisconnectedPacket::PlayerDisconnectedPacket() {}
