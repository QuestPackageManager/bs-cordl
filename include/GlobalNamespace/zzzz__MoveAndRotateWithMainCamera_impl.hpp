#pragma once
// IWYU pragma private; include "GlobalNamespace\MoveAndRotateWithMainCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MoveAndRotateWithMainCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58e6eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::OnDestroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58e6fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.OnPreCullCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::MoveAndRotateWithMainCamera::OnPreCullCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e7084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(),
                                                { "OnPreCullCallback", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e7210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainCamera>& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::UnityW<::GlobalNamespace::MainCamera> const& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainCamera = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::OnPreCullCallback(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* currentCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(),
                                              { "OnPreCullCallback", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, currentCamera);
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MoveAndRotateWithMainCamera*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveAndRotateWithMainCamera* GlobalNamespace::MoveAndRotateWithMainCamera::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MoveAndRotateWithMainCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveAndRotateWithMainCamera::MoveAndRotateWithMainCamera() {}
