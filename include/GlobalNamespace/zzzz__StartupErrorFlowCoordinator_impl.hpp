#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StartupErrorFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::StartupErrorFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3c0bb54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StartupErrorFlowCoordinator::*)()>(&::GlobalNamespace::StartupErrorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c0bbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StartupErrorViewController>& GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_get__startupErrorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorViewController;
}
constexpr ::UnityW<::GlobalNamespace::StartupErrorViewController> const& GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_get__startupErrorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorViewController;
}
constexpr void GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_set__startupErrorViewController(::UnityW<::GlobalNamespace::StartupErrorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startupErrorViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StartupErrorSceneSetupData*& GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_get__startupErrorSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorSceneSetupData;
}
constexpr ::GlobalNamespace::StartupErrorSceneSetupData* const& GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_get__startupErrorSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startupErrorSceneSetupData;
}
constexpr void GlobalNamespace::StartupErrorFlowCoordinator::__cordl_internal_set__startupErrorSceneSetupData(::GlobalNamespace::StartupErrorSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startupErrorSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StartupErrorFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::StartupErrorFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StartupErrorFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StartupErrorFlowCoordinator* GlobalNamespace::StartupErrorFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StartupErrorFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorFlowCoordinator::StartupErrorFlowCoordinator() {}
