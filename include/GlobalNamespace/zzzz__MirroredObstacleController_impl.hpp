#pragma once
// IWYU pragma private; include "GlobalNamespace\MirroredObstacleController.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__StretchableObstacle_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController_Pool::*)()>(&::GlobalNamespace::MirroredObstacleController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d9c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MirroredObstacleController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredObstacleController_Pool* GlobalNamespace::MirroredObstacleController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredObstacleController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredObstacleController_Pool::MirroredObstacleController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.set_hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)(bool)>(&::GlobalNamespace::MirroredObstacleController::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ccc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58d9690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d96ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x58d9784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.RemoveListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::RemoveListeners)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58d96b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "RemoveListeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.UpdatePositionAndRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::UpdatePositionAndRotation)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58d9898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "UpdatePositionAndRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MirroredObstacleController::Mirror)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x58cc170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Mirror", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController.HandleDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)(::GlobalNamespace::ObstacleControllerBase*, float_t)>(
    &::GlobalNamespace::MirroredObstacleController::HandleDidStartDissolving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d9bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(),
                                                             { "HandleDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredObstacleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredObstacleController::*)()>(&::GlobalNamespace::MirroredObstacleController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d9c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StretchableObstacle>& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__stretchableObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stretchableObstacle;
}
constexpr ::UnityW<::GlobalNamespace::StretchableObstacle> const& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__stretchableObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stretchableObstacle;
}
constexpr void GlobalNamespace::MirroredObstacleController::__cordl_internal_set__stretchableObstacle(::UnityW<::GlobalNamespace::StretchableObstacle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stretchableObstacle = value;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController>& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__followedObstacle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedObstacle;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__followedObstacle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedObstacle;
}
constexpr void GlobalNamespace::MirroredObstacleController::__cordl_internal_set__followedObstacle(::UnityW<::GlobalNamespace::ObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followedObstacle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::MirroredObstacleController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__followedTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredObstacleController::__cordl_internal_get__followedTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedTransform;
}
constexpr void GlobalNamespace::MirroredObstacleController::__cordl_internal_set__followedTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____followedTransform = value;
}
inline void GlobalNamespace::MirroredObstacleController::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MirroredObstacleController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredObstacleController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredObstacleController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredObstacleController::RemoveListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "RemoveListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredObstacleController::UpdatePositionAndRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "UpdatePositionAndRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredObstacleController::Mirror(::GlobalNamespace::ObstacleController* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { "Mirror", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MirroredObstacleController::HandleDidStartDissolving(::GlobalNamespace::ObstacleControllerBase* obstacleController, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(),
                                                           { "HandleDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleControllerBase*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController, duration);
}
inline void GlobalNamespace::MirroredObstacleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredObstacleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredObstacleController* GlobalNamespace::MirroredObstacleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredObstacleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredObstacleController::MirroredObstacleController() {}
