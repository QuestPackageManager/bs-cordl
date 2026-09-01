#pragma once
// IWYU pragma private; include "TMPro\ShaderUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__ShaderUtilities_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::TMPro::ShaderUtilities.get_ShaderRef_MobileSDF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)()>(&::TMPro::ShaderUtilities::get_ShaderRef_MobileSDF)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x699dc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "get_ShaderRef_MobileSDF", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.get_ShaderRef_MobileBitmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)()>(&::TMPro::ShaderUtilities::get_ShaderRef_MobileBitmap)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x699dd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "get_ShaderRef_MobileBitmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.GetShaderPropertyIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TMPro::ShaderUtilities::GetShaderPropertyIDs)> {
  constexpr static std::size_t size = 0xdc4;
  constexpr static std::size_t addrs = 0x69950cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetShaderPropertyIDs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.UpdateShaderRatios
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::ShaderUtilities::UpdateShaderRatios)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x699dfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "UpdateShaderRatios", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.GetFontExtent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Material*)>(&::TMPro::ShaderUtilities::GetFontExtent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x699e3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetFontExtent", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.IsMaskingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Material*)>(&::TMPro::ShaderUtilities::IsMaskingEnabled)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x699e434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "IsMaskingEnabled", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.GetPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Material*, bool, bool)>(&::TMPro::ShaderUtilities::GetPadding)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x699e5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetPadding", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.ComputePaddingForProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Material*)>(&::TMPro::ShaderUtilities::ComputePaddingForProperties)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x699ed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "ComputePaddingForProperties", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::ShaderUtilities.GetPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<::UnityEngine::Material*>, bool, bool)>(&::TMPro::ShaderUtilities::GetPadding)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x699f060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(),
                                                             { "GetPadding", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void TMPro::ShaderUtilities::setStaticF_ID_MainTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_MainTex", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_MainTex() {
  return ::cordl_internals::getStaticField<int32_t, "ID_MainTex", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_FaceTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_FaceTex", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_FaceTex() {
  return ::cordl_internals::getStaticField<int32_t, "ID_FaceTex", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_FaceColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_FaceColor", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_FaceColor() {
  return ::cordl_internals::getStaticField<int32_t, "ID_FaceColor", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_FaceDilate(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_FaceDilate", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_FaceDilate() {
  return ::cordl_internals::getStaticField<int32_t, "ID_FaceDilate", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Shininess(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Shininess", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Shininess() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Shininess", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineOffset1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineOffset1", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineOffset1() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineOffset1", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineOffset2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineOffset2", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineOffset2() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineOffset2", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineOffset3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineOffset3", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineOffset3() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineOffset3", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineMode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineMode", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineMode() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineMode", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_IsoPerimeter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_IsoPerimeter", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_IsoPerimeter() {
  return ::cordl_internals::getStaticField<int32_t, "ID_IsoPerimeter", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Softness(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Softness", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Softness() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Softness", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayColor", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayColor() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayColor", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayOffsetX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayOffsetX", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayOffsetX() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayOffsetX", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayOffsetY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayOffsetY", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayOffsetY() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayOffsetY", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayDilate(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayDilate", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayDilate() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayDilate", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlaySoftness(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlaySoftness", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlaySoftness() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlaySoftness", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayOffset", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayOffset() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayOffset", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UnderlayIsoPerimeter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UnderlayIsoPerimeter", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UnderlayIsoPerimeter() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UnderlayIsoPerimeter", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_WeightNormal(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_WeightNormal", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_WeightNormal() {
  return ::cordl_internals::getStaticField<int32_t, "ID_WeightNormal", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_WeightBold(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_WeightBold", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_WeightBold() {
  return ::cordl_internals::getStaticField<int32_t, "ID_WeightBold", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineTex", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineTex() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineTex", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineWidth", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineWidth() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineWidth", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineSoftness(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineSoftness", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineSoftness() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineSoftness", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_OutlineColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_OutlineColor", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_OutlineColor() {
  return ::cordl_internals::getStaticField<int32_t, "ID_OutlineColor", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Outline2Color(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Outline2Color", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Outline2Color() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Outline2Color", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Outline2Width(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Outline2Width", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Outline2Width() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Outline2Width", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Padding(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Padding", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Padding() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Padding", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GradientScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GradientScale", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GradientScale() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GradientScale", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ScaleX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ScaleX", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ScaleX() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ScaleX", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ScaleY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ScaleY", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ScaleY() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ScaleY", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_PerspectiveFilter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_PerspectiveFilter", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_PerspectiveFilter() {
  return ::cordl_internals::getStaticField<int32_t, "ID_PerspectiveFilter", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_Sharpness(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_Sharpness", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_Sharpness() {
  return ::cordl_internals::getStaticField<int32_t, "ID_Sharpness", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_TextureWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_TextureWidth", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_TextureWidth() {
  return ::cordl_internals::getStaticField<int32_t, "ID_TextureWidth", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_TextureHeight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_TextureHeight", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_TextureHeight() {
  return ::cordl_internals::getStaticField<int32_t, "ID_TextureHeight", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_BevelAmount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_BevelAmount", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_BevelAmount() {
  return ::cordl_internals::getStaticField<int32_t, "ID_BevelAmount", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GlowColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GlowColor", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GlowColor() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GlowColor", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GlowOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GlowOffset", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GlowOffset() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GlowOffset", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GlowPower(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GlowPower", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GlowPower() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GlowPower", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GlowOuter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GlowOuter", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GlowOuter() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GlowOuter", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_GlowInner(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_GlowInner", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_GlowInner() {
  return ::cordl_internals::getStaticField<int32_t, "ID_GlowInner", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_LightAngle(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_LightAngle", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_LightAngle() {
  return ::cordl_internals::getStaticField<int32_t, "ID_LightAngle", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_EnvMap(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_EnvMap", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_EnvMap() {
  return ::cordl_internals::getStaticField<int32_t, "ID_EnvMap", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_EnvMatrix(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_EnvMatrix", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_EnvMatrix() {
  return ::cordl_internals::getStaticField<int32_t, "ID_EnvMatrix", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_EnvMatrixRotation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_EnvMatrixRotation", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_EnvMatrixRotation() {
  return ::cordl_internals::getStaticField<int32_t, "ID_EnvMatrixRotation", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_MaskCoord(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_MaskCoord", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_MaskCoord() {
  return ::cordl_internals::getStaticField<int32_t, "ID_MaskCoord", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ClipRect(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ClipRect", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ClipRect() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ClipRect", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_MaskSoftnessX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_MaskSoftnessX", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_MaskSoftnessX() {
  return ::cordl_internals::getStaticField<int32_t, "ID_MaskSoftnessX", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_MaskSoftnessY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_MaskSoftnessY", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_MaskSoftnessY() {
  return ::cordl_internals::getStaticField<int32_t, "ID_MaskSoftnessY", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_VertexOffsetX(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_VertexOffsetX", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_VertexOffsetX() {
  return ::cordl_internals::getStaticField<int32_t, "ID_VertexOffsetX", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_VertexOffsetY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_VertexOffsetY", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_VertexOffsetY() {
  return ::cordl_internals::getStaticField<int32_t, "ID_VertexOffsetY", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_UseClipRect(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_UseClipRect", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_UseClipRect() {
  return ::cordl_internals::getStaticField<int32_t, "ID_UseClipRect", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_StencilID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_StencilID", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_StencilID() {
  return ::cordl_internals::getStaticField<int32_t, "ID_StencilID", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_StencilOp(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_StencilOp", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_StencilOp() {
  return ::cordl_internals::getStaticField<int32_t, "ID_StencilOp", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_StencilComp(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_StencilComp", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_StencilComp() {
  return ::cordl_internals::getStaticField<int32_t, "ID_StencilComp", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_StencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_StencilReadMask", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_StencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "ID_StencilReadMask", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_StencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_StencilWriteMask", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_StencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "ID_StencilWriteMask", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ShaderFlags(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ShaderFlags", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ShaderFlags() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ShaderFlags", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ScaleRatio_A(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ScaleRatio_A", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ScaleRatio_A() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ScaleRatio_A", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ScaleRatio_B(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ScaleRatio_B", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ScaleRatio_B() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ScaleRatio_B", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ID_ScaleRatio_C(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ID_ScaleRatio_C", ::TMPro::ShaderUtilities*>(std::forward<int32_t>(value));
}
inline int32_t TMPro::ShaderUtilities::getStaticF_ID_ScaleRatio_C() {
  return ::cordl_internals::getStaticField<int32_t, "ID_ScaleRatio_C", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_Bevel(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_Bevel", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_Bevel() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_Bevel", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_Glow(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_Glow", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_Glow() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_Glow", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_Underlay(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_Underlay", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_Underlay() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_Underlay", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_Ratios(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_Ratios", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_Ratios() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_Ratios", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_MASK_SOFT(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_MASK_SOFT", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_MASK_SOFT() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_MASK_SOFT", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_MASK_HARD(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_MASK_HARD", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_MASK_HARD() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_MASK_HARD", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_MASK_TEX(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_MASK_TEX", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_MASK_TEX() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_MASK_TEX", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_Keyword_Outline(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Keyword_Outline", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_Keyword_Outline() {
  return ::cordl_internals::getStaticField<::StringW, "Keyword_Outline", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ShaderTag_ZTestMode(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ShaderTag_ZTestMode", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_ShaderTag_ZTestMode() {
  return ::cordl_internals::getStaticField<::StringW, "ShaderTag_ZTestMode", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_ShaderTag_CullMode(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ShaderTag_CullMode", ::TMPro::ShaderUtilities*>(std::forward<::StringW>(value));
}
inline ::StringW TMPro::ShaderUtilities::getStaticF_ShaderTag_CullMode() {
  return ::cordl_internals::getStaticField<::StringW, "ShaderTag_CullMode", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_m_clamp(float_t value) {
  ::cordl_internals::setStaticField<float_t, "m_clamp", ::TMPro::ShaderUtilities*>(std::forward<float_t>(value));
}
inline float_t TMPro::ShaderUtilities::getStaticF_m_clamp() {
  return ::cordl_internals::getStaticField<float_t, "m_clamp", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_isInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "isInitialized", ::TMPro::ShaderUtilities*>(std::forward<bool>(value));
}
inline bool TMPro::ShaderUtilities::getStaticF_isInitialized() {
  return ::cordl_internals::getStaticField<bool, "isInitialized", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_k_ShaderRef_MobileSDF(::UnityW<::UnityEngine::Shader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "k_ShaderRef_MobileSDF", ::TMPro::ShaderUtilities*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> TMPro::ShaderUtilities::getStaticF_k_ShaderRef_MobileSDF() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "k_ShaderRef_MobileSDF", ::TMPro::ShaderUtilities*>();
}
inline void TMPro::ShaderUtilities::setStaticF_k_ShaderRef_MobileBitmap(::UnityW<::UnityEngine::Shader> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "k_ShaderRef_MobileBitmap", ::TMPro::ShaderUtilities*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> TMPro::ShaderUtilities::getStaticF_k_ShaderRef_MobileBitmap() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "k_ShaderRef_MobileBitmap", ::TMPro::ShaderUtilities*>();
}
inline ::UnityW<::UnityEngine::Shader> TMPro::ShaderUtilities::get_ShaderRef_MobileSDF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "get_ShaderRef_MobileSDF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> TMPro::ShaderUtilities::get_ShaderRef_MobileBitmap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "get_ShaderRef_MobileBitmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method);
}
inline void TMPro::ShaderUtilities::GetShaderPropertyIDs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetShaderPropertyIDs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void TMPro::ShaderUtilities::UpdateShaderRatios(::UnityEngine::Material* mat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "UpdateShaderRatios", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mat);
}
inline ::UnityEngine::Vector4 TMPro::ShaderUtilities::GetFontExtent(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetFontExtent", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, material);
}
inline bool TMPro::ShaderUtilities::IsMaskingEnabled(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "IsMaskingEnabled", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, material);
}
inline float_t TMPro::ShaderUtilities::GetPadding(::UnityEngine::Material* material, bool enableExtraPadding, bool isBold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "GetPadding", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, material, enableExtraPadding, isBold);
}
inline float_t TMPro::ShaderUtilities::ComputePaddingForProperties(::UnityEngine::Material* mat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(), { "ComputePaddingForProperties", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, mat);
}
inline float_t TMPro::ShaderUtilities::GetPadding(::ArrayW<::UnityEngine::Material*> materials, bool enableExtraPadding, bool isBold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::ShaderUtilities*>(),
                                                           { "GetPadding", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, materials, enableExtraPadding, isBold);
}
// Ctor Parameters []
constexpr ::TMPro::ShaderUtilities::ShaderUtilities() {}
