#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingsConditionalActivator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::GraphicSettingsConditionalActivator_ActivatorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::GraphicSettingsConditionalActivator_ActivatorType() {}
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::smoke{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::depthTexture{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::burnmarkTrails{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType::screenDisplacement{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(&::GlobalNamespace::GraphicSettingsConditionalActivator::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58ff73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator.GetGraphicsActivatorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(
    &::GlobalNamespace::GraphicSettingsConditionalActivator::GetGraphicsActivatorType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58ff78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { "GetGraphicsActivatorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsConditionalActivator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GraphicSettingsConditionalActivator::*)()>(&::GlobalNamespace::GraphicSettingsConditionalActivator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ff82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activatorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activatorType;
}
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activatorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activatorType;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__activatorType(::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activatorType = value;
}
constexpr bool& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activateOnFalse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr bool const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__activateOnFalse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__activateOnFalse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activateOnFalse = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::GraphicSettingsConditionalActivator::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
inline void GlobalNamespace::GraphicSettingsConditionalActivator::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GraphicSettingsConditionalActivator::GetGraphicsActivatorType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { "GetGraphicsActivatorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GraphicSettingsConditionalActivator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsConditionalActivator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GraphicSettingsConditionalActivator* GlobalNamespace::GraphicSettingsConditionalActivator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphicSettingsConditionalActivator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator::GraphicSettingsConditionalActivator() {}
