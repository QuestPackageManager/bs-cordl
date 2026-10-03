#pragma once
// IWYU pragma private; include "UnityEngine/Sprite.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__SecondarySpriteTexture_def.hpp"
#include "UnityEngine/zzzz__SpriteMeshType_def.hpp"
#include "UnityEngine/zzzz__SpritePackingMode_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Sprite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6eb46f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPackingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetPackingMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb4748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPackingRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetPackingRotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb4804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPacked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetPacked)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb48c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPacked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetTextureRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetTextureRect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetTextureRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetTextureRectOffset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6eb4a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRectOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetInnerUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetInnerUVs)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb4b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetInnerUVs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetOuterUVs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetOuterUVs)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb4c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetOuterUVs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetPadding)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb4cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.CreateSpriteWithoutTextureScripting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, ::UnityEngine::Texture2D*)>(
    &::UnityEngine::Sprite::CreateSpriteWithoutTextureScripting)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6eb4dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "CreateSpriteWithoutTextureScripting",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                            ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.CreateSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4,
                                                    bool, ::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(&::UnityEngine::Sprite::CreateSprite)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6eb4fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "CreateSprite",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_bounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6eb5204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_rect)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb52f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_rect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_border
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_border)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb53d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_border", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_texture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6eb54b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_extrude)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_extrude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Sprite::*)(int32_t)>(&::UnityEngine::Sprite::GetSecondaryTexture)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6eb5700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTextureCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetSecondaryTextureCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb589c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextureCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)(::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(&::UnityEngine::Sprite::GetSecondaryTextures)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6eb5958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_spriteAtlasTextureScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_spriteAtlasTextureScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_spriteAtlasTextureScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_associatedAlphaSplitTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_associatedAlphaSplitTexture)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6eb5bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_associatedAlphaSplitTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_pivot)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6eb5d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pivot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_packed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_packed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eb5e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_packingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpritePackingMode (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_packingMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eb5e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_packingRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpritePackingRotation (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_packingRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eb5e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packingRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_textureRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_textureRect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eb5e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_textureRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_textureRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_textureRectOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eb5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_textureRectOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_vertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_vertices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_vertices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_triangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint16_t> (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_triangles)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_triangles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::get_uv)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb5fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_uv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetPhysicsShapeCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb6094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetScriptableObjectsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Sprite::*)()>(&::UnityEngine::Sprite::GetScriptableObjectsCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6eb6150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjectsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetScriptableObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Sprite::*)(::ArrayW<::UnityEngine::ScriptableObject*>)>(&::UnityEngine::Sprite::GetScriptableObjects)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6eb620c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjects", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ScriptableObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.AddScriptableObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Sprite::*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::Sprite::AddScriptableObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6eb630c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "AddScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.RemoveScriptableObjectAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Sprite::*)(uint32_t)>(&::UnityEngine::Sprite::RemoveScriptableObjectAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6eb6434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "RemoveScriptableObjectAt", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.SetScriptableObjectAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Sprite::*)(::UnityEngine::ScriptableObject*, uint32_t)>(&::UnityEngine::Sprite::SetScriptableObjectAt)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6eb6508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "SetScriptableObjectAt", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapePointCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)(int32_t)>(&::UnityEngine::Sprite::GetPhysicsShapePointCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6eb6648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapePointCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Internal_GetPhysicsShapePointCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)(int32_t)>(&::UnityEngine::Sprite::Internal_GetPhysicsShapePointCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6eb6714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Internal_GetPhysicsShapePointCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Sprite::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::Sprite::GetPhysicsShape)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6eb67e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "GetPhysicsShape", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Vector2> (::UnityEngine::Sprite::*)(int32_t)>(&::UnityEngine::Sprite::GetPhysicsShape)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6eb6b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShape", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Sprite*, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::Sprite::GetPhysicsShapeImpl)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6eb6900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeImpl",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeSpanImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::UnityEngine::Vector2> (*)(::UnityEngine::Sprite*, int32_t)>(&::UnityEngine::Sprite::GetPhysicsShapeSpanImpl)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6eb6bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeSpanImpl", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverridePhysicsShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Sprite::*)(::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2>>*)>(
    &::UnityEngine::Sprite::OverridePhysicsShape)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x6eb6d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                             { "OverridePhysicsShape", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverridePhysicsShapeCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Sprite*, int32_t)>(&::UnityEngine::Sprite::OverridePhysicsShapeCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6eb711c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverridePhysicsShapeCount", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverridePhysicsShape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Sprite*, ::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::UnityEngine::Sprite::OverridePhysicsShape)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6eb71ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                         { "OverridePhysicsShape", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverrideGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Sprite::*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<uint16_t>)>(&::UnityEngine::Sprite::OverrideGeometry)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6eb736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverrideGeometry", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, ::UnityEngine::Texture2D*)>(
    &::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eb7564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Sprite*>(),
            { "Create", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eb7568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t,
                                                                                           ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4, bool)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eb7570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                         { "Create",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t, ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4,
                                                    bool, ::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x6eb7580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "Create",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t,
                                                                                           ::UnityEngine::SpriteMeshType, ::UnityEngine::Vector4)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eb7a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                         { "Create",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t,
                                                                                           ::UnityEngine::SpriteMeshType)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6eb7a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Create",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t, uint32_t)>(
    &::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eb7b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Create",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2, float_t)>(
    &::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6eb7b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Sprite*>(),
            { "Create", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, ::UnityEngine::Vector2)>(&::UnityEngine::Sprite::Create)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eb7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPackingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetPackingMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPackingRotation_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetPackingRotation_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb4884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPacked_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetPacked_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb4940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPacked_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetTextureRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Sprite::GetTextureRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb4a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetTextureRectOffset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Sprite::GetTextureRectOffset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb4af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                             { "GetTextureRectOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetInnerUVs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Sprite::GetInnerUVs_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb4bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetInnerUVs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetOuterUVs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Sprite::GetOuterUVs_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb4cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetOuterUVs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPadding_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Sprite::GetPadding_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb4d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPadding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.CreateSpriteWithoutTextureScripting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Vector2>, float_t, ::System::IntPtr)>(
    &::UnityEngine::Sprite::CreateSpriteWithoutTextureScripting_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6eb4f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "CreateSpriteWithoutTextureScripting_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.CreateSprite_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Vector2>, float_t, uint32_t,
                                                                            ::UnityEngine::SpriteMeshType, ::by_ref<::UnityEngine::Vector4>, bool, ::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(
    &::UnityEngine::Sprite::CreateSprite_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6eb5168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                         { "CreateSprite_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Sprite::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb52b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_rect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Sprite::get_rect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb5394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_border_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Sprite::get_border_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb5474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_border_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_texture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_texture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_extrude_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_extrude_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb56c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_extrude_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Sprite::GetSecondaryTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb5858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTextureCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetSecondaryTextureCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb591c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextureCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetSecondaryTextures_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::SecondarySpriteTexture>)>(&::UnityEngine::Sprite::GetSecondaryTextures_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb5a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "GetSecondaryTextures_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_pixelsPerUnit_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_pixelsPerUnit_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_spriteAtlasTextureScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_spriteAtlasTextureScale_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_spriteAtlasTextureScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_associatedAlphaSplitTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_associatedAlphaSplitTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_associatedAlphaSplitTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_pivot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Sprite::get_pivot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb5df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_vertices_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_vertices_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_vertices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_triangles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint16_t> (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_triangles_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb5f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_triangles_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.get_uv_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::IntPtr)>(&::UnityEngine::Sprite::get_uv_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb6058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_uv_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetPhysicsShapeCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb6114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetScriptableObjectsCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr)>(&::UnityEngine::Sprite::GetScriptableObjectsCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6eb61d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjectsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetScriptableObjects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, ::ArrayW<::UnityEngine::ScriptableObject*>)>(&::UnityEngine::Sprite::GetScriptableObjects_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb62c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "GetScriptableObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::ScriptableObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.AddScriptableObject_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Sprite::AddScriptableObject_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb63f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "AddScriptableObject_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.RemoveScriptableObjectAt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::Sprite::RemoveScriptableObjectAt_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb64c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "RemoveScriptableObjectAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.SetScriptableObjectAt_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, uint32_t)>(&::UnityEngine::Sprite::SetScriptableObjectAt_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eb65f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                { "SetScriptableObjectAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.Internal_GetPhysicsShapePointCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Sprite::Internal_GetPhysicsShapePointCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb67a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Internal_GetPhysicsShapePointCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(
    &::UnityEngine::Sprite::GetPhysicsShapeImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eb6cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Sprite*>(),
            { "GetPhysicsShapeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.GetPhysicsShapeSpanImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Sprite::GetPhysicsShapeSpanImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eb6d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Sprite*>(),
            { "GetPhysicsShapeSpanImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverridePhysicsShapeCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Sprite::OverridePhysicsShapeCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6eb72d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverridePhysicsShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverridePhysicsShape_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t)>(
    &::UnityEngine::Sprite::OverridePhysicsShape_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eb7318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Sprite*>(),
            { "OverridePhysicsShape_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Sprite.OverrideGeometry_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Sprite::OverrideGeometry_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6eb7510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverrideGeometry_Injected",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Sprite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Sprite::GetPackingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Sprite::GetPackingRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Sprite::GetPacked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPacked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Sprite::GetTextureRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Sprite::GetTextureRectOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRectOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Sprite::GetInnerUVs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetInnerUVs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Sprite::GetOuterUVs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetOuterUVs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Sprite::GetPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::CreateSpriteWithoutTextureScripting(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits,
                                                                                                ::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "CreateSpriteWithoutTextureScripting",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                          ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, rect, pivot, pixelsToUnits, texture);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::CreateSprite(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit,
                                                                         uint32_t extrude, ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape,
                                                                         /* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] */ ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "CreateSprite",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape,
                                                                              secondaryTexture);
}
inline ::UnityEngine::Bounds UnityEngine::Sprite::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Sprite::get_rect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_rect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Sprite::get_border() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_border", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Sprite::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline uint32_t UnityEngine::Sprite::get_extrude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_extrude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Sprite::GetSecondaryTexture(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Sprite::GetSecondaryTextureCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextureCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Sprite::GetSecondaryTextures(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] [NotNull] */ ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, secondaryTexture);
}
inline float_t UnityEngine::Sprite::get_pixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Sprite::get_spriteAtlasTextureScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_spriteAtlasTextureScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Sprite::get_associatedAlphaSplitTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_associatedAlphaSplitTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Sprite::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pivot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::Sprite::get_packed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::SpritePackingMode UnityEngine::Sprite::get_packingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpritePackingMode>(this, ___internal_method);
}
inline ::UnityEngine::SpritePackingRotation UnityEngine::Sprite::get_packingRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_packingRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpritePackingRotation>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Sprite::get_textureRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_textureRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Sprite::get_textureRectOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_textureRectOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Sprite::get_vertices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_vertices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline ::ArrayW<uint16_t> UnityEngine::Sprite::get_triangles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_triangles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Sprite::get_uv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_uv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method);
}
inline int32_t UnityEngine::Sprite::GetPhysicsShapeCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Sprite::GetScriptableObjectsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjectsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::Sprite::GetScriptableObjects(/* [UnityMarshalAs((UnityEngine.Bindings.NativeType)0)] [NotNull] */ ::ArrayW<::UnityEngine::ScriptableObject*> scriptableObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjects", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ScriptableObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, scriptableObjects);
}
inline bool UnityEngine::Sprite::AddScriptableObject(/* [NotNull] */ ::UnityEngine::ScriptableObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "AddScriptableObject", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::Sprite::RemoveScriptableObjectAt(uint32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "RemoveScriptableObjectAt", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline bool UnityEngine::Sprite::SetScriptableObjectAt(/* [NotNull] */ ::UnityEngine::ScriptableObject* obj, uint32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "SetScriptableObjectAt", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj, i);
}
inline int32_t UnityEngine::Sprite::GetPhysicsShapePointCount(int32_t shapeIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapePointCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shapeIdx);
}
inline int32_t UnityEngine::Sprite::Internal_GetPhysicsShapePointCount(int32_t shapeIdx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Internal_GetPhysicsShapePointCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shapeIdx);
}
inline int32_t UnityEngine::Sprite::GetPhysicsShape(int32_t shapeIdx, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "GetPhysicsShape", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, shapeIdx, physicsShape);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Vector2> UnityEngine::Sprite::GetPhysicsShape(int32_t shapeIdx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShape", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Vector2>>(this, ___internal_method, shapeIdx);
}
inline void UnityEngine::Sprite::GetPhysicsShapeImpl(::UnityEngine::Sprite* sprite, int32_t shapeIdx, /* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* physicsShape) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Sprite*>(),
          { "GetPhysicsShapeImpl", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, shapeIdx, physicsShape);
}
inline ::System::ReadOnlySpan_1<::UnityEngine::Vector2> UnityEngine::Sprite::GetPhysicsShapeSpanImpl(::UnityEngine::Sprite* sprite, int32_t shapeIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeSpanImpl", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, sprite, shapeIdx);
}
inline void UnityEngine::Sprite::OverridePhysicsShape(::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2>>* physicsShapes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                           { "OverridePhysicsShape", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::ArrayW<::UnityEngine::Vector2>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, physicsShapes);
}
inline void UnityEngine::Sprite::OverridePhysicsShapeCount(::UnityEngine::Sprite* sprite, int32_t physicsShapeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverridePhysicsShapeCount", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, physicsShapeCount);
}
inline void UnityEngine::Sprite::OverridePhysicsShape(::UnityEngine::Sprite* sprite, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector2> physicsShape, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                       { "OverridePhysicsShape", {}, { ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, physicsShape, idx);
}
inline void UnityEngine::Sprite::OverrideGeometry(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector2> vertices, /* [NotNull] */ ::ArrayW<uint16_t> triangles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverrideGeometry", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertices, triangles);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits, ::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Sprite*>(),
                       { "Create", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, rect, pivot, pixelsToUnits, texture);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsToUnits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, rect, pivot, pixelsToUnits);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                                   ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                       { "Create",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border,
                                                                              generateFallbackPhysicsShape);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                                   ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape,
                                                                   ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTextures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "Create",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape,
                                                                              secondaryTextures);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                                   ::UnityEngine::SpriteMeshType meshType, ::UnityEngine::Vector4 border) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                       { "Create",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude,
                                                                   ::UnityEngine::SpriteMeshType meshType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Create",
                                                                       {},
                                                                       { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit, uint32_t extrude) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Create",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot, float_t pixelsPerUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Sprite*>(),
                       { "Create", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Sprite::Create(::UnityEngine::Texture2D* texture, ::UnityEngine::Rect rect, ::UnityEngine::Vector2 pivot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "Create", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(nullptr, ___internal_method, texture, rect, pivot);
}
inline int32_t UnityEngine::Sprite::GetPackingMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Sprite::GetPackingRotation_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPackingRotation_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Sprite::GetPacked_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPacked_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Sprite::GetTextureRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetTextureRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::GetTextureRectOffset_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                                           { "GetTextureRectOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::GetInnerUVs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetInnerUVs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::GetOuterUVs_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetOuterUVs_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::GetPadding_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPadding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::IntPtr UnityEngine::Sprite::CreateSpriteWithoutTextureScripting_Injected(::by_ref<::UnityEngine::Rect> rect, ::by_ref<::UnityEngine::Vector2> pivot, float_t pixelsToUnits,
                                                                                          ::System::IntPtr texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "CreateSpriteWithoutTextureScripting_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, rect, pivot, pixelsToUnits, texture);
}
inline ::System::IntPtr UnityEngine::Sprite::CreateSprite_Injected(::System::IntPtr texture, ::by_ref<::UnityEngine::Rect> rect, ::by_ref<::UnityEngine::Vector2> pivot, float_t pixelsPerUnit,
                                                                   uint32_t extrude, ::UnityEngine::SpriteMeshType meshType, ::by_ref<::UnityEngine::Vector4> border, bool generateFallbackPhysicsShape,
                                                                   ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "CreateSprite_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::SpriteMeshType>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, texture, rect, pivot, pixelsPerUnit, extrude, meshType, border, generateFallbackPhysicsShape,
                                                               secondaryTexture);
}
inline void UnityEngine::Sprite::get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::get_rect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_rect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Sprite::get_border_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_border_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::IntPtr UnityEngine::Sprite::get_texture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Sprite::get_extrude_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_extrude_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Sprite::GetSecondaryTexture_Injected(::System::IntPtr _unity_self, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline int32_t UnityEngine::Sprite::GetSecondaryTextureCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetSecondaryTextureCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Sprite::GetSecondaryTextures_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::SecondarySpriteTexture> secondaryTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "GetSecondaryTextures_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::SecondarySpriteTexture>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, secondaryTexture);
}
inline float_t UnityEngine::Sprite::get_pixelsPerUnit_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pixelsPerUnit_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::Sprite::get_spriteAtlasTextureScale_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_spriteAtlasTextureScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Sprite::get_associatedAlphaSplitTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_associatedAlphaSplitTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Sprite::get_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_pivot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Sprite::get_vertices_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_vertices_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<uint16_t> UnityEngine::Sprite::get_triangles_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_triangles_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t>>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Sprite::get_uv_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "get_uv_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Sprite::GetPhysicsShapeCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetPhysicsShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Sprite::GetScriptableObjectsCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "GetScriptableObjectsCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self);
}
inline uint32_t UnityEngine::Sprite::GetScriptableObjects_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::ScriptableObject*> scriptableObjects) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "GetScriptableObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::ScriptableObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, scriptableObjects);
}
inline bool UnityEngine::Sprite::AddScriptableObject_Injected(::System::IntPtr _unity_self, ::System::IntPtr obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "AddScriptableObject_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, obj);
}
inline bool UnityEngine::Sprite::RemoveScriptableObjectAt_Injected(::System::IntPtr _unity_self, uint32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "RemoveScriptableObjectAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, i);
}
inline bool UnityEngine::Sprite::SetScriptableObjectAt_Injected(::System::IntPtr _unity_self, ::System::IntPtr obj, uint32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(),
                                              { "SetScriptableObjectAt_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, obj, i);
}
inline int32_t UnityEngine::Sprite::Internal_GetPhysicsShapePointCount_Injected(::System::IntPtr _unity_self, int32_t shapeIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "Internal_GetPhysicsShapePointCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, shapeIdx);
}
inline void UnityEngine::Sprite::GetPhysicsShapeImpl_Injected(::System::IntPtr sprite, int32_t shapeIdx, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> physicsShape) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Sprite*>(),
          { "GetPhysicsShapeImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, shapeIdx, physicsShape);
}
inline void UnityEngine::Sprite::GetPhysicsShapeSpanImpl_Injected(::System::IntPtr sprite, int32_t shapeIdx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Sprite*>(),
          { "GetPhysicsShapeSpanImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, shapeIdx, ret);
}
inline void UnityEngine::Sprite::OverridePhysicsShapeCount_Injected(::System::IntPtr sprite, int32_t physicsShapeCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverridePhysicsShapeCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, physicsShapeCount);
}
inline void UnityEngine::Sprite::OverridePhysicsShape_Injected(::System::IntPtr sprite, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> physicsShape, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Sprite*>(),
          { "OverridePhysicsShape_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sprite, physicsShape, idx);
}
inline void UnityEngine::Sprite::OverrideGeometry_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> vertices,
                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> triangles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Sprite*>(), { "OverrideGeometry_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, vertices, triangles);
}
/// @brief [RequiredByNativeCode]
inline ::UnityEngine::Sprite* UnityEngine::Sprite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Sprite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Sprite::Sprite() {}
