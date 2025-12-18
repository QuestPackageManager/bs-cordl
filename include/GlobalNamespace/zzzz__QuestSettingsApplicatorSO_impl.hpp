#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__QuestSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__QuestSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)(
    ::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(&::GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x576d1a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)()>(&::GlobalNamespace::QuestSettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576d804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO._ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel, ::ByRef<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>)>(
        &::GlobalNamespace::QuestSettingsApplicatorSO::_ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x576d7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), "<ApplyGraphicSettings>g__ConvertProcessorPerformanceLevel|0_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings(::ByRef<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::SceneType sceneType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, sceneType);
}
inline void GlobalNamespace::QuestSettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::QuestSettingsApplicatorSO::_ApplyGraphicSettings_g__ConvertProcessorPerformanceLevel_0_0(::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel settings,
                                                                                                                      ::ByRef<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel> result) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(),
                                 "<ApplyGraphicSettings>g__ConvertProcessorPerformanceLevel|0_0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QuestSettings_SuggestedPerformanceLevel>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settings, result);
}
inline ::GlobalNamespace::QuestSettingsApplicatorSO* GlobalNamespace::QuestSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuestSettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestSettingsApplicatorSO::QuestSettingsApplicatorSO() {}
