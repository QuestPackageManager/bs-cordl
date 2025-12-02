#pragma once
// IWYU pragma private; include "GlobalNamespace/PyramidBloomRendererSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass::PyramidBloomRendererSO_Pass(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass::PyramidBloomRendererSO_Pass() {}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Prefilter13{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Prefilter4{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Downsample13{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Downsample4{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::DownsampleBilinearGamma{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTent{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleBox{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentGamma{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleBoxGamma{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Bilinear{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::BilinearGamma{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndReinhardToneMapping{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndACESToneMapping{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndACESToneMappingGlobalIntensity{ static_cast<int32_t>(0xd) };
// Ctor Parameters [CppParam { name: "down", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "up", ty: "::UnityW<::UnityEngine::RenderTexture>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Level::PyramidBloomRendererSO_Level(::UnityW<::UnityEngine::RenderTexture> down, ::UnityW<::UnityEngine::RenderTexture> up) noexcept {
  this->down = down;
  this->up = up;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Level::PyramidBloomRendererSO_Level() {}
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x564a7f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x564a910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float_t, bool, bool, bool, bool)>(&::GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x564a934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "RenderBloom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, float_t, float_t, float_t, float_t, bool, bool, float_t, float_t, float_t, float_t, ::GlobalNamespace::PyramidBloomRendererSO_Pass,
    ::GlobalNamespace::PyramidBloomRendererSO_Pass, ::GlobalNamespace::PyramidBloomRendererSO_Pass, ::GlobalNamespace::PyramidBloomRendererSO_Pass, bool, bool)>(
    &::GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x564a9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "RenderBloom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 18>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x564b244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*>&
GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__pyramid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramid;
}
constexpr ::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*> const&
GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__pyramid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramid;
}
constexpr void
GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__pyramid(::ArrayW<::GlobalNamespace::PyramidBloomRendererSO_Level, ::Array<::GlobalNamespace::PyramidBloomRendererSO_Level>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pyramid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kIsScreenspaceEffectKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kIsScreenspaceEffectKeyword;
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kIsScreenspaceEffectKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kIsScreenspaceEffectKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set_kIsScreenspaceEffectKeyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kIsScreenspaceEffectKeyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kLegacyAutoExposureKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLegacyAutoExposureKeyword;
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kLegacyAutoExposureKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLegacyAutoExposureKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set_kLegacyAutoExposureKeyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kLegacyAutoExposureKeyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::GlobalKeyword& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__legacyAutoExposureGlobalKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureGlobalKeyword;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__legacyAutoExposureGlobalKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureGlobalKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__legacyAutoExposureGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____legacyAutoExposureGlobalKeyword = value;
}
constexpr bool& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__bloomTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__bloomTexID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__globalIntensityTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__globalIntensityTex() {
  return ::cordl_internals::getStaticField<int32_t, "_globalIntensityTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__autoExposureLimitID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__autoExposureLimitID() {
  return ::cordl_internals::getStaticField<int32_t, "_autoExposureLimitID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__sampleScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__sampleScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "_sampleScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__combineSrcID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__combineSrcID() {
  return ::cordl_internals::getStaticField<int32_t, "_combineSrcID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__combineDstID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__combineDstID() {
  return ::cordl_internals::getStaticField<int32_t, "_combineDstID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__alphaWeightsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__alphaWeightsID() {
  return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, bool alphaWeights, bool betterQuality,
                                                                 bool gammaCorrection, bool legacyAutoExposure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "RenderBloom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, radius, alphaWeights, betterQuality, gammaCorrection, legacyAutoExposure);
}
inline void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, float_t radius, float_t intensity, float_t autoExposureLimit,
                                                                 float_t downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights,
                                                                 float_t firstUpsampleBrightness, float_t finalUpsampleBrightness, ::GlobalNamespace::PyramidBloomRendererSO_Pass preFilterPass,
                                                                 ::GlobalNamespace::PyramidBloomRendererSO_Pass downsamplePass, ::GlobalNamespace::PyramidBloomRendererSO_Pass upsamplePass,
                                                                 ::GlobalNamespace::PyramidBloomRendererSO_Pass finalUpsamplePass, bool legacyAutoExposure, bool isScreenspaceEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), "RenderBloom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 18>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PyramidBloomRendererSO_Pass>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, radius, intensity, autoExposureLimit, downIntensityOffset, uniformPyramidWeights, downsampleOnFirstPass,
                                                          pyramidWeightsParam, alphaWeights, firstUpsampleBrightness, finalUpsampleBrightness, preFilterPass, downsamplePass, upsamplePass,
                                                          finalUpsamplePass, legacyAutoExposure, isScreenspaceEffect);
}
inline void GlobalNamespace::PyramidBloomRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PyramidBloomRendererSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PyramidBloomRendererSO* GlobalNamespace::PyramidBloomRendererSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PyramidBloomRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO::PyramidBloomRendererSO() {}
