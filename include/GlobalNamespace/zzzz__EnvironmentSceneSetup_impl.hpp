#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSceneSetup.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSceneSetup.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSceneSetup::*)()>(&::GlobalNamespace::EnvironmentSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5909bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetup*>(), { ::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetup*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSceneSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentSceneSetup::*)()>(&::GlobalNamespace::EnvironmentSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5909dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_get__environmentsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsList;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_get__environmentsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsList;
}
constexpr void GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_set__environmentsList(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsList = value;
}
constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::EnvironmentSceneSetupData* const& GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::EnvironmentSceneSetup::__cordl_internal_set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
inline void GlobalNamespace::EnvironmentSceneSetup::setStaticF_trackLaneYPositionPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "trackLaneYPositionPropertyId", ::GlobalNamespace::EnvironmentSceneSetup*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::EnvironmentSceneSetup::getStaticF_trackLaneYPositionPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "trackLaneYPositionPropertyId", ::GlobalNamespace::EnvironmentSceneSetup*>();
}
inline void GlobalNamespace::EnvironmentSceneSetup::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetup*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentSceneSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentSceneSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSceneSetup* GlobalNamespace::EnvironmentSceneSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentSceneSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentSceneSetup::EnvironmentSceneSetup() {}
