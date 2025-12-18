#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HDROutputUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeywordSet_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::HDROutputUtils_Operation::HDROutputUtils_Operation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_Operation::HDROutputUtils_Operation() {}
constexpr ::UnityEngine::Rendering::HDROutputUtils_Operation UnityEngine::Rendering::HDROutputUtils_Operation::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::HDROutputUtils_Operation UnityEngine::Rendering::HDROutputUtils_Operation::ColorConversion{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::HDROutputUtils_Operation UnityEngine::Rendering::HDROutputUtils_Operation::ColorEncoding{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation::*)(int32_t, int32_t, int32_t, float_t)>(
    &::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x660f174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation::_ctor(int32_t maxFullFrameToneMapLuminance, int32_t maxToneMapLuminance, int32_t minToneMapLuminance,
                                                                                float_t hdrPaperWhiteNits) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxFullFrameToneMapLuminance, maxToneMapLuminance, minToneMapLuminance, hdrPaperWhiteNits);
}
// Ctor Parameters [CppParam { name: "maxFullFrameToneMapLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxToneMapLuminance", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "minToneMapLuminance", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "paperWhiteNits", ty: "float_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation::HDROutputUtils_HDRDisplayInformation(int32_t maxFullFrameToneMapLuminance, int32_t maxToneMapLuminance,
                                                                                                               int32_t minToneMapLuminance, float_t paperWhiteNits) noexcept {
  this->maxFullFrameToneMapLuminance = maxFullFrameToneMapLuminance;
  this->maxToneMapLuminance = maxToneMapLuminance;
  this->minToneMapLuminance = minToneMapLuminance;
  this->paperWhiteNits = paperWhiteNits;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation::HDROutputUtils_HDRDisplayInformation() {}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRColorSpaceConversion(::UnityEngine::Rendering::ShaderKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRColorSpaceConversion() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDREncoding(::UnityEngine::Rendering::ShaderKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDREncoding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDREncoding() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDREncoding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRColorSpaceConversionAndEncoding(::UnityEngine::Rendering::ShaderKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversionAndEncoding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRColorSpaceConversionAndEncoding() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRColorSpaceConversionAndEncoding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::setStaticF_HDRInput(::UnityEngine::Rendering::ShaderKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRInput",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderKeyword>(value));
}
inline ::UnityEngine::Rendering::ShaderKeyword UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::getStaticF_HDRInput() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderKeyword, "HDRInput",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_ShaderKeywords::HDROutputUtils_ShaderKeywords() {}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::setStaticF_hdrColorSpace(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "hdrColorSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::getStaticF_hdrColorSpace() {
  return ::cordl_internals::getStaticField<int32_t, "hdrColorSpace", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>::get>();
}
inline void UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::setStaticF_hdrEncoding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "hdrEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::getStaticF_hdrEncoding() {
  return ::cordl_internals::getStaticField<int32_t, "hdrEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils_ShaderPropertyId::HDROutputUtils_ShaderPropertyId() {}
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.GetColorSpaceForGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ColorGamut, ::ByRef<int32_t>)>(
    &::UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x660e528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "GetColorSpaceForGamut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.GetColorEncodingForGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ColorGamut, ::ByRef<int32_t>)>(
    &::UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x660e77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "GetColorEncodingForGamut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::ColorGamut, ::UnityEngine::Rendering::HDROutputUtils_Operation)>(
    &::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x660e928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::ColorGamut)>(
    &::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x660eb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::HDROutputUtils_Operation)>(
    &::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x660ec38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.ConfigureHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::ComputeShader*, ::UnityEngine::ColorGamut, ::UnityEngine::Rendering::HDROutputUtils_Operation)>(&::UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x660edbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::HDROutputUtils.IsShaderVariantValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::ShaderKeywordSet, bool)>(
    &::UnityEngine::Rendering::HDROutputUtils::IsShaderVariantValid)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x660f00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "IsShaderVariantValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeywordSet>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::HDROutputUtils::GetColorSpaceForGamut(::UnityEngine::ColorGamut gamut, ::ByRef<int32_t> colorspace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "GetColorSpaceForGamut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, gamut, colorspace);
}
inline bool UnityEngine::Rendering::HDROutputUtils::GetColorEncodingForGamut(::UnityEngine::ColorGamut gamut, ::ByRef<int32_t> encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "GetColorEncodingForGamut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, gamut, encoding);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::Material* material, ::UnityEngine::ColorGamut gamut,
                                                                       ::UnityEngine::Rendering::HDROutputUtils_Operation operations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, gamut, operations);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::ColorGamut gamut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MaterialPropertyBlock*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, properties, gamut);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::Material* material, ::UnityEngine::Rendering::HDROutputUtils_Operation operations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, material, operations);
}
inline void UnityEngine::Rendering::HDROutputUtils::ConfigureHDROutput(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::ColorGamut gamut,
                                                                       ::UnityEngine::Rendering::HDROutputUtils_Operation operations) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "ConfigureHDROutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeShader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, computeShader, gamut, operations);
}
inline bool UnityEngine::Rendering::HDROutputUtils::IsShaderVariantValid(::UnityEngine::Rendering::ShaderKeywordSet shaderKeywordSet, bool isHDREnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HDROutputUtils*>::get(), "IsShaderVariantValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeywordSet>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, shaderKeywordSet, isHDREnabled);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HDROutputUtils::HDROutputUtils() {}
