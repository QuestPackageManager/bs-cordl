#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleDissolve.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleDissolve_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleDissolve.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleDissolve::*)()>(&::GlobalNamespace::ObstacleDissolve::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58dad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleDissolve.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleDissolve::*)()>(&::GlobalNamespace::ObstacleDissolve::OnDestroy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58dae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleDissolve.HandleObstacleDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleDissolve::*)(::GlobalNamespace::ObstacleControllerBase*)>(
    &::GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58daf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(),
                                                                                           { "HandleObstacleDidInitEvent", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleDissolve.HandleObcstacleDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleDissolve::*)(::GlobalNamespace::ObstacleControllerBase*, float_t)>(
    &::GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58daf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(),
                                                { "HandleObcstacleDidStartDissolvingEvent", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleDissolve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleDissolve::*)()>(&::GlobalNamespace::ObstacleDissolve::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58daf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ObstacleControllerBase>& GlobalNamespace::ObstacleDissolve::__cordl_internal_get__obstacleController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleControllerBase> const& GlobalNamespace::ObstacleDissolve::__cordl_internal_get__obstacleController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr void GlobalNamespace::ObstacleDissolve::__cordl_internal_set__obstacleController(::UnityW<::GlobalNamespace::ObstacleControllerBase> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleController = value;
}
constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& GlobalNamespace::ObstacleDissolve::__cordl_internal_get__cutoutAnimateEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& GlobalNamespace::ObstacleDissolve::__cordl_internal_get__cutoutAnimateEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr void GlobalNamespace::ObstacleDissolve::__cordl_internal_set__cutoutAnimateEffect(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutoutAnimateEffect = value;
}
inline void GlobalNamespace::ObstacleDissolve::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleDissolve::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(),
                                                                                         { "HandleObstacleDidInitEvent", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(),
                                              { "HandleObcstacleDidStartDissolvingEvent", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController, duration);
}
inline void GlobalNamespace::ObstacleDissolve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleDissolve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleDissolve* GlobalNamespace::ObstacleDissolve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleDissolve*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleDissolve::ObstacleDissolve() {}
