#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleMaterialSetter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleMaterialSetter_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::BeatSaber::Settings::QualitySettings_ObstacleQuality, bool)>(
    &::GlobalNamespace::ObstacleMaterialSetter::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3aff890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetCoreMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(
    ::UnityEngine::Renderer*, ::BeatSaber::Settings::QualitySettings_ObstacleQuality, bool)>(&::GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3b0034c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetCoreMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetFakeGlowMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(
    ::UnityEngine::Renderer*, ::BeatSaber::Settings::QualitySettings_ObstacleQuality)>(&::GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b00448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetFakeGlowMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b00488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__lwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__lwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__lwCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lwCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__hwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__hwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__hwCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hwCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__texturedCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__texturedCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__texturedCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texturedCoreMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowLWMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowLWMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__fakeGlowLWMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fakeGlowLWMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowTexturedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowTexturedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__fakeGlowTexturedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fakeGlowTexturedMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleCoreRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleCoreRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__obstacleCoreRenderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleCoreRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleFakeGlowRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleFakeGlowRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__obstacleFakeGlowRenderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleFakeGlowRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ObstacleMaterialSetter::Init(::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality, bool screenDisplacementEffects) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleQuality, screenDisplacementEffects);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality,
                                                                     bool screenDisplacementEffects) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetCoreMaterial", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, obstacleQuality, screenDisplacementEffects);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), "SetFakeGlowMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::QualitySettings_ObstacleQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, obstacleQuality);
}
inline void GlobalNamespace::ObstacleMaterialSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleMaterialSetter* GlobalNamespace::ObstacleMaterialSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObstacleMaterialSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleMaterialSetter::ObstacleMaterialSetter() {}
