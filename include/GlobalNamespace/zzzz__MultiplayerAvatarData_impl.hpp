#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerAvatarData.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerAvatarData::*)(uint32_t, ::ArrayW<uint8_t>)>(&::GlobalNamespace::MultiplayerAvatarData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377e1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarData>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerAvatarData::_ctor(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarData>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, avatarTypeIdentifierHash, data);
}
// Ctor Parameters [CppParam { name: "avatarTypeIdentifierHash", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t> data) noexcept {
  this->avatarTypeIdentifierHash = avatarTypeIdentifierHash;
  this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData() {}
