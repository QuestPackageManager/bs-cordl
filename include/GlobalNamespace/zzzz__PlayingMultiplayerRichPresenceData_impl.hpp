#pragma once
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingMultiplayerRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayingMultiplayerRichPresenceData::*)(::GlobalNamespace::IDifficultyBeatmap*, bool)>(
    &::GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23736d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayingMultiplayerRichPresenceData* GlobalNamespace::PlayingMultiplayerRichPresenceData::New_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                                                            bool atMaxPartySize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>(difficultyBeatmap, atMaxPartySize));
}
inline void GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool atMaxPartySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingMultiplayerRichPresenceData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmap, atMaxPartySize);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingMultiplayerRichPresenceData::PlayingMultiplayerRichPresenceData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
