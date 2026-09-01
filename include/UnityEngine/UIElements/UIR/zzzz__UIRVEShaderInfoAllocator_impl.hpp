#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\UIRVEShaderInfoAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_impl.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.get_pageWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_pageWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf4974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_pageWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.get_pageHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_pageHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf497c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_pageHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AcquireDefaultShaderInfoTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AcquireDefaultShaderInfoTexture)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6cf4984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AcquireDefaultShaderInfoTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.ReleaseDefaultShaderInfoTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ReleaseDefaultShaderInfoTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cf4c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "ReleaseDefaultShaderInfoTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocToTexelCoord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>, ::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocToTexelCoord)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6cf4d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                         { "AllocToTexelCoord", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AtlasRectMatchesPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>, ::UnityEngine::UIElements::UIR::BMPAlloc, ::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AtlasRectMatchesPage)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6cf4d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                             { "AtlasRectMatchesPage",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.get_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_atlas)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cf4ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_atlas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::ColorSpace)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6cf4f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.ReallyCreateStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ReallyCreateStorage)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6cf508c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "ReallyCreateStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cf5444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.IssuePendingStorageChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::IssuePendingStorageChanges)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6cf54ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "IssuePendingStorageChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocTransform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cee188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocClipRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocClipRect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cefc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocClipRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocOpacity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cefce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocOpacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cf0e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.AllocTextCoreSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::BMPAlloc (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(
    ::UnityEngine::UIElements::UIR::TextCoreSettings)>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocTextCoreSettings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6cf078c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "AllocTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.SetTransformValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetTransformValue)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6ceebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                             { "SetTransformValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.SetClipRectValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc, ::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetClipRectValue)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6cf0064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                             { "SetClipRectValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.SetOpacityValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc, float_t)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetOpacityValue)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6cefd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                             { "SetOpacityValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.SetColorValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetColorValue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6cf0e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                             { "SetColorValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.SetTextCoreSettingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(
    ::UnityEngine::UIElements::UIR::BMPAlloc, ::UnityEngine::UIElements::UIR::TextCoreSettings)>(&::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetTextCoreSettingValue)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6cf07b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                            { "SetTextCoreSettingValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.FreeTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeTransform)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cef440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "FreeTransform", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.FreeClipRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeClipRect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cef3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "FreeClipRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.FreeOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeOpacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cef260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "FreeOpacity", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.FreeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cef300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "FreeColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.FreeTextCoreSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeTextCoreSettings)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cef1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "FreeTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.TransformAllocToVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::TransformAllocToVertexData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cf54c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "TransformAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.ClipRectAllocToVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ClipRectAllocToVertexData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cf55c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "ClipRectAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.OpacityAllocToVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::OpacityAllocToVertexData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cf56bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "OpacityAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.ColorAllocToVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ColorAllocToVertexData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cf57b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "ColorAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator.TextCoreSettingsToVertexData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::TextCoreSettingsToVertexData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cf58b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                           { "TextCoreSettingsToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_Storage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Storage;
}
constexpr ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_Storage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Storage;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_Storage(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Storage = value;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_TransformAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_TransformAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransformAllocator;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_TransformAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransformAllocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ClipRectAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ClipRectAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClipRectAllocator;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_ClipRectAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClipRectAllocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_OpacityAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_OpacityAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpacityAllocator;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_OpacityAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpacityAllocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ColorAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ColorAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAllocator;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_ColorAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorAllocator = value;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_TextSettingsAllocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextSettingsAllocator;
}
constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_TextSettingsAllocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextSettingsAllocator;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_TextSettingsAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextSettingsAllocator = value;
}
constexpr bool& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_StorageReallyCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StorageReallyCreated;
}
constexpr bool const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_StorageReallyCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StorageReallyCreated;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_StorageReallyCreated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StorageReallyCreated = value;
}
constexpr ::UnityEngine::ColorSpace& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ColorSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorSpace;
}
constexpr ::UnityEngine::ColorSpace const& UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_get_m_ColorSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorSpace;
}
constexpr void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::__cordl_internal_set_m_ColorSpace(::UnityEngine::ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorSpace = value;
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransformTexel(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "identityTransformTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransformTexel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "identityTransformTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_infiniteClipRectTexel(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "infiniteClipRectTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_infiniteClipRectTexel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "infiniteClipRectTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_fullOpacityTexel(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "fullOpacityTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_fullOpacityTexel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "fullOpacityTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_clearColorTexel(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "clearColorTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_clearColorTexel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "clearColorTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_defaultTextCoreSettingsTexel(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "defaultTextCoreSettingsTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_defaultTextCoreSettingsTexel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "defaultTextCoreSettingsTexel", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransformValue(::UnityEngine::Matrix4x4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "identityTransformValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransformValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "identityTransformValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransformRow0Value(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "identityTransformRow0Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransformRow0Value() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "identityTransformRow0Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransformRow1Value(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "identityTransformRow1Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransformRow1Value() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "identityTransformRow1Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransformRow2Value(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "identityTransformRow2Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransformRow2Value() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "identityTransformRow2Value", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_infiniteClipRectValue(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "infiniteClipRectValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_infiniteClipRectValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "infiniteClipRectValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_fullOpacityValue(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "fullOpacityValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_fullOpacityValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "fullOpacityValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_clearColorValue(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "clearColorValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_clearColorValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "clearColorValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_defaultTextCoreSettingsValue(::UnityEngine::UIElements::UIR::TextCoreSettings value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::TextCoreSettings, "defaultTextCoreSettingsValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::TextCoreSettings>(value));
}
inline ::UnityEngine::UIElements::UIR::TextCoreSettings UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_defaultTextCoreSettingsValue() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::TextCoreSettings, "defaultTextCoreSettingsValue", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_identityTransform(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "identityTransform", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_identityTransform() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "identityTransform", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_infiniteClipRect(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "infiniteClipRect", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_infiniteClipRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "infiniteClipRect", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_fullOpacity(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "fullOpacity", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_fullOpacity() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "fullOpacity", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_clearColor(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "clearColor", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_clearColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "clearColor", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_defaultTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "defaultTextCoreSettings", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_defaultTextCoreSettings() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "defaultTextCoreSettings", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_s_DefaultShaderInfoTextureRefCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_DefaultShaderInfoTextureRefCount", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_s_DefaultShaderInfoTextureRefCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_DefaultShaderInfoTextureRefCount", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::setStaticF_s_DefaultShaderInfoTexture(::UnityW<::UnityEngine::Texture2D> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexture", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(
      std::forward<::UnityW<::UnityEngine::Texture2D>>(value));
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::getStaticF_s_DefaultShaderInfoTexture() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture2D>, "s_DefaultShaderInfoTexture", ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>();
}
inline int32_t UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_pageWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_pageWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_pageHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_pageHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AcquireDefaultShaderInfoTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AcquireDefaultShaderInfoTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ReleaseDefaultShaderInfoTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "ReleaseDefaultShaderInfoTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocToTexelCoord(::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator,
                                                                                                           ::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                          { "AllocToTexelCoord", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, allocator, alloc);
}
inline bool UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AtlasRectMatchesPage(::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator,
                                                                                         ::UnityEngine::UIElements::UIR::BMPAlloc defAlloc, ::UnityEngine::RectInt atlasRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                           { "AtlasRectMatchesPage",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::BitmapAllocator32>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator, defAlloc, atlasRect);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "get_atlas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::_ctor(::UnityEngine::ColorSpace colorSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSpace);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ReallyCreateStorage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "ReallyCreateStorage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::IssuePendingStorageChanges() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "IssuePendingStorageChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocClipRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocClipRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocOpacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocOpacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(), { "AllocColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::AllocTextCoreSettings(::UnityEngine::UIElements::UIR::TextCoreSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "AllocTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BMPAlloc>(this, ___internal_method, settings);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetTransformValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Matrix4x4 xform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                           { "SetTransformValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, xform);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetClipRectValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Vector4 clipRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                           { "SetClipRectValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, clipRect);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetOpacityValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, float_t opacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                           { "SetOpacityValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, opacity);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetColorValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                           { "SetColorValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, color);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::SetTextCoreSettingValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::UIElements::UIR::TextCoreSettings settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                          { "SetTextCoreSettingValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::TextCoreSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc, settings);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeTransform(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "FreeTransform", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeClipRect(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "FreeClipRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeOpacity(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "FreeOpacity", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeColor(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "FreeColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline void UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::FreeTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "FreeTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alloc);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::TransformAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "TransformAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, alloc);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ClipRectAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "ClipRectAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, alloc);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::OpacityAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "OpacityAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, alloc);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::ColorAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "ColorAllocToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, alloc);
}
inline ::UnityEngine::Color32 UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::TextCoreSettingsToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(),
                                                                                         { "TextCoreSettingsToVertexData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(this, ___internal_method, alloc);
}
inline ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::New_ctor(::UnityEngine::ColorSpace colorSpace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*>(colorSpace));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator::UIRVEShaderInfoAllocator() {}
