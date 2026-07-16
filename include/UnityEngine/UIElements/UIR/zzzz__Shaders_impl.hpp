#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Shaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Shaders_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.get_runtimeMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UIElements::UIR::Shaders::get_runtimeMaterial)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cede74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_runtimeMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.get_runtimeWorldMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UIElements::UIR::Shaders::get_runtimeWorldMaterial)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cee05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_runtimeWorldMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.get_editorMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UIElements::UIR::Shaders::get_editorMaterial)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cee0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_editorMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.GetOrCreateMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::by_ref<::UnityEngine::Material*>, ::StringW)>(
    &::UnityEngine::UIElements::UIR::Shaders::GetOrCreateMaterial)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6ceded4;

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
  constexpr static std::size_t addrs = 0x6cee11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Shaders.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::Shaders::Release)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6cee180;

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
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_Editor(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_Editor", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_Editor() {
  return ::cordl_internals::getStaticField<::StringW, "k_Editor", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_Runtime(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_Runtime", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_Runtime() {
  return ::cordl_internals::getStaticField<::StringW, "k_Runtime", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_k_RuntimeWorld(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_RuntimeWorld", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIR::Shaders::getStaticF_k_RuntimeWorld() {
  return ::cordl_internals::getStaticField<::StringW, "k_RuntimeWorld", ::UnityEngine::UIElements::UIR::Shaders*>();
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
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_RuntimeMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_RuntimeMaterial", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::getStaticF_s_RuntimeMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_RuntimeMaterial", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_RuntimeWorldMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_RuntimeWorldMaterial", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::getStaticF_s_RuntimeWorldMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_RuntimeWorldMaterial", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_EditorMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_EditorMaterial", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::getStaticF_s_EditorMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_EditorMaterial", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline void UnityEngine::UIElements::UIR::Shaders::setStaticF_s_RefCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_RefCount", ::UnityEngine::UIElements::UIR::Shaders*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::Shaders::getStaticF_s_RefCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_RefCount", ::UnityEngine::UIElements::UIR::Shaders*>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::get_runtimeMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_runtimeMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::get_runtimeWorldMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_runtimeWorldMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UIElements::UIR::Shaders::get_editorMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::Shaders*>(), { "get_editorMaterial", {}, {} })));
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
