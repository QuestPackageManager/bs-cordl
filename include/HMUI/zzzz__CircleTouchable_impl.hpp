#pragma once
// IWYU pragma private; include "HMUI/CircleTouchable.hpp"
#include "HMUI/zzzz__Touchable_impl.hpp"
#include "HMUI/zzzz__CircleTouchable_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::HMUI::CircleTouchable.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5882a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { ::i2c::class_of<::HMUI::CircleTouchable*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.UpdateCachedReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::UpdateCachedReferences)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5882a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { "UpdateCachedReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::CircleTouchable::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&::HMUI::CircleTouchable::Raycast)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5882aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { ::i2c::class_of<::HMUI::CircleTouchable*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5882bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { "OnDrawGizmosSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable.DrawGizmoCircle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CircleTouchable::*)(::UnityEngine::Vector3, float_t, int32_t)>(&::HMUI::CircleTouchable::DrawGizmoCircle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5882cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(),
                                                             { "DrawGizmoCircle", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CircleTouchable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CircleTouchable::*)()>(&::HMUI::CircleTouchable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5882dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::CircleTouchable::__cordl_internal_get__minRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minRadius;
}
constexpr float_t const& HMUI::CircleTouchable::__cordl_internal_get__minRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minRadius;
}
constexpr void HMUI::CircleTouchable::__cordl_internal_set__minRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minRadius = value;
}
constexpr float_t& HMUI::CircleTouchable::__cordl_internal_get__maxRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRadius;
}
constexpr float_t const& HMUI::CircleTouchable::__cordl_internal_get__maxRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRadius;
}
constexpr void HMUI::CircleTouchable::__cordl_internal_set__maxRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxRadius = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::CircleTouchable::__cordl_internal_get__containerRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::CircleTouchable::__cordl_internal_get__containerRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerRect;
}
constexpr void HMUI::CircleTouchable::__cordl_internal_set__containerRect(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerRect = value;
}
inline void HMUI::CircleTouchable::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CircleTouchable*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CircleTouchable::UpdateCachedReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { "UpdateCachedReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::CircleTouchable::Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CircleTouchable*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sp, eventCamera);
}
inline void HMUI::CircleTouchable::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { "OnDrawGizmosSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::CircleTouchable::DrawGizmoCircle(::UnityEngine::Vector3 center, float_t radius, int32_t steps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { "DrawGizmoCircle", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius, steps);
}
inline void HMUI::CircleTouchable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CircleTouchable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::CircleTouchable* HMUI::CircleTouchable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::CircleTouchable*>());
}
// Ctor Parameters []
constexpr ::HMUI::CircleTouchable::CircleTouchable() {}
