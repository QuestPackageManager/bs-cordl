#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__QuestSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__SceneType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuestSettingsApplicatorSO.ApplyGraphicSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuestSettingsApplicatorSO::*)(
    ::ByRef<::BeatSaber::Settings::Settings>, ::GlobalNamespace::SceneType)>(&::GlobalNamespace::QuestSettingsApplicatorSO::ApplyGraphicSettings)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3b297ac;

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
  constexpr static std::size_t addrs = 0x3b29c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuestSettingsApplicatorSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
inline ::GlobalNamespace::QuestSettingsApplicatorSO* GlobalNamespace::QuestSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuestSettingsApplicatorSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuestSettingsApplicatorSO::QuestSettingsApplicatorSO() {}
