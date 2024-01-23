#pragma once
#include "GlobalNamespace/zzzz__TimelineArrayReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes::__TimelineArrayReference__ArrayTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes::__TimelineArrayReference__ArrayTypes() {}
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes GlobalNamespace::__TimelineArrayReference__ArrayTypes::TubeLight{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes GlobalNamespace::__TimelineArrayReference__ArrayTypes::Transform{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes GlobalNamespace::__TimelineArrayReference__ArrayTypes::Canvas{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes GlobalNamespace::__TimelineArrayReference__ArrayTypes::TextMeshPro{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes GlobalNamespace::__TimelineArrayReference__ArrayTypes::DirectionalLight{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::TimelineArrayReference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelineArrayReference::*)()>(&::GlobalNamespace::TimelineArrayReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineArrayReference*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes& GlobalNamespace::TimelineArrayReference::__cordl_internal_get_arrayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get_arrayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayType;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set_arrayType(::GlobalNamespace::__TimelineArrayReference__ArrayTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayType = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>&
GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tubeLightArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLightArray;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const&
GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tubeLightArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLightArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__tubeLightArray(
    ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeLightArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__canvasGroupArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const&
GlobalNamespace::TimelineArrayReference::__cordl_internal_get__canvasGroupArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroupArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__canvasGroupArray(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroupArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tmproArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmproArray;
}
constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__tmproArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tmproArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__tmproArray(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmproArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__transformArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& GlobalNamespace::TimelineArrayReference::__cordl_internal_get__transformArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformArray;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__transformArray(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>&
GlobalNamespace::TimelineArrayReference::__cordl_internal_get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const&
GlobalNamespace::TimelineArrayReference::__cordl_internal_get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr void GlobalNamespace::TimelineArrayReference::__cordl_internal_set__directionalLights(
    ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::TimelineArrayReference* GlobalNamespace::TimelineArrayReference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TimelineArrayReference*>());
}
inline void GlobalNamespace::TimelineArrayReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineArrayReference*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineArrayReference::TimelineArrayReference() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
