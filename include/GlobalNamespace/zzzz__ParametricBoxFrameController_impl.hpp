#pragma once
// IWYU pragma private; include "GlobalNamespace\ParametricBoxFrameController.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFrameController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.get_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ParametricBoxFrameController::*)()>(
    &::GlobalNamespace::ParametricBoxFrameController::get_localPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5867174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "get_localPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.set_localPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::ParametricBoxFrameController::set_localPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5867194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)()>(&::GlobalNamespace::ParametricBoxFrameController::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58671dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)()>(&::GlobalNamespace::ParametricBoxFrameController::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58671f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)()>(&::GlobalNamespace::ParametricBoxFrameController::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5867330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)()>(&::GlobalNamespace::ParametricBoxFrameController::Refresh)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5867220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParametricBoxFrameController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParametricBoxFrameController::*)()>(&::GlobalNamespace::ParametricBoxFrameController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x586734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set_width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___length;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set_length(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___length = value;
}
constexpr float_t& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSize;
}
constexpr float_t const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeSize;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set_edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeSize = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::ParametricBoxFrameController::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::ParametricBoxFrameController::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
inline void GlobalNamespace::ParametricBoxFrameController::setStaticF__colorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorID", ::GlobalNamespace::ParametricBoxFrameController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ParametricBoxFrameController::getStaticF__colorID() {
  return ::cordl_internals::getStaticField<int32_t, "_colorID", ::GlobalNamespace::ParametricBoxFrameController*>();
}
inline void GlobalNamespace::ParametricBoxFrameController::setStaticF__sizeParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sizeParamsID", ::GlobalNamespace::ParametricBoxFrameController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ParametricBoxFrameController::getStaticF__sizeParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_sizeParamsID", ::GlobalNamespace::ParametricBoxFrameController*>();
}
inline ::UnityEngine::Vector3 GlobalNamespace::ParametricBoxFrameController::get_localPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "get_localPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFrameController::set_localPosition(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "set_localPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ParametricBoxFrameController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFrameController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFrameController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFrameController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParametricBoxFrameController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParametricBoxFrameController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParametricBoxFrameController* GlobalNamespace::ParametricBoxFrameController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParametricBoxFrameController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParametricBoxFrameController::ParametricBoxFrameController() {}
