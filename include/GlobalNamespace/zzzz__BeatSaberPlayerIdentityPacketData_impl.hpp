#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberPlayerIdentityPacketData.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberPlayerIdentityPacketData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x31d2a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::BeatSaberPlayerIdentityPacketData::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31d2a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberPlayerIdentityPacketData.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberPlayerIdentityPacketData::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::BeatSaberPlayerIdentityPacketData::Deserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x31d2aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::_ctor(::GlobalNamespace::MultiplayerAvatarsData playerAvatar) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerAvatar);
}
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::BeatSaberPlayerIdentityPacketData::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::BeatSaberPlayerIdentityPacketData::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::BeatSaberPlayerIdentityPacketData::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "playerAvatar", ty: "::GlobalNamespace::MultiplayerAvatarsData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberPlayerIdentityPacketData::BeatSaberPlayerIdentityPacketData(::GlobalNamespace::MultiplayerAvatarsData playerAvatar) noexcept {
  this->playerAvatar = playerAvatar;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberPlayerIdentityPacketData::BeatSaberPlayerIdentityPacketData() {}
