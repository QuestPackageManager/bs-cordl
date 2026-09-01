#pragma once
// IWYU pragma private; include "UnityEngine\Experimental\Rendering\GraphicsFormatUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormatUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__FormatSwizzle_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b30e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b30f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetGraphicsFormat_Native_TextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::TextureFormat, bool)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b30f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "GetGraphicsFormat_Native_TextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, bool)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b30fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetGraphicsFormat_Native_RenderTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, bool)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b31064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                { "GetGraphicsFormat_Native_RenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b310a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetDepthStencilFormatFromBitsLegacy_Native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3114c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetDepthStencilFormatFromBitsLegacy_Native", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetDepthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b31188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetDepthStencilFormat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetDepthBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthBits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetDepthBits", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetDepthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormat)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6b3123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetDepthStencilFormat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsSRGBFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsSRGBFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsSRGBFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetSRGBFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSRGBFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b314b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetSRGBFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetLinearFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetLinearFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b314ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetLinearFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetRenderTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetRenderTextureFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "GetRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetAlphaComponentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetAlphaComponentCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "GetAlphaComponentCount", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetComponentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetComponentCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b315a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetComponentCount", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormatString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6b315dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetFormatString", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsCompressedFormat_Native_TextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedFormat_Native_TextureFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsCompressedFormat_Native_TextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsCompressedFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b31764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsCompressedFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.CanDecompressFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, bool)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::CanDecompressFormat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b317dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "CanDecompressFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.CanDecompressFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::CanDecompressFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b31820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "CanDecompressFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsAlphaOnlyFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsAlphaOnlyFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3189c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsAlphaOnlyFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.HasAlphaChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::HasAlphaChannel)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b318d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "HasAlphaChannel", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsDepthFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsDepthFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsDepthFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsStencilFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsDepthStencilFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsDepthStencilFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                             { "IsDepthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsFloatFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsFloatFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b319c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsFloatFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsHalfFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsHalfFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsHalfFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsPVRTCFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsPVRTCFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsPVRTCFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.IsCrunchFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCrunchFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "IsCrunchFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetSwizzleR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FormatSwizzle (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleR)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetSwizzleR", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetSwizzleG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FormatSwizzle (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleG)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetSwizzleG", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetSwizzleB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FormatSwizzle (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleB)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetSwizzleB", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetSwizzleA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FormatSwizzle (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleA)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetSwizzleA", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetBlockSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b31ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                           { "GetBlockSize", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetFormat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::System::IntPtr)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormat_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b30ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility.GetFormatString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormatString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b316e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                         { "GetFormatString_Injected",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::GraphicsFormatUtility::setStaticF_tableNoStencil(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "tableNoStencil", ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(
      std::forward<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>(value));
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> UnityEngine::Experimental::Rendering::GraphicsFormatUtility::getStaticF_tableNoStencil() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "tableNoStencil", ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>();
}
inline void UnityEngine::Experimental::Rendering::GraphicsFormatUtility::setStaticF_tableStencil(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "tableStencil", ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(
      std::forward<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>(value));
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> UnityEngine::Experimental::Rendering::GraphicsFormatUtility::getStaticF_tableStencil() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "tableStencil", ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>();
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormat(::UnityEngine::Texture* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, texture);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(::UnityEngine::TextureFormat format, bool isSRGB) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, isSRGB);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat format,
                                                                                                                                                                  bool isSRGB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "GetGraphicsFormat_Native_TextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, isSRGB);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, isSRGB);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "GetGraphicsFormat_Native_RenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, isSRGB);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(::UnityEngine::RenderTextureFormat format,
                                                                                                                                             ::UnityEngine::RenderTextureReadWrite readWrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                              { "GetGraphicsFormat", {}, { ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format, readWrite);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(int32_t minimumDepthBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetDepthStencilFormatFromBitsLegacy_Native", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, minimumDepthBits);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormat(int32_t depthBits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetDepthStencilFormat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, depthBits);
}
inline int32_t UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthBits(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetDepthBits", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetDepthStencilFormat(int32_t minimumDepthBits, int32_t minimumStencilBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetDepthStencilFormat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, minimumDepthBits, minimumStencilBits);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsSRGBFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetSRGBFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetLinearFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetLinearFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "GetRenderTextureFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method, format);
}
inline uint32_t UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetAlphaComponentCount(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "GetAlphaComponentCount", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, format);
}
inline uint32_t UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetComponentCount(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetComponentCount", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, format);
}
inline ::StringW UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormatString(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetFormatString", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedFormat_Native_TextureFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsCompressedFormat_Native_TextureFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsCompressedFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool wholeImage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "CanDecompressFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, wholeImage);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "CanDecompressFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsAlphaOnlyFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsAlphaOnlyFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::HasAlphaChannel(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "HasAlphaChannel", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsDepthFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsDepthFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsDepthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                           { "IsDepthStencilFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsFloatFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsFloatFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsHalfFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsHalfFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsPVRTCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsPVRTCFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCrunchFormat(::UnityEngine::TextureFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "IsCrunchFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Rendering::FormatSwizzle UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleR(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetSwizzleR", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FormatSwizzle>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Rendering::FormatSwizzle UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleG(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetSwizzleG", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FormatSwizzle>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Rendering::FormatSwizzle UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleB(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetSwizzleB", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FormatSwizzle>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Rendering::FormatSwizzle UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetSwizzleA(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetSwizzleA", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FormatSwizzle>(nullptr, ___internal_method, format);
}
inline uint32_t UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetBlockSize(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
                                                                                         { "GetBlockSize", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, format);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormat_Injected(::System::IntPtr texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(), { "GetFormat_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, texture);
}
inline void UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormatString_Injected(::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                  ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*>(),
          { "GetFormatString_Injected", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GraphicsFormatUtility() {}
