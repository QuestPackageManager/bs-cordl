#pragma once
// IWYU pragma private; include "BeatSaber/Init/Generated/GameBuildInfo.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/Generated/zzzz__GameBuildInfo_def.hpp"
inline void BeatSaber::Init::Generated::GameBuildInfo::setStaticF_kBuildLabel(::BeatSaber::Init::GameVersion_PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kBuildLabel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::Generated::GameBuildInfo*>::get>(
      std::forward<::BeatSaber::Init::GameVersion_PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::GameVersion_PreReleaseLabel BeatSaber::Init::Generated::GameBuildInfo::getStaticF_kBuildLabel() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::GameVersion_PreReleaseLabel, "kBuildLabel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::Generated::GameBuildInfo*>::get>();
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::Generated::GameBuildInfo::GameBuildInfo() {}
constexpr ::BeatSaber::Init::GameVersion_PreReleasePrefix BeatSaber::Init::Generated::GameBuildInfo::kPreReleasePrefix{ static_cast<int32_t>(0x1e) };
