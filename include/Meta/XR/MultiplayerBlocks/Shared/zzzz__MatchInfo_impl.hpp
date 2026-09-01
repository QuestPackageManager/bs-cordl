#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Shared\MatchInfo.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::*)(::StringW, ::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a74598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::MatchInfo::_ctor(::StringW roomId, ::StringW roomPassword, ::StringW extra) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, roomId, roomPassword, extra);
}
// Ctor Parameters [CppParam { name: "RoomId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Extra", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::MatchInfo(::StringW RoomId, ::StringW RoomPassword, ::StringW Extra) noexcept {
  this->RoomId = RoomId;
  this->RoomPassword = RoomPassword;
  this->Extra = Extra;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::MatchInfo() {}
