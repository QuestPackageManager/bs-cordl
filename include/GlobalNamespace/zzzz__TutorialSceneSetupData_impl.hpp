#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::TutorialSceneSetupData::*)(::GlobalNamespace::ColorScheme*, ::GlobalNamespace::PlayerSpecificSettings*)>(&::GlobalNamespace::TutorialSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2416ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr void GlobalNamespace::TutorialSceneSetupData::__cordl_internal_set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::TutorialSceneSetupData::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::TutorialSceneSetupData* GlobalNamespace::TutorialSceneSetupData::New_ctor(::GlobalNamespace::ColorScheme* colorScheme,
                                                                                                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSceneSetupData*>(colorScheme, playerSpecificSettings));
}
inline void GlobalNamespace::TutorialSceneSetupData::_ctor(::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorScheme, playerSpecificSettings);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSceneSetupData::TutorialSceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
