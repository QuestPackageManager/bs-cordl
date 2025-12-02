#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceNumInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderersParameters_Flags::RenderersParameters_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters_Flags::RenderersParameters_Flags() {}
constexpr ::UnityEngine::Rendering::RenderersParameters_Flags UnityEngine::Rendering::RenderersParameters_Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::RenderersParameters_Flags UnityEngine::Rendering::RenderersParameters_Flags::UseBoundingSphereParameter{ static_cast<int32_t>(0x1) };
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF__BaseColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BaseColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF__BaseColor() {
  return ::cordl_internals::getStaticField<int32_t, "_BaseColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_SpecCube0_HDR(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_SpecCube0_HDR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_SpecCube0_HDR() {
  return ::cordl_internals::getStaticField<int32_t, "unity_SpecCube0_HDR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_SHCoefficients(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_SHCoefficients", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_SHCoefficients() {
  return ::cordl_internals::getStaticField<int32_t, "unity_SHCoefficients", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_LightmapST(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_LightmapST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_LightmapST() {
  return ::cordl_internals::getStaticField<int32_t, "unity_LightmapST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_ObjectToWorld(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_ObjectToWorld", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_ObjectToWorld() {
  return ::cordl_internals::getStaticField<int32_t, "unity_ObjectToWorld", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_WorldToObject(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_WorldToObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_WorldToObject() {
  return ::cordl_internals::getStaticField<int32_t, "unity_WorldToObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_MatrixPreviousM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_MatrixPreviousM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_MatrixPreviousM() {
  return ::cordl_internals::getStaticField<int32_t, "unity_MatrixPreviousM", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_MatrixPreviousMI(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_MatrixPreviousMI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_MatrixPreviousMI() {
  return ::cordl_internals::getStaticField<int32_t, "unity_MatrixPreviousMI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_unity_WorldBoundingSphere(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "unity_WorldBoundingSphere", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_unity_WorldBoundingSphere() {
  return ::cordl_internals::getStaticField<int32_t, "unity_WorldBoundingSphere",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_DOTS_ST_WindParams(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DOTS_ST_WindParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_DOTS_ST_WindParams() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DOTS_ST_WindParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
inline void UnityEngine::Rendering::RenderersParameters_ParamNames::setStaticF_DOTS_ST_WindHistoryParams(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DOTS_ST_WindHistoryParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::RenderersParameters_ParamNames::getStaticF_DOTS_ST_WindHistoryParams() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "DOTS_ST_WindHistoryParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamNames*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters_ParamNames::RenderersParameters_ParamNames() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters_ParamInfo.get_valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderersParameters_ParamInfo::*)()>(
    &::UnityEngine::Rendering::RenderersParameters_ParamInfo::get_valid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6619ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamInfo>::get(),
                                                                               "get_valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::RenderersParameters_ParamInfo::get_valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters_ParamInfo>::get(),
                                                                             "get_valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gpuAddress", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "uintOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderersParameters_ParamInfo::RenderersParameters_ParamInfo(int32_t index, int32_t gpuAddress, int32_t uintOffset) noexcept {
  this->index = index;
  this->gpuAddress = gpuAddress;
  this->uintOffset = uintOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters_ParamInfo::RenderersParameters_ParamInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters.CreateInstanceDataBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::GPUInstanceDataBuffer* (*)(::UnityEngine::Rendering::RenderersParameters_Flags, ::ByRef<::UnityEngine::Rendering::InstanceNumInfo>)>(
        &::UnityEngine::Rendering::RenderersParameters::CreateInstanceDataBuffer)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x66184f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), "CreateInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters_Flags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderersParameters::*)(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>)>(
    &::UnityEngine::Rendering::RenderersParameters::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x66188c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderersParameters.__ctor_g__GetParamInfo_14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderersParameters_ParamInfo (*)(
    ::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>, int32_t, bool)>(&::UnityEngine::Rendering::RenderersParameters::__ctor_g__GetParamInfo_14_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6619614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), "<.ctor>g__GetParamInfo|14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderersParameters::setStaticF_s_uintSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_uintSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderersParameters::getStaticF_s_uintSize() {
  return ::cordl_internals::getStaticField<int32_t, "s_uintSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get>();
}
inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* UnityEngine::Rendering::RenderersParameters::CreateInstanceDataBuffer(::UnityEngine::Rendering::RenderersParameters_Flags flags,
                                                                                                                              ::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), "CreateInstanceDataBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderersParameters_Flags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::InstanceNumInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceDataBuffer*, false>(nullptr, ___internal_method, flags, instanceNumInfo);
}
inline void UnityEngine::Rendering::RenderersParameters::_ctor(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*> instanceDataBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceDataBuffer);
}
inline ::UnityEngine::Rendering::RenderersParameters_ParamInfo
UnityEngine::Rendering::RenderersParameters::__ctor_g__GetParamInfo_14_0(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*> instanceDataBuffer, int32_t paramNameIdx, bool assertOnFail) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderersParameters>::get(), "<.ctor>g__GetParamInfo|14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderersParameters_ParamInfo, false>(nullptr, ___internal_method, instanceDataBuffer, paramNameIdx, assertOnFail);
}
// Ctor Parameters [CppParam { name: "lightmapScale", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld", ty:
// "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToLocal", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "matrixPreviousM", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "matrixPreviousMI", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "shCoefficients", ty:
// "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "boundingSphere", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "windParams", ty:
// "::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo,::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "windHistoryParams", ty: "::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo,::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Rendering::RenderersParameters::RenderersParameters(
    ::UnityEngine::Rendering::RenderersParameters_ParamInfo lightmapScale, ::UnityEngine::Rendering::RenderersParameters_ParamInfo localToWorld,
    ::UnityEngine::Rendering::RenderersParameters_ParamInfo worldToLocal, ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousM,
    ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousMI, ::UnityEngine::Rendering::RenderersParameters_ParamInfo shCoefficients,
    ::UnityEngine::Rendering::RenderersParameters_ParamInfo boundingSphere,
    ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windParams,
    ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windHistoryParams) noexcept {
  this->lightmapScale = lightmapScale;
  this->localToWorld = localToWorld;
  this->worldToLocal = worldToLocal;
  this->matrixPreviousM = matrixPreviousM;
  this->matrixPreviousMI = matrixPreviousMI;
  this->shCoefficients = shCoefficients;
  this->boundingSphere = boundingSphere;
  this->windParams = windParams;
  this->windHistoryParams = windHistoryParams;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderersParameters::RenderersParameters() {}
