#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialSceneSetupData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::TutorialSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577c5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::TutorialSceneSetupData::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::TutorialSceneSetupData::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialSceneSetupData::_ctor(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialSceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettings);
}
inline ::GlobalNamespace::TutorialSceneSetupData* GlobalNamespace::TutorialSceneSetupData::New_ctor(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialSceneSetupData*>(playerSpecificSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialSceneSetupData::TutorialSceneSetupData() {}
