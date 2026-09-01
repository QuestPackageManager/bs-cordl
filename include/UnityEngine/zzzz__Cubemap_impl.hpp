#pragma once
// IWYU pragma private; include "UnityEngine\Cubemap.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Cubemap.get_format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_format)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abca20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.Internal_CreateImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Cubemap*, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace,
                                                                ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&::UnityEngine::Cubemap::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6abcadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "Internal_CreateImpl",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Cubemap*, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace,
                                                                ::UnityEngine::Experimental::Rendering::TextureCreationFlags, ::System::IntPtr)>(&::UnityEngine::Cubemap::Internal_Create)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6abcb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "Internal_Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ApplyImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(bool, bool)>(&::UnityEngine::Cubemap::ApplyImpl)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6abcc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.UpdateExternalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::System::IntPtr)>(&::UnityEngine::Cubemap::UpdateExternalTexture)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6abcd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "UpdateExternalTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_isReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_isReadable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abcdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ::i2c::class_of<::UnityEngine::Cubemap*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Cubemap::SetPixelImpl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6abceb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Cubemap*>(),
            { "SetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixelImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Cubemap::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::GetPixelImpl)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6abcfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "GetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SmoothEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t)>(&::UnityEngine::Cubemap::SmoothEdges)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6abd12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SmoothEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::SmoothEdges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abd200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Cubemap::GetPixels)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6abd208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixels", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace)>(&::UnityEngine::Cubemap::GetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abd2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixels", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Cubemap::SetPixels)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6abd2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelDataImplArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)(::System::Array*, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Cubemap::SetPixelDataImplArray)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6abd474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImplArray",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelDataImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::SetPixelDataImpl)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6abd5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImpl",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::ArrayW<::UnityEngine::Color>, ::UnityEngine::CubemapFace)>(&::UnityEngine::Cubemap::SetPixels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abd70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Full
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*)>(&::UnityEngine::Cubemap::CopyPixels_Full)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6abd714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Full", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Slice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::CopyPixels_Slice)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6abd818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Cubemap*>(),
            { "CopyPixels_Slice", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Region
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
                                                                                        int32_t)>(&::UnityEngine::Cubemap::CopyPixels_Region)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6abd97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                            { "CopyPixels_Region",
                              {},
                              { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetWritableImageData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Cubemap::*)(int32_t)>(&::UnityEngine::Cubemap::GetWritableImageData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6abdb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetWritableImageData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_isPreProcessed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_isPreProcessed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abdc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isPreProcessed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_streamingMipmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_streamingMipmaps)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abdcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_streamingMipmapsPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_streamingMipmapsPriority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmapsPriority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abde6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_requestedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.set_requestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t)>(&::UnityEngine::Cubemap::set_requestedMipmapLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6abdf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_requestedMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadAllMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_loadAllMips)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abdffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadAllMips", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.set_loadAllMips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(bool)>(&::UnityEngine::Cubemap::set_loadAllMips)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6abe0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_loadAllMips", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_desiredMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_desiredMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abe18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_desiredMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadingMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_loadingMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abe248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadingMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::get_loadedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abe304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ClearRequestedMipmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::ClearRequestedMipmapLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abe3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ClearRequestedMipmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.IsRequestedMipmapLevelLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::IsRequestedMipmapLevelLoaded)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abe47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "IsRequestedMipmapLevelLoaded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ValidateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)(::UnityEngine::TextureFormat, int32_t)>(&::UnityEngine::Cubemap::ValidateFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6abe538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ValidateFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Cubemap::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t)>(&::UnityEngine::Cubemap::ValidateFormat)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6abe608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat,
                                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6abe750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat,
                                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6abe840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                            ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6abe7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                              {},
                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                                ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat,
                                                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6abe8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                            ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::TextureFormat, int32_t, ::System::IntPtr, bool)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6abe9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Cubemap*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6abeb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6abec08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::TextureFormat, int32_t)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6abeca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(&::UnityEngine::Cubemap::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6abecb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CreateExternalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)(int32_t, ::UnityEngine::TextureFormat, bool, ::System::IntPtr)>(
    &::UnityEngine::Cubemap::CreateExternalTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6abecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Cubemap*>(),
                         { "CreateExternalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int32_t, int32_t, ::UnityEngine::Color)>(&::UnityEngine::Cubemap::SetPixel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abedd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                            { "SetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int32_t, int32_t, ::UnityEngine::Color, int32_t)>(
    &::UnityEngine::Cubemap::SetPixel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6abeddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixel",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int32_t, int32_t)>(&::UnityEngine::Cubemap::GetPixel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abee88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Cubemap::*)(::UnityEngine::CubemapFace, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::GetPixel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6abee90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                         { "GetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(bool, bool)>(&::UnityEngine::Cubemap::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6abef0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(bool)>(&::UnityEngine::Cubemap::Apply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6abef70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)()>(&::UnityEngine::Cubemap::Apply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6abef78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*)>(&::UnityEngine::Cubemap::CopyPixels)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6abef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Cubemap::CopyPixels)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6abf004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels",
                                                                                              {},
                                                                                              { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Cubemap::*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::CubemapFace,
                                                                                        int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::CopyPixels)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6abf0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "CopyPixels",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ValidateIsNotCrunched
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Cubemap::ValidateIsNotCrunched)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6abe990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ValidateIsNotCrunched", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_format_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextureFormat (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_format_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abcaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_format_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ApplyImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::Cubemap::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6abcccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.UpdateExternalTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Cubemap::UpdateExternalTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abcdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "UpdateExternalTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_isReadable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abce74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Cubemap::SetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6abcf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixelImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Cubemap::GetPixelImpl_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6abd0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixelImpl_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SmoothEdges_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Cubemap::SmoothEdges_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abd1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetPixels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (*)(::System::IntPtr, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Cubemap::GetPixels_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6abd2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                { "GetPixels_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixels_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::UnityEngine::CubemapFace, int32_t)>(
    &::UnityEngine::Cubemap::SetPixels_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6abd418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixels_Injected",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                         ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelDataImplArray_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::Array*, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Cubemap::SetPixelDataImplArray_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6abd53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImplArray_Injected",
                                                                          {},
                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.SetPixelDataImpl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::SetPixelDataImpl_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6abd688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImpl_Injected",
                                                                          {},
                                                                          { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Full_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Cubemap::CopyPixels_Full_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abd7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Full_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Slice_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Cubemap::CopyPixels_Slice_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6abd908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Slice_Injected",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.CopyPixels_Region_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::UnityEngine::Cubemap::CopyPixels_Region_Injected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6abdaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                             { "CopyPixels_Region_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.GetWritableImageData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Cubemap::GetWritableImageData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abdbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetWritableImageData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_isPreProcessed_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_isPreProcessed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abdcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isPreProcessed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_streamingMipmaps_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_streamingMipmaps_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abdd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmaps_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_streamingMipmapsPriority_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_streamingMipmapsPriority_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abde30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmapsPriority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_requestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_requestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abdeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.set_requestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Cubemap::set_requestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abdfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadAllMips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_loadAllMips_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.set_loadAllMips_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Cubemap::set_loadAllMips_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6abe148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_desiredMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_desiredMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_desiredMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadingMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_loadingMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadingMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.get_loadedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::get_loadedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.ClearRequestedMipmapLevel_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::ClearRequestedMipmapLevel_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ClearRequestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Cubemap.IsRequestedMipmapLevelLoaded_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Cubemap::IsRequestedMipmapLevelLoaded_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6abe4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "IsRequestedMipmapLevelLoaded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextureFormat UnityEngine::Cubemap::get_format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(this, ___internal_method);
}
inline bool UnityEngine::Cubemap::Internal_CreateImpl(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                      ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Internal_CreateImpl",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, ext, mipCount, format, colorSpace, flags, nativeTex);
}
inline void UnityEngine::Cubemap::Internal_Create(::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                  ::UnityEngine::TextureColorSpace colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Internal_Create",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Cubemap*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(),
                                                                          ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, ext, mipCount, format, colorSpace, flags, nativeTex);
}
inline void UnityEngine::Cubemap::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ApplyImpl", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Cubemap::UpdateExternalTexture(::System::IntPtr nativeTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "UpdateExternalTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeTexture);
}
inline bool UnityEngine::Cubemap::get_isReadable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Cubemap*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Cubemap::SetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Cubemap*>(),
          { "SetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, image, mip, x, y, color);
}
inline ::UnityEngine::Color UnityEngine::Cubemap::GetPixelImpl(int32_t image, int32_t mip, int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                           { "GetPixelImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, image, mip, x, y);
}
inline void UnityEngine::Cubemap::SmoothEdges(int32_t smoothRegionWidthInPixels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothRegionWidthInPixels);
}
inline void UnityEngine::Cubemap::SmoothEdges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Cubemap::GetPixels(::UnityEngine::CubemapFace face, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixels", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, face, miplevel);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Cubemap::GetPixels(::UnityEngine::CubemapFace face) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixels", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, face);
}
inline void UnityEngine::Cubemap::SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                              { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, face, miplevel);
}
inline bool UnityEngine::Cubemap::SetPixelDataImplArray(::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImplArray",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Cubemap::SetPixelDataImpl(::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize, int32_t sourceDataStartIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImpl",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
}
inline void UnityEngine::Cubemap::SetPixels(::ArrayW<::UnityEngine::Color> colors, ::UnityEngine::CubemapFace face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixels", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, face);
}
inline void UnityEngine::Cubemap::CopyPixels_Full(::UnityEngine::Texture* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Full", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Cubemap::CopyPixels_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Cubemap*>(),
          { "CopyPixels_Slice", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstFace, dstMip);
}
inline void UnityEngine::Cubemap::CopyPixels_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, int32_t dstFace,
                                                    int32_t dstMip, int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                          { "CopyPixels_Region",
                            {},
                            { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstFace, dstMip, dstX, dstY);
}
inline ::System::IntPtr UnityEngine::Cubemap::GetWritableImageData(int32_t frame) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetWritableImageData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, frame);
}
inline bool UnityEngine::Cubemap::get_isPreProcessed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isPreProcessed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Cubemap::get_streamingMipmaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Cubemap::get_streamingMipmapsPriority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmapsPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Cubemap::get_requestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_requestedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Cubemap::set_requestedMipmapLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_requestedMipmapLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Cubemap::get_loadAllMips() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadAllMips", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Cubemap::set_loadAllMips(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_loadAllMips", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Cubemap::get_desiredMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_desiredMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Cubemap::get_loadingMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadingMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Cubemap::get_loadedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Cubemap::ClearRequestedMipmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ClearRequestedMipmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Cubemap::IsRequestedMipmapLevelLoaded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "IsRequestedMipmapLevelLoaded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Cubemap::ValidateFormat(::UnityEngine::TextureFormat format, int32_t width) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width);
}
inline bool UnityEngine::Cubemap::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                                           { "ValidateFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                                              ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, flags);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                        int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(),
                                                                                       ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, flags, mipCount);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                              ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, flags);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                                        int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                                       ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, flags, mipCount);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Cubemap*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, textureFormat, mipCount, nativeTex, createUninitialized);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, textureFormat, mipChain);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, textureFormat, mipChain, createUninitialized);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, mipCount);
}
inline void UnityEngine::Cubemap::_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, format, mipCount, createUninitialized);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Cubemap::CreateExternalTexture(int32_t width, ::UnityEngine::TextureFormat format, bool mipmap, ::System::IntPtr nativeTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                          { "CreateExternalTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method, width, format, mipmap, nativeTex);
}
template <typename T> inline void UnityEngine::Cubemap::SetPixelData(::ArrayW<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Cubemap*>(),
          { "SetPixelData", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, face, sourceDataStartIndex);
}
template <typename T> inline void UnityEngine::Cubemap::SetPixelData(::Unity::Collections::NativeArray_1<T> data, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t sourceDataStartIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelData",
                                                                                                         { ::i2c::class_of<T>() },
                                                                                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, face, sourceDataStartIndex);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Cubemap::GetPixelData(int32_t mipLevel, ::UnityEngine::CubemapFace face) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixelData", { ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method, mipLevel, face);
}
inline void UnityEngine::Cubemap::SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                          { "SetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face, x, y, color);
}
inline void UnityEngine::Cubemap::SetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, ::UnityEngine::Color color, int32_t mip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixel",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face, x, y, color, mip);
}
inline ::UnityEngine::Color UnityEngine::Cubemap::GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, face, x, y);
}
inline ::UnityEngine::Color UnityEngine::Cubemap::GetPixel(::UnityEngine::CubemapFace face, int32_t x, int32_t y, int32_t mip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                              { "GetPixel", {}, { ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, face, x, y, mip);
}
inline void UnityEngine::Cubemap::Apply(bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Cubemap::Apply(bool updateMipmaps) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps);
}
inline void UnityEngine::Cubemap::Apply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "Apply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Cubemap::CopyPixels(::UnityEngine::Texture* src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void UnityEngine::Cubemap::CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::CubemapFace dstFace, int32_t dstMip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels",
                                                                                            {},
                                                                                            { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, dstFace, dstMip);
}
inline void UnityEngine::Cubemap::CopyPixels(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                             ::UnityEngine::CubemapFace dstFace, int32_t dstMip, int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels",
                                                                        {},
                                                                        { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstFace, dstMip, dstX, dstY);
}
inline void UnityEngine::Cubemap::ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ValidateIsNotCrunched", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags);
}
inline ::UnityEngine::TextureFormat UnityEngine::Cubemap::get_format_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_format_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextureFormat>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Cubemap::ApplyImpl_Injected(::System::IntPtr _unity_self, bool updateMipmaps, bool makeNoLongerReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ApplyImpl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Cubemap::UpdateExternalTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr nativeTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "UpdateExternalTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, nativeTexture);
}
inline bool UnityEngine::Cubemap::get_isReadable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isReadable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Cubemap::SetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelImpl_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, image, mip, x, y, color);
}
inline void UnityEngine::Cubemap::GetPixelImpl_Injected(::System::IntPtr _unity_self, int32_t image, int32_t mip, int32_t x, int32_t y, ::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetPixelImpl_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, image, mip, x, y, ret);
}
inline void UnityEngine::Cubemap::SmoothEdges_Injected(::System::IntPtr _unity_self, int32_t smoothRegionWidthInPixels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SmoothEdges_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, smoothRegionWidthInPixels);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Cubemap::GetPixels_Injected(::System::IntPtr _unity_self, ::UnityEngine::CubemapFace face, int32_t miplevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(),
                                              { "GetPixels_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(nullptr, ___internal_method, _unity_self, face, miplevel);
}
inline void UnityEngine::Cubemap::SetPixels_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, ::UnityEngine::CubemapFace face, int32_t miplevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixels_Injected",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                       ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, face, miplevel);
}
inline bool UnityEngine::Cubemap::SetPixelDataImplArray_Injected(::System::IntPtr _unity_self, ::System::Array* data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                                                 int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImplArray_Injected",
                                                                        {},
                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
}
inline bool UnityEngine::Cubemap::SetPixelDataImpl_Injected(::System::IntPtr _unity_self, ::System::IntPtr data, int32_t mipLevel, int32_t face, int32_t elementSize, int32_t dataArraySize,
                                                            int32_t sourceDataStartIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "SetPixelDataImpl_Injected",
                                                                        {},
                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, face, elementSize, dataArraySize, sourceDataStartIndex);
}
inline void UnityEngine::Cubemap::CopyPixels_Full_Injected(::System::IntPtr _unity_self, ::System::IntPtr src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Full_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src);
}
inline void UnityEngine::Cubemap::CopyPixels_Slice_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t dstFace, int32_t dstMip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Slice_Injected",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, dstFace, dstMip);
}
inline void UnityEngine::Cubemap::CopyPixels_Region_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth,
                                                             int32_t srcHeight, int32_t dstFace, int32_t dstMip, int32_t dstX, int32_t dstY) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "CopyPixels_Region_Injected",
                                                                        {},
                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dstFace, dstMip, dstX, dstY);
}
inline ::System::IntPtr UnityEngine::Cubemap::GetWritableImageData_Injected(::System::IntPtr _unity_self, int32_t frame) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "GetWritableImageData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, frame);
}
inline bool UnityEngine::Cubemap::get_isPreProcessed_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_isPreProcessed_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Cubemap::get_streamingMipmaps_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmaps_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Cubemap::get_streamingMipmapsPriority_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_streamingMipmapsPriority_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Cubemap::get_requestedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Cubemap::set_requestedMipmapLevel_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_requestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Cubemap::get_loadAllMips_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Cubemap::set_loadAllMips_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "set_loadAllMips_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Cubemap::get_desiredMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_desiredMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Cubemap::get_loadingMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadingMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Cubemap::get_loadedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "get_loadedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Cubemap::ClearRequestedMipmapLevel_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "ClearRequestedMipmapLevel_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Cubemap::IsRequestedMipmapLevelLoaded_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Cubemap*>(), { "IsRequestedMipmapLevelLoaded_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                              ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, flags));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                              ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, flags, mipCount));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                              ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, flags));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                              ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, flags, mipCount));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::System::IntPtr nativeTex, bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, textureFormat, mipCount, nativeTex, createUninitialized));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, textureFormat, mipChain));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, textureFormat, mipChain, createUninitialized));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, mipCount));
}
inline ::UnityEngine::Cubemap* UnityEngine::Cubemap::New_ctor(int32_t width, ::UnityEngine::TextureFormat format, int32_t mipCount, bool createUninitialized) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Cubemap*>(width, format, mipCount, createUninitialized));
}
// Ctor Parameters []
constexpr ::UnityEngine::Cubemap::Cubemap() {}
