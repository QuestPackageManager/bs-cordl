#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "GlobalNamespace/zzzz__SaberBurnMarkArea_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::Start)> {
  constexpr static std::size_t size = 0x9fc;
  constexpr static std::size_t addrs = 0x3b89b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDestroy)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3b8a504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3b8a728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3b8a848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.GetBurnMarkPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SaberBurnMarkArea::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x3b8a968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "GetBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.WorldToCameraBurnMarkPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberBurnMarkArea::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::SaberBurnMarkArea::WorldToCameraBurnMarkPos)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3b8ac98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "WorldToCameraBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::LateUpdate)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x3b8ad54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3b8b3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__saberBurnMarkLinePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBurnMarkLinePrefab;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__saberBurnMarkLinePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBurnMarkLinePrefab;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__saberBurnMarkLinePrefab(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberBurnMarkLinePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__blackMarkLineRandomOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackMarkLineRandomOffset;
}
constexpr float_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__blackMarkLineRandomOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackMarkLineRandomOffset;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__blackMarkLineRandomOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blackMarkLineRandomOffset = value;
}
constexpr int32_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__textureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureWidth;
}
constexpr int32_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__textureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureWidth;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__textureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureWidth = value;
}
constexpr int32_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__textureHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureHeight;
}
constexpr int32_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__textureHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureHeight;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__textureHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureHeight = value;
}
constexpr float_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__burnMarksFadeOutStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksFadeOutStrength;
}
constexpr float_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__burnMarksFadeOutStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarksFadeOutStrength;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__burnMarksFadeOutStrength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnMarksFadeOutStrength = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutShader;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__fadeOutShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeOutShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__disableBlitTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableBlitTimer;
}
constexpr float_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__disableBlitTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableBlitTimer;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__disableBlitTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableBlitTimer = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutStrengthShaderPropertyID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStrengthShaderPropertyID;
}
constexpr int32_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutStrengthShaderPropertyID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStrengthShaderPropertyID;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__fadeOutStrengthShaderPropertyID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutStrengthShaderPropertyID = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__sabers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__sabers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>, ::Array<::UnityW<::GlobalNamespace::Saber>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sabers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Plane& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__plane() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____plane;
}
constexpr ::UnityEngine::Plane const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__plane() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____plane;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__plane(::UnityEngine::Plane value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____plane = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevBurnMarkPos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPosValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPosValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevBurnMarkPosValid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__lineRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__lineRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>, ::Array<::UnityW<::UnityEngine::LineRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lineRenderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__linePoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__linePoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linePoints;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linePoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__renderTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ParticleSystem_EmitParams& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__emitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__emitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__emitParams(::UnityEngine::ParticleSystem_EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitParams = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__fadeOutMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutMaterial;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__fadeOutMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeOutMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Random*& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SaberBurnMarkArea::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos(::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ::ByRef<::UnityEngine::Vector3> burnMarkPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "GetBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bladeBottomPos, bladeTopPos, burnMarkPos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SaberBurnMarkArea::WorldToCameraBurnMarkPos(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "WorldToCameraBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, pos);
}
inline void GlobalNamespace::SaberBurnMarkArea::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberBurnMarkArea* GlobalNamespace::SaberBurnMarkArea::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberBurnMarkArea*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberBurnMarkArea::SaberBurnMarkArea() {}
