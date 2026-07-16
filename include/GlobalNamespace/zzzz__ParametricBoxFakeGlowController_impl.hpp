#pragma once
// IWYU pragma private; include "GlobalNamespace/ParametricBoxFakeGlowController.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFakeGlowController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController.set_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::ParametricBoxFakeGlowController::set_localPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5869a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&::GlobalNamespace::ParametricBoxFakeGlowController::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5869ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&::GlobalNamespace::ParametricBoxFakeGlowController::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5869af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&::GlobalNamespace::ParametricBoxFakeGlowController::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5869c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&::GlobalNamespace::ParametricBoxFakeGlowController::Refresh)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5869b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFakeGlowController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFakeGlowController::*)()>(&::GlobalNamespace::ParametricBoxFakeGlowController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5869c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSize;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSize;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeSize = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_edgeSizeMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSizeMultiplier;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_edgeSizeMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSizeMultiplier;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_edgeSizeMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeSizeMultiplier = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::ParametricBoxFakeGlowController::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::setStaticF__colorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorID", ::GlobalNamespace::ParametricBoxFakeGlowController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ParametricBoxFakeGlowController::getStaticF__colorID() {
  return ::cordl_internals::getStaticField<int32_t, "_colorID", ::GlobalNamespace::ParametricBoxFakeGlowController*>();
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::setStaticF__sizeParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sizeParamsID", ::GlobalNamespace::ParametricBoxFakeGlowController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ParametricBoxFakeGlowController::getStaticF__sizeParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_sizeParamsID", ::GlobalNamespace::ParametricBoxFakeGlowController*>();
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::set_localPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFakeGlowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFakeGlowController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParametricBoxFakeGlowController* GlobalNamespace::ParametricBoxFakeGlowController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParametricBoxFakeGlowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParametricBoxFakeGlowController::ParametricBoxFakeGlowController() {}
