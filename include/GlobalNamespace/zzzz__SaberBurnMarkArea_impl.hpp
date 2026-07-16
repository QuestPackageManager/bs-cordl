#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "GlobalNamespace/zzzz__Saber_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__LineRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberBurnMarkArea_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)(::GlobalNamespace::SettingsManager*, ::GlobalNamespace::SaberManager*,
                                                                                                      ::GlobalNamespace::ColorManager*)>(&::GlobalNamespace::SaberBurnMarkArea::Initialize)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x5983d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(),
            { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::SaberManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDestroy)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x59844fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnEnable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x598471c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59847f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::LateUpdate)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0x59848d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.GetBurnMarkPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Plane>, ::UnityEngine::Vector3,
                                                                ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x59851a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(),
                                                { "GetBurnMarkPos",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Plane>>(),
                                                    ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x59854cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { ".ctor", {}, {} })));
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
  this->____saberBurnMarkLinePrefab = value;
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
  this->____fadeOutShader = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get_kBufferNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kBufferNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get_kBufferNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kBufferNames;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set_kBufferNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kBufferNames = value;
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
  this->____random = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__bounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bounds = value;
}
constexpr float_t& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__aspect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aspect;
}
constexpr float_t const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__aspect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____aspect;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__aspect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____aspect = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderMaterial;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__renderMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderMaterial = value;
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
  this->____fadeOutMaterial = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__linePoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__linePoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linePoints;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linePoints = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__sabers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__sabers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__lineRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__lineRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineRenderers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__lineRenderers(::ArrayW<::UnityW<::UnityEngine::LineRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineRenderers = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPos;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__prevBurnMarkPos(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevBurnMarkPos = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPosValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__prevBurnMarkPosValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevBurnMarkPosValid;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__prevBurnMarkPosValid(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevBurnMarkPosValid = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__renderTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTextures;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__renderTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderTextures = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__commandBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__commandBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__commandBuffers(::ArrayW<::UnityEngine::Rendering::CommandBuffer*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandBuffers = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__currentCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__currentCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentCommandBuffer;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__currentCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentCommandBuffer = value;
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
inline void GlobalNamespace::SaberBurnMarkArea::setStaticF__fadeOutStrengthShaderPropertyID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_fadeOutStrengthShaderPropertyID", ::GlobalNamespace::SaberBurnMarkArea*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SaberBurnMarkArea::getStaticF__fadeOutStrengthShaderPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeOutStrengthShaderPropertyID", ::GlobalNamespace::SaberBurnMarkArea*>();
}
inline void GlobalNamespace::SaberBurnMarkArea::Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::SaberManager* saberManager,
                                                           ::GlobalNamespace::ColorManager* colorManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(),
          { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::SaberManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsManager, saberManager, colorManager);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberBurnMarkArea::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos(::UnityEngine::Transform* transform, ::by_ref<::UnityEngine::Bounds> bounds, ::by_ref<::UnityEngine::Plane> plane,
                                                               ::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ::by_ref<::UnityEngine::Vector3> burnMarkPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(),
                                              { "GetBurnMarkPos",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::by_ref<::UnityEngine::Plane>>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, bounds, plane, bladeBottomPos, bladeTopPos, burnMarkPos);
}
inline void GlobalNamespace::SaberBurnMarkArea::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberBurnMarkArea*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberBurnMarkArea* GlobalNamespace::SaberBurnMarkArea::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberBurnMarkArea*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberBurnMarkArea::SaberBurnMarkArea() {}
