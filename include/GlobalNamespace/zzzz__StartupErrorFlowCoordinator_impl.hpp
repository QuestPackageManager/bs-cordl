#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::StartupErrorFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a08bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::StartupErrorFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorFlowCoordinator::*)()>(&::GlobalNamespace::StartupErrorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a08c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorFlowCoordinator*>(), { ".ctor", {}, {} })));
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
  this->____startupErrorViewController = value;
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
  this->____startupErrorSceneSetupData = value;
}
inline void GlobalNamespace::StartupErrorFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StartupErrorFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::StartupErrorFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartupErrorFlowCoordinator* GlobalNamespace::StartupErrorFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartupErrorFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorFlowCoordinator::StartupErrorFlowCoordinator() {}
