#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Shaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Shaders_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.get_defaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UIElements::UIR::Shaders::get_defaultMaterial)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7184aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_defaultMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.GetOrCreateMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::by_ref<::UnityEngine::Material*>, ::StringW)>(
    &::UnityEngine::UIElements::UIR::Shaders::GetOrCreateMaterial)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x7184b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(),
                                                             { "GetOrCreateMaterial", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Shaders::Acquire)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7184c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Shaders::Release)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x7184cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_AtlasBlit(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_AtlasBlit", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_AtlasBlit() {
  return ::cordl_internals::getStaticField<::StringW, "k_AtlasBlit", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_Default(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_Default", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_Default() {
  return ::cordl_internals::getStaticField<::StringW, "k_Default", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_RuntimeGaussianBlur(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_RuntimeGaussianBlur", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_RuntimeGaussianBlur() {
  return ::cordl_internals::getStaticField<::StringW, "k_RuntimeGaussianBlur", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_RuntimeColorEffect(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_RuntimeColorEffect", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_RuntimeColorEffect() {
  return ::cordl_internals::getStaticField<::StringW, "k_RuntimeColorEffect", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ColorConversionBlit(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ColorConversionBlit", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ColorConversionBlit() {
  return ::cordl_internals::getStaticField<::StringW, "k_ColorConversionBlit", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ForceGammaKeyword(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ForceGammaKeyword", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ForceGammaKeyword() {
  return ::cordl_internals::getStaticField<::StringW, "k_ForceGammaKeyword", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_TextureSlotCount1(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_TextureSlotCount1", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_TextureSlotCount1() {
  return ::cordl_internals::getStaticField<::StringW, "k_TextureSlotCount1", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_TextureSlotCount2(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_TextureSlotCount2", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_TextureSlotCount2() {
  return ::cordl_internals::getStaticField<::StringW, "k_TextureSlotCount2", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_TextureSlotCount4(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_TextureSlotCount4", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_TextureSlotCount4() {
  return ::cordl_internals::getStaticField<::StringW, "k_TextureSlotCount4", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ForceRenderTypeSolid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ForceRenderTypeSolid", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ForceRenderTypeSolid() {
  return ::cordl_internals::getStaticField<::StringW, "k_ForceRenderTypeSolid", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ForceRenderTypeTextured(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ForceRenderTypeTextured", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ForceRenderTypeTextured() {
  return ::cordl_internals::getStaticField<::StringW, "k_ForceRenderTypeTextured", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ForceRenderTypeText(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ForceRenderTypeText", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ForceRenderTypeText() {
  return ::cordl_internals::getStaticField<::StringW, "k_ForceRenderTypeText", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_ForceRenderTypeSvgGradient(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ForceRenderTypeSvgGradient", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_ForceRenderTypeSvgGradient() {
  return ::cordl_internals::getStaticField<::StringW, "k_ForceRenderTypeSvgGradient", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_DefaultMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultMaterial", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::getStaticF_s_DefaultMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultMaterial", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_RefCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_RefCount", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::Shaders::getStaticF_s_RefCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_RefCount", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::get_defaultMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_defaultMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::GetOrCreateMaterial(::by_ref<::UnityEngine::Material*> material, ::StringW shaderName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(),
                                                           { "GetOrCreateMaterial", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, material, shaderName);
}
inline void UnityEngine::UIElements::UIR::Shaders::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::Shaders::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::Shaders::Shaders() {}
