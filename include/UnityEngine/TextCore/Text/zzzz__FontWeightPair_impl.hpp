#pragma once
#include "UnityEngine/TextCore/Text/zzzz__FontWeightPair_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
// Ctor Parameters [CppParam { name: "regularTypeface", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "italicTypeface", ty:
// "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::TextCore::Text::FontWeightPair::FontWeightPair(::UnityEngine::TextCore::Text::FontAsset* regularTypeface, ::UnityEngine::TextCore::Text::FontAsset* italicTypeface) noexcept {
  this->regularTypeface = regularTypeface;
  this->italicTypeface = italicTypeface;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontWeightPair::FontWeightPair() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
