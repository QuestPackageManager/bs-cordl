#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerControllerDataPacket.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerControllerDataPacket_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket.get_pool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerControllerDataPacket*>* (*)()>(
    &::GlobalNamespace::PlayerControllerDataPacket::get_pool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32a6f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "get_pool", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerControllerDataPacket::*)()>(&::GlobalNamespace::PlayerControllerDataPacket::Release)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32a7f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerControllerDataPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayerControllerDataPacket::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32a8138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerControllerDataPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerControllerDataPacket::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32a8158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerControllerDataPacket* (::GlobalNamespace::PlayerControllerDataPacket::*)(::GlobalNamespace::MultiplayerActiveHand)>(
    &::GlobalNamespace::PlayerControllerDataPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a6f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerControllerDataPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerControllerDataPacket::*)()>(&::GlobalNamespace::PlayerControllerDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a8180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerActiveHand& GlobalNamespace::PlayerControllerDataPacket::__cordl_internal_get_activeHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeHand;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand const& GlobalNamespace::PlayerControllerDataPacket::__cordl_internal_get_activeHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeHand;
}
constexpr void GlobalNamespace::PlayerControllerDataPacket::__cordl_internal_set_activeHand(::GlobalNamespace::MultiplayerActiveHand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeHand = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerControllerDataPacket*>* GlobalNamespace::PlayerControllerDataPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "get_pool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::PlayerControllerDataPacket*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerControllerDataPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerControllerDataPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayerControllerDataPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerControllerDataPacket* GlobalNamespace::PlayerControllerDataPacket::Init(::GlobalNamespace::MultiplayerActiveHand activeHand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerControllerDataPacket*>(this, ___internal_method, activeHand);
}
inline void GlobalNamespace::PlayerControllerDataPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerControllerDataPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerControllerDataPacket* GlobalNamespace::PlayerControllerDataPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerControllerDataPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PlayerControllerDataPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PlayerControllerDataPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::PlayerControllerDataPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::PlayerControllerDataPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerControllerDataPacket::PlayerControllerDataPacket() {}
