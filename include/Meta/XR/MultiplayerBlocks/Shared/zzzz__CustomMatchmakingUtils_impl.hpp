#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmakingUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__CustomMatchmakingUtils_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.DecodeMatchInfoWithStruct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo (*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::DecodeMatchInfoWithStruct)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58c4d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "DecodeMatchInfoWithStruct",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.EncodeMatchInfoWithStruct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoWithStruct)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58c4f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "EncodeMatchInfoWithStruct",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.ExtractMatchInfoFromSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::StringW, ::StringW> (*)(::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::ExtractMatchInfoFromSessionId)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58c4fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "ExtractMatchInfoFromSessionId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils.EncodeMatchInfoToSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoToSessionId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58c5124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "EncodeMatchInfoToSessionId",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::DecodeMatchInfoWithStruct(::StringW matchInfoString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "DecodeMatchInfoWithStruct",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo, false>(nullptr, ___internal_method, matchInfoString);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoWithStruct(::StringW roomId, ::StringW roomPassword, ::StringW extra) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "EncodeMatchInfoWithStruct",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, roomId, roomPassword, extra);
}
inline ::System::ValueTuple_2<::StringW, ::StringW> Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::ExtractMatchInfoFromSessionId(::StringW matchSessionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "ExtractMatchInfoFromSessionId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW, ::StringW>, false>(nullptr, ___internal_method, matchSessionId);
}
inline ::StringW Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::EncodeMatchInfoToSessionId(::StringW roomId, ::StringW roomPassword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils*>::get(), "EncodeMatchInfoToSessionId",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, roomId, roomPassword);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmakingUtils::CustomMatchmakingUtils() {}
