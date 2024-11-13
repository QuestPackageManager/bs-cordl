#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneSettingsApplicatorSO.hpp"
#include "GlobalNamespace/zzzz__SettingsApplicatorSO_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneSettingsApplicatorSO_def.hpp"
#include "BeatSaber/Settings/zzzz__WindowSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneSettingsApplicatorSO.ApplyWindowSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneSettingsApplicatorSO::*)(ByRef<::BeatSaber::Settings::WindowSettings>)>(
    &::GlobalNamespace::StandaloneSettingsApplicatorSO::ApplyWindowSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3ace29c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneSettingsApplicatorSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneSettingsApplicatorSO*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneSettingsApplicatorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneSettingsApplicatorSO::*)()>(
    &::GlobalNamespace::StandaloneSettingsApplicatorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ace2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneSettingsApplicatorSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandaloneSettingsApplicatorSO::ApplyWindowSettings(ByRef<::BeatSaber::Settings::WindowSettings> settings) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneSettingsApplicatorSO*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::GlobalNamespace::StandaloneSettingsApplicatorSO* GlobalNamespace::StandaloneSettingsApplicatorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandaloneSettingsApplicatorSO*>());
}
inline void GlobalNamespace::StandaloneSettingsApplicatorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneSettingsApplicatorSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneSettingsApplicatorSO::StandaloneSettingsApplicatorSO() {}
