#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmakingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmakingUtils_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.DecodeMatchInfoWithStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo (*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::DecodeMatchInfoWithStruct)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a722a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(), { "DecodeMatchInfoWithStruct", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.EncodeMatchInfoWithStruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoWithStruct)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a72454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(),
                                                             { "EncodeMatchInfoWithStruct", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.ExtractMatchInfoFromSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW, ::StringW> (*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::ExtractMatchInfoFromSessionId)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a72518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(), { "ExtractMatchInfoFromSessionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.EncodeMatchInfoToSessionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoToSessionId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a72670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(),
                                                                                           { "EncodeMatchInfoToSessionId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::DecodeMatchInfoWithStruct(::StringW matchInfoString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(), { "DecodeMatchInfoWithStruct", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo>(nullptr, ___internal_method, matchInfoString);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoWithStruct(::StringW roomId, ::StringW roomPassword, ::StringW extra) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(),
                                                           { "EncodeMatchInfoWithStruct", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, roomId, roomPassword, extra);
}
inline ::System::ValueTuple_2<::StringW, ::StringW> Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::ExtractMatchInfoFromSessionId(::StringW matchSessionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(), { "ExtractMatchInfoFromSessionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW, ::StringW>>(nullptr, ___internal_method, matchSessionId);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoToSessionId(::StringW roomId, ::StringW roomPassword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>(),
                                                                                         { "EncodeMatchInfoToSessionId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, roomId, roomPassword);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::CustomMatchmakingUtils() {}
