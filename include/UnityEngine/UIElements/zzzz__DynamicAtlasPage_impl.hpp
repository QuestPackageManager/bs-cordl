#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DynamicAtlasPage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasPage_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureBlitter_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.get_textureId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(
    &::UnityEngine::UIElements::DynamicAtlasPage::get_textureId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbddb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_textureId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.set_textureId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::DynamicAtlasPage::set_textureId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbddbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_textureId", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.get_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(
    &::UnityEngine::UIElements::DynamicAtlasPage::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbddc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_atlas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.set_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::UIElements::DynamicAtlasPage::set_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbddcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_atlas", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(
    &::UnityEngine::UIElements::DynamicAtlasPage::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbddd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.get_filterMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FilterMode (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(&::UnityEngine::UIElements::DynamicAtlasPage::get_filterMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbdddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_filterMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::FilterMode, ::UnityEngine::Vector2Int,
                                                                                                             ::UnityEngine::Vector2Int)>(&::UnityEngine::UIElements::DynamicAtlasPage::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6dbdde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(&::UnityEngine::UIElements::DynamicAtlasPage::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbdf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(bool)>(&::UnityEngine::UIElements::DynamicAtlasPage::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbdf4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(&::UnityEngine::UIElements::DynamicAtlasPage::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6dbdf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(bool)>(&::UnityEngine::UIElements::DynamicAtlasPage::Dispose)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6dbdfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { ::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.TryAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::Texture2D*, ::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>,
                                                                                                             ::by_ref<::UnityEngine::RectInt>)>(&::UnityEngine::UIElements::DynamicAtlasPage::TryAdd)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6dbe1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                             { "TryAdd",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::Texture2D*, ::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::DynamicAtlasPage::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6dbe4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                             { "Update", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D)>(
    &::UnityEngine::UIElements::DynamicAtlasPage::Remove)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dbe5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                                                           { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.Commit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(&::UnityEngine::UIElements::DynamicAtlasPage::Commit)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dbe6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "Commit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.UpdateAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(&::UnityEngine::UIElements::DynamicAtlasPage::UpdateAtlasTexture)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6dbe71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "UpdateAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasPage.CreateAtlasTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::UIElements::DynamicAtlasPage::*)()>(
    &::UnityEngine::UIElements::DynamicAtlasPage::CreateAtlasTexture)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6dbea8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "CreateAtlasTexture", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextureId& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__textureId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureId_k__BackingField;
}
constexpr ::UnityEngine::UIElements::TextureId const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__textureId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureId_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__textureId_k__BackingField(::UnityEngine::UIElements::TextureId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureId_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__atlas_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__atlas_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____atlas_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__atlas_k__BackingField(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____atlas_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__format_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__format_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__format_k__BackingField(::UnityEngine::RenderTextureFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____format_k__BackingField = value;
}
constexpr ::UnityEngine::FilterMode& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__filterMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterMode_k__BackingField;
}
constexpr ::UnityEngine::FilterMode const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__filterMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterMode_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__filterMode_k__BackingField(::UnityEngine::FilterMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterMode_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__minSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minSize_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__minSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minSize_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__minSize_k__BackingField(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minSize_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__maxSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSize_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__maxSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxSize_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__maxSize_k__BackingField(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxSize_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_1Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_1Padding;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_1Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_1Padding;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set_m_1Padding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_1Padding = value;
}
constexpr int32_t& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_2Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_2Padding;
}
constexpr int32_t const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_2Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_2Padding;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set_m_2Padding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_2Padding = value;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D*& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_Allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr ::UnityEngine::UIElements::UIR::Allocator2D* const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_Allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set_m_Allocator(::UnityEngine::UIElements::UIR::Allocator2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Allocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::TextureBlitter*& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_Blitter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blitter;
}
constexpr ::UnityEngine::UIElements::UIR::TextureBlitter* const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_Blitter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Blitter;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set_m_Blitter(::UnityEngine::UIElements::UIR::TextureBlitter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Blitter = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_CurrentSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get_m_CurrentSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSize;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set_m_CurrentSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentSize = value;
}
constexpr bool& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::DynamicAtlasPage::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::DynamicAtlasPage::setStaticF_s_TextureCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_TextureCounter", ::UnityEngine::UIElements::DynamicAtlasPage*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::DynamicAtlasPage::getStaticF_s_TextureCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_TextureCounter", ::UnityEngine::UIElements::DynamicAtlasPage*>();
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::DynamicAtlasPage::get_textureId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_textureId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::set_textureId(::UnityEngine::UIElements::TextureId value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_textureId", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::UIElements::DynamicAtlasPage::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_atlas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::set_atlas(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_atlas", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::UIElements::DynamicAtlasPage::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline ::UnityEngine::FilterMode UnityEngine::UIElements::DynamicAtlasPage::get_filterMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_filterMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FilterMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::_ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Vector2Int minSize,
                                                             ::UnityEngine::Vector2Int maxSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, filterMode, minSize, maxSize);
}
inline bool UnityEngine::UIElements::DynamicAtlasPage::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool UnityEngine::UIElements::DynamicAtlasPage::TryAdd(::UnityEngine::Texture2D* image, ::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D> alloc,
                                                              ::by_ref<::UnityEngine::RectInt> rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                           { "TryAdd",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, image, alloc, rect);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::Update(::UnityEngine::Texture2D* image, ::UnityEngine::RectInt rect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, image, rect);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::Remove(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D alloc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "Remove", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::Commit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "Commit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DynamicAtlasPage::UpdateAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "UpdateAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::UIElements::DynamicAtlasPage::CreateAtlasTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasPage*>(), { "CreateAtlasTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DynamicAtlasPage* UnityEngine::UIElements::DynamicAtlasPage::New_ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode,
                                                                                                        ::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DynamicAtlasPage*>(format, filterMode, minSize, maxSize));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DynamicAtlasPage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DynamicAtlasPage::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DynamicAtlasPage::DynamicAtlasPage() {}
