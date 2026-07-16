#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkSparkles.hpp"
#include "GlobalNamespace/zzzz__Saber_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberBurnMarkSparkles_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::Start)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5985768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5985b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::OnEnable)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5985c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5985e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.GetBurnMarkPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SaberBurnMarkSparkles::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::SaberBurnMarkSparkles::GetBurnMarkPos)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5985f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(),
                            { "GetBurnMarkPos", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::LateUpdate)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x59863d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkSparkles._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkSparkles::*)()>(&::GlobalNamespace::SaberBurnMarkSparkles::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5986824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get_kRenderOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kRenderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get_kRenderOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kRenderOffset;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set_kRenderOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kRenderOffset = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sparklesPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sparklesPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__sparklesPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPS = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksPSPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksPSPrefab;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksPSPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksPSPrefab;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__burnMarksPSPrefab(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnMarksPSPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__collider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__collider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collider;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____collider = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sabers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sabers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabers = value;
}
constexpr ::UnityEngine::Plane& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__plane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____plane;
}
constexpr ::UnityEngine::Plane const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__plane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____plane;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__plane(::UnityEngine::Plane value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____plane = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__prevBurnMarkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__prevBurnMarkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevBurnMarkPos = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__prevBurnMarkPosValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__prevBurnMarkPosValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevBurnMarkPosValid = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksPS;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksPS;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__burnMarksPS(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnMarksPS = value;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule>& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksEmissionModules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksEmissionModules;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__burnMarksEmissionModules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksEmissionModules;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__burnMarksEmissionModules(::ArrayW<::UnityEngine::ParticleSystem_EmissionModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnMarksEmissionModules = value;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sparklesEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesEmitParams;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams const& GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_get__sparklesEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesEmitParams;
}
constexpr void GlobalNamespace::SaberBurnMarkSparkles::__cordl_internal_set__sparklesEmitParams(::UnityEngine::ParticleSystem_EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesEmitParams = value;
}
inline void GlobalNamespace::SaberBurnMarkSparkles::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkSparkles::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkSparkles::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkSparkles::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SaberBurnMarkSparkles::GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ::by_ref<::UnityEngine::Vector3> burnMarkPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(),
                          { "GetBurnMarkPos", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bladeBottomPos, bladeTopPos, burnMarkPos);
}
inline void GlobalNamespace::SaberBurnMarkSparkles::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkSparkles::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkSparkles*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberBurnMarkSparkles* GlobalNamespace::SaberBurnMarkSparkles::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberBurnMarkSparkles*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberBurnMarkSparkles::SaberBurnMarkSparkles() {}
