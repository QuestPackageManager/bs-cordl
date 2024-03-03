#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningNoTransitionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningNoTransitionInstaller::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2414ce8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningNoTransitionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningNoTransitionInstaller::*)()>(
    &::GlobalNamespace::HealthWarningNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2414d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_get__healthWarningSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningSceneSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> const&
GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_get__healthWarningSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningSceneSetupData;
}
constexpr void GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const& GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_get__scenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesTransitionSetupData;
}
constexpr void GlobalNamespace::HealthWarningNoTransitionInstaller::__cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HealthWarningNoTransitionInstaller::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::HealthWarningNoTransitionInstaller* GlobalNamespace::HealthWarningNoTransitionInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HealthWarningNoTransitionInstaller*>());
}
inline void GlobalNamespace::HealthWarningNoTransitionInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningNoTransitionInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningNoTransitionInstaller::HealthWarningNoTransitionInstaller() {}
