#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ColorGradingLutPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6740758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData*& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_postProcessingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* const&
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_postProcessingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessingData;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_postProcessingData(::UnityEngine::Rendering::Universal::UniversalPostProcessingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postProcessingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_lutBuilderLdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderLdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_lutBuilderLdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderLdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_lutBuilderLdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lutBuilderLdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_lutBuilderHdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderHdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_lutBuilderHdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutBuilderHdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_lutBuilderHdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lutBuilderHdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_allowColorGradingACESHDR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowColorGradingACESHDR;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_allowColorGradingACESHDR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowColorGradingACESHDR;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_allowColorGradingACESHDR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowColorGradingACESHDR = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_internalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalLut;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_get_internalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalLut;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::__cordl_internal_set_internalLut(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalLut = value;
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData::ColorGradingLutPass_PassData() {}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ColorBalance(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorBalance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ColorBalance() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorBalance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ColorFilter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorFilter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ColorFilter() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorFilter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ChannelMixerRed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerRed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ChannelMixerRed() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerRed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ChannelMixerGreen(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerGreen",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ChannelMixerGreen() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerGreen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ChannelMixerBlue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ChannelMixerBlue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ChannelMixerBlue() {
  return ::cordl_internals::getStaticField<int32_t, "_ChannelMixerBlue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__HueSatCon(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HueSatCon",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__HueSatCon() {
  return ::cordl_internals::getStaticField<int32_t, "_HueSatCon",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Lift(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lift", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Lift() {
  return ::cordl_internals::getStaticField<int32_t, "_Lift",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Gamma(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Gamma",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Gamma() {
  return ::cordl_internals::getStaticField<int32_t, "_Gamma",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Gain(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Gain", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Gain() {
  return ::cordl_internals::getStaticField<int32_t, "_Gain",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Shadows(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Shadows",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Shadows() {
  return ::cordl_internals::getStaticField<int32_t, "_Shadows",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Midtones(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Midtones",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Midtones() {
  return ::cordl_internals::getStaticField<int32_t, "_Midtones",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__Highlights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Highlights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__Highlights() {
  return ::cordl_internals::getStaticField<int32_t, "_Highlights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__ShaHiLimits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ShaHiLimits",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__ShaHiLimits() {
  return ::cordl_internals::getStaticField<int32_t, "_ShaHiLimits",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__SplitShadows(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SplitShadows",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__SplitShadows() {
  return ::cordl_internals::getStaticField<int32_t, "_SplitShadows",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__SplitHighlights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SplitHighlights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__SplitHighlights() {
  return ::cordl_internals::getStaticField<int32_t, "_SplitHighlights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveMaster(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveMaster",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveMaster() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveMaster",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveRed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveRed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveRed() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveRed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveGreen(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveGreen",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveGreen() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveGreen",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveBlue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveBlue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveBlue() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveBlue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveHueVsHue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveHueVsHue",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveHueVsHue() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveHueVsHue",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveHueVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveHueVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveHueVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveHueVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveLumVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveLumVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveLumVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveLumVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::setStaticF__CurveSatVsSat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CurveSatVsSat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::getStaticF__CurveSatVsSat() {
  return ::cordl_internals::getStaticField<int32_t, "_CurveSatVsSat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants::ColorGradingLutPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67427b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c._Render_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::_Render_b__14_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67427bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get(), "<Render>b__14_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::setStaticF___9__14_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::_Render_b__14_0(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* data,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>::get(), "<Render>b__14_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c::ColorGradingLutPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::PostProcessData*)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6740404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::ByRef<::UnityEngine::Rendering::RTHandle*>)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x674075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.ConfigureDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::PostProcessingData>, ::ByRef<::UnityEngine::RenderTextureDescriptor>, ::ByRef<::UnityEngine::FilterMode>)>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6740768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ConfigureDescriptor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::PostProcessingData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::FilterMode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.ConfigureDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>, ::ByRef<::UnityEngine::RenderTextureDescriptor>, ::ByRef<::UnityEngine::FilterMode>)>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67407bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ConfigureDescriptor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::FilterMode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x674084c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*, ::UnityEngine::Rendering::RTHandle*)>(
        &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ExecutePass)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x6740a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Render)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x6741ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67421dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass.__ctor_g__Load_7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__ctor_g__Load_7_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6740664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "<.ctor>g__Load|7_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderLdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderLdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderLdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderLdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LutBuilderLdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LutBuilderLdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderHdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderHdr;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LutBuilderHdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LutBuilderHdr;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LutBuilderHdr(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LutBuilderHdr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_HdrLutFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HdrLutFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_HdrLutFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HdrLutFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_HdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HdrLutFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LdrLutFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LdrLutFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_LdrLutFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LdrLutFormat;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_LdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LdrLutFormat = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_InternalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_InternalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalLut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_AllowColorGradingACESHDR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowColorGradingACESHDR;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_get_m_AllowColorGradingACESHDR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowColorGradingACESHDR;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__cordl_internal_set_m_AllowColorGradingACESHDR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowColorGradingACESHDR = value;
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                    ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PostProcessData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, data);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Setup(::ByRef<::UnityEngine::Rendering::RTHandle*> internalLut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, internalLut);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor(::ByRef<::UnityEngine::Rendering::Universal::PostProcessingData> postProcessingData,
                                                                                                  ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                                  ::ByRef<::UnityEngine::FilterMode> filterMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ConfigureDescriptor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::PostProcessingData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::FilterMode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, postProcessingData, descriptor, filterMode);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ConfigureDescriptor(::ByRef<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*> postProcessingData,
                                                                                                  ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                                  ::ByRef<::UnityEngine::FilterMode> filterMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ConfigureDescriptor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::FilterMode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, postProcessingData, descriptor, filterMode);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                          ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* passData,
                                                                                          ::UnityEngine::Rendering::RTHandle* internalLutTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData, internalLutTarget);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> internalColorLut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, internalColorLut);
}
inline void UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::__ctor_g__Load_7_0(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>::get(), "<.ctor>g__Load|7_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, shader);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*
UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>(evt, data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass::ColorGradingLutPass() {}
