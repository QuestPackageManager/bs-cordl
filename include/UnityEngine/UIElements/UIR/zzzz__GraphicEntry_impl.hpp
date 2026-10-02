#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GraphicEntry.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GraphicEntry_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "source", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actual", ty:
// "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIR::GraphicEntry::GraphicEntry(::UnityW<::UnityEngine::Texture> source, ::UnityEngine::UIElements::TextureId actual, bool replaced,
                                                                     ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage) noexcept {
  this->source = source;
  this->actual = actual;
  this->replaced = replaced;
  this->vectorImage = vectorImage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GraphicEntry::GraphicEntry() {}
