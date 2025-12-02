#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/MatchInfo.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__MatchInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::MatchInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::*)(::StringW, ::StringW, ::StringW)>(
    &::Meta::XR::MultiplayerBlocks::Shared::MatchInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x585e5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::MatchInfo::_ctor(::StringW roomId, ::StringW roomPassword, ::StringW extra) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Shared::MatchInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomId, roomPassword, extra);
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
