#pragma once
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TilemapRenderer_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.RegisterSpriteAtlasRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(
    &::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d50138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                                                                               "RegisterSpriteAtlasRegistered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.UnregisterSpriteAtlasRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(
    &::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d501b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                                                                               "UnregisterSpriteAtlasRegistered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.OnSpriteAtlasRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)(::UnityEngine::U2D::SpriteAtlas*)>(
    &::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d50238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(), "OnSpriteAtlasRegistered", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                                                                             "RegisterSpriteAtlasRegistered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                                                                             "UnregisterSpriteAtlasRegistered", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* atlas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(), "OnSpriteAtlasRegistered", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atlas);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TilemapRenderer::TilemapRenderer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
