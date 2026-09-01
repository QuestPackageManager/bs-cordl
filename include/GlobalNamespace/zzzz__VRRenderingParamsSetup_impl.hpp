#pragma once
// IWYU pragma private; include "GlobalNamespace\VRRenderingParamsSetup.hpp"
#include "GlobalNamespace/zzzz__SceneType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IRenderingParamsApplicator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5901f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRRenderingParamsSetup*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5902004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRRenderingParamsSetup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SceneType& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneType;
}
constexpr ::GlobalNamespace::SceneType const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneType;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__sceneType(::GlobalNamespace::SceneType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneType = value;
}
constexpr ::GlobalNamespace::IRenderingParamsApplicator*& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__applicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicator;
}
constexpr ::GlobalNamespace::IRenderingParamsApplicator* const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__applicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicator;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__applicator(::GlobalNamespace::IRenderingParamsApplicator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applicator = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::VRRenderingParamsSetup::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
inline void GlobalNamespace::VRRenderingParamsSetup::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRRenderingParamsSetup*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRenderingParamsSetup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRRenderingParamsSetup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRenderingParamsSetup* GlobalNamespace::VRRenderingParamsSetup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRenderingParamsSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRenderingParamsSetup::VRRenderingParamsSetup() {}
