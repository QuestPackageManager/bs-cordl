#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType::__TubeLightBehaviour__ParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType::__TubeLightBehaviour__ParameterType() {}
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType GlobalNamespace::__TubeLightBehaviour__ParameterType::Values{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType GlobalNamespace::__TubeLightBehaviour__ParameterType::References{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x259b6a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x259baa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)()>(&::GlobalNamespace::TubeLightBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259bb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__noPredefinedStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noPredefinedStartValue;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__noPredefinedStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noPredefinedStartValue;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__noPredefinedStartValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noPredefinedStartValue = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_startColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_endColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_endColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_endColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_blend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blend;
}
constexpr float_t const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_blend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blend;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_blend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blend = value;
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__originalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__originalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__originalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColor = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>&
GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const&
GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__tubeLights(
    ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*>&
GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> const&
GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr void
GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>, ::Array<::UnityW<::GlobalNamespace::DirectionalLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__firstFrameColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstFrameColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__firstFrameColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstFrameColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__firstFrameColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstFrameColor = value;
}
inline void GlobalNamespace::TubeLightBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::GlobalNamespace::TubeLightBehaviour* GlobalNamespace::TubeLightBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TubeLightBehaviour*>());
}
inline void GlobalNamespace::TubeLightBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightBehaviour::TubeLightBehaviour() {}
