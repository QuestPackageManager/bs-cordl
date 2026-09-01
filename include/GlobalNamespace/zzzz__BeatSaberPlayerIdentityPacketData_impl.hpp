#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatSaberPlayerIdentityPacketData.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(
    ::GlobalNamespace::MultiplayerAvatarsData, ::GlobalNamespace::MultiplayerActiveHand)>(&::GlobalNamespace::BeatSaberPlayerIdentityPacketData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32a6e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>(), ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::BeatSaberPlayerIdentityPacketData::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x32a80a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::BeatSaberPlayerIdentityPacketData::Deserialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32a80e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::_ctor(::GlobalNamespace::MultiplayerAvatarsData playerAvatar, ::GlobalNamespace::MultiplayerActiveHand activeHand) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>(), ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerAvatar, activeHand);
}
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::BeatSaberPlayerIdentityPacketData::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::BeatSaberPlayerIdentityPacketData::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "playerAvatar", ty: "::GlobalNamespace::MultiplayerAvatarsData", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeHand", ty:
// "::GlobalNamespace::MultiplayerActiveHand", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberPlayerIdentityPacketData::BeatSaberPlayerIdentityPacketData(::GlobalNamespace::MultiplayerAvatarsData playerAvatar,
                                                                                                  ::GlobalNamespace::MultiplayerActiveHand activeHand) noexcept {
  this->playerAvatar = playerAvatar;
  this->activeHand = activeHand;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberPlayerIdentityPacketData::BeatSaberPlayerIdentityPacketData() {}
