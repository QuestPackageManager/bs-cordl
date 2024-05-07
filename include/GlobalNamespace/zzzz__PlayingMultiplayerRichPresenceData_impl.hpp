#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingMultiplayerRichPresenceData.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingMultiplayerRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingMultiplayerRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayingMultiplayerRichPresenceData::*)(bool)>(
    &::GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2694998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* GlobalNamespace::PlayingMultiplayerRichPresenceData::New_ctor(bool atMaxPartySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>(atMaxPartySize));
}
inline void GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor(bool atMaxPartySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atMaxPartySize);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingMultiplayerRichPresenceData::PlayingMultiplayerRichPresenceData() {}
