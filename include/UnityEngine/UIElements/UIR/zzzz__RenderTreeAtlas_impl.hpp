#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeAtlas.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeAtlas_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeAtlas_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock::*)(int32_t, int32_t, ::UnityEngine::RectInt, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x717cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock::_ctor(int32_t w, int32_t h, ::UnityEngine::RectInt r, ::UnityEngine::Rect uv) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, w, h, r, uv);
}
// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvRect", ty: "::UnityEngine::Rect", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock::RenderTreeAtlas_AtlasBlock(int32_t width, int32_t height, ::UnityEngine::RectInt rect, ::UnityEngine::Rect uvRect,
                                                                                                 ::UnityW<::UnityEngine::RenderTexture> texture) noexcept {
  this->width = width;
  this->height = height;
  this->rect = rect;
  this->uvRect = uvRect;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock::RenderTreeAtlas_AtlasBlock() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeAtlas.ReserveSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>)>(
    &::UnityEngine::UIElements::UIR::RenderTreeAtlas::ReserveSize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x717cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas*>(),
                            { "ReserveSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderTreeAtlas.CreateTextureForAtlasBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>, bool, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::UIR::RenderTreeAtlas::CreateTextureForAtlasBlock)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x717cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas*>(),
                                         { "CreateTextureForAtlasBlock",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UIR::RenderTreeAtlas::ReserveSize(int32_t width, int32_t height, ::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock> block) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas*>(),
                          { "ReserveSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, width, height, block);
}
inline bool UnityEngine::UIElements::UIR::RenderTreeAtlas::CreateTextureForAtlasBlock(::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock> block, bool forceGammaRendering,
                                                                                      ::by_ref<bool> allocatedNewTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderTreeAtlas*>(),
          { "CreateTextureForAtlasBlock", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, block, forceGammaRendering, allocatedNewTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderTreeAtlas::RenderTreeAtlas() {}
