#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberBurnMarkArea.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberBurnMarkArea_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)(
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::SaberManager*, ::GlobalNamespace::ColorManager*)>(&::GlobalNamespace::SaberBurnMarkArea::Initialize)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x57d7a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDestroy)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x57d81d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnEnable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57d83f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57d84d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::LateUpdate)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x57d85ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea.GetBurnMarkPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Transform*, ::ByRef<::UnityEngine::Bounds>, ::ByRef<::UnityEngine::Plane>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ByRef<::UnityEngine::Vector3>)>(
        &::GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x57d8e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "GetBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberBurnMarkArea._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberBurnMarkArea::*)()>(&::GlobalNamespace::SaberBurnMarkArea::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x57d91a0;

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
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get_kBufferNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kBufferNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get_kBufferNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kBufferNames;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set_kBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kBufferNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*, ::Array<::UnityEngine::Rendering::CommandBuffer*>*>& GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__commandBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*, ::Array<::UnityEngine::Rendering::CommandBuffer*>*> const&
GlobalNamespace::SaberBurnMarkArea::__cordl_internal_get__commandBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffers;
}
constexpr void GlobalNamespace::SaberBurnMarkArea::__cordl_internal_set__commandBuffers(::ArrayW<::UnityEngine::Rendering::CommandBuffer*, ::Array<::UnityEngine::Rendering::CommandBuffer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<int32_t, "_fadeOutStrengthShaderPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::SaberBurnMarkArea::getStaticF__fadeOutStrengthShaderPropertyID() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeOutStrengthShaderPropertyID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get>();
}
inline void GlobalNamespace::SaberBurnMarkArea::Initialize(::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::SaberManager* saberManager,
                                                           ::GlobalNamespace::ColorManager* colorManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsManager, saberManager, colorManager);
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
inline void GlobalNamespace::SaberBurnMarkArea::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SaberBurnMarkArea::GetBurnMarkPos(::UnityEngine::Transform* transform, ::ByRef<::UnityEngine::Bounds> bounds, ::ByRef<::UnityEngine::Plane> plane,
                                                               ::UnityEngine::Vector3 bladeBottomPos, ::UnityEngine::Vector3 bladeTopPos, ::ByRef<::UnityEngine::Vector3> burnMarkPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberBurnMarkArea*>::get(), "GetBurnMarkPos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bounds>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, bounds, plane, bladeBottomPos, bladeTopPos, burnMarkPos);
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
