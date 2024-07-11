#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingHelper_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingHelper.FromPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::BeatSaber::GameSettings::GraphicSettingsHandler*, ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>)>(&::GlobalNamespace::GraphicSettingHelper::FromPreset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26b5f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingHelper*>::get(), "FromPreset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GraphicSettingHelper::FromPreset(::BeatSaber::GameSettings::GraphicSettingsHandler* settingsHandler, ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> preset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingHelper*>::get(), "FromPreset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settingsHandler, preset);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingHelper::GraphicSettingHelper() {}
