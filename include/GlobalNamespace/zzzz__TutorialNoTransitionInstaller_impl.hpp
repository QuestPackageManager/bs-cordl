#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialNoTransitionInstaller.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b34adc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialNoTransitionInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialNoTransitionInstaller*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialNoTransitionInstaller::*)()>(
    &::GlobalNamespace::TutorialNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b34ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialNoTransitionInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::TutorialNoTransitionInstaller::__cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TutorialNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialNoTransitionInstaller*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::TutorialNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialNoTransitionInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialNoTransitionInstaller* GlobalNamespace::TutorialNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TutorialNoTransitionInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialNoTransitionInstaller::TutorialNoTransitionInstaller() {}
