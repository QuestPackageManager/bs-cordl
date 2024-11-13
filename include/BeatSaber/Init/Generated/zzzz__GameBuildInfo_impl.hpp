#pragma once
// IWYU pragma private; include "BeatSaber/Init/Generated/GameBuildInfo.hpp"
#include "BeatSaber/Init/zzzz__GameVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/Generated/zzzz__GameBuildInfo_def.hpp"
inline void BeatSaber::Init::Generated::GameBuildInfo::setStaticF_kBuildLabel(::BeatSaber::Init::__GameVersion__PreReleaseLabel value) {
  ::cordl_internals::setStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kBuildLabel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::Generated::GameBuildInfo*>::get>(
      std::forward<::BeatSaber::Init::__GameVersion__PreReleaseLabel>(value));
}
inline ::BeatSaber::Init::__GameVersion__PreReleaseLabel BeatSaber::Init::Generated::GameBuildInfo::getStaticF_kBuildLabel() {
  return ::cordl_internals::getStaticField<::BeatSaber::Init::__GameVersion__PreReleaseLabel, "kBuildLabel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::Generated::GameBuildInfo*>::get>();
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::Generated::GameBuildInfo::GameBuildInfo() {}
constexpr ::BeatSaber::Init::__GameVersion__PreReleasePrefix BeatSaber::Init::Generated::GameBuildInfo::kPreReleasePrefix{ static_cast<int32_t>(0x1e) };
