#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleScaleUp.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleScaleUp_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58db0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58db2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.UpdateScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(float_t)>(&::GlobalNamespace::ObstacleScaleUp::UpdateScale)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58db184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "UpdateScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.HandleObstacleControllerDidUpdateProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(::GlobalNamespace::ObstacleController*, float_t)>(
    &::GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58db3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(),
                                                { "HandleObstacleControllerDidUpdateProgress", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.HandleObstacleControllerDidInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(::GlobalNamespace::ObstacleControllerBase*)>(
    &::GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58db528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "HandleObstacleControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58db5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__fullScalePart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScalePart;
}
constexpr float_t const& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__fullScalePart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScalePart;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__cordl_internal_set__fullScalePart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullScalePart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__targetTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__targetTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__cordl_internal_set__targetTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__obstacleController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__obstacleController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__cordl_internal_set__obstacleController(::UnityW<::GlobalNamespace::ObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleController = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::ObstacleScaleUp::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
inline void GlobalNamespace::ObstacleScaleUp::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleScaleUp::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleScaleUp::UpdateScale(float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { "UpdateScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline void GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress(::GlobalNamespace::ObstacleController* obstacleController, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(),
                                              { "HandleObstacleControllerDidUpdateProgress", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController, time);
}
inline void GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit(::GlobalNamespace::ObstacleControllerBase* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(),
                                                                                         { "HandleObstacleControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::ObstacleScaleUp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleScaleUp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleScaleUp* GlobalNamespace::ObstacleScaleUp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleScaleUp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleScaleUp::ObstacleScaleUp() {}
