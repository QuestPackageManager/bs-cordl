#pragma once
// IWYU pragma private; include "GlobalNamespace\BakedLightTexturePacking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightTexturePacking_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightTexturePacking.PackTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::RenderTexture>>*, ::UnityEngine::RenderTextureDescriptor)>(&::GlobalNamespace::BakedLightTexturePacking::PackTextures)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x58e1fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightTexturePacking*>(),
                                                             { "PackTextures",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::RenderTexture>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BakedLightTexturePacking::setStaticF__texPropertyIds(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "_texPropertyIds", ::GlobalNamespace::BakedLightTexturePacking*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::BakedLightTexturePacking::getStaticF__texPropertyIds() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_texPropertyIds", ::GlobalNamespace::BakedLightTexturePacking*>();
}
inline void GlobalNamespace::BakedLightTexturePacking::setStaticF__material(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::BakedLightTexturePacking*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::BakedLightTexturePacking::getStaticF__material() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::BakedLightTexturePacking*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::BakedLightTexturePacking::PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::RenderTexture>>* textures,
                                                                                                      ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightTexturePacking*>(),
                                                                                         { "PackTextures",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::RenderTexture>>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, textures, descriptor);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightTexturePacking::BakedLightTexturePacking() {}
