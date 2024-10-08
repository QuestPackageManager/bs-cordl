#pragma once
// IWYU pragma private; include "UnityEngine/SecondarySpriteTexture.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::SecondarySpriteTexture::SecondarySpriteTexture(::StringW name, ::UnityW<::UnityEngine::Texture2D> texture) noexcept {
  this->name = name;
  this->texture = texture;
}
// Ctor Parameters []
constexpr ::UnityEngine::SecondarySpriteTexture::SecondarySpriteTexture() {}
