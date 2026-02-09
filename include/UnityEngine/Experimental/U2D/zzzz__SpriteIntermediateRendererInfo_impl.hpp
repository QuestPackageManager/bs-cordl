#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/U2D/SpriteIntermediateRendererInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Experimental/U2D/zzzz__SpriteIntermediateRendererInfo_def.hpp"
// Ctor Parameters [CppParam { name: "SpriteID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TextureID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaterialID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }, CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortingLayer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "VertexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShaderChannelMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::SpriteIntermediateRendererInfo(int32_t  SpriteID, int32_t  TextureID, int32_t  MaterialID, ::UnityEngine::Color  Color, ::UnityEngine::Matrix4x4  Transform, ::UnityEngine::Bounds  Bounds, int32_t  Layer, int32_t  SortingLayer, int32_t  SortingOrder, uint64_t  SceneCullingMask, ::System::IntPtr  IndexData, ::System::IntPtr  VertexData, int32_t  IndexCount, int32_t  VertexCount, int32_t  ShaderChannelMask) noexcept  {
this->SpriteID = SpriteID;
this->TextureID = TextureID;
this->MaterialID = MaterialID;
this->Color = Color;
this->Transform = Transform;
this->Bounds = Bounds;
this->Layer = Layer;
this->SortingLayer = SortingLayer;
this->SortingOrder = SortingOrder;
this->SceneCullingMask = SceneCullingMask;
this->IndexData = IndexData;
this->VertexData = VertexData;
this->IndexCount = IndexCount;
this->VertexCount = VertexCount;
this->ShaderChannelMask = ShaderChannelMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::SpriteIntermediateRendererInfo()   {
}
