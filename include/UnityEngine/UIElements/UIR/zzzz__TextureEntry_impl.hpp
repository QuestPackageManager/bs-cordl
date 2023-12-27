#pragma once
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Texture*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "actual", ty: "::UnityEngine::UIElements::TextureId",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::TextureEntry::TextureEntry(::UnityEngine::Texture* source, ::UnityEngine::UIElements::TextureId actual, bool replaced) noexcept {
  this->source = source;
  this->actual = actual;
  this->replaced = replaced;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TextureEntry::TextureEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
