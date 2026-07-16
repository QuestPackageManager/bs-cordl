#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineArrayReference.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "TMPro/zzzz__TextMeshPro_impl.hpp"
#include "UnityEngine/zzzz__CanvasGroup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes::TimelineArrayReference_ArrayTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes::TimelineArrayReference_ArrayTypes() {}
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes GlobalNamespace::TimelineArrayReference_ArrayTypes::TubeLight{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes GlobalNamespace::TimelineArrayReference_ArrayTypes::Transform{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes GlobalNamespace::TimelineArrayReference_ArrayTypes::Canvas{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes GlobalNamespace::TimelineArrayReference_ArrayTypes::TextMeshPro{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes GlobalNamespace::TimelineArrayReference_ArrayTypes::DirectionalLight{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::TimelineArrayReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelineArrayReference::*)()>(&::GlobalNamespace::TimelineArrayReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5908acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelineArrayReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes& GlobalNamespace::TimelineArrayReference::__cordl_internal_get_arrayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr ::GlobalNamespace::TimelineArrayReference_ArrayTypes const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get_arrayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set_arrayType(::GlobalNamespace::TimelineArrayReference_ArrayTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayType = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tubeLightArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLightArray;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tubeLightArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLightArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__tubeLightArray(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeLightArray = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__canvasGroupArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__canvasGroupArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__canvasGroupArray(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroupArray = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tmproArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmproArray;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tmproArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmproArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__tmproArray(::ArrayW<::UnityW<::TMPro::TextMeshPro>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tmproArray = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__transformArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__transformArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__transformArray(::ArrayW<::UnityW<::UnityEngine::Transform>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformArray = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLights = value;
}
inline void GlobalNamespace::TimelineArrayReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelineArrayReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimelineArrayReference* GlobalNamespace::TimelineArrayReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimelineArrayReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineArrayReference::TimelineArrayReference() {}
