#pragma once
// IWYU pragma private; include "GlobalNamespace\TrackLaneRingsManager.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRing_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRing_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.get_ringPositionStep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a8540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "get_ringPositionStep", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.get_Rings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>> (::GlobalNamespace::TrackLaneRingsManager::*)()>(
    &::GlobalNamespace::TrackLaneRingsManager::get_Rings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a8548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "get_Rings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::Start)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x59a8550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x59a8814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::LateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59a887c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x59a8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackLaneRingsManager::*)()>(&::GlobalNamespace::TrackLaneRingsManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59a8b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackLaneRing>& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__trackLaneRingPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingPrefab;
}
constexpr ::UnityW<::GlobalNamespace::TrackLaneRing> const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__trackLaneRingPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackLaneRingPrefab;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__trackLaneRingPrefab(::UnityW<::GlobalNamespace::TrackLaneRing> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackLaneRingPrefab = value;
}
constexpr int32_t& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__ringCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringCount;
}
constexpr int32_t const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__ringCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringCount;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__ringCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ringCount = value;
}
constexpr float_t& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__ringPositionStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringPositionStep;
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__ringPositionStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringPositionStep;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__ringPositionStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ringPositionStep = value;
}
constexpr bool& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__spawnAsChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAsChildren;
}
constexpr bool const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__spawnAsChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAsChildren;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__spawnAsChildren(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnAsChildren = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__environmentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__environmentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentContext = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>>& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__rings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rings;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>> const& GlobalNamespace::TrackLaneRingsManager::__cordl_internal_get__rings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rings;
}
constexpr void GlobalNamespace::TrackLaneRingsManager::__cordl_internal_set__rings(::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rings = value;
}
inline float_t GlobalNamespace::TrackLaneRingsManager::get_ringPositionStep() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "get_ringPositionStep", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>> GlobalNamespace::TrackLaneRingsManager::get_Rings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "get_Rings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TrackLaneRing>>>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsManager::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TrackLaneRingsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrackLaneRingsManager* GlobalNamespace::TrackLaneRingsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrackLaneRingsManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackLaneRingsManager::TrackLaneRingsManager() {}
