#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/MeshInfoBindings.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfoBindings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "vertexData", ty: "::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex,::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::MeshInfoBindings::MeshInfoBindings(::ArrayW<::UnityEngine::TextCore::Text::TextCoreVertex, ::Array<::UnityEngine::TextCore::Text::TextCoreVertex>*> vertexData,
                                                                            ::UnityW<::UnityEngine::Material> material, int32_t vertexCount) noexcept {
  this->vertexData = vertexData;
  this->material = material;
  this->vertexCount = vertexCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::MeshInfoBindings::MeshInfoBindings() {}
