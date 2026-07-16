#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRayHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRayHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInputRayData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)()>(&::GlobalNamespace::OVRRayHelper::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f09960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper.UpdatePointerRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)(::GlobalNamespace::OVRInputRayData)>(&::GlobalNamespace::OVRRayHelper::UpdatePointerRay)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5f09a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { "UpdatePointerRay", {}, { ::i2c::type_of<::GlobalNamespace::OVRInputRayData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)()>(&::GlobalNamespace::OVRRayHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f09d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_Renderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Renderer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_NormalMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_NormalMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalMaterial;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_NormalMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NormalMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_PinchMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PinchMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_PinchMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PinchMaterial;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_PinchMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PinchMaterial = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Cursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cursor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Cursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cursor;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_Cursor(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Cursor = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_CursorFill() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CursorFill;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_CursorFill() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CursorFill;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_CursorFill(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CursorFill = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRRayHelper::__cordl_internal_get__initialScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRRayHelper::__cordl_internal_get__initialScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialScale;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set__initialScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialScale = value;
}
constexpr float_t& GlobalNamespace::OVRRayHelper::__cordl_internal_get_DefaultLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultLength;
}
constexpr float_t const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_DefaultLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultLength;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_DefaultLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DefaultLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRRayHelper::__cordl_internal_get__cursorIntitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIntitialSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRRayHelper::__cordl_internal_get__cursorIntitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIntitialSize;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set__cursorIntitialSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorIntitialSize = value;
}
inline void GlobalNamespace::OVRRayHelper::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRayHelper::UpdatePointerRay(::GlobalNamespace::OVRInputRayData rayData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { "UpdatePointerRay", {}, { ::i2c::type_of<::GlobalNamespace::OVRInputRayData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayData);
}
inline void GlobalNamespace::OVRRayHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRRayHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRayHelper* GlobalNamespace::OVRRayHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRRayHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRayHelper::OVRRayHelper() {}
